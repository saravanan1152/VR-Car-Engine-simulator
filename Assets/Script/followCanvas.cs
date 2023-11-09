using System.Collections;
using UltimateXR.Avatar;
using UltimateXR.Core;
using UltimateXR.Core.Components.Composite;
using UltimateXR.Manipulation;
using UnityEngine;
using TMPro;
namespace UltimateXR.Haptics.Helpers
{
    /// <summary>
    ///     Component that, added to a grabbable object (<see cref="UxrGrabbableObject" />), sends haptic feedback to any
    ///     controller that manipulates it.
    /// </summary>
    [RequireComponent(typeof(UxrGrabbableObject))]
    public class followCanvas : MonoBehaviour
    {
        public GameObject rightHand;
        public GameObject leftHand;
        public GameObject canvasR;
        public TextMeshProUGUI ObjName;
        public GameObject cameraa;
        public GameObject focalpoint;
       
        public Vector3 offset = new Vector3(0, 0, 0);
        public Vector3 veloxity = Vector3.zero;
        public UxrManipulationHapticFeedback manipulationFeedback;

        public Transform target; 
        public float smoothSpeed = 0.125f; 
      
        void Start()
        {
           
        }

        // Update is called once per frame
        void Update()
        {

            Vector3 desiredPosition = target.position + offset;
            Vector3 smoothedPosition = Vector3.Lerp(transform.position, desiredPosition, smoothSpeed); 
            transform.position = smoothedPosition;
            transform.LookAt(target); 



           
            manipulationFeedback = GameObject.FindGameObjectWithTag("Grab").GetComponent<UxrManipulationHapticFeedback>();

            ObjName.text = manipulationFeedback.HapticClipOnGrab.name;
            if (manipulationFeedback.grab)
            {
                Debug.Log("Right");
             
            }

            if (!manipulationFeedback.grab)
            {
             
                Debug.Log("Left");
            }
        }
    }
}
