using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Animaton : MonoBehaviour
{


	[Range(0, 30)]
	public float RPM;

	public GameObject
		   EngineBlock,
		   CylinderHead,
		   Gearbox,
		   Clutch,
		   Flywheel,
		   IntakeManifolds,
		   FuelRail,
		   ExhaustManifolds,
		   CylinderHeadCovers,
		   SparkPlugWires,
		   SparkPlugs,
		   OilPan,
		   Crankshaft,
		   CamshaftIntake1,
		   CamshaftIntake2,
		   CamshaftExhaust1,
		   CamshaftExhaust2,
		   Rod1,
		   Rod2,
		   Rod3,
		   Rod4,
		   Rod1Target,
		   Rod2Target,
		   Rod3Target,
		   Rod4Target,
		   Piston1,
		   Piston2,
		   Piston3,
		   Piston4,
		   GearboxPrimaryShaft,
		   GearboxSecondaryShaft,
		   Gear2,
		   Gear3,
		   Gear4,
		   Gear5,
		   StarterGear1,
		   StarterGear2,
		   DistributorGear,
		   TensionPulley,
		   WaterPumpPulley,
		   GeneratorPulley,
		   TimingBelt,
		   GeneratorBelt,
		   TurboFan;

	public Valve[]
		intakeValves,
		exhaustValves;

	private Vector3
		Piston1DefPos,
		Piston2DefPos,
		Piston3DefPos,
		Piston4DefPos,
		Rod1DefPos,
		Rod2DefPos,
		Rod3DefPos,
		Rod4DefPos,
		ValveIntake1DefPos,
		ValveIntake2DefPos,
		ValveExhaust1DefPos,
		ValveExhaust2DefPos,
		ValveSpringOffset,
		ValveOffset;
	private float
		IntakePhase,
		ExhaustPhase,
		Piston1Delta,
		Piston2Delta,
		Piston3Delta,
		Piston4Delta;

	private Material
		TimingBeltMaterial,
		GeneratorBeltMaterial;
	// Start is called before the first frame update
	void Start()
    {
		ValveOffset = new Vector3(0, 0, 0.01f);
		ValveSpringOffset = new Vector3(0, 0, 0.29f);

		TimingBeltMaterial = TimingBelt.GetComponent<MeshRenderer>().material;
		GeneratorBeltMaterial =GeneratorBelt.GetComponent<MeshRenderer>().material;

		Piston1DefPos =Piston1.transform.localPosition;
		Piston2DefPos =Piston2.transform.localPosition;
		Piston3DefPos =Piston3.transform.localPosition;
		Piston4DefPos = Piston4.transform.localPosition;

		Rod1DefPos = transform.InverseTransformPoint(Rod1.transform.position);
		Rod2DefPos = transform.InverseTransformPoint(Rod2.transform.position);
		Rod3DefPos = transform.InverseTransformPoint(Rod3.transform.position);
		Rod4DefPos = transform.InverseTransformPoint(Rod4.transform.position);

		/*foreach (var valve in intakeValves)
			valve.DefPos = valve.ValveGameobject.transform.localPosition;

		foreach (var valve in exhaustValves)
			valve.DefPos = valve.ValveGameobject.transform.localPosition;*/
	}

    // Update is called once per frame
    void Update()
    {
		float CorrectedRPM = RPM * Time.timeScale;

		IntakePhase = CamshaftIntake1.transform.localEulerAngles.z;
		ExhaustPhase = CamshaftExhaust1.transform.localEulerAngles.z;

	TimingBeltMaterial.mainTextureOffset += new Vector2(0, CorrectedRPM / 85);
	GeneratorBeltMaterial.mainTextureOffset += new Vector2(0, CorrectedRPM / 180);

		Crankshaft.transform.Rotate(new Vector3(0, 0, CorrectedRPM / 2));

		CamshaftExhaust1.transform.Rotate(new Vector3(0, 0, CorrectedRPM / 2));
		CamshaftExhaust2.transform.Rotate(new Vector3(0, 0, CorrectedRPM / 2));
		CamshaftIntake1.transform.Rotate(new Vector3(0, 0, CorrectedRPM / 2));
		CamshaftIntake2.transform.Rotate(new Vector3(0, 0, CorrectedRPM / 2));

		GearboxSecondaryShaft.transform.Rotate(new Vector3(0, CorrectedRPM * 1.47f, 0));
		GearboxPrimaryShaft.transform.Rotate(new Vector3(0, -CorrectedRPM, 0));

		Gear2.transform.Rotate(new Vector3(0, 0, -CorrectedRPM * 1.47f));
		Gear3.transform.Rotate(new Vector3(0, 0, -CorrectedRPM * 1.33f));
		Gear4.transform.Rotate(new Vector3(0, 0, -CorrectedRPM * 0.9996f));
		Gear5.transform.Rotate(new Vector3(0, 0, -CorrectedRPM * 0.525f));

		StarterGear1.transform.Rotate(new Vector3(0, 0, -CorrectedRPM * 5.13f));
		StarterGear2.transform.Rotate(new Vector3(0, 0, CorrectedRPM * 4.8f));

		TurboFan.transform.Rotate(new Vector3(0, 0, CorrectedRPM));

		DistributorGear.transform.Rotate(new Vector3(0, 0, -CorrectedRPM));

		TensionPulley.transform.Rotate(new Vector3(0, 0, -CorrectedRPM));

		GeneratorPulley.transform.Rotate(new Vector3(0, -CorrectedRPM * 2, 0));
		WaterPumpPulley.transform.Rotate(new Vector3(0, 0, -CorrectedRPM * 2));

		Rod1.transform.LookAt(Rod1Target.transform,Rod1.transform.up);
		Rod2.transform.LookAt(Rod2Target.transform, Rod2.transform.up);
		Rod3.transform.LookAt(Rod3Target.transform, Rod3.transform.up);
		Rod4.transform.LookAt(Rod4Target.transform, Rod4.transform.up);

		Piston1Delta = Rod1DefPos.y - transform.InverseTransformPoint(Rod1.transform.position).y;
		Piston2Delta = Rod2DefPos.y - transform.InverseTransformPoint(Rod2.transform.position).y;
		Piston3Delta = Rod3DefPos.y - transform.InverseTransformPoint(Rod3.transform.position).y;
		Piston4Delta = Rod4DefPos.y - transform.InverseTransformPoint(Rod4.transform.position).y;

		Piston1.transform.localPosition = Piston1DefPos - new Vector3(0, Piston1Delta, 0);
		Piston2.transform.localPosition = Piston2DefPos - new Vector3(0, Piston2Delta, 0);
		Piston3.transform.localPosition = Piston3DefPos - new Vector3(0, Piston3Delta, 0);
		Piston4.transform.localPosition = Piston4DefPos - new Vector3(0, Piston4Delta, 0);

	}
}
