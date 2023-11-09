﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtualFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<UltimateXR.Examples.FullScene.Lab.Battery>
struct Action_1_t89576CBA17C6D94FB54495FF1A0C7EAF7D85D958;
// System.Action`1<UltimateXR.Examples.FullScene.Lab.BatteryAnchor>
struct Action_1_t349E59A100AB96E28E47AA0483759EF8D440B279;
// System.Action`1<System.Boolean>
struct Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C;
// System.Action`1<UltimateXR.Examples.FullScene.Lab.GeneratorDoor>
struct Action_1_t73C2CF05BDBE1BAF6BB81B67F70C06531DD12716;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<UnityEngine.Renderer>
struct Action_1_tC44940B0562C5ADFA6C6CD80984D4A4CFBA1E7A0;
// System.Action`1<UltimateXR.Examples.FullScene.Lab.SpringOnRelease>
struct Action_1_t9B55287769D9C2F97CD6FB721E6067CBC8FFAF4F;
// System.Action`1<UltimateXR.Animation.Materials.UxrAnimatedMaterial>
struct Action_1_tB9C24371DF7374FF4574E2F23678EB42130A027E;
// System.Action`1<UltimateXR.Avatar.UxrAvatar>
struct Action_1_t4089C4B289DC5DCABD41003947B04E054DA74115;
// System.Action`1<UltimateXR.Core.Components.UxrComponent>
struct Action_1_t26593172F6B42D83C73335CF5C8D4C56678201DD;
// System.Action`1<UltimateXR.Devices.UxrControllerInput>
struct Action_1_t96262DA2D42FC90618C7F2B69C8B5FC5A4F8F119;
// System.Action`1<UltimateXR.Manipulation.UxrGrabbableObject>
struct Action_1_tA75F39D99B16D762112691040DAE1E193456089E;
// System.Action`1<UltimateXR.Manipulation.UxrGrabbableObjectAnchor>
struct Action_1_tDE123785D9881C9DA0E89F71F4053E7EB6B2D1F9;
// System.Action`1<UltimateXR.Manipulation.UxrGrabber>
struct Action_1_t51A6A6CFB090E1F2DEFEE2D2267D92384C89F952;
// System.Action`1<UltimateXR.Haptics.Helpers.UxrManipulationHapticFeedback>
struct Action_1_tE6975599A4352C69FFEE6A5B6060D24C268CA71F;
// System.Action`1<UltimateXR.Core.UxrUpdateStage>
struct Action_1_tDF30F986A3D4E80AE09408F01A7151FB56492B59;
// System.Action`2<System.String,System.String>
struct Action_2_t3EDD987DFCD31953576008A0D7D4F44D8C984B1D;
// System.Action`3<System.Object,System.Int32Enum,System.Boolean>
struct Action_3_t046F7B128A04A958DF7153022D4E3D856249A3B5;
// System.Action`3<UltimateXR.Avatar.UxrAvatar,UltimateXR.Core.UxrHandSide,System.Boolean>
struct Action_3_t5D0E6372A9C59C311A4BF2EE5AD6784EB7F2913C;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Boolean>
struct Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682;
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GameObject>
struct Dictionary_2_t3ED995699F3E88D06E5DA7362BEB7584DBD61662;
// System.Collections.Generic.Dictionary`2<System.Int32,UltimateXR.Manipulation.UxrGrabPointShape>
struct Dictionary_2_t0DAB7F69BC24B9592A1686B894FF5C717E605E4B;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588;
// System.Collections.Generic.Dictionary`2<System.String,UltimateXR.Core.Components.UxrComponent>
struct Dictionary_2_t035F7C12016E549E0F4A917D7DA6D9090B2DD228;
// System.Collections.Generic.Dictionary`2<System.String,UltimateXR.Avatar.Rig.UxrRuntimeHandPose>
struct Dictionary_2_t00A1777B1AAF27DB0831C8FFA8EA11C784D0310A;
// System.Collections.Generic.Dictionary`2<UnityEngine.Transform,UnityEngine.Quaternion>
struct Dictionary_2_tE1BE4D423E39C184B9041A359230EF9E41435F9E;
// System.Collections.Generic.Dictionary`2<UnityEngine.Transform,UnityEngine.Vector3>
struct Dictionary_2_t1E0EC21D302F86A02E9189C21838AEFC82F8A984;
// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.Component>
struct Dictionary_2_t645C11EEDE0775E6E880E2ABBF6C1605295B1DB0;
// System.Collections.Generic.Dictionary`2<UltimateXR.Manipulation.UxrGrabbableObject,UltimateXR.Manipulation.UxrGrabManager/RuntimeGrabInfo>
struct Dictionary_2_tFE71881233A607B5AC090F2CD969572935CDE48F;
// System.Collections.Generic.Dictionary`2<UltimateXR.Manipulation.UxrGrabbableObjectAnchor,UltimateXR.Manipulation.UxrGrabManager/GrabbableObjectAnchorInfo>
struct Dictionary_2_tBAF1642C18DD0C21277BDCD26881E3AEACCD7DE2;
// System.Collections.Generic.Dictionary`2<UltimateXR.Manipulation.UxrGrabber,UltimateXR.Manipulation.UxrRuntimeGripInfo>
struct Dictionary_2_t1136B7D77E984AC34C6E9537E0E7A1663663F9EF;
// System.Collections.Generic.Dictionary`2<UltimateXR.Manipulation.UxrGrabber,UltimateXR.Manipulation.UxrGrabManager/HandTransitionInfo>
struct Dictionary_2_tFD3E8DD0856DAC32DBBDA7303E764EDC42305F24;
// System.Collections.Generic.Dictionary`2<UltimateXR.Core.UxrHandSide,System.Boolean>
struct Dictionary_2_t070F65DEBC0ECA2531A454EB5D5D7ED00E4BFAA3;
// System.Collections.Generic.Dictionary`2<UltimateXR.Devices.UxrInput1D,System.Boolean>
struct Dictionary_2_t8951A2538A1EEEE3D4ACC9E74485F6D943AFC290;
// System.Collections.Generic.Dictionary`2<UltimateXR.Devices.UxrInput2D,System.Boolean>
struct Dictionary_2_tC5FC23A9E09F732DD045ED9FAD05890FFDDC9DDB;
// System.EventHandler`1<System.Object>
struct EventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746;
// System.EventHandler`1<UltimateXR.Manipulation.UxrApplyConstraintsEventArgs>
struct EventHandler_1_t6FCADDF8DC5CFC67E12B6324C77ABD7EEDE695AC;
// System.EventHandler`1<UltimateXR.Avatar.UxrAvatarHandPoseChangeEventArgs>
struct EventHandler_1_tA66DB16264EE5937CEBEA1AB0350FC4FFFC1A722;
// System.EventHandler`1<UltimateXR.Avatar.UxrAvatarMoveEventArgs>
struct EventHandler_1_tED3DC79456BF1AB7E153063AE84D07955753DD54;
// System.EventHandler`1<UltimateXR.Avatar.UxrAvatarStartedEventArgs>
struct EventHandler_1_t6DC78937614A22E7E4E9155A741D4DD38666F5C4;
// System.EventHandler`1<UltimateXR.Avatar.UxrAvatarUpdateEventArgs>
struct EventHandler_1_t3F92A5644026ECB74AF8C40E88D62D7A736A3C28;
// System.EventHandler`1<UltimateXR.Devices.UxrControllerHapticEventArgs>
struct EventHandler_1_tB893131BD9F99FE51AAD1B70442663975D9726D2;
// System.EventHandler`1<UltimateXR.Devices.UxrDeviceConnectEventArgs>
struct EventHandler_1_t5D28DD1BC846336E4CCB2624C3E8C497AC8F7D76;
// System.EventHandler`1<UltimateXR.Devices.UxrInput1DEventArgs>
struct EventHandler_1_t5B1E201D2A309D4DA5F38A046C70455E94263E4E;
// System.EventHandler`1<UltimateXR.Devices.UxrInput2DEventArgs>
struct EventHandler_1_tFCCC582ED75BBB7143C5E88E067CB2DFAA13A3EE;
// System.EventHandler`1<UltimateXR.Devices.UxrInputButtonEventArgs>
struct EventHandler_1_t424D2BA546EE6973D77C418261D8FFB2EDE29504;
// System.EventHandler`1<UltimateXR.Manipulation.UxrManipulationEventArgs>
struct EventHandler_1_tFB1A27628EFA23760E6E055C0CC402DA6F5ABAD1;
// System.EventHandler`1<UltimateXR.Core.StateSync.UxrStateSyncEventArgs>
struct EventHandler_1_t5620E57BC2260114C3D84E371B827A2D62DAFE0F;
// System.Collections.Generic.IEnumerable`1<UltimateXR.Examples.FullScene.Lab.BatteryAnchor>
struct IEnumerable_1_tFF63E4E3AB695EFCE6D76302D97255A7FF102F1A;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.List`1<System.Func`2<UltimateXR.Manipulation.UxrGrabbableObject,System.Boolean>>
struct List_1_t0486FD1E5762D014B351A963FDCF0D9DE8A64B2E;
// System.Collections.Generic.List`1<UltimateXR.Examples.FullScene.Lab.Battery>
struct List_1_tBB73D03DB2445501C733D170A2DBC4755DF0E525;
// System.Collections.Generic.List`1<UltimateXR.Examples.FullScene.Lab.BatteryAnchor>
struct List_1_t1D8704DCF3B47D669BED6EFE8C5D12D2F7C21126;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<UltimateXR.Examples.FullScene.Lab.GeneratorDoor>
struct List_1_tF5DA45F2046E96028DFCB9CA96E23765685CC86C;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UnityEngine.Renderer>
struct List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93;
// System.Collections.Generic.List`1<System.Single>
struct List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918;
// System.Collections.Generic.List`1<UltimateXR.Examples.FullScene.Lab.SpringOnRelease>
struct List_1_tAD8AFB6A06FBCDFE9144E7CBB1B2DC1DF331A886;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D;
// System.Collections.Generic.List`1<UltimateXR.Avatar.UxrAvatar>
struct List_1_tC29D5829B8DE391E88531CD063133CA32CFC5EF4;
// System.Collections.Generic.List`1<UltimateXR.Devices.UxrControllerInput>
struct List_1_t3872AF20CECAFF679F76C78E671420BE71816F06;
// System.Collections.Generic.List`1<UltimateXR.Manipulation.UxrGrabPointInfo>
struct List_1_t7A8DCF9750D6A9D3D9DF473D2AE6CD9F4EA40D7B;
// System.Collections.Generic.List`1<UltimateXR.Manipulation.UxrGrabbableObject>
struct List_1_t809F0706323745E70935A241AAF92314A58AB368;
// System.Collections.Generic.List`1<UltimateXR.Manipulation.UxrGrabbableObjectAnchor>
struct List_1_tB983CD585A425CB1F906A2644B2CFAD49EB58951;
// System.Collections.Generic.List`1<UltimateXR.Manipulation.UxrGrabber>
struct List_1_tB21D30BDF9BE24BEB95FB2C03425339CA088830C;
// System.Collections.Generic.List`1<UltimateXR.Manipulation.UxrGripPoseInfo>
struct List_1_tBCE33B3A8925A9F9F387453C69146E8A0D79EA02;
// System.Collections.Generic.List`1<UltimateXR.Manipulation.HandPoses.UxrHandPoseAsset>
struct List_1_t4618C292C1EC84A786F9D09CAAD9B842FA035A37;
// System.Collections.Generic.List`1<UltimateXR.Haptics.Helpers.UxrManipulationHapticFeedback>
struct List_1_t5772A439223A614820383CAB9DC15DD81F1D5CC9;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B;
// System.Collections.Generic.List`1<UltimateXR.Examples.FullScene.Lab.Laser/LaserBurn>
struct List_1_t5BCE8DC4120D9E3C21A36514644646DBB9FBDE2F;
// System.Collections.Generic.List`1<UltimateXR.Manipulation.UxrGrabber/PhysicsSample>
struct List_1_tA10FF6C4E639F0A8B347414F9793BF5B564C3D57;
// UltimateXR.Core.Components.Composite.UxrAvatarComponent`1<System.Object>
struct UxrAvatarComponent_1_tFBFF21AB620850BAEFB90774CD907CF6D704C606;
// UltimateXR.Core.Components.Composite.UxrAvatarComponent`1<UltimateXR.Manipulation.UxrGrabber>
struct UxrAvatarComponent_1_t2D8119B812CF65EC273D2719764BF585BF91AD8C;
// UltimateXR.Core.Components.UxrComponent`1<UltimateXR.Examples.FullScene.Lab.BatteryAnchor>
struct UxrComponent_1_t87BAA908145649D47C98BE530A9F80A805F9E90F;
// UltimateXR.Core.Components.UxrComponent`1<UltimateXR.Examples.FullScene.Lab.GeneratorDoor>
struct UxrComponent_1_tFF860D099F37155A76017CCC0C7DE9B4C0AE9E3C;
// UltimateXR.Core.Components.UxrComponent`1<System.Object>
struct UxrComponent_1_t512A5ABF80398A466EF674B4F04195341FCB100A;
// UltimateXR.Core.Components.Composite.UxrGrabbableObjectComponent`1<UltimateXR.Examples.FullScene.Lab.Battery>
struct UxrGrabbableObjectComponent_1_tFE02A697C5B42FECE385B3A530702420DFC6E020;
// UltimateXR.Core.Components.Composite.UxrGrabbableObjectComponent`1<System.Object>
struct UxrGrabbableObjectComponent_1_t178AD3E4B14600E5DB26855EB8B1E6E35716A869;
// UltimateXR.Core.Components.Composite.UxrGrabbableObjectComponent`1<UltimateXR.Examples.FullScene.Lab.SpringOnRelease>
struct UxrGrabbableObjectComponent_1_tAE488CF95E619715F04F3337799454B1A8061678;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// UnityEngine.GradientAlphaKey[]
struct GradientAlphaKeyU5BU5D_tA5D7ED787780B5C01635C8C59B15B2BC01AEC50E;
// UnityEngine.GradientColorKey[]
struct GradientColorKeyU5BU5D_tB8929E6EE130CA1F3C1664B300BE83A95A642C18;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.Quaternion[]
struct QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7;
// UnityEngine.Renderer[]
struct RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// UnityEngine.Transform[]
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24;
// UltimateXR.Manipulation.UxrGrabbableObjectAnchor[]
struct UxrGrabbableObjectAnchorU5BU5D_t086D051370506C7B677EA2AFD5BFCDDEEC4A12A7;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// UltimateXR.Examples.FullScene.Lab.Laser/LaserBurn[]
struct LaserBurnU5BU5D_tBD7ABD8EDC3668B006C40FBD994B1AB58476F364;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// UltimateXR.Examples.FullScene.Doors.ArmoredDoor
struct ArmoredDoor_t8B70669952214138BE0A4C9684AFA4A01E27E439;
// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20;
// UltimateXR.Examples.FullScene.Doors.AutomaticDoor
struct AutomaticDoor_t1300394E882F63AD7DCD712530F55D334F86B1FC;
// UltimateXR.Examples.FullScene.Lab.Battery
struct Battery_t56FF6D15FAC1E9B259C0EF64902537FB2B41FA8B;
// UltimateXR.Examples.FullScene.Lab.BatteryAnchor
struct BatteryAnchor_t01234E44479A11E2168D9712174DA3B7B28ED114;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// UnityEngine.BoxCollider
struct BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.EventHandler
struct EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UltimateXR.Examples.FullScene.Lab.GeneratorDoor
struct GeneratorDoor_t33EB8ADB2139695767CD1080E775EA94B6DD3037;
// UltimateXR.Examples.FullScene.GlobalLogic
struct GlobalLogic_t200876C43EB8393A83FDCFA472C9E734546F9EEB;
// UnityEngine.Gradient
struct Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E;
// UltimateXR.Examples.FullScene.Doors.HandScanner
struct HandScanner_t42A4D993924FECBCA1CFEA7D1E0335ADAB95D3D6;
// UltimateXR.Examples.FullScene.Lab.Lamp
struct Lamp_t17C08BD87F9AAA690D376991BEC03122E7B9124A;
// UltimateXR.Examples.FullScene.Lab.Laser
struct Laser_t7D7E61C4CF345606101C0ACC8089A4E8B5A7E74B;
// UnityEngine.Light
struct Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3;
// UltimateXR.Examples.FullScene.Lab.LightBulb
struct LightBulb_tD2997DB52DC01475297BAF83A889E14D2913D473;
// UnityEngine.LineRenderer
struct LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D;
// UltimateXR.Examples.FullScene.Weapons.MagAmmoIndicator
struct MagAmmoIndicator_t8B07F09F92B9AA96AA4E615ED6443811B80EF9D4;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.ParticleSystem
struct ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C;
// UnityEngine.Shader
struct Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692;
// UnityEngine.SphereCollider
struct SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275;
// UltimateXR.Examples.FullScene.Lab.SpringOnRelease
struct SpringOnRelease_tF66652DE3566FD0575E2CD3B417EFF4592105B1B;
// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UltimateXR.Animation.Materials.UxrAnimatedMaterial
struct UxrAnimatedMaterial_t6AA0B6F355D7F547152A8A3BA66E81808300FDB0;
// UltimateXR.Manipulation.UxrApplyConstraintsEventArgs
struct UxrApplyConstraintsEventArgs_t958B12AB329E72D08160B16BA0F60C11C019F2E6;
// UltimateXR.Audio.UxrAudioSample
struct UxrAudioSample_t01A5C41E145D2E83FE924FFFFBBC451376881ED9;
// UltimateXR.Avatar.UxrAvatar
struct UxrAvatar_t880FC3AD5A9A30338CFDF4653C86343B16ACDE79;
// UltimateXR.Avatar.Controllers.UxrAvatarController
struct UxrAvatarController_t811BBB7BB7C4C244185938517427940CDCE9B817;
// UltimateXR.Avatar.UxrAvatarMoveEventArgs
struct UxrAvatarMoveEventArgs_t20D28939F2A40931E89800912DF891DB898F1127;
// UltimateXR.Avatar.Rig.UxrAvatarRig
struct UxrAvatarRig_t2F2E116178F050FC09FA473421048DEF05AE2944;
// UltimateXR.Avatar.Rig.UxrAvatarRigInfo
struct UxrAvatarRigInfo_t7FBFDDD41726CB502BA3CD5857FEE75791C037CC;
// UltimateXR.Core.Math.UxrAxis
struct UxrAxis_t9C63EFC61998157CED7F1D5849CEE908F9B14DB7;
// UltimateXR.Core.Components.UxrComponent
struct UxrComponent_tA6AC6651B5C934626995D87127173273775B1011;
// UltimateXR.Devices.Visualization.UxrController3DModel
struct UxrController3DModel_t352689EC881A3E285FA22D4F579A7CBC701043E6;
// UltimateXR.Devices.UxrControllerInput
struct UxrControllerInput_tF9ABB63F2B9B59D50DA1561F8DD21BB9F24446BB;
// UltimateXR.Mechanics.Weapons.UxrFirearmMag
struct UxrFirearmMag_tBEA739C8C38E1746316937E4BCBC7471EA02EC5C;
// UltimateXR.Haptics.Helpers.UxrFixedHapticFeedback
struct UxrFixedHapticFeedback_tB4275F8F9577DB366B776F01947C53E48F015FEE;
// UltimateXR.Manipulation.UxrGrabManager
struct UxrGrabManager_t76F8EBC3B188C8BB86C683C7B3E0E699CDEA7104;
// UltimateXR.Manipulation.UxrGrabPointInfo
struct UxrGrabPointInfo_tF536E172E12DD70FDA2B3E21733B1CEB08D35079;
// UltimateXR.Manipulation.UxrGrabbableObject
struct UxrGrabbableObject_tCA9C5B90AC9CB9830D3D50AE51F7FF342511E3BC;
// UltimateXR.Manipulation.UxrGrabbableObjectAnchor
struct UxrGrabbableObjectAnchor_tE7110AF7891C09542149FC793D1C0C9A9D95F66A;
// UltimateXR.Manipulation.UxrGrabber
struct UxrGrabber_tC236DD7475C2506468E010D407CFF2F8375A5ED2;
// UltimateXR.Manipulation.UxrGripPoseInfo
struct UxrGripPoseInfo_t35D8985EE8490D4E4617C24300EC9A18363D01FC;
// UltimateXR.Manipulation.HandPoses.UxrHandPoseAsset
struct UxrHandPoseAsset_t33CBA272AAFD98954B1BCAAC90D764A41132561D;
// UltimateXR.Haptics.UxrHapticClip
struct UxrHapticClip_tFC92FFBC7A97937953EBFBB995A3462BD776FDC8;
// UltimateXR.Animation.Interpolation.UxrInterpolationSettings
struct UxrInterpolationSettings_t29C9D7A3CF5AFE33C5A822F15FA5B3A1FD814004;
// UltimateXR.Core.UxrManager
struct UxrManager_t0BB2898400B82F4D4701B135D91724026F5E602D;
// UltimateXR.Manipulation.UxrManipulationEventArgs
struct UxrManipulationEventArgs_tD33E70382345A37F8AE2C8B4A533810FB76EDA78;
// UltimateXR.Haptics.Helpers.UxrManipulationHapticFeedback
struct UxrManipulationHapticFeedback_t6DA4A9477852BE09667C082006431E86BC9271D3;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UltimateXR.Examples.FullScene.Doors.HandScanner/<>c__DisplayClass26_0
struct U3CU3Ec__DisplayClass26_0_tE467941C5965810C7B12382E4B6493C6DBEB7436;
// UltimateXR.Examples.FullScene.Lab.Laser/LaserBurn
struct LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557;
// UltimateXR.Avatar.UxrAvatar/HandState
struct HandState_tE1A1B68269466E192D0BCD7392BE6CB1C67EC0A1;

IL2CPP_EXTERN_C RuntimeClass* Action_1_tC44940B0562C5ADFA6C6CD80984D4A4CFBA1E7A0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_3_t5D0E6372A9C59C311A4BF2EE5AD6784EB7F2913C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ColorExt_t75FA157B9D554C8C009E7747FB73C6CA15BAC902_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_t6FCADDF8DC5CFC67E12B6324C77ABD7EEDE695AC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_tED3DC79456BF1AB7E153063AE84D07955753DD54_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_tFB1A27628EFA23760E6E055C0CC402DA6F5ABAD1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GradientAlphaKeyU5BU5D_tA5D7ED787780B5C01635C8C59B15B2BC01AEC50E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GradientColorKeyU5BU5D_tB8929E6EE130CA1F3C1664B300BE83A95A642C18_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_tFF63E4E3AB695EFCE6D76302D97255A7FF102F1A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t91C5A3BEBB236B637876D28658685DEFAFC51194_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t5BCE8DC4120D9E3C21A36514644646DBB9FBDE2F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass26_0_tE467941C5965810C7B12382E4B6493C6DBEB7436_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UxrComponent_1_t87BAA908145649D47C98BE530A9F80A805F9E90F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UxrComponent_1_tFF860D099F37155A76017CCC0C7DE9B4C0AE9E3C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UxrComponent_tA6AC6651B5C934626995D87127173273775B1011_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UxrKeyboardInput_tF22D3AF2028ABCDD49214AA79276A3E988D189F5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3Ext_tE79960C7FB3A6DFB9D509BE3E9DBF1A9A6F2D52D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral2DC7F1608E133799F549A3108DFB74EF172E971D;
IL2CPP_EXTERN_C String_t* _stringLiteral38552E7167E05BBE6C64EC01C55233407F0FFFA1;
IL2CPP_EXTERN_C String_t* _stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE;
IL2CPP_EXTERN_C String_t* _stringLiteralB92EF51E45166C91E2762DB6C9F27C8BD6EBE466;
IL2CPP_EXTERN_C String_t* _stringLiteralED3E394CD8989C9069B26DA80D8A90E02D972827;
IL2CPP_EXTERN_C const RuntimeMethod* Battery_UxrManager_AvatarsUpdated_mB00076C5D25BCEB5E35E93815EBDA188BF118750_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisLightBulb_tD2997DB52DC01475297BAF83A889E14D2913D473_m62DE299FA33489B039353A298D196A8390CA8B0F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInParent_TisGeneratorDoor_t33EB8ADB2139695767CD1080E775EA94B6DD3037_m8321A5B9EADE7967CF085D027E4EF9978D9AB074_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInParent_TisLamp_t17C08BD87F9AAA690D376991BEC03122E7B9124A_m4B75357CA1F88009E0615F17F7F30608C070F868_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisUxrFirearmMag_tBEA739C8C38E1746316937E4BCBC7471EA02EC5C_m87D3E49B15B732176AC404723523F2D27797E4F1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisUxrManipulationHapticFeedback_t6DA4A9477852BE09667C082006431E86BC9271D3_m11B487A5D4D43C49910AF886B3B10131472D27BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_mF8C0D953BCBFDD5A01A09ADB67EB04F0D677A056_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GeneratorDoor_Battery_Placed_m3EFD5C7366131575B508860587574165FDEC9C4F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GeneratorDoor_Battery_Removed_m3D29CA5E1B92E27E1453209DA6DCD6F037B223EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GeneratorDoor_Lock_ConstraintsApplied_m0699E2C1E035BDFCB8580E25FB81ADB30009BE24_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GlobalLogic_UxrManager_AvatarMoved_mB6EE42A52B9D2FF68FF419552D18E00CAD959C78_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GlobalLogic_UxrManager_AvatarsUpdated_m18755EBDAF29B2561FDCE7BE996CFDB0D7E99A37_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HandScanner_U3CProcessScanResultU3Eb__27_0_m8A557D889478153CC4EF40C05B2C41BD4F4E1963_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HandScanner_U3CProcessScanResultU3Eb__27_1_m6FACEA89C8AEABE7A1EFEBB37D9DD0B167FF2DC4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Laser_UxrManager_AvatarsUpdated_mE3069BDE4C34554D58B8A55F0E912D31806E8B26_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m2F86E252D086E288E02FA1C830B7E86C0A431E51_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mB608316C3D0F44AB60BB05CC6676E509D51F7AC2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mC14699E148A59839D1CFCB1C5546718DBD170C5C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ForEach_mABFCEE200DFAA5E585E78E56EE1CC46304C03F11_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetRange_m6C4CA260108AD2A75C9B4B2DD344FD0996883E34_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_m02C1B8299C8117EECF9A1B9FEA98C66A35695C91_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveRange_m0B9C23AD79609782B89695407DD77AFFA2857589_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveRange_m2459C0BC8F20CF66E82F55757ABCF60A69752B6D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_mF7A66D08104196EBAE0E29F0DD9BA140656EA5F3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m1F762EB1D37883D76E3A3A469C3EAF9A479AAD52_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m803E10F7A50EB22BF82C0C1AB251D5407B4496DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mC29D3D824786832A31096310B3B3016B8B42B802_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m545762F67009314D9C63DD209B42FFF950569B05_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m64F8D95A0D124BA799350AA8FBCF379E69A667E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mEDD6D3CBA7B18AB7F0E8E301BF83BF3C114E5C70_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m2A866E5FF9CD642C76D27133D3FCEC2F15033DA2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mDEB236AC8E8785C93A3547CB4734B3F375DB157C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Item_m82BF4E041D2E59348188F4CE1DFFC8B2C7CB9AA3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MagAmmoIndicator_OnRoundsChanged_mAE8DE6668D1CB47A69FFA08B69A0A525A7591505_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mD136E37F696C00A3A1D4F65724ACAE903E385181_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass26_0_U3CEnableBeamsU3Eb__0_m05F9A28A447A81C48D960B7C5408E92CB0EF60C0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UxrAvatarComponent_1_get_Avatar_m7075FCDBDAAD3743FF4A735606DFDDEF7A152B8A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UxrComponent_1_Awake_m18681FB238CD8A28AE2F171623E3A2F9242C8E7F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UxrComponent_1_OnDisable_mF27E965C1ABB0FEAE01568B66EDCF99C5BB87BE5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UxrComponent_1_OnEnable_mF69B12CC9773C94630991CCD81E99269DB92E99D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UxrComponent_1__ctor_m0E2EECED676F2CA8025E5FDEEB3D384DE52C3BD3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UxrComponent_1__ctor_m7961FB498AE621BFBCEAE3A02DF31A5D75B2C437_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UxrComponent_1_get_EnabledComponents_m80D87C49AFFE8431CCEBEBD31AEF3A860773CF8B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UxrGrabbableObjectComponent_1_Awake_m9410EE9EA1E839A27FF10C24475F5AD768AFF303_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UxrGrabbableObjectComponent_1_OnDisable_m2CE8EDF6A887C89870E49BB14286F7C5100BEADB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UxrGrabbableObjectComponent_1_OnEnable_m9FD689540A0494BA5510E0FCDE3233F0A8676ED1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UxrGrabbableObjectComponent_1__ctor_m6449DF5F963B00C8327E37984D2452FEA5C2E429_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UxrGrabbableObjectComponent_1__ctor_m80875487FAF4430CD13FD80EA5B889A4F4865999_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UxrGrabbableObjectComponent_1_get_GrabbableObject_mFA0E4181BAD136313E485FD1F6604C3BA09B9E3C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UxrSingleton_1_get_Instance_mA15387C4D93C58879A6567FD6EA7BE6DE8A46DC7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UxrSingleton_1_get_Instance_mAEADF1C21E330A5564E4A52BC09D06D9B5599008_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct GradientAlphaKeyU5BU5D_tA5D7ED787780B5C01635C8C59B15B2BC01AEC50E;
struct GradientColorKeyU5BU5D_tB8929E6EE130CA1F3C1664B300BE83A95A642C18;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24;
struct UxrGrabbableObjectAnchorU5BU5D_t086D051370506C7B677EA2AFD5BFCDDEEC4A12A7;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t83674681D56018B67027F7E90059A83A414C832C 
{
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Renderer>
struct List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Single>
struct List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UltimateXR.Examples.FullScene.Lab.Laser/LaserBurn>
struct List_1_t5BCE8DC4120D9E3C21A36514644646DBB9FBDE2F  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	LaserBurnU5BU5D_tBD7ABD8EDC3668B006C40FBD994B1AB58476F364* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t5BCE8DC4120D9E3C21A36514644646DBB9FBDE2F_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	LaserBurnU5BU5D_tBD7ABD8EDC3668B006C40FBD994B1AB58476F364* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377  : public RuntimeObject
{
};

struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_StaticFields
{
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___Empty_0;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// UltimateXR.Audio.UxrAudioSample
struct UxrAudioSample_t01A5C41E145D2E83FE924FFFFBBC451376881ED9  : public RuntimeObject
{
	// UnityEngine.AudioClip UltimateXR.Audio.UxrAudioSample::_clip
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ____clip_0;
	// System.Single UltimateXR.Audio.UxrAudioSample::_volume
	float ____volume_1;
};

// UltimateXR.Manipulation.UxrGrabPointInfo
struct UxrGrabPointInfo_tF536E172E12DD70FDA2B3E21733B1CEB08D35079  : public RuntimeObject
{
	// System.Boolean UltimateXR.Manipulation.UxrGrabPointInfo::_editorFoldout
	bool ____editorFoldout_0;
	// System.String UltimateXR.Manipulation.UxrGrabPointInfo::_editorName
	String_t* ____editorName_1;
	// UltimateXR.Manipulation.UxrGrabMode UltimateXR.Manipulation.UxrGrabPointInfo::_grabMode
	int32_t ____grabMode_2;
	// System.Boolean UltimateXR.Manipulation.UxrGrabPointInfo::_useDefaultGrabButtons
	bool ____useDefaultGrabButtons_3;
	// System.Boolean UltimateXR.Manipulation.UxrGrabPointInfo::_bothHandsCompatible
	bool ____bothHandsCompatible_4;
	// UltimateXR.Core.UxrHandSide UltimateXR.Manipulation.UxrGrabPointInfo::_handSide
	int32_t ____handSide_5;
	// UltimateXR.Devices.UxrInputButtons UltimateXR.Manipulation.UxrGrabPointInfo::_inputButtons
	int32_t ____inputButtons_6;
	// System.Boolean UltimateXR.Manipulation.UxrGrabPointInfo::_hideHandGrabberRenderer
	bool ____hideHandGrabberRenderer_7;
	// UltimateXR.Manipulation.UxrGripPoseInfo UltimateXR.Manipulation.UxrGrabPointInfo::_defaultGripPoseInfo
	UxrGripPoseInfo_t35D8985EE8490D4E4617C24300EC9A18363D01FC* ____defaultGripPoseInfo_8;
	// UltimateXR.Manipulation.UxrSnapToHandMode UltimateXR.Manipulation.UxrGrabPointInfo::_snapMode
	int32_t ____snapMode_9;
	// UltimateXR.Manipulation.UxrHandSnapDirection UltimateXR.Manipulation.UxrGrabPointInfo::_snapDirection
	int32_t ____snapDirection_10;
	// UltimateXR.Manipulation.UxrSnapReference UltimateXR.Manipulation.UxrGrabPointInfo::_snapReference
	int32_t ____snapReference_11;
	// System.Collections.Generic.List`1<UltimateXR.Manipulation.UxrGripPoseInfo> UltimateXR.Manipulation.UxrGrabPointInfo::_avatarGripPoseEntries
	List_1_tBCE33B3A8925A9F9F387453C69146E8A0D79EA02* ____avatarGripPoseEntries_12;
	// System.Boolean UltimateXR.Manipulation.UxrGrabPointInfo::_alignToController
	bool ____alignToController_13;
	// UnityEngine.Transform UltimateXR.Manipulation.UxrGrabPointInfo::_alignToControllerAxes
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____alignToControllerAxes_14;
	// UltimateXR.Manipulation.UxrGrabProximityMode UltimateXR.Manipulation.UxrGrabPointInfo::_grabProximityMode
	int32_t ____grabProximityMode_15;
	// UnityEngine.BoxCollider UltimateXR.Manipulation.UxrGrabPointInfo::_grabProximityBox
	BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* ____grabProximityBox_16;
	// System.Single UltimateXR.Manipulation.UxrGrabPointInfo::_maxDistanceGrab
	float ____maxDistanceGrab_17;
	// System.Boolean UltimateXR.Manipulation.UxrGrabPointInfo::_grabProximityTransformUseSelf
	bool ____grabProximityTransformUseSelf_18;
	// UnityEngine.Transform UltimateXR.Manipulation.UxrGrabPointInfo::_grabProximityTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____grabProximityTransform_19;
	// System.Boolean UltimateXR.Manipulation.UxrGrabPointInfo::_grabberProximityUseDefault
	bool ____grabberProximityUseDefault_20;
	// System.Int32 UltimateXR.Manipulation.UxrGrabPointInfo::_grabberProximityIndex
	int32_t ____grabberProximityIndex_21;
	// UnityEngine.GameObject UltimateXR.Manipulation.UxrGrabPointInfo::_enableOnHandNear
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____enableOnHandNear_22;
	// System.Collections.Generic.Dictionary`2<UltimateXR.Manipulation.UxrGrabber,UltimateXR.Manipulation.UxrRuntimeGripInfo> UltimateXR.Manipulation.UxrGrabPointInfo::<RuntimeGrabs>k__BackingField
	Dictionary_2_t1136B7D77E984AC34C6E9537E0E7A1663663F9EF* ___U3CRuntimeGrabsU3Ek__BackingField_23;
};

// UltimateXR.Manipulation.UxrGripPoseInfo
struct UxrGripPoseInfo_t35D8985EE8490D4E4617C24300EC9A18363D01FC  : public RuntimeObject
{
	// System.String UltimateXR.Manipulation.UxrGripPoseInfo::_avatarPrefabGuid
	String_t* ____avatarPrefabGuid_0;
	// UltimateXR.Manipulation.HandPoses.UxrHandPoseAsset UltimateXR.Manipulation.UxrGripPoseInfo::_handPose
	UxrHandPoseAsset_t33CBA272AAFD98954B1BCAAC90D764A41132561D* ____handPose_1;
	// System.Single UltimateXR.Manipulation.UxrGripPoseInfo::_poseBlendValue
	float ____poseBlendValue_2;
	// UnityEngine.Transform UltimateXR.Manipulation.UxrGripPoseInfo::_gripAlignTransformHandLeft
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____gripAlignTransformHandLeft_3;
	// UnityEngine.Transform UltimateXR.Manipulation.UxrGripPoseInfo::_gripAlignTransformHandRight
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____gripAlignTransformHandRight_4;
	// UnityEngine.Mesh UltimateXR.Manipulation.UxrGripPoseInfo::<GrabPoseMeshLeft>k__BackingField
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___U3CGrabPoseMeshLeftU3Ek__BackingField_5;
	// UnityEngine.Mesh UltimateXR.Manipulation.UxrGripPoseInfo::<GrabPoseMeshRight>k__BackingField
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___U3CGrabPoseMeshRightU3Ek__BackingField_6;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// UltimateXR.Examples.FullScene.Doors.HandScanner/<>c__DisplayClass26_0
struct U3CU3Ec__DisplayClass26_0_tE467941C5965810C7B12382E4B6493C6DBEB7436  : public RuntimeObject
{
	// System.Boolean UltimateXR.Examples.FullScene.Doors.HandScanner/<>c__DisplayClass26_0::enable
	bool ___enable_0;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// UnityEngine.GradientAlphaKey
struct GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0 
{
	// System.Single UnityEngine.GradientAlphaKey::alpha
	float ___alpha_0;
	// System.Single UnityEngine.GradientAlphaKey::time
	float ___time_1;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// UnityEngine.LayerMask
struct LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB 
{
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;
};

// UnityEngine.Mathf
struct Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682 
{
	union
	{
		struct
		{
		};
		uint8_t Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682__padding[1];
	};
};

struct Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_StaticFields
{
	// System.Single UnityEngine.Mathf::Epsilon
	float ___Epsilon_0;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UltimateXR.Manipulation.UxrApplyConstraintsEventArgs
struct UxrApplyConstraintsEventArgs_t958B12AB329E72D08160B16BA0F60C11C019F2E6  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// UltimateXR.Manipulation.UxrGrabber UltimateXR.Manipulation.UxrApplyConstraintsEventArgs::<Grabber>k__BackingField
	UxrGrabber_tC236DD7475C2506468E010D407CFF2F8375A5ED2* ___U3CGrabberU3Ek__BackingField_1;
};

// UltimateXR.Avatar.UxrAvatarEventArgs
struct UxrAvatarEventArgs_t388788ACBA8EF5C5CFDE11383B131C7D07F557B7  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// UltimateXR.Avatar.UxrAvatar UltimateXR.Avatar.UxrAvatarEventArgs::<Avatar>k__BackingField
	UxrAvatar_t880FC3AD5A9A30338CFDF4653C86343B16ACDE79* ___U3CAvatarU3Ek__BackingField_1;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.ParticleSystem/EmissionModule
struct EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678 
{
	// UnityEngine.ParticleSystem UnityEngine.ParticleSystem/EmissionModule::m_ParticleSystem
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.ParticleSystem/EmissionModule
struct EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678_marshaled_pinvoke
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};
// Native definition for COM marshalling of UnityEngine.ParticleSystem/EmissionModule
struct EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678_marshaled_com
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// UnityEngine.Gradient
struct Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Gradient::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Gradient
struct Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Gradient
struct Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.GradientColorKey
struct GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A 
{
	// UnityEngine.Color UnityEngine.GradientColorKey::color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color_0;
	// System.Single UnityEngine.GradientColorKey::time
	float ___time_1;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Plane
struct Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C 
{
	// UnityEngine.Vector3 UnityEngine.Plane::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_1;
	// System.Single UnityEngine.Plane::m_Distance
	float ___m_Distance_2;
};

// UnityEngine.RaycastHit
struct RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 
{
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;
};

// UltimateXR.Avatar.UxrAvatarMoveEventArgs
struct UxrAvatarMoveEventArgs_t20D28939F2A40931E89800912DF891DB898F1127  : public UxrAvatarEventArgs_t388788ACBA8EF5C5CFDE11383B131C7D07F557B7
{
	// UnityEngine.Vector3 UltimateXR.Avatar.UxrAvatarMoveEventArgs::<OldPosition>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3COldPositionU3Ek__BackingField_2;
	// UnityEngine.Quaternion UltimateXR.Avatar.UxrAvatarMoveEventArgs::<OldRotation>k__BackingField
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___U3COldRotationU3Ek__BackingField_3;
	// UnityEngine.Vector3 UltimateXR.Avatar.UxrAvatarMoveEventArgs::<NewPosition>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CNewPositionU3Ek__BackingField_4;
	// UnityEngine.Quaternion UltimateXR.Avatar.UxrAvatarMoveEventArgs::<NewRotation>k__BackingField
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___U3CNewRotationU3Ek__BackingField_5;
	// UnityEngine.Vector3 UltimateXR.Avatar.UxrAvatarMoveEventArgs::<OldForward>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3COldForwardU3Ek__BackingField_6;
	// UnityEngine.Vector3 UltimateXR.Avatar.UxrAvatarMoveEventArgs::<NewForward>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CNewForwardU3Ek__BackingField_7;
	// UnityEngine.Matrix4x4 UltimateXR.Avatar.UxrAvatarMoveEventArgs::<OldWorldMatrix>k__BackingField
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___U3COldWorldMatrixU3Ek__BackingField_8;
	// UnityEngine.Matrix4x4 UltimateXR.Avatar.UxrAvatarMoveEventArgs::<NewWorldMatrix>k__BackingField
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___U3CNewWorldMatrixU3Ek__BackingField_9;
	// System.Boolean UltimateXR.Avatar.UxrAvatarMoveEventArgs::<HasTranslation>k__BackingField
	bool ___U3CHasTranslationU3Ek__BackingField_10;
	// System.Boolean UltimateXR.Avatar.UxrAvatarMoveEventArgs::<HasRotation>k__BackingField
	bool ___U3CHasRotationU3Ek__BackingField_11;
	// UnityEngine.Matrix4x4 UltimateXR.Avatar.UxrAvatarMoveEventArgs::_oldWorldMatrixInverse
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ____oldWorldMatrixInverse_12;
	// UnityEngine.Quaternion UltimateXR.Avatar.UxrAvatarMoveEventArgs::_oldRotationInverse
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ____oldRotationInverse_13;
};

// UltimateXR.Manipulation.UxrManipulationEventArgs
struct UxrManipulationEventArgs_tD33E70382345A37F8AE2C8B4A533810FB76EDA78  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// UltimateXR.Manipulation.UxrGrabbableObject UltimateXR.Manipulation.UxrManipulationEventArgs::<GrabbableObject>k__BackingField
	UxrGrabbableObject_tCA9C5B90AC9CB9830D3D50AE51F7FF342511E3BC* ___U3CGrabbableObjectU3Ek__BackingField_1;
	// UltimateXR.Manipulation.UxrGrabbableObjectAnchor UltimateXR.Manipulation.UxrManipulationEventArgs::<GrabbableAnchor>k__BackingField
	UxrGrabbableObjectAnchor_tE7110AF7891C09542149FC793D1C0C9A9D95F66A* ___U3CGrabbableAnchorU3Ek__BackingField_2;
	// UltimateXR.Manipulation.UxrGrabber UltimateXR.Manipulation.UxrManipulationEventArgs::<Grabber>k__BackingField
	UxrGrabber_tC236DD7475C2506468E010D407CFF2F8375A5ED2* ___U3CGrabberU3Ek__BackingField_3;
	// System.Int32 UltimateXR.Manipulation.UxrManipulationEventArgs::<GrabPointIndex>k__BackingField
	int32_t ___U3CGrabPointIndexU3Ek__BackingField_4;
	// System.Boolean UltimateXR.Manipulation.UxrManipulationEventArgs::<IsMultiHands>k__BackingField
	bool ___U3CIsMultiHandsU3Ek__BackingField_5;
	// System.Boolean UltimateXR.Manipulation.UxrManipulationEventArgs::<IsSwitchHands>k__BackingField
	bool ___U3CIsSwitchHandsU3Ek__BackingField_6;
	// UnityEngine.Vector3 UltimateXR.Manipulation.UxrManipulationEventArgs::<ReleaseVelocity>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CReleaseVelocityU3Ek__BackingField_7;
	// UnityEngine.Vector3 UltimateXR.Manipulation.UxrManipulationEventArgs::<ReleaseAngularVelocity>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CReleaseAngularVelocityU3Ek__BackingField_8;
	// UltimateXR.Manipulation.UxrPlacementType UltimateXR.Manipulation.UxrManipulationEventArgs::<PlacementType>k__BackingField
	int32_t ___U3CPlacementTypeU3Ek__BackingField_9;
};

// UltimateXR.Examples.FullScene.Lab.Laser/LaserBurn
struct LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557  : public RuntimeObject
{
	// UnityEngine.GameObject UltimateXR.Examples.FullScene.Lab.Laser/LaserBurn::<GameObject>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CGameObjectU3Ek__BackingField_0;
	// UnityEngine.GameObject UltimateXR.Examples.FullScene.Lab.Laser/LaserBurn::<GameObjectIncandescent>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CGameObjectIncandescentU3Ek__BackingField_1;
	// UnityEngine.Collider UltimateXR.Examples.FullScene.Lab.Laser/LaserBurn::<Collider>k__BackingField
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___U3CColliderU3Ek__BackingField_2;
	// UnityEngine.LineRenderer UltimateXR.Examples.FullScene.Lab.Laser/LaserBurn::<LineRenderer>k__BackingField
	LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* ___U3CLineRendererU3Ek__BackingField_3;
	// UnityEngine.LineRenderer UltimateXR.Examples.FullScene.Lab.Laser/LaserBurn::<IncandescentLineRenderer>k__BackingField
	LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* ___U3CIncandescentLineRendererU3Ek__BackingField_4;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> UltimateXR.Examples.FullScene.Lab.Laser/LaserBurn::<PathPositions>k__BackingField
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___U3CPathPositionsU3Ek__BackingField_5;
	// System.Collections.Generic.List`1<System.Single> UltimateXR.Examples.FullScene.Lab.Laser/LaserBurn::<PathCreationTimes>k__BackingField
	List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* ___U3CPathCreationTimesU3Ek__BackingField_6;
	// UnityEngine.Vector3 UltimateXR.Examples.FullScene.Lab.Laser/LaserBurn::<LastNormal>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CLastNormalU3Ek__BackingField_7;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// UnityEngine.Shader
struct Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.Action`1<System.Boolean>
struct Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C  : public MulticastDelegate_t
{
};

// System.Action`1<UnityEngine.Renderer>
struct Action_1_tC44940B0562C5ADFA6C6CD80984D4A4CFBA1E7A0  : public MulticastDelegate_t
{
};

// System.Action`3<System.Object,System.Int32Enum,System.Boolean>
struct Action_3_t046F7B128A04A958DF7153022D4E3D856249A3B5  : public MulticastDelegate_t
{
};

// System.Action`3<UltimateXR.Avatar.UxrAvatar,UltimateXR.Core.UxrHandSide,System.Boolean>
struct Action_3_t5D0E6372A9C59C311A4BF2EE5AD6784EB7F2913C  : public MulticastDelegate_t
{
};

// System.EventHandler`1<UltimateXR.Manipulation.UxrApplyConstraintsEventArgs>
struct EventHandler_1_t6FCADDF8DC5CFC67E12B6324C77ABD7EEDE695AC  : public MulticastDelegate_t
{
};

// System.EventHandler`1<UltimateXR.Avatar.UxrAvatarMoveEventArgs>
struct EventHandler_1_tED3DC79456BF1AB7E153063AE84D07955753DD54  : public MulticastDelegate_t
{
};

// System.EventHandler`1<UltimateXR.Manipulation.UxrManipulationEventArgs>
struct EventHandler_1_tFB1A27628EFA23760E6E055C0CC402DA6F5ABAD1  : public MulticastDelegate_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.ParticleSystem
struct ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.BoxCollider
struct BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23  : public Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76
{
};

// UnityEngine.Light
struct Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
	// System.Int32 UnityEngine.Light::m_BakedIndex
	int32_t ___m_BakedIndex_4;
};

// UnityEngine.LineRenderer
struct LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UltimateXR.Core.Components.UxrComponent
struct UxrComponent_tA6AC6651B5C934626995D87127173273775B1011  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String UltimateXR.Core.Components.UxrComponent::<UniqueId>k__BackingField
	String_t* ___U3CUniqueIdU3Ek__BackingField_12;
	// System.Boolean UltimateXR.Core.Components.UxrComponent::<IsApplicationQuitting>k__BackingField
	bool ___U3CIsApplicationQuittingU3Ek__BackingField_13;
	// UnityEngine.Transform UltimateXR.Core.Components.UxrComponent::<InitialParent>k__BackingField
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CInitialParentU3Ek__BackingField_14;
	// UnityEngine.Vector3 UltimateXR.Core.Components.UxrComponent::<InitialLocalPosition>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CInitialLocalPositionU3Ek__BackingField_15;
	// UnityEngine.Quaternion UltimateXR.Core.Components.UxrComponent::<InitialLocalRotation>k__BackingField
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___U3CInitialLocalRotationU3Ek__BackingField_16;
	// UnityEngine.Vector3 UltimateXR.Core.Components.UxrComponent::<InitialLocalEulerAngles>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CInitialLocalEulerAnglesU3Ek__BackingField_17;
	// UnityEngine.Vector3 UltimateXR.Core.Components.UxrComponent::<InitialLocalScale>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CInitialLocalScaleU3Ek__BackingField_18;
	// UnityEngine.Vector3 UltimateXR.Core.Components.UxrComponent::<InitialLossyScale>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CInitialLossyScaleU3Ek__BackingField_19;
	// UnityEngine.Vector3 UltimateXR.Core.Components.UxrComponent::<InitialPosition>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CInitialPositionU3Ek__BackingField_20;
	// UnityEngine.Quaternion UltimateXR.Core.Components.UxrComponent::<InitialRotation>k__BackingField
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___U3CInitialRotationU3Ek__BackingField_21;
	// UnityEngine.Vector3 UltimateXR.Core.Components.UxrComponent::<InitialEulerAngles>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CInitialEulerAnglesU3Ek__BackingField_22;
	// UnityEngine.Matrix4x4 UltimateXR.Core.Components.UxrComponent::<InitialRelativeMatrix>k__BackingField
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___U3CInitialRelativeMatrixU3Ek__BackingField_23;
	// UnityEngine.Matrix4x4 UltimateXR.Core.Components.UxrComponent::<InitialLocalToWorldMatrix>k__BackingField
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___U3CInitialLocalToWorldMatrixU3Ek__BackingField_24;
	// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.Component> UltimateXR.Core.Components.UxrComponent::_cachedComponents
	Dictionary_2_t645C11EEDE0775E6E880E2ABBF6C1605295B1DB0* ____cachedComponents_27;
};

struct UxrComponent_tA6AC6651B5C934626995D87127173273775B1011_StaticFields
{
	// System.Action`1<UltimateXR.Core.Components.UxrComponent> UltimateXR.Core.Components.UxrComponent::GlobalRegistering
	Action_1_t26593172F6B42D83C73335CF5C8D4C56678201DD* ___GlobalRegistering_4;
	// System.Action`1<UltimateXR.Core.Components.UxrComponent> UltimateXR.Core.Components.UxrComponent::GlobalRegistered
	Action_1_t26593172F6B42D83C73335CF5C8D4C56678201DD* ___GlobalRegistered_5;
	// System.Action`1<UltimateXR.Core.Components.UxrComponent> UltimateXR.Core.Components.UxrComponent::GlobalUnregistering
	Action_1_t26593172F6B42D83C73335CF5C8D4C56678201DD* ___GlobalUnregistering_6;
	// System.Action`1<UltimateXR.Core.Components.UxrComponent> UltimateXR.Core.Components.UxrComponent::GlobalUnregistered
	Action_1_t26593172F6B42D83C73335CF5C8D4C56678201DD* ___GlobalUnregistered_7;
	// System.Action`1<UltimateXR.Core.Components.UxrComponent> UltimateXR.Core.Components.UxrComponent::GlobalEnabled
	Action_1_t26593172F6B42D83C73335CF5C8D4C56678201DD* ___GlobalEnabled_8;
	// System.Action`1<UltimateXR.Core.Components.UxrComponent> UltimateXR.Core.Components.UxrComponent::GlobalDisabled
	Action_1_t26593172F6B42D83C73335CF5C8D4C56678201DD* ___GlobalDisabled_9;
	// System.Action`2<System.String,System.String> UltimateXR.Core.Components.UxrComponent::GlobalIdChanging
	Action_2_t3EDD987DFCD31953576008A0D7D4F44D8C984B1D* ___GlobalIdChanging_10;
	// System.Action`2<System.String,System.String> UltimateXR.Core.Components.UxrComponent::GlobalIdChanged
	Action_2_t3EDD987DFCD31953576008A0D7D4F44D8C984B1D* ___GlobalIdChanged_11;
	// System.Collections.Generic.Dictionary`2<System.String,UltimateXR.Core.Components.UxrComponent> UltimateXR.Core.Components.UxrComponent::s_componentsById
	Dictionary_2_t035F7C12016E549E0F4A917D7DA6D9090B2DD228* ___s_componentsById_25;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> UltimateXR.Core.Components.UxrComponent::s_idCollisions
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* ___s_idCollisions_26;
};

// UltimateXR.Core.Components.Singleton.UxrAbstractSingleton`1<UltimateXR.Manipulation.UxrGrabManager>
struct UxrAbstractSingleton_1_t6B05F02927FFF2FD6E2CA419A09D4BA7E04674C1  : public UxrComponent_tA6AC6651B5C934626995D87127173273775B1011
{
	// System.Boolean UltimateXR.Core.Components.Singleton.UxrAbstractSingleton`1::<IsInitialized>k__BackingField
	bool ___U3CIsInitializedU3Ek__BackingField_28;
};

struct UxrAbstractSingleton_1_t6B05F02927FFF2FD6E2CA419A09D4BA7E04674C1_StaticFields
{
	// T UltimateXR.Core.Components.Singleton.UxrAbstractSingleton`1::s_instance
	UxrGrabManager_t76F8EBC3B188C8BB86C683C7B3E0E699CDEA7104* ___s_instance_29;
};

// UltimateXR.Core.Components.Singleton.UxrAbstractSingleton`1<UltimateXR.Core.UxrManager>
struct UxrAbstractSingleton_1_tE3C28C78F715B05C7B89353B18CE9D5FED403A20  : public UxrComponent_tA6AC6651B5C934626995D87127173273775B1011
{
	// System.Boolean UltimateXR.Core.Components.Singleton.UxrAbstractSingleton`1::<IsInitialized>k__BackingField
	bool ___U3CIsInitializedU3Ek__BackingField_28;
};

struct UxrAbstractSingleton_1_tE3C28C78F715B05C7B89353B18CE9D5FED403A20_StaticFields
{
	// T UltimateXR.Core.Components.Singleton.UxrAbstractSingleton`1::s_instance
	UxrManager_t0BB2898400B82F4D4701B135D91724026F5E602D* ___s_instance_29;
};

// UltimateXR.Animation.UxrAnimatedComponent`1<UltimateXR.Animation.Materials.UxrAnimatedMaterial>
struct UxrAnimatedComponent_1_tAD171420ECDE0E664842783D9878A75919E76C00  : public UxrComponent_tA6AC6651B5C934626995D87127173273775B1011
{
	// UltimateXR.Animation.UxrAnimationMode UltimateXR.Animation.UxrAnimatedComponent`1::_animationMode
	int32_t ____animationMode_28;
	// System.Single UltimateXR.Animation.UxrAnimatedComponent`1::_valueSpeedDurationSeconds
	float ____valueSpeedDurationSeconds_29;
	// UnityEngine.Vector4 UltimateXR.Animation.UxrAnimatedComponent`1::_valueSpeed
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____valueSpeed_30;
	// UnityEngine.Vector4 UltimateXR.Animation.UxrAnimatedComponent`1::_valueStart
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____valueStart_31;
	// UnityEngine.Vector4 UltimateXR.Animation.UxrAnimatedComponent`1::_valueEnd
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____valueEnd_32;
	// UnityEngine.Vector4 UltimateXR.Animation.UxrAnimatedComponent`1::_valueDisabled
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____valueDisabled_33;
	// UltimateXR.Animation.Interpolation.UxrInterpolationSettings UltimateXR.Animation.UxrAnimatedComponent`1::_interpolationSettings
	UxrInterpolationSettings_t29C9D7A3CF5AFE33C5A822F15FA5B3A1FD814004* ____interpolationSettings_34;
	// System.Single UltimateXR.Animation.UxrAnimatedComponent`1::_valueNoiseTimeStart
	float ____valueNoiseTimeStart_35;
	// System.Single UltimateXR.Animation.UxrAnimatedComponent`1::_valueNoiseDuration
	float ____valueNoiseDuration_36;
	// UnityEngine.Vector4 UltimateXR.Animation.UxrAnimatedComponent`1::_valueNoiseValueStart
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____valueNoiseValueStart_37;
	// UnityEngine.Vector4 UltimateXR.Animation.UxrAnimatedComponent`1::_valueNoiseValueEnd
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____valueNoiseValueEnd_38;
	// UnityEngine.Vector4 UltimateXR.Animation.UxrAnimatedComponent`1::_valueNoiseValueMin
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____valueNoiseValueMin_39;
	// UnityEngine.Vector4 UltimateXR.Animation.UxrAnimatedComponent`1::_valueNoiseValueMax
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____valueNoiseValueMax_40;
	// UnityEngine.Vector4 UltimateXR.Animation.UxrAnimatedComponent`1::_valueNoiseFrequency
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____valueNoiseFrequency_41;
	// UnityEngine.Vector4 UltimateXR.Animation.UxrAnimatedComponent`1::_valueNoiseOffset
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____valueNoiseOffset_42;
	// System.Boolean UltimateXR.Animation.UxrAnimatedComponent`1::_useUnscaledTime
	bool ____useUnscaledTime_43;
	// System.Action`1<T> UltimateXR.Animation.UxrAnimatedComponent`1::Finished
	Action_1_tB9C24371DF7374FF4574E2F23678EB42130A027E* ___Finished_44;
	// System.Boolean UltimateXR.Animation.UxrAnimatedComponent`1::<HasFinished>k__BackingField
	bool ___U3CHasFinishedU3Ek__BackingField_45;
	// System.Single UltimateXR.Animation.UxrAnimatedComponent`1::_startTime
	float ____startTime_46;
};

// UltimateXR.Core.Components.UxrComponent`1<UltimateXR.Examples.FullScene.Lab.Battery>
struct UxrComponent_1_t0177E8E822D7C02D38A1E98EF35754D556BDD098  : public UxrComponent_tA6AC6651B5C934626995D87127173273775B1011
{
};

struct UxrComponent_1_t0177E8E822D7C02D38A1E98EF35754D556BDD098_StaticFields
{
	// System.Action`1<T> UltimateXR.Core.Components.UxrComponent`1::GlobalRegistering
	Action_1_t89576CBA17C6D94FB54495FF1A0C7EAF7D85D958* ___GlobalRegistering_28;
	// System.Action`1<T> UltimateXR.Core.Components.UxrComponent`1::GlobalRegistered
	Action_1_t89576CBA17C6D94FB54495FF1A0C7EAF7D85D958* ___GlobalRegistered_29;
	// System.Action`1<T> UltimateXR.Core.Components.UxrComponent`1::GlobalUnregistering
	Action_1_t89576CBA17C6D94FB54495FF1A0C7EAF7D85D958* ___GlobalUnregistering_30;
	// System.Action`1<T> UltimateXR.Core.Components.UxrComponent`1::GlobalUnregistered
	Action_1_t89576CBA17C6D94FB54495FF1A0C7EAF7D85D958* ___GlobalUnregistered_31;
	// System.Action`1<T> UltimateXR.Core.Components.UxrComponent`1::GlobalEnabled
	Action_1_t89576CBA17C6D94FB54495FF1A0C7EAF7D85D958* ___GlobalEnabled_32;
	// System.Action`1<T> UltimateXR.Core.Components.UxrComponent`1::GlobalDisabled
	Action_1_t89576CBA17C6D94FB54495FF1A0C7EAF7D85D958* ___GlobalDisabled_33;
	// System.Collections.Generic.List`1<T> UltimateXR.Core.Components.UxrComponent`1::s_typeComponents
	List_1_tBB73D03DB2445501C733D170A2DBC4755DF0E525* ___s_typeComponents_34;
};

// UltimateXR.Core.Components.UxrComponent`1<UltimateXR.Examples.FullScene.Lab.BatteryAnchor>
struct UxrComponent_1_t87BAA908145649D47C98BE530A9F80A805F9E90F  : public UxrComponent_tA6AC6651B5C934626995D87127173273775B1011
{
};

struct UxrComponent_1_t87BAA908145649D47C98BE530A9F80A805F9E90F_StaticFields
{
	// System.Action`1<T> UltimateXR.Core.Components.UxrComponent`1::GlobalRegistering
	Action_1_t349E59A100AB96E28E47AA0483759EF8D440B279* ___GlobalRegistering_28;
	// System.Action`1<T> UltimateXR.Core.Components.UxrComponent`1::GlobalRegistered
	Action_1_t349E59A100AB96E28E47AA0483759EF8D440B279* ___GlobalRegistered_29;
	// System.Action`1<T> UltimateXR.Core.Components.UxrComponent`1::GlobalUnregistering
	Action_1_t349E59A100AB96E28E47AA0483759EF8D440B279* ___GlobalUnregistering_30;
	// System.Action`1<T> UltimateXR.Core.Components.UxrComponent`1::GlobalUnregistered
	Action_1_t349E59A100AB96E28E47AA0483759EF8D440B279* ___GlobalUnregistered_31;
	// System.Action`1<T> UltimateXR.Core.Components.UxrComponent`1::GlobalEnabled
	Action_1_t349E59A100AB96E28E47AA0483759EF8D440B279* ___GlobalEnabled_32;
	// System.Action`1<T> UltimateXR.Core.Components.UxrComponent`1::GlobalDisabled
	Action_1_t349E59A100AB96E28E47AA0483759EF8D440B279* ___GlobalDisabled_33;
	// System.Collections.Generic.List`1<T> UltimateXR.Core.Components.UxrComponent`1::s_typeComponents
	List_1_t1D8704DCF3B47D669BED6EFE8C5D12D2F7C21126* ___s_typeComponents_34;
};

// UltimateXR.Core.Components.UxrComponent`1<UltimateXR.Examples.FullScene.Lab.GeneratorDoor>
struct UxrComponent_1_tFF860D099F37155A76017CCC0C7DE9B4C0AE9E3C  : public UxrComponent_tA6AC6651B5C934626995D87127173273775B1011
{
};

struct UxrComponent_1_tFF860D099F37155A76017CCC0C7DE9B4C0AE9E3C_StaticFields
{
	// System.Action`1<T> UltimateXR.Core.Components.UxrComponent`1::GlobalRegistering
	Action_1_t73C2CF05BDBE1BAF6BB81B67F70C06531DD12716* ___GlobalRegistering_28;
	// System.Action`1<T> UltimateXR.Core.Components.UxrComponent`1::GlobalRegistered
	Action_1_t73C2CF05BDBE1BAF6BB81B67F70C06531DD12716* ___GlobalRegistered_29;
	// System.Action`1<T> UltimateXR.Core.Components.UxrComponent`1::GlobalUnregistering
	Action_1_t73C2CF05BDBE1BAF6BB81B67F70C06531DD12716* ___GlobalUnregistering_30;
	// System.Action`1<T> UltimateXR.Core.Components.UxrComponent`1::GlobalUnregistered
	Action_1_t73C2CF05BDBE1BAF6BB81B67F70C06531DD12716* ___GlobalUnregistered_31;
	// System.Action`1<T> UltimateXR.Core.Components.UxrComponent`1::GlobalEnabled
	Action_1_t73C2CF05BDBE1BAF6BB81B67F70C06531DD12716* ___GlobalEnabled_32;
	// System.Action`1<T> UltimateXR.Core.Components.UxrComponent`1::GlobalDisabled
	Action_1_t73C2CF05BDBE1BAF6BB81B67F70C06531DD12716* ___GlobalDisabled_33;
	// System.Collections.Generic.List`1<T> UltimateXR.Core.Components.UxrComponent`1::s_typeComponents
	List_1_tF5DA45F2046E96028DFCB9CA96E23765685CC86C* ___s_typeComponents_34;
};

// UltimateXR.Core.Components.UxrComponent`1<UltimateXR.Examples.FullScene.Lab.SpringOnRelease>
struct UxrComponent_1_t10799AA51BDA0E43DE85ADABD838FE8BC921424C  : public UxrComponent_tA6AC6651B5C934626995D87127173273775B1011
{
};

struct UxrComponent_1_t10799AA51BDA0E43DE85ADABD838FE8BC921424C_StaticFields
{
	// System.Action`1<T> UltimateXR.Core.Components.UxrComponent`1::GlobalRegistering
	Action_1_t9B55287769D9C2F97CD6FB721E6067CBC8FFAF4F* ___GlobalRegistering_28;
	// System.Action`1<T> UltimateXR.Core.Components.UxrComponent`1::GlobalRegistered
	Action_1_t9B55287769D9C2F97CD6FB721E6067CBC8FFAF4F* ___GlobalRegistered_29;
	// System.Action`1<T> UltimateXR.Core.Components.UxrComponent`1::GlobalUnregistering
	Action_1_t9B55287769D9C2F97CD6FB721E6067CBC8FFAF4F* ___GlobalUnregistering_30;
	// System.Action`1<T> UltimateXR.Core.Components.UxrComponent`1::GlobalUnregistered
	Action_1_t9B55287769D9C2F97CD6FB721E6067CBC8FFAF4F* ___GlobalUnregistered_31;
	// System.Action`1<T> UltimateXR.Core.Components.UxrComponent`1::GlobalEnabled
	Action_1_t9B55287769D9C2F97CD6FB721E6067CBC8FFAF4F* ___GlobalEnabled_32;
	// System.Action`1<T> UltimateXR.Core.Components.UxrComponent`1::GlobalDisabled
	Action_1_t9B55287769D9C2F97CD6FB721E6067CBC8FFAF4F* ___GlobalDisabled_33;
	// System.Collections.Generic.List`1<T> UltimateXR.Core.Components.UxrComponent`1::s_typeComponents
	List_1_tAD8AFB6A06FBCDFE9144E7CBB1B2DC1DF331A886* ___s_typeComponents_34;
};

// UltimateXR.Core.Components.UxrComponent`1<UltimateXR.Avatar.UxrAvatar>
struct UxrComponent_1_t1C29BA458B98CA30928C97A5977DB00D5F6387F6  : public UxrComponent_tA6AC6651B5C934626995D87127173273775B1011
{
};

struct UxrComponent_1_t1C29BA458B98CA30928C97A5977DB00D5F6387F6_StaticFields
{
	// System.Action`1<T> UltimateXR.Core.Components.UxrComponent`1::GlobalRegistering
	Action_1_t4089C4B289DC5DCABD41003947B04E054DA74115* ___GlobalRegistering_28;
	// System.Action`1<T> UltimateXR.Core.Components.UxrComponent`1::GlobalRegistered
	Action_1_t4089C4B289DC5DCABD41003947B04E054DA74115* ___GlobalRegistered_29;
	// System.Action`1<T> UltimateXR.Core.Components.UxrComponent`1::GlobalUnregistering
	Action_1_t4089C4B289DC5DCABD41003947B04E054DA74115* ___GlobalUnregistering_30;
	// System.Action`1<T> UltimateXR.Core.Components.UxrComponent`1::GlobalUnregistered
	Action_1_t4089C4B289DC5DCABD41003947B04E054DA74115* ___GlobalUnregistered_31;
	// System.Action`1<T> UltimateXR.Core.Components.UxrComponent`1::GlobalEnabled
	Action_1_t4089C4B289DC5DCABD41003947B04E054DA74115* ___GlobalEnabled_32;
	// System.Action`1<T> UltimateXR.Core.Components.UxrComponent`1::GlobalDisabled
	Action_1_t4089C4B289DC5DCABD41003947B04E054DA74115* ___GlobalDisabled_33;
	// System.Collections.Generic.List`1<T> UltimateXR.Core.Components.UxrComponent`1::s_typeComponents
	List_1_tC29D5829B8DE391E88531CD063133CA32CFC5EF4* ___s_typeComponents_34;
};

// UltimateXR.Core.Components.UxrComponent`1<UltimateXR.Devices.UxrControllerInput>
struct UxrComponent_1_tE736834280774158FC79F78E62275856F6F36A30  : public UxrComponent_tA6AC6651B5C934626995D87127173273775B1011
{
};

struct UxrComponent_1_tE736834280774158FC79F78E62275856F6F36A30_StaticFields
{
	// System.Action`1<T> UltimateXR.Core.Components.UxrComponent`1::GlobalRegistering
	Action_1_t96262DA2D42FC90618C7F2B69C8B5FC5A4F8F119* ___GlobalRegistering_28;
	// System.Action`1<T> UltimateXR.Core.Components.UxrComponent`1::GlobalRegistered
	Action_1_t96262DA2D42FC90618C7F2B69C8B5FC5A4F8F119* ___GlobalRegistered_29;
	// System.Action`1<T> UltimateXR.Core.Components.UxrComponent`1::GlobalUnregistering
	Action_1_t96262DA2D42FC90618C7F2B69C8B5FC5A4F8F119* ___GlobalUnregistering_30;
	// System.Action`1<T> UltimateXR.Core.Components.UxrComponent`1::GlobalUnregistered
	Action_1_t96262DA2D42FC90618C7F2B69C8B5FC5A4F8F119* ___GlobalUnregistered_31;
	// System.Action`1<T> UltimateXR.Core.Components.UxrComponent`1::GlobalEnabled
	Action_1_t96262DA2D42FC90618C7F2B69C8B5FC5A4F8F119* ___GlobalEnabled_32;
	// System.Action`1<T> UltimateXR.Core.Components.UxrComponent`1::GlobalDisabled
	Action_1_t96262DA2D42FC90618C7F2B69C8B5FC5A4F8F119* ___GlobalDisabled_33;
	// System.Collections.Generic.List`1<T> UltimateXR.Core.Components.UxrComponent`1::s_typeComponents
	List_1_t3872AF20CECAFF679F76C78E671420BE71816F06* ___s_typeComponents_34;
};

// UltimateXR.Core.Components.UxrComponent`1<UltimateXR.Manipulation.UxrGrabbableObject>
struct UxrComponent_1_t914D68FED52C798AE33FCCDE016E501810C8634E  : public UxrComponent_tA6AC6651B5C934626995D87127173273775B1011
{
};

struct UxrComponent_1_t914D68FED52C798AE33FCCDE016E501810C8634E_StaticFields
{
	// System.Action`1<T> UltimateXR.Core.Components.UxrComponent`1::GlobalRegistering
	Action_1_tA75F39D99B16D762112691040DAE1E193456089E* ___GlobalRegistering_28;
	// System.Action`1<T> UltimateXR.Core.Components.UxrComponent`1::GlobalRegistered
	Action_1_tA75F39D99B16D762112691040DAE1E193456089E* ___GlobalRegistered_29;
	// System.Action`1<T> UltimateXR.Core.Components.UxrComponent`1::GlobalUnregistering
	Action_1_tA75F39D99B16D762112691040DAE1E193456089E* ___GlobalUnregistering_30;
	// System.Action`1<T> UltimateXR.Core.Components.UxrComponent`1::GlobalUnregistered
	Action_1_tA75F39D99B16D762112691040DAE1E193456089E* ___GlobalUnregistered_31;
	// System.Action`1<T> UltimateXR.Core.Components.UxrComponent`1::GlobalEnabled
	Action_1_tA75F39D99B16D762112691040DAE1E193456089E* ___GlobalEnabled_32;
	// System.Action`1<T> UltimateXR.Core.Components.UxrComponent`1::GlobalDisabled
	Action_1_tA75F39D99B16D762112691040DAE1E193456089E* ___GlobalDisabled_33;
	// System.Collections.Generic.List`1<T> UltimateXR.Core.Components.UxrComponent`1::s_typeComponents
	List_1_t809F0706323745E70935A241AAF92314A58AB368* ___s_typeComponents_34;
};

// UltimateXR.Core.Components.UxrComponent`1<UltimateXR.Manipulation.UxrGrabbableObjectAnchor>
struct UxrComponent_1_t06BA21D6AFFD5CBE70B6B7C1F4BA8953C9BDF409  : public UxrComponent_tA6AC6651B5C934626995D87127173273775B1011
{
};

struct UxrComponent_1_t06BA21D6AFFD5CBE70B6B7C1F4BA8953C9BDF409_StaticFields
{
	// System.Action`1<T> UltimateXR.Core.Components.UxrComponent`1::GlobalRegistering
	Action_1_tDE123785D9881C9DA0E89F71F4053E7EB6B2D1F9* ___GlobalRegistering_28;
	// System.Action`1<T> UltimateXR.Core.Components.UxrComponent`1::GlobalRegistered
	Action_1_tDE123785D9881C9DA0E89F71F4053E7EB6B2D1F9* ___GlobalRegistered_29;
	// System.Action`1<T> UltimateXR.Core.Components.UxrComponent`1::GlobalUnregistering
	Action_1_tDE123785D9881C9DA0E89F71F4053E7EB6B2D1F9* ___GlobalUnregistering_30;
	// System.Action`1<T> UltimateXR.Core.Components.UxrComponent`1::GlobalUnregistered
	Action_1_tDE123785D9881C9DA0E89F71F4053E7EB6B2D1F9* ___GlobalUnregistered_31;
	// System.Action`1<T> UltimateXR.Core.Components.UxrComponent`1::GlobalEnabled
	Action_1_tDE123785D9881C9DA0E89F71F4053E7EB6B2D1F9* ___GlobalEnabled_32;
	// System.Action`1<T> UltimateXR.Core.Components.UxrComponent`1::GlobalDisabled
	Action_1_tDE123785D9881C9DA0E89F71F4053E7EB6B2D1F9* ___GlobalDisabled_33;
	// System.Collections.Generic.List`1<T> UltimateXR.Core.Components.UxrComponent`1::s_typeComponents
	List_1_tB983CD585A425CB1F906A2644B2CFAD49EB58951* ___s_typeComponents_34;
};

// UltimateXR.Core.Components.UxrComponent`1<UltimateXR.Manipulation.UxrGrabber>
struct UxrComponent_1_t5F2341567C6F7DE219FA5408B564ED42345D16DA  : public UxrComponent_tA6AC6651B5C934626995D87127173273775B1011
{
};

struct UxrComponent_1_t5F2341567C6F7DE219FA5408B564ED42345D16DA_StaticFields
{
	// System.Action`1<T> UltimateXR.Core.Components.UxrComponent`1::GlobalRegistering
	Action_1_t51A6A6CFB090E1F2DEFEE2D2267D92384C89F952* ___GlobalRegistering_28;
	// System.Action`1<T> UltimateXR.Core.Components.UxrComponent`1::GlobalRegistered
	Action_1_t51A6A6CFB090E1F2DEFEE2D2267D92384C89F952* ___GlobalRegistered_29;
	// System.Action`1<T> UltimateXR.Core.Components.UxrComponent`1::GlobalUnregistering
	Action_1_t51A6A6CFB090E1F2DEFEE2D2267D92384C89F952* ___GlobalUnregistering_30;
	// System.Action`1<T> UltimateXR.Core.Components.UxrComponent`1::GlobalUnregistered
	Action_1_t51A6A6CFB090E1F2DEFEE2D2267D92384C89F952* ___GlobalUnregistered_31;
	// System.Action`1<T> UltimateXR.Core.Components.UxrComponent`1::GlobalEnabled
	Action_1_t51A6A6CFB090E1F2DEFEE2D2267D92384C89F952* ___GlobalEnabled_32;
	// System.Action`1<T> UltimateXR.Core.Components.UxrComponent`1::GlobalDisabled
	Action_1_t51A6A6CFB090E1F2DEFEE2D2267D92384C89F952* ___GlobalDisabled_33;
	// System.Collections.Generic.List`1<T> UltimateXR.Core.Components.UxrComponent`1::s_typeComponents
	List_1_tB21D30BDF9BE24BEB95FB2C03425339CA088830C* ___s_typeComponents_34;
};

// UltimateXR.Core.Components.UxrComponent`1<UltimateXR.Haptics.Helpers.UxrManipulationHapticFeedback>
struct UxrComponent_1_t69C9E50C3F4FBF43A31E369432BF322DA94774F3  : public UxrComponent_tA6AC6651B5C934626995D87127173273775B1011
{
};

struct UxrComponent_1_t69C9E50C3F4FBF43A31E369432BF322DA94774F3_StaticFields
{
	// System.Action`1<T> UltimateXR.Core.Components.UxrComponent`1::GlobalRegistering
	Action_1_tE6975599A4352C69FFEE6A5B6060D24C268CA71F* ___GlobalRegistering_28;
	// System.Action`1<T> UltimateXR.Core.Components.UxrComponent`1::GlobalRegistered
	Action_1_tE6975599A4352C69FFEE6A5B6060D24C268CA71F* ___GlobalRegistered_29;
	// System.Action`1<T> UltimateXR.Core.Components.UxrComponent`1::GlobalUnregistering
	Action_1_tE6975599A4352C69FFEE6A5B6060D24C268CA71F* ___GlobalUnregistering_30;
	// System.Action`1<T> UltimateXR.Core.Components.UxrComponent`1::GlobalUnregistered
	Action_1_tE6975599A4352C69FFEE6A5B6060D24C268CA71F* ___GlobalUnregistered_31;
	// System.Action`1<T> UltimateXR.Core.Components.UxrComponent`1::GlobalEnabled
	Action_1_tE6975599A4352C69FFEE6A5B6060D24C268CA71F* ___GlobalEnabled_32;
	// System.Action`1<T> UltimateXR.Core.Components.UxrComponent`1::GlobalDisabled
	Action_1_tE6975599A4352C69FFEE6A5B6060D24C268CA71F* ___GlobalDisabled_33;
	// System.Collections.Generic.List`1<T> UltimateXR.Core.Components.UxrComponent`1::s_typeComponents
	List_1_t5772A439223A614820383CAB9DC15DD81F1D5CC9* ___s_typeComponents_34;
};

// UltimateXR.Examples.FullScene.Doors.AutomaticDoor
struct AutomaticDoor_t1300394E882F63AD7DCD712530F55D334F86B1FC  : public UxrComponent_tA6AC6651B5C934626995D87127173273775B1011
{
	// UnityEngine.Transform UltimateXR.Examples.FullScene.Doors.AutomaticDoor::_floorCenter
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____floorCenter_28;
	// UnityEngine.Transform UltimateXR.Examples.FullScene.Doors.AutomaticDoor::_leftDoor
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____leftDoor_29;
	// UnityEngine.Transform UltimateXR.Examples.FullScene.Doors.AutomaticDoor::_rightDoor
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____rightDoor_30;
	// UnityEngine.Vector3 UltimateXR.Examples.FullScene.Doors.AutomaticDoor::_leftOpenLocalOffset
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____leftOpenLocalOffset_31;
	// UnityEngine.Vector3 UltimateXR.Examples.FullScene.Doors.AutomaticDoor::_rightOpenLocalOffset
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____rightOpenLocalOffset_32;
	// System.Single UltimateXR.Examples.FullScene.Doors.AutomaticDoor::_openDelaySeconds
	float ____openDelaySeconds_33;
	// System.Single UltimateXR.Examples.FullScene.Doors.AutomaticDoor::_openDurationSeconds
	float ____openDurationSeconds_34;
	// System.Single UltimateXR.Examples.FullScene.Doors.AutomaticDoor::_openDistance
	float ____openDistance_35;
	// System.Single UltimateXR.Examples.FullScene.Doors.AutomaticDoor::_closeDistance
	float ____closeDistance_36;
	// UltimateXR.Animation.Interpolation.UxrEasing UltimateXR.Examples.FullScene.Doors.AutomaticDoor::_openEasing
	int32_t ____openEasing_37;
	// UltimateXR.Animation.Interpolation.UxrEasing UltimateXR.Examples.FullScene.Doors.AutomaticDoor::_closeEasing
	int32_t ____closeEasing_38;
	// UltimateXR.Audio.UxrAudioSample UltimateXR.Examples.FullScene.Doors.AutomaticDoor::_audioOpen
	UxrAudioSample_t01A5C41E145D2E83FE924FFFFBBC451376881ED9* ____audioOpen_39;
	// UltimateXR.Audio.UxrAudioSample UltimateXR.Examples.FullScene.Doors.AutomaticDoor::_audioClose
	UxrAudioSample_t01A5C41E145D2E83FE924FFFFBBC451376881ED9* ____audioClose_40;
	// System.Single UltimateXR.Examples.FullScene.Doors.AutomaticDoor::<OpenValue>k__BackingField
	float ___U3COpenValueU3Ek__BackingField_41;
	// System.Boolean UltimateXR.Examples.FullScene.Doors.AutomaticDoor::<IsOpen>k__BackingField
	bool ___U3CIsOpenU3Ek__BackingField_42;
	// System.Single UltimateXR.Examples.FullScene.Doors.AutomaticDoor::_openDelayTimer
	float ____openDelayTimer_43;
	// UnityEngine.Vector3 UltimateXR.Examples.FullScene.Doors.AutomaticDoor::_leftStartLocalPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____leftStartLocalPosition_44;
	// UnityEngine.Vector3 UltimateXR.Examples.FullScene.Doors.AutomaticDoor::_rightStartLocalPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____rightStartLocalPosition_45;
};

// UltimateXR.Examples.FullScene.GlobalLogic
struct GlobalLogic_t200876C43EB8393A83FDCFA472C9E734546F9EEB  : public UxrComponent_tA6AC6651B5C934626995D87127173273775B1011
{
	// UnityEngine.Transform UltimateXR.Examples.FullScene.GlobalLogic::_spawnMain
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____spawnMain_28;
	// UnityEngine.Transform UltimateXR.Examples.FullScene.GlobalLogic::_spawnLab
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____spawnLab_29;
	// UnityEngine.Transform UltimateXR.Examples.FullScene.GlobalLogic::_spawnControllers
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____spawnControllers_30;
	// UnityEngine.Transform UltimateXR.Examples.FullScene.GlobalLogic::_spawnShootingRange
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____spawnShootingRange_31;
	// UnityEngine.BoxCollider UltimateXR.Examples.FullScene.GlobalLogic::_boxSpawnRoomMirror
	BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* ____boxSpawnRoomMirror_32;
	// UnityEngine.BoxCollider UltimateXR.Examples.FullScene.GlobalLogic::_boxSpawnRoomDoor
	BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* ____boxSpawnRoomDoor_33;
	// UnityEngine.BoxCollider UltimateXR.Examples.FullScene.GlobalLogic::_boxCentralRoom
	BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* ____boxCentralRoom_34;
	// UnityEngine.BoxCollider UltimateXR.Examples.FullScene.GlobalLogic::_boxLabRoom
	BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* ____boxLabRoom_35;
	// UnityEngine.BoxCollider UltimateXR.Examples.FullScene.GlobalLogic::_boxControllerRoom
	BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* ____boxControllerRoom_36;
	// UnityEngine.BoxCollider UltimateXR.Examples.FullScene.GlobalLogic::_boxShootingRange
	BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* ____boxShootingRange_37;
	// UnityEngine.GameObject UltimateXR.Examples.FullScene.GlobalLogic::_rootUnrestrictedArea
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____rootUnrestrictedArea_38;
	// UnityEngine.GameObject UltimateXR.Examples.FullScene.GlobalLogic::_rootRestrictedArea
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____rootRestrictedArea_39;
	// UltimateXR.Core.Components.UxrComponent UltimateXR.Examples.FullScene.GlobalLogic::_mirrorComponent
	UxrComponent_tA6AC6651B5C934626995D87127173273775B1011* ____mirrorComponent_40;
	// UnityEngine.GameObject UltimateXR.Examples.FullScene.GlobalLogic::_controllerRoomElements
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____controllerRoomElements_41;
	// UnityEngine.GameObject UltimateXR.Examples.FullScene.GlobalLogic::_rootLabElements
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____rootLabElements_42;
	// UltimateXR.Examples.FullScene.Doors.ArmoredDoor UltimateXR.Examples.FullScene.GlobalLogic::_armoredDoor
	ArmoredDoor_t8B70669952214138BE0A4C9684AFA4A01E27E439* ____armoredDoor_43;
};

// UltimateXR.Examples.FullScene.Doors.HandScanner
struct HandScanner_t42A4D993924FECBCA1CFEA7D1E0335ADAB95D3D6  : public UxrComponent_tA6AC6651B5C934626995D87127173273775B1011
{
	// UltimateXR.Examples.FullScene.Doors.ArmoredDoor UltimateXR.Examples.FullScene.Doors.HandScanner::_armoredDoor
	ArmoredDoor_t8B70669952214138BE0A4C9684AFA4A01E27E439* ____armoredDoor_28;
	// UnityEngine.Renderer UltimateXR.Examples.FullScene.Doors.HandScanner::_validLight
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ____validLight_29;
	// UnityEngine.Renderer UltimateXR.Examples.FullScene.Doors.HandScanner::_invalidLight
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ____invalidLight_30;
	// UnityEngine.Renderer UltimateXR.Examples.FullScene.Doors.HandScanner::_scannerBeam
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ____scannerBeam_31;
	// UnityEngine.Vector3 UltimateXR.Examples.FullScene.Doors.HandScanner::_scannerBeamTopLocalPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____scannerBeamTopLocalPos_32;
	// UnityEngine.Vector3 UltimateXR.Examples.FullScene.Doors.HandScanner::_scannerBeamBottomLocalPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____scannerBeamBottomLocalPos_33;
	// System.Int32 UltimateXR.Examples.FullScene.Doors.HandScanner::_beamCount
	int32_t ____beamCount_34;
	// System.Single UltimateXR.Examples.FullScene.Doors.HandScanner::_beamTrailDelay
	float ____beamTrailDelay_35;
	// UltimateXR.Animation.Interpolation.UxrEasing UltimateXR.Examples.FullScene.Doors.HandScanner::_beamEeasing
	int32_t ____beamEeasing_36;
	// UnityEngine.Vector3 UltimateXR.Examples.FullScene.Doors.HandScanner::_beamMaxScale
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____beamMaxScale_37;
	// UnityEngine.Renderer UltimateXR.Examples.FullScene.Doors.HandScanner::_handRendererLeft
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ____handRendererLeft_38;
	// UnityEngine.Renderer UltimateXR.Examples.FullScene.Doors.HandScanner::_handRendererRight
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ____handRendererRight_39;
	// UltimateXR.Core.UxrHandSide UltimateXR.Examples.FullScene.Doors.HandScanner::_defaultHandSide
	int32_t ____defaultHandSide_40;
	// UnityEngine.BoxCollider UltimateXR.Examples.FullScene.Doors.HandScanner::_handBoxValidPos
	BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* ____handBoxValidPos_41;
	// System.Single UltimateXR.Examples.FullScene.Doors.HandScanner::_scanSeconds
	float ____scanSeconds_42;
	// System.Single UltimateXR.Examples.FullScene.Doors.HandScanner::_resultSeconds
	float ____resultSeconds_43;
	// UltimateXR.Audio.UxrAudioSample UltimateXR.Examples.FullScene.Doors.HandScanner::_audioScan
	UxrAudioSample_t01A5C41E145D2E83FE924FFFFBBC451376881ED9* ____audioScan_44;
	// UltimateXR.Audio.UxrAudioSample UltimateXR.Examples.FullScene.Doors.HandScanner::_audioError
	UxrAudioSample_t01A5C41E145D2E83FE924FFFFBBC451376881ED9* ____audioError_45;
	// UltimateXR.Audio.UxrAudioSample UltimateXR.Examples.FullScene.Doors.HandScanner::_audioOk
	UxrAudioSample_t01A5C41E145D2E83FE924FFFFBBC451376881ED9* ____audioOk_46;
	// System.Action`3<UltimateXR.Avatar.UxrAvatar,UltimateXR.Core.UxrHandSide,System.Boolean> UltimateXR.Examples.FullScene.Doors.HandScanner::HandScanned
	Action_3_t5D0E6372A9C59C311A4BF2EE5AD6784EB7F2913C* ___HandScanned_47;
	// System.Collections.Generic.List`1<UnityEngine.Renderer> UltimateXR.Examples.FullScene.Doors.HandScanner::_beams
	List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93* ____beams_49;
	// System.Boolean UltimateXR.Examples.FullScene.Doors.HandScanner::_scanReady
	bool ____scanReady_50;
	// System.Single UltimateXR.Examples.FullScene.Doors.HandScanner::_scanTimer
	float ____scanTimer_51;
	// UnityEngine.Vector3 UltimateXR.Examples.FullScene.Doors.HandScanner::_beamScale
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____beamScale_52;
	// UltimateXR.Core.UxrHandSide UltimateXR.Examples.FullScene.Doors.HandScanner::_handSide
	int32_t ____handSide_53;
	// UnityEngine.Color UltimateXR.Examples.FullScene.Doors.HandScanner::_colorValid
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ____colorValid_54;
	// UnityEngine.Color UltimateXR.Examples.FullScene.Doors.HandScanner::_colorInvalid
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ____colorInvalid_55;
};

// UltimateXR.Examples.FullScene.Lab.Lamp
struct Lamp_t17C08BD87F9AAA690D376991BEC03122E7B9124A  : public UxrComponent_tA6AC6651B5C934626995D87127173273775B1011
{
	// UltimateXR.Manipulation.UxrGrabbableObjectAnchor[] UltimateXR.Examples.FullScene.Lab.Lamp::_sockets
	UxrGrabbableObjectAnchorU5BU5D_t086D051370506C7B677EA2AFD5BFCDDEEC4A12A7* ____sockets_28;
	// UnityEngine.Light UltimateXR.Examples.FullScene.Lab.Lamp::_light
	Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ____light_29;
};

// UltimateXR.Examples.FullScene.Lab.Laser
struct Laser_t7D7E61C4CF345606101C0ACC8089A4E8B5A7E74B  : public UxrComponent_tA6AC6651B5C934626995D87127173273775B1011
{
	// UnityEngine.Transform UltimateXR.Examples.FullScene.Lab.Laser::_laserSource
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____laserSource_28;
	// UnityEngine.LayerMask UltimateXR.Examples.FullScene.Lab.Laser::_collisionMask
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ____collisionMask_29;
	// System.Single UltimateXR.Examples.FullScene.Lab.Laser::_laserRayWidth
	float ____laserRayWidth_30;
	// System.Single UltimateXR.Examples.FullScene.Lab.Laser::_laserRayLength
	float ____laserRayLength_31;
	// UnityEngine.Color UltimateXR.Examples.FullScene.Lab.Laser::_laserColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ____laserColor_32;
	// System.Single UltimateXR.Examples.FullScene.Lab.Laser::_laserBurnDelaySeconds
	float ____laserBurnDelaySeconds_33;
	// System.Single UltimateXR.Examples.FullScene.Lab.Laser::_laserBurnSpeedThreshold
	float ____laserBurnSpeedThreshold_34;
	// UnityEngine.Color UltimateXR.Examples.FullScene.Lab.Laser::_laserBurnColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ____laserBurnColor_35;
	// System.Single UltimateXR.Examples.FullScene.Lab.Laser::_laserBurnVertexDistance
	float ____laserBurnVertexDistance_36;
	// System.Single UltimateXR.Examples.FullScene.Lab.Laser::_laserBurnHeightOffset
	float ____laserBurnHeightOffset_37;
	// System.Single UltimateXR.Examples.FullScene.Lab.Laser::_laserBurnDurationFadeStart
	float ____laserBurnDurationFadeStart_38;
	// System.Single UltimateXR.Examples.FullScene.Lab.Laser::_laserBurnDurationFadeEnd
	float ____laserBurnDurationFadeEnd_39;
	// UnityEngine.Color UltimateXR.Examples.FullScene.Lab.Laser::_laserBurnIncandescentColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ____laserBurnIncandescentColor_40;
	// System.Single UltimateXR.Examples.FullScene.Lab.Laser::_laserBurnIncandescentDurationFadeEnd
	float ____laserBurnIncandescentDurationFadeEnd_41;
	// UnityEngine.ParticleSystem UltimateXR.Examples.FullScene.Lab.Laser::_laserBurnParticles
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ____laserBurnParticles_42;
	// System.Single UltimateXR.Examples.FullScene.Lab.Laser::_laserBurnParticlesHeightOffset
	float ____laserBurnParticlesHeightOffset_43;
	// System.Boolean UltimateXR.Examples.FullScene.Lab.Laser::_laserBurnReflectParticles
	bool ____laserBurnReflectParticles_44;
	// UnityEngine.GameObject UltimateXR.Examples.FullScene.Lab.Laser::_enableWhenLaserActive
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____enableWhenLaserActive_45;
	// UltimateXR.Manipulation.UxrGrabbableObject UltimateXR.Examples.FullScene.Lab.Laser::_triggerGrabbable
	UxrGrabbableObject_tCA9C5B90AC9CB9830D3D50AE51F7FF342511E3BC* ____triggerGrabbable_46;
	// UnityEngine.Transform UltimateXR.Examples.FullScene.Lab.Laser::_trigger
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____trigger_47;
	// UnityEngine.Vector3 UltimateXR.Examples.FullScene.Lab.Laser::_triggerOffset
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____triggerOffset_48;
	// UltimateXR.Haptics.Helpers.UxrFixedHapticFeedback UltimateXR.Examples.FullScene.Lab.Laser::_laserHaptics
	UxrFixedHapticFeedback_tB4275F8F9577DB366B776F01947C53E48F015FEE* ____laserHaptics_49;
	// UnityEngine.Vector3 UltimateXR.Examples.FullScene.Lab.Laser::_triggerInitialOffset
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____triggerInitialOffset_55;
	// UnityEngine.LineRenderer UltimateXR.Examples.FullScene.Lab.Laser::_laserLineRenderer
	LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* ____laserLineRenderer_56;
	// System.Collections.Generic.List`1<UltimateXR.Examples.FullScene.Lab.Laser/LaserBurn> UltimateXR.Examples.FullScene.Lab.Laser::_laserBurns
	List_1_t5BCE8DC4120D9E3C21A36514644646DBB9FBDE2F* ____laserBurns_57;
	// UnityEngine.Vector3 UltimateXR.Examples.FullScene.Lab.Laser::_lastLaserHitPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____lastLaserHitPosition_58;
	// System.Single UltimateXR.Examples.FullScene.Lab.Laser::_createBurnTimer
	float ____createBurnTimer_59;
};

// UltimateXR.Examples.FullScene.Lab.LightBulb
struct LightBulb_tD2997DB52DC01475297BAF83A889E14D2913D473  : public UxrComponent_tA6AC6651B5C934626995D87127173273775B1011
{
	// UltimateXR.Manipulation.UxrGrabbableObject UltimateXR.Examples.FullScene.Lab.LightBulb::_grabbableObject
	UxrGrabbableObject_tCA9C5B90AC9CB9830D3D50AE51F7FF342511E3BC* ____grabbableObject_28;
	// System.Single UltimateXR.Examples.FullScene.Lab.LightBulb::_lightIntensity
	float ____lightIntensity_29;
	// System.Boolean UltimateXR.Examples.FullScene.Lab.LightBulb::_isFaulty
	bool ____isFaulty_30;
	// UnityEngine.Color UltimateXR.Examples.FullScene.Lab.LightBulb::_emissiveDisabled
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ____emissiveDisabled_31;
	// UnityEngine.Color UltimateXR.Examples.FullScene.Lab.LightBulb::_emissiveEnabled
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ____emissiveEnabled_32;
	// UnityEngine.Material UltimateXR.Examples.FullScene.Lab.LightBulb::_material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ____material_33;
	// System.Single UltimateXR.Examples.FullScene.Lab.LightBulb::_randX
	float ____randX_34;
	// System.Single UltimateXR.Examples.FullScene.Lab.LightBulb::_randY
	float ____randY_35;
};

// UltimateXR.Examples.FullScene.Weapons.MagAmmoIndicator
struct MagAmmoIndicator_t8B07F09F92B9AA96AA4E615ED6443811B80EF9D4  : public UxrComponent_tA6AC6651B5C934626995D87127173273775B1011
{
	// System.Boolean UltimateXR.Examples.FullScene.Weapons.MagAmmoIndicator::_setValueOnStart
	bool ____setValueOnStart_28;
	// UnityEngine.Renderer UltimateXR.Examples.FullScene.Weapons.MagAmmoIndicator::_renderer
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ____renderer_29;
	// UltimateXR.Mechanics.Weapons.UxrFirearmMag UltimateXR.Examples.FullScene.Weapons.MagAmmoIndicator::_mag
	UxrFirearmMag_tBEA739C8C38E1746316937E4BCBC7471EA02EC5C* ____mag_31;
};

// UltimateXR.Mechanics.Weapons.UxrFirearmMag
struct UxrFirearmMag_tBEA739C8C38E1746316937E4BCBC7471EA02EC5C  : public UxrComponent_tA6AC6651B5C934626995D87127173273775B1011
{
	// System.Int32 UltimateXR.Mechanics.Weapons.UxrFirearmMag::_rounds
	int32_t ____rounds_28;
	// System.Int32 UltimateXR.Mechanics.Weapons.UxrFirearmMag::_capacity
	int32_t ____capacity_29;
	// System.Action UltimateXR.Mechanics.Weapons.UxrFirearmMag::RoundsChanged
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___RoundsChanged_30;
};

// UltimateXR.Haptics.Helpers.UxrFixedHapticFeedback
struct UxrFixedHapticFeedback_tB4275F8F9577DB366B776F01947C53E48F015FEE  : public UxrComponent_tA6AC6651B5C934626995D87127173273775B1011
{
	// UltimateXR.Core.UxrHandSide UltimateXR.Haptics.Helpers.UxrFixedHapticFeedback::_handSide
	int32_t ____handSide_28;
	// UltimateXR.Haptics.UxrHapticMode UltimateXR.Haptics.Helpers.UxrFixedHapticFeedback::_hapticMixMode
	int32_t ____hapticMixMode_29;
	// System.Single UltimateXR.Haptics.Helpers.UxrFixedHapticFeedback::_amplitude
	float ____amplitude_30;
	// System.Single UltimateXR.Haptics.Helpers.UxrFixedHapticFeedback::_frequency
	float ____frequency_31;
	// UnityEngine.Coroutine UltimateXR.Haptics.Helpers.UxrFixedHapticFeedback::_hapticsCoroutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ____hapticsCoroutine_33;
};

// UltimateXR.Core.Components.Composite.UxrAvatarComponent`1<UltimateXR.Devices.UxrControllerInput>
struct UxrAvatarComponent_1_t986427FE6CA909671B2AA25A2FB1B81932A8B417  : public UxrComponent_1_tE736834280774158FC79F78E62275856F6F36A30
{
	// UltimateXR.Avatar.UxrAvatar UltimateXR.Core.Components.Composite.UxrAvatarComponent`1::_avatar
	UxrAvatar_t880FC3AD5A9A30338CFDF4653C86343B16ACDE79* ____avatar_35;
};

// UltimateXR.Core.Components.Composite.UxrAvatarComponent`1<UltimateXR.Manipulation.UxrGrabber>
struct UxrAvatarComponent_1_t2D8119B812CF65EC273D2719764BF585BF91AD8C  : public UxrComponent_1_t5F2341567C6F7DE219FA5408B564ED42345D16DA
{
	// UltimateXR.Avatar.UxrAvatar UltimateXR.Core.Components.Composite.UxrAvatarComponent`1::_avatar
	UxrAvatar_t880FC3AD5A9A30338CFDF4653C86343B16ACDE79* ____avatar_35;
};

// UltimateXR.Core.Components.Composite.UxrGrabbableObjectComponent`1<UltimateXR.Examples.FullScene.Lab.Battery>
struct UxrGrabbableObjectComponent_1_tFE02A697C5B42FECE385B3A530702420DFC6E020  : public UxrComponent_1_t0177E8E822D7C02D38A1E98EF35754D556BDD098
{
	// UltimateXR.Manipulation.UxrGrabbableObject UltimateXR.Core.Components.Composite.UxrGrabbableObjectComponent`1::_grabbableObject
	UxrGrabbableObject_tCA9C5B90AC9CB9830D3D50AE51F7FF342511E3BC* ____grabbableObject_35;
};

// UltimateXR.Core.Components.Composite.UxrGrabbableObjectComponent`1<UltimateXR.Examples.FullScene.Lab.SpringOnRelease>
struct UxrGrabbableObjectComponent_1_tAE488CF95E619715F04F3337799454B1A8061678  : public UxrComponent_1_t10799AA51BDA0E43DE85ADABD838FE8BC921424C
{
	// UltimateXR.Manipulation.UxrGrabbableObject UltimateXR.Core.Components.Composite.UxrGrabbableObjectComponent`1::_grabbableObject
	UxrGrabbableObject_tCA9C5B90AC9CB9830D3D50AE51F7FF342511E3BC* ____grabbableObject_35;
};

// UltimateXR.Core.Components.Composite.UxrGrabbableObjectComponent`1<UltimateXR.Haptics.Helpers.UxrManipulationHapticFeedback>
struct UxrGrabbableObjectComponent_1_t6B5F4DCA9127AD35AFA33E38EDE099C2A84119A6  : public UxrComponent_1_t69C9E50C3F4FBF43A31E369432BF322DA94774F3
{
	// UltimateXR.Manipulation.UxrGrabbableObject UltimateXR.Core.Components.Composite.UxrGrabbableObjectComponent`1::_grabbableObject
	UxrGrabbableObject_tCA9C5B90AC9CB9830D3D50AE51F7FF342511E3BC* ____grabbableObject_35;
};

// UltimateXR.Core.Components.Singleton.UxrSingleton`1<UltimateXR.Manipulation.UxrGrabManager>
struct UxrSingleton_1_t69FF3999C26F83D1BB67BFC5B8C17A295E291FD6  : public UxrAbstractSingleton_1_t6B05F02927FFF2FD6E2CA419A09D4BA7E04674C1
{
};

// UltimateXR.Core.Components.Singleton.UxrSingleton`1<UltimateXR.Core.UxrManager>
struct UxrSingleton_1_t3E8B654D54DFF4B9BA74B5CA29791885A0133D33  : public UxrAbstractSingleton_1_tE3C28C78F715B05C7B89353B18CE9D5FED403A20
{
};

// UltimateXR.Examples.FullScene.Doors.ArmoredDoor
struct ArmoredDoor_t8B70669952214138BE0A4C9684AFA4A01E27E439  : public AutomaticDoor_t1300394E882F63AD7DCD712530F55D334F86B1FC
{
};

// UltimateXR.Examples.FullScene.Lab.BatteryAnchor
struct BatteryAnchor_t01234E44479A11E2168D9712174DA3B7B28ED114  : public UxrComponent_1_t87BAA908145649D47C98BE530A9F80A805F9E90F
{
	// UltimateXR.Manipulation.UxrGrabbableObjectAnchor UltimateXR.Examples.FullScene.Lab.BatteryAnchor::_batteryAnchor
	UxrGrabbableObjectAnchor_tE7110AF7891C09542149FC793D1C0C9A9D95F66A* ____batteryAnchor_35;
};

// UltimateXR.Examples.FullScene.Lab.GeneratorDoor
struct GeneratorDoor_t33EB8ADB2139695767CD1080E775EA94B6DD3037  : public UxrComponent_1_tFF860D099F37155A76017CCC0C7DE9B4C0AE9E3C
{
	// UltimateXR.Examples.FullScene.Lab.BatteryAnchor UltimateXR.Examples.FullScene.Lab.GeneratorDoor::_batteryAnchor
	BatteryAnchor_t01234E44479A11E2168D9712174DA3B7B28ED114* ____batteryAnchor_35;
	// UltimateXR.Manipulation.UxrGrabbableObject UltimateXR.Examples.FullScene.Lab.GeneratorDoor::_grabbableLock
	UxrGrabbableObject_tCA9C5B90AC9CB9830D3D50AE51F7FF342511E3BC* ____grabbableLock_36;
	// UnityEngine.Transform[] UltimateXR.Examples.FullScene.Lab.GeneratorDoor::_locks
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ____locks_37;
	// System.Single UltimateXR.Examples.FullScene.Lab.GeneratorDoor::_lockHandleAngleClosed
	float ____lockHandleAngleClosed_38;
	// System.Single UltimateXR.Examples.FullScene.Lab.GeneratorDoor::_lockHandleAngleOpen
	float ____lockHandleAngleOpen_39;
	// System.Boolean UltimateXR.Examples.FullScene.Lab.GeneratorDoor::_startLockOpen
	bool ____startLockOpen_40;
	// System.Boolean UltimateXR.Examples.FullScene.Lab.GeneratorDoor::<IsBatteryInContact>k__BackingField
	bool ___U3CIsBatteryInContactU3Ek__BackingField_41;
	// System.Boolean UltimateXR.Examples.FullScene.Lab.GeneratorDoor::_isBatteryInContact
	bool ____isBatteryInContact_42;
	// UnityEngine.Quaternion[] UltimateXR.Examples.FullScene.Lab.GeneratorDoor::_lockInitialRotation
	QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* ____lockInitialRotation_43;
};

// UltimateXR.Animation.Materials.UxrAnimatedMaterial
struct UxrAnimatedMaterial_t6AA0B6F355D7F547152A8A3BA66E81808300FDB0  : public UxrAnimatedComponent_1_tAD171420ECDE0E664842783D9878A75919E76C00
{
	// System.Boolean UltimateXR.Animation.Materials.UxrAnimatedMaterial::_animateSelf
	bool ____animateSelf_47;
	// UnityEngine.GameObject UltimateXR.Animation.Materials.UxrAnimatedMaterial::_targetGameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____targetGameObject_48;
	// System.Int32 UltimateXR.Animation.Materials.UxrAnimatedMaterial::_materialSlot
	int32_t ____materialSlot_49;
	// UltimateXR.Animation.Materials.UxrMaterialMode UltimateXR.Animation.Materials.UxrAnimatedMaterial::_materialMode
	int32_t ____materialMode_50;
	// System.Boolean UltimateXR.Animation.Materials.UxrAnimatedMaterial::_restoreWhenFinished
	bool ____restoreWhenFinished_51;
	// UltimateXR.Animation.Materials.UxrMaterialParameterType UltimateXR.Animation.Materials.UxrAnimatedMaterial::_parameterType
	int32_t ____parameterType_52;
	// System.String UltimateXR.Animation.Materials.UxrAnimatedMaterial::_parameterName
	String_t* ____parameterName_53;
	// UnityEngine.Renderer UltimateXR.Animation.Materials.UxrAnimatedMaterial::_renderer
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ____renderer_55;
	// UnityEngine.Material UltimateXR.Animation.Materials.UxrAnimatedMaterial::_originalMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ____originalMaterial_56;
	// UnityEngine.Material[] UltimateXR.Animation.Materials.UxrAnimatedMaterial::_originalMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ____originalMaterials_57;
	// System.Boolean UltimateXR.Animation.Materials.UxrAnimatedMaterial::_valueBeforeAnimationInitialized
	bool ____valueBeforeAnimationInitialized_58;
	// UnityEngine.Vector4 UltimateXR.Animation.Materials.UxrAnimatedMaterial::_valueBeforeAnimation
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____valueBeforeAnimation_59;
	// System.Action UltimateXR.Animation.Materials.UxrAnimatedMaterial::_finishedCallback
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ____finishedCallback_60;
};

// UltimateXR.Avatar.UxrAvatar
struct UxrAvatar_t880FC3AD5A9A30338CFDF4653C86343B16ACDE79  : public UxrComponent_1_t1C29BA458B98CA30928C97A5977DB00D5F6387F6
{
	// System.String UltimateXR.Avatar.UxrAvatar::_prefabGuid
	String_t* ____prefabGuid_35;
	// UnityEngine.GameObject UltimateXR.Avatar.UxrAvatar::_parentPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____parentPrefab_36;
	// UltimateXR.Avatar.UxrAvatarMode UltimateXR.Avatar.UxrAvatar::_avatarMode
	int32_t ____avatarMode_37;
	// UltimateXR.Avatar.UxrAvatarRenderModes UltimateXR.Avatar.UxrAvatar::_renderMode
	int32_t ____renderMode_38;
	// System.Boolean UltimateXR.Avatar.UxrAvatar::_showControllerHands
	bool ____showControllerHands_39;
	// System.Collections.Generic.List`1<UnityEngine.Renderer> UltimateXR.Avatar.UxrAvatar::_avatarRenderers
	List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93* ____avatarRenderers_40;
	// UltimateXR.Avatar.Rig.UxrAvatarRigType UltimateXR.Avatar.UxrAvatar::_rigType
	int32_t ____rigType_41;
	// System.Boolean UltimateXR.Avatar.UxrAvatar::_rigExpandedInitialized
	bool ____rigExpandedInitialized_42;
	// System.Boolean UltimateXR.Avatar.UxrAvatar::_rigFoldout
	bool ____rigFoldout_43;
	// UltimateXR.Avatar.Rig.UxrAvatarRig UltimateXR.Avatar.UxrAvatar::_rig
	UxrAvatarRig_t2F2E116178F050FC09FA473421048DEF05AE2944* ____rig_44;
	// UltimateXR.Avatar.Rig.UxrAvatarRigInfo UltimateXR.Avatar.UxrAvatar::_rigInfo
	UxrAvatarRigInfo_t7FBFDDD41726CB502BA3CD5857FEE75791C037CC* ____rigInfo_45;
	// System.Boolean UltimateXR.Avatar.UxrAvatar::_handPosesFoldout
	bool ____handPosesFoldout_46;
	// System.Collections.Generic.List`1<UltimateXR.Manipulation.HandPoses.UxrHandPoseAsset> UltimateXR.Avatar.UxrAvatar::_handPoses
	List_1_t4618C292C1EC84A786F9D09CAAD9B842FA035A37* ____handPoses_47;
	// UltimateXR.Manipulation.HandPoses.UxrHandPoseAsset UltimateXR.Avatar.UxrAvatar::_defaultHandPose
	UxrHandPoseAsset_t33CBA272AAFD98954B1BCAAC90D764A41132561D* ____defaultHandPose_48;
	// System.EventHandler`1<UltimateXR.Avatar.UxrAvatarHandPoseChangeEventArgs> UltimateXR.Avatar.UxrAvatar::HandPoseChanging
	EventHandler_1_tA66DB16264EE5937CEBEA1AB0350FC4FFFC1A722* ___HandPoseChanging_50;
	// System.EventHandler`1<UltimateXR.Avatar.UxrAvatarHandPoseChangeEventArgs> UltimateXR.Avatar.UxrAvatar::HandPoseChanged
	EventHandler_1_tA66DB16264EE5937CEBEA1AB0350FC4FFFC1A722* ___HandPoseChanged_51;
	// System.EventHandler`1<UltimateXR.Avatar.UxrAvatarUpdateEventArgs> UltimateXR.Avatar.UxrAvatar::AvatarUpdating
	EventHandler_1_t3F92A5644026ECB74AF8C40E88D62D7A736A3C28* ___AvatarUpdating_52;
	// System.EventHandler`1<UltimateXR.Avatar.UxrAvatarUpdateEventArgs> UltimateXR.Avatar.UxrAvatar::AvatarUpdated
	EventHandler_1_t3F92A5644026ECB74AF8C40E88D62D7A736A3C28* ___AvatarUpdated_53;
	// UnityEngine.Transform UltimateXR.Avatar.UxrAvatar::<CameraController>k__BackingField
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CCameraControllerU3Ek__BackingField_54;
	// UltimateXR.Avatar.Controllers.UxrAvatarController UltimateXR.Avatar.UxrAvatar::<AvatarController>k__BackingField
	UxrAvatarController_t811BBB7BB7C4C244185938517427940CDCE9B817* ___U3CAvatarControllerU3Ek__BackingField_55;
	// System.EventHandler`1<UltimateXR.Core.StateSync.UxrStateSyncEventArgs> UltimateXR.Avatar.UxrAvatar::StateChanged
	EventHandler_1_t5620E57BC2260114C3D84E371B827A2D62DAFE0F* ___StateChanged_56;
	// UltimateXR.Avatar.UxrAvatar/HandState UltimateXR.Avatar.UxrAvatar::_leftHandState
	HandState_tE1A1B68269466E192D0BCD7392BE6CB1C67EC0A1* ____leftHandState_57;
	// UltimateXR.Avatar.UxrAvatar/HandState UltimateXR.Avatar.UxrAvatar::_rightHandState
	HandState_tE1A1B68269466E192D0BCD7392BE6CB1C67EC0A1* ____rightHandState_58;
	// System.Single UltimateXR.Avatar.UxrAvatar::_startCameraHeight
	float ____startCameraHeight_59;
	// System.Single UltimateXR.Avatar.UxrAvatar::_startCameraControllerHeight
	float ____startCameraControllerHeight_60;
	// UnityEngine.Camera UltimateXR.Avatar.UxrAvatar::_camera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ____camera_61;
	// System.Collections.Generic.Dictionary`2<UnityEngine.Transform,UnityEngine.Quaternion> UltimateXR.Avatar.UxrAvatar::_initialBoneLocalRotations
	Dictionary_2_tE1BE4D423E39C184B9041A359230EF9E41435F9E* ____initialBoneLocalRotations_62;
	// System.Collections.Generic.Dictionary`2<UnityEngine.Transform,UnityEngine.Vector3> UltimateXR.Avatar.UxrAvatar::_initialBoneLocalPositions
	Dictionary_2_t1E0EC21D302F86A02E9189C21838AEFC82F8A984* ____initialBoneLocalPositions_63;
	// System.Collections.Generic.Dictionary`2<System.String,UltimateXR.Avatar.Rig.UxrRuntimeHandPose> UltimateXR.Avatar.UxrAvatar::_cachedRuntimeHandPoses
	Dictionary_2_t00A1777B1AAF27DB0831C8FFA8EA11C784D0310A* ____cachedRuntimeHandPoses_64;
};

struct UxrAvatar_t880FC3AD5A9A30338CFDF4653C86343B16ACDE79_StaticFields
{
	// System.EventHandler`1<UltimateXR.Avatar.UxrAvatarStartedEventArgs> UltimateXR.Avatar.UxrAvatar::LocalAvatarStarted
	EventHandler_1_t6DC78937614A22E7E4E9155A741D4DD38666F5C4* ___LocalAvatarStarted_49;
};

// UltimateXR.Manipulation.UxrGrabbableObject
struct UxrGrabbableObject_tCA9C5B90AC9CB9830D3D50AE51F7FF342511E3BC  : public UxrComponent_1_t914D68FED52C798AE33FCCDE016E501810C8634E
{
	// System.Boolean UltimateXR.Manipulation.UxrGrabbableObject::_controlParentDirection
	bool ____controlParentDirection_35;
	// System.Boolean UltimateXR.Manipulation.UxrGrabbableObject::_ignoreGrabbableParentDependency
	bool ____ignoreGrabbableParentDependency_36;
	// System.Int32 UltimateXR.Manipulation.UxrGrabbableObject::_priority
	int32_t ____priority_37;
	// System.Boolean UltimateXR.Manipulation.UxrGrabbableObject::_allowMultiGrab
	bool ____allowMultiGrab_38;
	// UltimateXR.Manipulation.UxrTranslationConstraintMode UltimateXR.Manipulation.UxrGrabbableObject::_translationConstraintMode
	int32_t ____translationConstraintMode_39;
	// UnityEngine.BoxCollider UltimateXR.Manipulation.UxrGrabbableObject::_restrictToBox
	BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* ____restrictToBox_40;
	// UnityEngine.SphereCollider UltimateXR.Manipulation.UxrGrabbableObject::_restrictToSphere
	SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275* ____restrictToSphere_41;
	// UnityEngine.Vector3 UltimateXR.Manipulation.UxrGrabbableObject::_translationLimitsMin
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____translationLimitsMin_42;
	// UnityEngine.Vector3 UltimateXR.Manipulation.UxrGrabbableObject::_translationLimitsMax
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____translationLimitsMax_43;
	// UltimateXR.Manipulation.UxrRotationConstraintMode UltimateXR.Manipulation.UxrGrabbableObject::_rotationConstraintMode
	int32_t ____rotationConstraintMode_44;
	// UnityEngine.Vector3 UltimateXR.Manipulation.UxrGrabbableObject::_rotationAngleLimitsMin
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____rotationAngleLimitsMin_45;
	// UnityEngine.Vector3 UltimateXR.Manipulation.UxrGrabbableObject::_rotationAngleLimitsMax
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____rotationAngleLimitsMax_46;
	// System.Boolean UltimateXR.Manipulation.UxrGrabbableObject::_autoRotationProvider
	bool ____autoRotationProvider_47;
	// UltimateXR.Manipulation.UxrRotationProvider UltimateXR.Manipulation.UxrGrabbableObject::_rotationProvider
	int32_t ____rotationProvider_48;
	// UltimateXR.Core.Math.UxrAxis UltimateXR.Manipulation.UxrGrabbableObject::_rotationLongitudinalAxis
	UxrAxis_t9C63EFC61998157CED7F1D5849CEE908F9B14DB7* ____rotationLongitudinalAxis_49;
	// System.Boolean UltimateXR.Manipulation.UxrGrabbableObject::_needsTwoHandsToRotate
	bool ____needsTwoHandsToRotate_50;
	// System.Single UltimateXR.Manipulation.UxrGrabbableObject::_lockedGrabReleaseDistance
	float ____lockedGrabReleaseDistance_51;
	// System.Single UltimateXR.Manipulation.UxrGrabbableObject::_translationResistance
	float ____translationResistance_52;
	// System.Single UltimateXR.Manipulation.UxrGrabbableObject::_rotationResistance
	float ____rotationResistance_53;
	// UnityEngine.Rigidbody UltimateXR.Manipulation.UxrGrabbableObject::_rigidBodySource
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ____rigidBodySource_54;
	// System.Boolean UltimateXR.Manipulation.UxrGrabbableObject::_rigidBodyDynamicOnRelease
	bool ____rigidBodyDynamicOnRelease_55;
	// System.Single UltimateXR.Manipulation.UxrGrabbableObject::_verticalReleaseMultiplier
	float ____verticalReleaseMultiplier_56;
	// System.Single UltimateXR.Manipulation.UxrGrabbableObject::_horizontalReleaseMultiplier
	float ____horizontalReleaseMultiplier_57;
	// UltimateXR.Manipulation.UxrPreviewGrabPoses UltimateXR.Manipulation.UxrGrabbableObject::_previewGrabPosesMode
	int32_t ____previewGrabPosesMode_58;
	// System.Int32 UltimateXR.Manipulation.UxrGrabbableObject::_previewPosesRegenerationType
	int32_t ____previewPosesRegenerationType_59;
	// System.Int32 UltimateXR.Manipulation.UxrGrabbableObject::_previewPosesRegenerationIndex
	int32_t ____previewPosesRegenerationIndex_60;
	// UnityEngine.GameObject UltimateXR.Manipulation.UxrGrabbableObject::_selectedAvatarForGrips
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____selectedAvatarForGrips_61;
	// System.Boolean UltimateXR.Manipulation.UxrGrabbableObject::_firstGrabPointIsMain
	bool ____firstGrabPointIsMain_62;
	// UltimateXR.Manipulation.UxrGrabPointInfo UltimateXR.Manipulation.UxrGrabbableObject::_grabPoint
	UxrGrabPointInfo_tF536E172E12DD70FDA2B3E21733B1CEB08D35079* ____grabPoint_63;
	// System.Collections.Generic.List`1<UltimateXR.Manipulation.UxrGrabPointInfo> UltimateXR.Manipulation.UxrGrabbableObject::_additionalGrabPoints
	List_1_t7A8DCF9750D6A9D3D9DF473D2AE6CD9F4EA40D7B* ____additionalGrabPoints_64;
	// System.Boolean UltimateXR.Manipulation.UxrGrabbableObject::_useParenting
	bool ____useParenting_65;
	// System.Boolean UltimateXR.Manipulation.UxrGrabbableObject::_autoCreateStartAnchor
	bool ____autoCreateStartAnchor_66;
	// UltimateXR.Manipulation.UxrGrabbableObjectAnchor UltimateXR.Manipulation.UxrGrabbableObject::_startAnchor
	UxrGrabbableObjectAnchor_tE7110AF7891C09542149FC793D1C0C9A9D95F66A* ____startAnchor_67;
	// System.String UltimateXR.Manipulation.UxrGrabbableObject::_tag
	String_t* ____tag_68;
	// System.Boolean UltimateXR.Manipulation.UxrGrabbableObject::_dropAlignTransformUseSelf
	bool ____dropAlignTransformUseSelf_69;
	// UnityEngine.Transform UltimateXR.Manipulation.UxrGrabbableObject::_dropAlignTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____dropAlignTransform_70;
	// UltimateXR.Manipulation.UxrSnapToAnchorMode UltimateXR.Manipulation.UxrGrabbableObject::_dropSnapMode
	int32_t ____dropSnapMode_71;
	// System.Boolean UltimateXR.Manipulation.UxrGrabbableObject::_dropProximityTransformUseSelf
	bool ____dropProximityTransformUseSelf_72;
	// UnityEngine.Transform UltimateXR.Manipulation.UxrGrabbableObject::_dropProximityTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____dropProximityTransform_73;
	// System.EventHandler`1<UltimateXR.Manipulation.UxrApplyConstraintsEventArgs> UltimateXR.Manipulation.UxrGrabbableObject::ConstraintsApplying
	EventHandler_1_t6FCADDF8DC5CFC67E12B6324C77ABD7EEDE695AC* ___ConstraintsApplying_81;
	// System.EventHandler`1<UltimateXR.Manipulation.UxrApplyConstraintsEventArgs> UltimateXR.Manipulation.UxrGrabbableObject::ConstraintsApplied
	EventHandler_1_t6FCADDF8DC5CFC67E12B6324C77ABD7EEDE695AC* ___ConstraintsApplied_82;
	// System.EventHandler`1<UltimateXR.Manipulation.UxrApplyConstraintsEventArgs> UltimateXR.Manipulation.UxrGrabbableObject::ConstraintsFinished
	EventHandler_1_t6FCADDF8DC5CFC67E12B6324C77ABD7EEDE695AC* ___ConstraintsFinished_83;
	// UltimateXR.Manipulation.UxrGrabbableObjectAnchor UltimateXR.Manipulation.UxrGrabbableObject::<CurrentAnchor>k__BackingField
	UxrGrabbableObjectAnchor_tE7110AF7891C09542149FC793D1C0C9A9D95F66A* ___U3CCurrentAnchorU3Ek__BackingField_84;
	// System.Boolean UltimateXR.Manipulation.UxrGrabbableObject::<IsPlaceable>k__BackingField
	bool ___U3CIsPlaceableU3Ek__BackingField_85;
	// System.Boolean UltimateXR.Manipulation.UxrGrabbableObject::<IsLockedInPlace>k__BackingField
	bool ___U3CIsLockedInPlaceU3Ek__BackingField_86;
	// System.Boolean UltimateXR.Manipulation.UxrGrabbableObject::<IsGrabbable>k__BackingField
	bool ___U3CIsGrabbableU3Ek__BackingField_87;
	// System.EventHandler`1<UltimateXR.Manipulation.UxrManipulationEventArgs> UltimateXR.Manipulation.UxrGrabbableObject::Grabbing
	EventHandler_1_tFB1A27628EFA23760E6E055C0CC402DA6F5ABAD1* ___Grabbing_88;
	// System.EventHandler`1<UltimateXR.Manipulation.UxrManipulationEventArgs> UltimateXR.Manipulation.UxrGrabbableObject::Grabbed
	EventHandler_1_tFB1A27628EFA23760E6E055C0CC402DA6F5ABAD1* ___Grabbed_89;
	// System.EventHandler`1<UltimateXR.Manipulation.UxrManipulationEventArgs> UltimateXR.Manipulation.UxrGrabbableObject::Releasing
	EventHandler_1_tFB1A27628EFA23760E6E055C0CC402DA6F5ABAD1* ___Releasing_90;
	// System.EventHandler`1<UltimateXR.Manipulation.UxrManipulationEventArgs> UltimateXR.Manipulation.UxrGrabbableObject::Released
	EventHandler_1_tFB1A27628EFA23760E6E055C0CC402DA6F5ABAD1* ___Released_91;
	// System.EventHandler`1<UltimateXR.Manipulation.UxrManipulationEventArgs> UltimateXR.Manipulation.UxrGrabbableObject::Placing
	EventHandler_1_tFB1A27628EFA23760E6E055C0CC402DA6F5ABAD1* ___Placing_92;
	// System.EventHandler`1<UltimateXR.Manipulation.UxrManipulationEventArgs> UltimateXR.Manipulation.UxrGrabbableObject::Placed
	EventHandler_1_tFB1A27628EFA23760E6E055C0CC402DA6F5ABAD1* ___Placed_93;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Boolean> UltimateXR.Manipulation.UxrGrabbableObject::_grabPointEnabledStates
	Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* ____grabPointEnabledStates_95;
	// System.Boolean UltimateXR.Manipulation.UxrGrabbableObject::_initialIsKinematic
	bool ____initialIsKinematic_96;
	// System.Single UltimateXR.Manipulation.UxrGrabbableObject::_singleRotationAngleGrab
	float ____singleRotationAngleGrab_97;
	// System.Single UltimateXR.Manipulation.UxrGrabbableObject::_singleRotationAngleCumulative
	float ____singleRotationAngleCumulative_98;
	// System.Single UltimateXR.Manipulation.UxrGrabbableObject::_placementTimer
	float ____placementTimer_99;
	// System.Single UltimateXR.Manipulation.UxrGrabbableObject::_constraintTimer
	float ____constraintTimer_100;
	// System.Single UltimateXR.Manipulation.UxrGrabbableObject::_constraintExitTimer
	float ____constraintExitTimer_101;
	// UnityEngine.Vector3 UltimateXR.Manipulation.UxrGrabbableObject::_constraintLocalExitPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____constraintLocalExitPos_102;
	// UnityEngine.Quaternion UltimateXR.Manipulation.UxrGrabbableObject::_constraintLocalExitRot
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ____constraintLocalExitRot_103;
	// System.Collections.Generic.Dictionary`2<System.Int32,UltimateXR.Manipulation.UxrGrabPointShape> UltimateXR.Manipulation.UxrGrabbableObject::_grabPointShapes
	Dictionary_2_t0DAB7F69BC24B9592A1686B894FF5C717E605E4B* ____grabPointShapes_104;
};

// UltimateXR.Manipulation.UxrGrabbableObjectAnchor
struct UxrGrabbableObjectAnchor_tE7110AF7891C09542149FC793D1C0C9A9D95F66A  : public UxrComponent_1_t06BA21D6AFFD5CBE70B6B7C1F4BA8953C9BDF409
{
	// System.Collections.Generic.List`1<System.String> UltimateXR.Manipulation.UxrGrabbableObjectAnchor::_compatibleTags
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ____compatibleTags_35;
	// System.Single UltimateXR.Manipulation.UxrGrabbableObjectAnchor::_maxPlaceDistance
	float ____maxPlaceDistance_36;
	// System.Boolean UltimateXR.Manipulation.UxrGrabbableObjectAnchor::_alignTransformUseSelf
	bool ____alignTransformUseSelf_37;
	// UnityEngine.Transform UltimateXR.Manipulation.UxrGrabbableObjectAnchor::_alignTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____alignTransform_38;
	// System.Boolean UltimateXR.Manipulation.UxrGrabbableObjectAnchor::_dropProximityTransformUseSelf
	bool ____dropProximityTransformUseSelf_39;
	// UnityEngine.Transform UltimateXR.Manipulation.UxrGrabbableObjectAnchor::_dropProximityTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____dropProximityTransform_40;
	// UnityEngine.GameObject UltimateXR.Manipulation.UxrGrabbableObjectAnchor::_activateOnCompatibleNear
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____activateOnCompatibleNear_41;
	// UnityEngine.GameObject UltimateXR.Manipulation.UxrGrabbableObjectAnchor::_activateOnCompatibleNotNear
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____activateOnCompatibleNotNear_42;
	// UnityEngine.GameObject UltimateXR.Manipulation.UxrGrabbableObjectAnchor::_activateOnHandNearAndGrabbable
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____activateOnHandNearAndGrabbable_43;
	// UnityEngine.GameObject UltimateXR.Manipulation.UxrGrabbableObjectAnchor::_activateOnPlaced
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____activateOnPlaced_44;
	// UnityEngine.GameObject UltimateXR.Manipulation.UxrGrabbableObjectAnchor::_activateOnEmpty
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____activateOnEmpty_45;
	// System.EventHandler`1<UltimateXR.Manipulation.UxrManipulationEventArgs> UltimateXR.Manipulation.UxrGrabbableObjectAnchor::Placing
	EventHandler_1_tFB1A27628EFA23760E6E055C0CC402DA6F5ABAD1* ___Placing_46;
	// System.EventHandler`1<UltimateXR.Manipulation.UxrManipulationEventArgs> UltimateXR.Manipulation.UxrGrabbableObjectAnchor::Placed
	EventHandler_1_tFB1A27628EFA23760E6E055C0CC402DA6F5ABAD1* ___Placed_47;
	// System.EventHandler`1<UltimateXR.Manipulation.UxrManipulationEventArgs> UltimateXR.Manipulation.UxrGrabbableObjectAnchor::Removing
	EventHandler_1_tFB1A27628EFA23760E6E055C0CC402DA6F5ABAD1* ___Removing_48;
	// System.EventHandler`1<UltimateXR.Manipulation.UxrManipulationEventArgs> UltimateXR.Manipulation.UxrGrabbableObjectAnchor::Removed
	EventHandler_1_tFB1A27628EFA23760E6E055C0CC402DA6F5ABAD1* ___Removed_49;
	// System.EventHandler`1<UltimateXR.Manipulation.UxrManipulationEventArgs> UltimateXR.Manipulation.UxrGrabbableObjectAnchor::SmoothPlaceTransitionEnded
	EventHandler_1_tFB1A27628EFA23760E6E055C0CC402DA6F5ABAD1* ___SmoothPlaceTransitionEnded_50;
	// UltimateXR.Manipulation.UxrGrabbableObject UltimateXR.Manipulation.UxrGrabbableObjectAnchor::<CurrentPlacedObject>k__BackingField
	UxrGrabbableObject_tCA9C5B90AC9CB9830D3D50AE51F7FF342511E3BC* ___U3CCurrentPlacedObjectU3Ek__BackingField_51;
	// System.Collections.Generic.List`1<System.Func`2<UltimateXR.Manipulation.UxrGrabbableObject,System.Boolean>> UltimateXR.Manipulation.UxrGrabbableObjectAnchor::_placingValidators
	List_1_t0486FD1E5762D014B351A963FDCF0D9DE8A64B2E* ____placingValidators_52;
	// UltimateXR.Manipulation.UxrManipulationEventArgs UltimateXR.Manipulation.UxrGrabbableObjectAnchor::_smoothPlaceEventArgs
	UxrManipulationEventArgs_tD33E70382345A37F8AE2C8B4A533810FB76EDA78* ____smoothPlaceEventArgs_53;
};

// UltimateXR.Examples.FullScene.Lab.Battery
struct Battery_t56FF6D15FAC1E9B259C0EF64902537FB2B41FA8B  : public UxrGrabbableObjectComponent_1_tFE02A697C5B42FECE385B3A530702420DFC6E020
{
	// System.Single UltimateXR.Examples.FullScene.Lab.Battery::_batteryDiameter
	float ____batteryDiameter_36;
	// System.Single UltimateXR.Examples.FullScene.Lab.Battery::_batteryInsertOffset
	float ____batteryInsertOffset_37;
	// UnityEngine.Vector3 UltimateXR.Examples.FullScene.Lab.Battery::_batteryOffsetConstraint
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____batteryOffsetConstraint_38;
	// System.Single UltimateXR.Examples.FullScene.Lab.Battery::_slideInTimer
	float ____slideInTimer_39;
	// System.Boolean UltimateXR.Examples.FullScene.Lab.Battery::_placed
	bool ____placed_40;
	// UltimateXR.Haptics.Helpers.UxrManipulationHapticFeedback UltimateXR.Examples.FullScene.Lab.Battery::_manipulationHapticFeedback
	UxrManipulationHapticFeedback_t6DA4A9477852BE09667C082006431E86BC9271D3* ____manipulationHapticFeedback_41;
	// System.Single UltimateXR.Examples.FullScene.Lab.Battery::_minHapticAmplitude
	float ____minHapticAmplitude_42;
	// System.Single UltimateXR.Examples.FullScene.Lab.Battery::_maxHapticAmplitude
	float ____maxHapticAmplitude_43;
};

// UltimateXR.Examples.FullScene.Lab.SpringOnRelease
struct SpringOnRelease_tF66652DE3566FD0575E2CD3B417EFF4592105B1B  : public UxrGrabbableObjectComponent_1_tAE488CF95E619715F04F3337799454B1A8061678
{
	// System.Single UltimateXR.Examples.FullScene.Lab.SpringOnRelease::_springAmplitudeMultiplier
	float ____springAmplitudeMultiplier_36;
	// System.Single UltimateXR.Examples.FullScene.Lab.SpringOnRelease::_springMaxAmplitude
	float ____springMaxAmplitude_37;
	// System.Single UltimateXR.Examples.FullScene.Lab.SpringOnRelease::_springRotAmplitudeMultiplier
	float ____springRotAmplitudeMultiplier_38;
	// System.Single UltimateXR.Examples.FullScene.Lab.SpringOnRelease::_springMaxRotAmplitude
	float ____springMaxRotAmplitude_39;
	// System.Single UltimateXR.Examples.FullScene.Lab.SpringOnRelease::_springDuration
	float ____springDuration_40;
	// System.Single UltimateXR.Examples.FullScene.Lab.SpringOnRelease::_springFrequency
	float ____springFrequency_41;
	// UnityEngine.Vector3 UltimateXR.Examples.FullScene.Lab.SpringOnRelease::_releasePosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____releasePosition_42;
	// UnityEngine.Vector3 UltimateXR.Examples.FullScene.Lab.SpringOnRelease::_releaseEuler
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____releaseEuler_43;
	// UnityEngine.Vector3 UltimateXR.Examples.FullScene.Lab.SpringOnRelease::_releaseVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____releaseVelocity_44;
	// UnityEngine.Vector3 UltimateXR.Examples.FullScene.Lab.SpringOnRelease::_releaseAngularVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____releaseAngularVelocity_45;
	// UnityEngine.Vector3 UltimateXR.Examples.FullScene.Lab.SpringOnRelease::_filteredVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____filteredVelocity_46;
	// UnityEngine.Vector3 UltimateXR.Examples.FullScene.Lab.SpringOnRelease::_filteredAngularVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____filteredAngularVelocity_47;
	// System.Single UltimateXR.Examples.FullScene.Lab.SpringOnRelease::_timer
	float ____timer_48;
};

// UltimateXR.Devices.UxrControllerInput
struct UxrControllerInput_tF9ABB63F2B9B59D50DA1561F8DD21BB9F24446BB  : public UxrAvatarComponent_1_t986427FE6CA909671B2AA25A2FB1B81932A8B417
{
	// UltimateXR.Devices.Visualization.UxrController3DModel UltimateXR.Devices.UxrControllerInput::_leftController
	UxrController3DModel_t352689EC881A3E285FA22D4F579A7CBC701043E6* ____leftController_36;
	// UltimateXR.Devices.Visualization.UxrController3DModel UltimateXR.Devices.UxrControllerInput::_rightController
	UxrController3DModel_t352689EC881A3E285FA22D4F579A7CBC701043E6* ____rightController_37;
	// UltimateXR.Devices.Visualization.UxrController3DModel UltimateXR.Devices.UxrControllerInput::_controller
	UxrController3DModel_t352689EC881A3E285FA22D4F579A7CBC701043E6* ____controller_38;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UltimateXR.Devices.UxrControllerInput::_enableObjectListLeft
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ____enableObjectListLeft_39;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UltimateXR.Devices.UxrControllerInput::_enableObjectListRight
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ____enableObjectListRight_40;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UltimateXR.Devices.UxrControllerInput::_enableObjectList
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ____enableObjectList_41;
	// UltimateXR.Core.UxrHandSide UltimateXR.Devices.UxrControllerInput::<Handedness>k__BackingField
	int32_t ___U3CHandednessU3Ek__BackingField_48;
	// System.EventHandler UltimateXR.Devices.UxrControllerInput::Updating
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___Updating_49;
	// System.EventHandler UltimateXR.Devices.UxrControllerInput::Updated
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___Updated_50;
	// System.EventHandler`1<UltimateXR.Devices.UxrInputButtonEventArgs> UltimateXR.Devices.UxrControllerInput::ButtonStateChanged
	EventHandler_1_t424D2BA546EE6973D77C418261D8FFB2EDE29504* ___ButtonStateChanged_51;
	// System.EventHandler`1<UltimateXR.Devices.UxrInput1DEventArgs> UltimateXR.Devices.UxrControllerInput::Input1DChanged
	EventHandler_1_t5B1E201D2A309D4DA5F38A046C70455E94263E4E* ___Input1DChanged_52;
	// System.EventHandler`1<UltimateXR.Devices.UxrInput2DEventArgs> UltimateXR.Devices.UxrControllerInput::Input2DChanged
	EventHandler_1_tFCCC582ED75BBB7143C5E88E067CB2DFAA13A3EE* ___Input2DChanged_53;
	// System.EventHandler`1<UltimateXR.Devices.UxrControllerHapticEventArgs> UltimateXR.Devices.UxrControllerInput::HapticRequesting
	EventHandler_1_tB893131BD9F99FE51AAD1B70442663975D9726D2* ___HapticRequesting_54;
	// System.EventHandler`1<UltimateXR.Devices.UxrDeviceConnectEventArgs> UltimateXR.Devices.UxrControllerInput::DeviceConnected
	EventHandler_1_t5D28DD1BC846336E4CCB2624C3E8C497AC8F7D76* ___DeviceConnected_55;
	// System.Boolean UltimateXR.Devices.UxrControllerInput::<RaiseConnectOnStart>k__BackingField
	bool ___U3CRaiseConnectOnStartU3Ek__BackingField_56;
	// System.Collections.Generic.Dictionary`2<UltimateXR.Devices.UxrInput1D,System.Boolean> UltimateXR.Devices.UxrControllerInput::_controllers1DResetLeft
	Dictionary_2_t8951A2538A1EEEE3D4ACC9E74485F6D943AFC290* ____controllers1DResetLeft_60;
	// System.Collections.Generic.Dictionary`2<UltimateXR.Devices.UxrInput1D,System.Boolean> UltimateXR.Devices.UxrControllerInput::_controllers1DResetRight
	Dictionary_2_t8951A2538A1EEEE3D4ACC9E74485F6D943AFC290* ____controllers1DResetRight_61;
	// System.Collections.Generic.Dictionary`2<UltimateXR.Devices.UxrInput2D,System.Boolean> UltimateXR.Devices.UxrControllerInput::_controllers2DResetLeft
	Dictionary_2_tC5FC23A9E09F732DD045ED9FAD05890FFDDC9DDB* ____controllers2DResetLeft_62;
	// System.Collections.Generic.Dictionary`2<UltimateXR.Devices.UxrInput2D,System.Boolean> UltimateXR.Devices.UxrControllerInput::_controllers2DResetRight
	Dictionary_2_tC5FC23A9E09F732DD045ED9FAD05890FFDDC9DDB* ____controllers2DResetRight_63;
	// System.UInt32 UltimateXR.Devices.UxrControllerInput::_buttonTouchFlagsLastFrameLeft
	uint32_t ____buttonTouchFlagsLastFrameLeft_64;
	// System.UInt32 UltimateXR.Devices.UxrControllerInput::_buttonPressFlagsLastFrameLeft
	uint32_t ____buttonPressFlagsLastFrameLeft_65;
	// System.UInt32 UltimateXR.Devices.UxrControllerInput::_buttonTouchFlagsLastFrameRight
	uint32_t ____buttonTouchFlagsLastFrameRight_66;
	// System.UInt32 UltimateXR.Devices.UxrControllerInput::_buttonPressFlagsLastFrameRight
	uint32_t ____buttonPressFlagsLastFrameRight_67;
	// System.UInt32 UltimateXR.Devices.UxrControllerInput::_buttonTouchFlagsLeft
	uint32_t ____buttonTouchFlagsLeft_68;
	// System.UInt32 UltimateXR.Devices.UxrControllerInput::_buttonPressFlagsLeft
	uint32_t ____buttonPressFlagsLeft_69;
	// System.UInt32 UltimateXR.Devices.UxrControllerInput::_buttonTouchFlagsRight
	uint32_t ____buttonTouchFlagsRight_70;
	// System.UInt32 UltimateXR.Devices.UxrControllerInput::_buttonPressFlagsRight
	uint32_t ____buttonPressFlagsRight_71;
};

struct UxrControllerInput_tF9ABB63F2B9B59D50DA1561F8DD21BB9F24446BB_StaticFields
{
	// System.EventHandler`1<UltimateXR.Devices.UxrDeviceConnectEventArgs> UltimateXR.Devices.UxrControllerInput::GlobalControllerConnected
	EventHandler_1_t5D28DD1BC846336E4CCB2624C3E8C497AC8F7D76* ___GlobalControllerConnected_42;
	// System.EventHandler`1<UltimateXR.Devices.UxrInputButtonEventArgs> UltimateXR.Devices.UxrControllerInput::GlobalButtonStateChanged
	EventHandler_1_t424D2BA546EE6973D77C418261D8FFB2EDE29504* ___GlobalButtonStateChanged_43;
	// System.EventHandler`1<UltimateXR.Devices.UxrInput1DEventArgs> UltimateXR.Devices.UxrControllerInput::GlobalInput1DChanged
	EventHandler_1_t5B1E201D2A309D4DA5F38A046C70455E94263E4E* ___GlobalInput1DChanged_44;
	// System.EventHandler`1<UltimateXR.Devices.UxrInput2DEventArgs> UltimateXR.Devices.UxrControllerInput::GlobalInput2DChanged
	EventHandler_1_tFCCC582ED75BBB7143C5E88E067CB2DFAA13A3EE* ___GlobalInput2DChanged_45;
	// System.EventHandler`1<UltimateXR.Devices.UxrControllerHapticEventArgs> UltimateXR.Devices.UxrControllerInput::GlobalHapticRequesting
	EventHandler_1_tB893131BD9F99FE51AAD1B70442663975D9726D2* ___GlobalHapticRequesting_46;
	// UltimateXR.Core.UxrLogLevel UltimateXR.Devices.UxrControllerInput::<LogLevel>k__BackingField
	int32_t ___U3CLogLevelU3Ek__BackingField_47;
	// System.Collections.Generic.Dictionary`2<UltimateXR.Core.UxrHandSide,System.Boolean> UltimateXR.Devices.UxrControllerInput::s_ignoreControllerInput
	Dictionary_2_t070F65DEBC0ECA2531A454EB5D5D7ED00E4BFAA3* ___s_ignoreControllerInput_59;
};

// UltimateXR.Manipulation.UxrGrabManager
struct UxrGrabManager_t76F8EBC3B188C8BB86C683C7B3E0E699CDEA7104  : public UxrSingleton_1_t69FF3999C26F83D1BB67BFC5B8C17A295E291FD6
{
	// System.EventHandler`1<UltimateXR.Manipulation.UxrManipulationEventArgs> UltimateXR.Manipulation.UxrGrabManager::GrabTrying
	EventHandler_1_tFB1A27628EFA23760E6E055C0CC402DA6F5ABAD1* ___GrabTrying_30;
	// System.EventHandler`1<UltimateXR.Manipulation.UxrManipulationEventArgs> UltimateXR.Manipulation.UxrGrabManager::ObjectGrabbing
	EventHandler_1_tFB1A27628EFA23760E6E055C0CC402DA6F5ABAD1* ___ObjectGrabbing_31;
	// System.EventHandler`1<UltimateXR.Manipulation.UxrManipulationEventArgs> UltimateXR.Manipulation.UxrGrabManager::ObjectGrabbed
	EventHandler_1_tFB1A27628EFA23760E6E055C0CC402DA6F5ABAD1* ___ObjectGrabbed_32;
	// System.EventHandler`1<UltimateXR.Manipulation.UxrManipulationEventArgs> UltimateXR.Manipulation.UxrGrabManager::ObjectReleasing
	EventHandler_1_tFB1A27628EFA23760E6E055C0CC402DA6F5ABAD1* ___ObjectReleasing_33;
	// System.EventHandler`1<UltimateXR.Manipulation.UxrManipulationEventArgs> UltimateXR.Manipulation.UxrGrabManager::ObjectReleased
	EventHandler_1_tFB1A27628EFA23760E6E055C0CC402DA6F5ABAD1* ___ObjectReleased_34;
	// System.EventHandler`1<UltimateXR.Manipulation.UxrManipulationEventArgs> UltimateXR.Manipulation.UxrGrabManager::ObjectPlacing
	EventHandler_1_tFB1A27628EFA23760E6E055C0CC402DA6F5ABAD1* ___ObjectPlacing_35;
	// System.EventHandler`1<UltimateXR.Manipulation.UxrManipulationEventArgs> UltimateXR.Manipulation.UxrGrabManager::ObjectPlaced
	EventHandler_1_tFB1A27628EFA23760E6E055C0CC402DA6F5ABAD1* ___ObjectPlaced_36;
	// System.EventHandler`1<UltimateXR.Manipulation.UxrManipulationEventArgs> UltimateXR.Manipulation.UxrGrabManager::ObjectRemoving
	EventHandler_1_tFB1A27628EFA23760E6E055C0CC402DA6F5ABAD1* ___ObjectRemoving_37;
	// System.EventHandler`1<UltimateXR.Manipulation.UxrManipulationEventArgs> UltimateXR.Manipulation.UxrGrabManager::ObjectRemoved
	EventHandler_1_tFB1A27628EFA23760E6E055C0CC402DA6F5ABAD1* ___ObjectRemoved_38;
	// System.EventHandler`1<UltimateXR.Manipulation.UxrManipulationEventArgs> UltimateXR.Manipulation.UxrGrabManager::AnchorRangeEntered
	EventHandler_1_tFB1A27628EFA23760E6E055C0CC402DA6F5ABAD1* ___AnchorRangeEntered_39;
	// System.EventHandler`1<UltimateXR.Manipulation.UxrManipulationEventArgs> UltimateXR.Manipulation.UxrGrabManager::AnchorRangeLeft
	EventHandler_1_tFB1A27628EFA23760E6E055C0CC402DA6F5ABAD1* ___AnchorRangeLeft_40;
	// System.EventHandler`1<UltimateXR.Manipulation.UxrManipulationEventArgs> UltimateXR.Manipulation.UxrGrabManager::PlacedObjectRangeEntered
	EventHandler_1_tFB1A27628EFA23760E6E055C0CC402DA6F5ABAD1* ___PlacedObjectRangeEntered_41;
	// System.EventHandler`1<UltimateXR.Manipulation.UxrManipulationEventArgs> UltimateXR.Manipulation.UxrGrabManager::PlacedObjectRangeLeft
	EventHandler_1_tFB1A27628EFA23760E6E055C0CC402DA6F5ABAD1* ___PlacedObjectRangeLeft_42;
	// System.Boolean UltimateXR.Manipulation.UxrGrabManager::<IsGrabbingAllowed>k__BackingField
	bool ___U3CIsGrabbingAllowedU3Ek__BackingField_43;
	// UltimateXR.Core.UxrLogLevel UltimateXR.Manipulation.UxrGrabManager::<LogLevel>k__BackingField
	int32_t ___U3CLogLevelU3Ek__BackingField_44;
	// System.EventHandler`1<UltimateXR.Core.StateSync.UxrStateSyncEventArgs> UltimateXR.Manipulation.UxrGrabManager::StateChanged
	EventHandler_1_t5620E57BC2260114C3D84E371B827A2D62DAFE0F* ___StateChanged_45;
	// System.Collections.Generic.Dictionary`2<UltimateXR.Manipulation.UxrGrabbableObjectAnchor,UltimateXR.Manipulation.UxrGrabManager/GrabbableObjectAnchorInfo> UltimateXR.Manipulation.UxrGrabManager::_grabbableObjectAnchors
	Dictionary_2_tBAF1642C18DD0C21277BDCD26881E3AEACCD7DE2* ____grabbableObjectAnchors_46;
	// System.Collections.Generic.Dictionary`2<UltimateXR.Manipulation.UxrGrabbableObject,UltimateXR.Manipulation.UxrGrabManager/RuntimeGrabInfo> UltimateXR.Manipulation.UxrGrabManager::_currentGrabs
	Dictionary_2_tFE71881233A607B5AC090F2CD969572935CDE48F* ____currentGrabs_47;
	// System.Collections.Generic.Dictionary`2<UltimateXR.Manipulation.UxrGrabber,UltimateXR.Manipulation.UxrGrabManager/HandTransitionInfo> UltimateXR.Manipulation.UxrGrabManager::_handTransitions
	Dictionary_2_tFD3E8DD0856DAC32DBBDA7303E764EDC42305F24* ____handTransitions_48;
};

// UltimateXR.Manipulation.UxrGrabber
struct UxrGrabber_tC236DD7475C2506468E010D407CFF2F8375A5ED2  : public UxrAvatarComponent_1_t2D8119B812CF65EC273D2719764BF585BF91AD8C
{
	// UnityEngine.Renderer UltimateXR.Manipulation.UxrGrabber::_handRenderer
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ____handRenderer_36;
	// UnityEngine.GameObject[] UltimateXR.Manipulation.UxrGrabber::_objectsToDisableOnGrab
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ____objectsToDisableOnGrab_37;
	// System.Collections.Generic.List`1<UnityEngine.Transform> UltimateXR.Manipulation.UxrGrabber::_optionalProximityTransforms
	List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* ____optionalProximityTransforms_38;
	// UnityEngine.Transform UltimateXR.Manipulation.UxrGrabber::<HandBone>k__BackingField
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CHandBoneU3Ek__BackingField_39;
	// UnityEngine.Vector3 UltimateXR.Manipulation.UxrGrabber::<HandBoneRelativePos>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CHandBoneRelativePosU3Ek__BackingField_40;
	// UnityEngine.Quaternion UltimateXR.Manipulation.UxrGrabber::<HandBoneRelativeRot>k__BackingField
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___U3CHandBoneRelativeRotU3Ek__BackingField_41;
	// UltimateXR.Manipulation.UxrGrabber UltimateXR.Manipulation.UxrGrabber::<OppositeHandGrabber>k__BackingField
	UxrGrabber_tC236DD7475C2506468E010D407CFF2F8375A5ED2* ___U3COppositeHandGrabberU3Ek__BackingField_42;
	// UnityEngine.Vector3 UltimateXR.Manipulation.UxrGrabber::<UnprocessedGrabberPosition>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CUnprocessedGrabberPositionU3Ek__BackingField_43;
	// UnityEngine.Quaternion UltimateXR.Manipulation.UxrGrabber::<UnprocessedGrabberRotation>k__BackingField
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___U3CUnprocessedGrabberRotationU3Ek__BackingField_44;
	// UnityEngine.Vector3 UltimateXR.Manipulation.UxrGrabber::<Velocity>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CVelocityU3Ek__BackingField_45;
	// UnityEngine.Vector3 UltimateXR.Manipulation.UxrGrabber::<AngularVelocity>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CAngularVelocityU3Ek__BackingField_46;
	// UnityEngine.Vector3 UltimateXR.Manipulation.UxrGrabber::<SmoothVelocity>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CSmoothVelocityU3Ek__BackingField_47;
	// UnityEngine.Vector3 UltimateXR.Manipulation.UxrGrabber::<SmoothAngularVelocity>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CSmoothAngularVelocityU3Ek__BackingField_48;
	// UnityEngine.Vector3 UltimateXR.Manipulation.UxrGrabber::<ThrowCenterOfMassLocalPosition>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CThrowCenterOfMassLocalPositionU3Ek__BackingField_49;
	// UnityEngine.Vector3 UltimateXR.Manipulation.UxrGrabber::<ThrowTipLocalPosition>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CThrowTipLocalPositionU3Ek__BackingField_50;
	// System.Collections.Generic.List`1<UltimateXR.Manipulation.UxrGrabber/PhysicsSample> UltimateXR.Manipulation.UxrGrabber::_physicsSampleWindow
	List_1_tA10FF6C4E639F0A8B347414F9793BF5B564C3D57* ____physicsSampleWindow_53;
	// System.Boolean UltimateXR.Manipulation.UxrGrabber::_sideInitialized
	bool ____sideInitialized_54;
	// UltimateXR.Core.UxrHandSide UltimateXR.Manipulation.UxrGrabber::_side
	int32_t ____side_55;
	// UltimateXR.Manipulation.UxrGrabbableObject UltimateXR.Manipulation.UxrGrabber::_grabbedObject
	UxrGrabbableObject_tCA9C5B90AC9CB9830D3D50AE51F7FF342511E3BC* ____grabbedObject_56;
};

// UltimateXR.Core.UxrManager
struct UxrManager_t0BB2898400B82F4D4701B135D91724026F5E602D  : public UxrSingleton_1_t3E8B654D54DFF4B9BA74B5CA29791885A0133D33
{
	// UltimateXR.Core.UxrPostUpdateMode UltimateXR.Core.UxrManager::_postUpdateMode
	int32_t ____postUpdateMode_30;
	// System.Boolean UltimateXR.Core.UxrManager::_usePrecaching
	bool ____usePrecaching_31;
	// System.Int32 UltimateXR.Core.UxrManager::_precacheFrameCount
	int32_t ____precacheFrameCount_32;
	// UnityEngine.Color UltimateXR.Core.UxrManager::<TeleportFadeColor>k__BackingField
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___U3CTeleportFadeColorU3Ek__BackingField_48;
	// UnityEngine.Coroutine UltimateXR.Core.UxrManager::_precacheCoroutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ____precacheCoroutine_49;
	// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GameObject> UltimateXR.Core.UxrManager::_dynamicInstances
	Dictionary_2_t3ED995699F3E88D06E5DA7362BEB7584DBD61662* ____dynamicInstances_50;
	// UnityEngine.Coroutine UltimateXR.Core.UxrManager::_teleportCoroutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ____teleportCoroutine_51;
};

struct UxrManager_t0BB2898400B82F4D4701B135D91724026F5E602D_StaticFields
{
	// System.Action UltimateXR.Core.UxrManager::PrecachingStarting
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___PrecachingStarting_40;
	// System.Action UltimateXR.Core.UxrManager::PrecachingFinished
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___PrecachingFinished_41;
	// System.Action UltimateXR.Core.UxrManager::AvatarsUpdating
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___AvatarsUpdating_42;
	// System.Action UltimateXR.Core.UxrManager::AvatarsUpdated
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___AvatarsUpdated_43;
	// System.Action`1<UltimateXR.Core.UxrUpdateStage> UltimateXR.Core.UxrManager::StageUpdating
	Action_1_tDF30F986A3D4E80AE09408F01A7151FB56492B59* ___StageUpdating_44;
	// System.Action`1<UltimateXR.Core.UxrUpdateStage> UltimateXR.Core.UxrManager::StageUpdated
	Action_1_tDF30F986A3D4E80AE09408F01A7151FB56492B59* ___StageUpdated_45;
	// System.EventHandler`1<UltimateXR.Avatar.UxrAvatarMoveEventArgs> UltimateXR.Core.UxrManager::AvatarMoving
	EventHandler_1_tED3DC79456BF1AB7E153063AE84D07955753DD54* ___AvatarMoving_46;
	// System.EventHandler`1<UltimateXR.Avatar.UxrAvatarMoveEventArgs> UltimateXR.Core.UxrManager::AvatarMoved
	EventHandler_1_tED3DC79456BF1AB7E153063AE84D07955753DD54* ___AvatarMoved_47;
};

// UltimateXR.Haptics.Helpers.UxrManipulationHapticFeedback
struct UxrManipulationHapticFeedback_t6DA4A9477852BE09667C082006431E86BC9271D3  : public UxrGrabbableObjectComponent_1_t6B5F4DCA9127AD35AFA33E38EDE099C2A84119A6
{
	// System.Boolean UltimateXR.Haptics.Helpers.UxrManipulationHapticFeedback::_continuousManipulationHaptics
	bool ____continuousManipulationHaptics_36;
	// UltimateXR.Haptics.UxrHapticMode UltimateXR.Haptics.Helpers.UxrManipulationHapticFeedback::_hapticMixMode
	int32_t ____hapticMixMode_37;
	// System.Single UltimateXR.Haptics.Helpers.UxrManipulationHapticFeedback::_minAmplitude
	float ____minAmplitude_38;
	// System.Single UltimateXR.Haptics.Helpers.UxrManipulationHapticFeedback::_maxAmplitude
	float ____maxAmplitude_39;
	// System.Single UltimateXR.Haptics.Helpers.UxrManipulationHapticFeedback::_minFrequency
	float ____minFrequency_40;
	// System.Single UltimateXR.Haptics.Helpers.UxrManipulationHapticFeedback::_maxFrequency
	float ____maxFrequency_41;
	// System.Single UltimateXR.Haptics.Helpers.UxrManipulationHapticFeedback::_minSpeed
	float ____minSpeed_42;
	// System.Single UltimateXR.Haptics.Helpers.UxrManipulationHapticFeedback::_maxSpeed
	float ____maxSpeed_43;
	// System.Single UltimateXR.Haptics.Helpers.UxrManipulationHapticFeedback::_minAngularSpeed
	float ____minAngularSpeed_44;
	// System.Single UltimateXR.Haptics.Helpers.UxrManipulationHapticFeedback::_maxAngularSpeed
	float ____maxAngularSpeed_45;
	// System.Boolean UltimateXR.Haptics.Helpers.UxrManipulationHapticFeedback::_useExternalRigidbody
	bool ____useExternalRigidbody_46;
	// UnityEngine.Rigidbody UltimateXR.Haptics.Helpers.UxrManipulationHapticFeedback::_externalRigidbody
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ____externalRigidbody_47;
	// UltimateXR.Haptics.UxrHapticClip UltimateXR.Haptics.Helpers.UxrManipulationHapticFeedback::_hapticClipOnGrab
	UxrHapticClip_tFC92FFBC7A97937953EBFBB995A3462BD776FDC8* ____hapticClipOnGrab_48;
	// UltimateXR.Haptics.UxrHapticClip UltimateXR.Haptics.Helpers.UxrManipulationHapticFeedback::_hapticClipOnPlace
	UxrHapticClip_tFC92FFBC7A97937953EBFBB995A3462BD776FDC8* ____hapticClipOnPlace_49;
	// UltimateXR.Haptics.UxrHapticClip UltimateXR.Haptics.Helpers.UxrManipulationHapticFeedback::_hapticClipOnRelease
	UxrHapticClip_tFC92FFBC7A97937953EBFBB995A3462BD776FDC8* ____hapticClipOnRelease_50;
	// System.Boolean UltimateXR.Haptics.Helpers.UxrManipulationHapticFeedback::grab
	bool ___grab_51;
	// System.Int32 UltimateXR.Haptics.Helpers.UxrManipulationHapticFeedback::<HapticClipOnGrab_audioSource>k__BackingField
	int32_t ___U3CHapticClipOnGrab_audioSourceU3Ek__BackingField_52;
	// UnityEngine.Coroutine UltimateXR.Haptics.Helpers.UxrManipulationHapticFeedback::_leftHapticsCoroutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ____leftHapticsCoroutine_54;
	// UnityEngine.Coroutine UltimateXR.Haptics.Helpers.UxrManipulationHapticFeedback::_rightHapticsCoroutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ____rightHapticsCoroutine_55;
	// UnityEngine.Vector3 UltimateXR.Haptics.Helpers.UxrManipulationHapticFeedback::_previousLocalPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____previousLocalPosition_56;
	// UnityEngine.Quaternion UltimateXR.Haptics.Helpers.UxrManipulationHapticFeedback::_previousLocalRotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ____previousLocalRotation_57;
	// System.Single UltimateXR.Haptics.Helpers.UxrManipulationHapticFeedback::_linearSpeed
	float ____linearSpeed_58;
	// System.Single UltimateXR.Haptics.Helpers.UxrManipulationHapticFeedback::_angularSpeed
	float ____angularSpeed_59;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Transform[]
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24  : public RuntimeArray
{
	ALIGN_FIELD (8) Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* m_Items[1];

	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Quaternion[]
struct QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7  : public RuntimeArray
{
	ALIGN_FIELD (8) Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 m_Items[1];

	inline Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 value)
	{
		m_Items[index] = value;
	}
};
// UltimateXR.Manipulation.UxrGrabbableObjectAnchor[]
struct UxrGrabbableObjectAnchorU5BU5D_t086D051370506C7B677EA2AFD5BFCDDEEC4A12A7  : public RuntimeArray
{
	ALIGN_FIELD (8) UxrGrabbableObjectAnchor_tE7110AF7891C09542149FC793D1C0C9A9D95F66A* m_Items[1];

	inline UxrGrabbableObjectAnchor_tE7110AF7891C09542149FC793D1C0C9A9D95F66A* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline UxrGrabbableObjectAnchor_tE7110AF7891C09542149FC793D1C0C9A9D95F66A** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, UxrGrabbableObjectAnchor_tE7110AF7891C09542149FC793D1C0C9A9D95F66A* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline UxrGrabbableObjectAnchor_tE7110AF7891C09542149FC793D1C0C9A9D95F66A* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline UxrGrabbableObjectAnchor_tE7110AF7891C09542149FC793D1C0C9A9D95F66A** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, UxrGrabbableObjectAnchor_tE7110AF7891C09542149FC793D1C0C9A9D95F66A* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 m_Items[1];

	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.GradientColorKey[]
struct GradientColorKeyU5BU5D_tB8929E6EE130CA1F3C1664B300BE83A95A642C18  : public RuntimeArray
{
	ALIGN_FIELD (8) GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A m_Items[1];

	inline GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.GradientAlphaKey[]
struct GradientAlphaKeyU5BU5D_tA5D7ED787780B5C01635C8C59B15B2BC01AEC50E  : public RuntimeArray
{
	ALIGN_FIELD (8) GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0 m_Items[1];

	inline GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0 value)
	{
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C  : public RuntimeArray
{
	ALIGN_FIELD (8) float m_Items[1];

	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};


// System.Void System.EventHandler`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler_1__ctor_mBA2E748CFBA7A0EEC0A373A6F634D3B5774EA370_gshared (EventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// T UltimateXR.Core.Components.Singleton.UxrSingleton`1<System.Object>::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UxrSingleton_1_get_Instance_m7DCDC0008C756BFE64A0C351FCD9297323AC5CC6_gshared (const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UltimateXR.Core.Components.Composite.UxrGrabbableObjectComponent`1<System.Object>::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UxrGrabbableObjectComponent_1_Awake_m4FD19B05992618CED0D6B5951E64F92907B11889_gshared (UxrGrabbableObjectComponent_1_t178AD3E4B14600E5DB26855EB8B1E6E35716A869* __this, const RuntimeMethod* method) ;
// UltimateXR.Manipulation.UxrGrabbableObject UltimateXR.Core.Components.Composite.UxrGrabbableObjectComponent`1<System.Object>::get_GrabbableObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UxrGrabbableObject_tCA9C5B90AC9CB9830D3D50AE51F7FF342511E3BC* UxrGrabbableObjectComponent_1_get_GrabbableObject_m540A6B5438302F600D37A053E6543866316AE4DD_gshared (UxrGrabbableObjectComponent_1_t178AD3E4B14600E5DB26855EB8B1E6E35716A869* __this, const RuntimeMethod* method) ;
// System.Void UltimateXR.Core.Components.Composite.UxrGrabbableObjectComponent`1<System.Object>::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UxrGrabbableObjectComponent_1_OnEnable_m3C04FA308728128EFEB9DB84846B1825FE00A19F_gshared (UxrGrabbableObjectComponent_1_t178AD3E4B14600E5DB26855EB8B1E6E35716A869* __this, const RuntimeMethod* method) ;
// System.Void UltimateXR.Core.Components.Composite.UxrGrabbableObjectComponent`1<System.Object>::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UxrGrabbableObjectComponent_1_OnDisable_m80767D2DC934C84C29A74A71A151FB422AF3E9C1_gshared (UxrGrabbableObjectComponent_1_t178AD3E4B14600E5DB26855EB8B1E6E35716A869* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<T> UltimateXR.Core.Components.UxrComponent`1<System.Object>::get_EnabledComponents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UxrComponent_1_get_EnabledComponents_m91D648291F8952B85FBFA265EB6811A8D4E8F398_gshared (const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInParent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponentInParent_TisRuntimeObject_m6746D6BB99912B1B509746C993906492F86CD119_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UltimateXR.Core.Components.Composite.UxrGrabbableObjectComponent`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UxrGrabbableObjectComponent_1__ctor_mC7717ABF491F7D1A2002DDA95A98162B69219860_gshared (UxrGrabbableObjectComponent_1_t178AD3E4B14600E5DB26855EB8B1E6E35716A869* __this, const RuntimeMethod* method) ;
// System.Void UltimateXR.Core.Components.UxrComponent`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UxrComponent_1__ctor_m9306DE8F3D0BDEE20C1EA88316A0168C023676B2_gshared (UxrComponent_1_t512A5ABF80398A466EF674B4F04195341FCB100A* __this, const RuntimeMethod* method) ;
// System.Void UltimateXR.Core.Components.UxrComponent`1<System.Object>::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UxrComponent_1_Awake_m8BE168187EFD9A3A61E8F8E04CA5660E5CFFA28D_gshared (UxrComponent_1_t512A5ABF80398A466EF674B4F04195341FCB100A* __this, const RuntimeMethod* method) ;
// System.Void UltimateXR.Core.Components.UxrComponent`1<System.Object>::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UxrComponent_1_OnEnable_m55D9CDC9E1BA4729C212C0A84B94488459B7D672_gshared (UxrComponent_1_t512A5ABF80398A466EF674B4F04195341FCB100A* __this, const RuntimeMethod* method) ;
// System.Void UltimateXR.Core.Components.UxrComponent`1<System.Object>::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UxrComponent_1_OnDisable_m33306E77EEA63F19CA88E9D3F441737DA40820DD_gshared (UxrComponent_1_t512A5ABF80398A466EF674B4F04195341FCB100A* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// UltimateXR.Avatar.UxrAvatar UltimateXR.Core.Components.Composite.UxrAvatarComponent`1<System.Object>::get_Avatar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UxrAvatar_t880FC3AD5A9A30338CFDF4653C86343B16ACDE79* UxrAvatarComponent_1_get_Avatar_m4F1A8B16C1BC637A48195A2743B2196EC57E3FC4_gshared (UxrAvatarComponent_1_tFBFF21AB620850BAEFB90774CD907CF6D704C606* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m3C58DBC69A321AF2826595584FF3E9F43C07EA56_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Single>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m2F86E252D086E288E02FA1C830B7E86C0A431E51_gshared_inline (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, float ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Single>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC29D3D824786832A31096310B3B3016B8B42B802_gshared (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Single>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50_gshared (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Single>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m545762F67009314D9C63DD209B42FFF950569B05_gshared_inline (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Single>::RemoveRange(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveRange_m0B9C23AD79609782B89695407DD77AFFA2857589_gshared (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, int32_t ___index0, int32_t ___count1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::RemoveRange(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveRange_m2459C0BC8F20CF66E82F55757ABCF60A69752B6D_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, int32_t ___index0, int32_t ___count1, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<UnityEngine.Vector3>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* List_1_ToArray_mF7A66D08104196EBAE0E29F0DD9BA140656EA5F3_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.Vector3>::GetRange(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* List_1_GetRange_m6C4CA260108AD2A75C9B4B2DD344FD0996883E34_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, int32_t ___index0, int32_t ___count1, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, int32_t ___index0, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m5F38AE6B74636F569647D545E365C5579E5F59CE_gshared (RuntimeObject* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent3, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::ForEach(System.Action`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_ForEach_m47052B1B7C82747D3D5D2CAD15A30DB9AB95FF68_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___action0, const RuntimeMethod* method) ;
// System.Void System.Action`3<System.Object,System.Int32Enum,System.Boolean>::Invoke(T1,T2,T3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_3_Invoke_m74553696A7925B7173D6F62C410A7FF17E8E599B_gshared_inline (Action_3_t046F7B128A04A958DF7153022D4E3D856249A3B5* __this, RuntimeObject* ___arg10, int32_t ___arg21, bool ___arg32, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::AddWithResize(T)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::AddWithResize(T)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_mCDB189127FC2EE67B5EED9DE34F837DFC6EDC212_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Single>::AddWithResize(T)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m446487BF7F55E757E7D552B2436AD74AC354EA99_gshared (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, float ___item0, const RuntimeMethod* method) ;

// System.Void UltimateXR.Core.Components.UxrComponent::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UxrComponent_OnEnable_mB30EBD913BFCBA1B1B248C0C4E93F3E63136DFF6 (UxrComponent_tA6AC6651B5C934626995D87127173273775B1011* __this, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<UltimateXR.Avatar.UxrAvatarMoveEventArgs>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_mE96CF0831852EEA69C9F9D29399DD93056D583F4 (EventHandler_1_tED3DC79456BF1AB7E153063AE84D07955753DD54* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tED3DC79456BF1AB7E153063AE84D07955753DD54*, RuntimeObject*, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_mBA2E748CFBA7A0EEC0A373A6F634D3B5774EA370_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UltimateXR.Core.UxrManager::add_AvatarMoved(System.EventHandler`1<UltimateXR.Avatar.UxrAvatarMoveEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UxrManager_add_AvatarMoved_m699E0D13BFEA924B47B2A6CFFAC18FC1DFB81482 (EventHandler_1_tED3DC79456BF1AB7E153063AE84D07955753DD54* ___value0, const RuntimeMethod* method) ;
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UltimateXR.Core.UxrManager::add_AvatarsUpdated(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UxrManager_add_AvatarsUpdated_m380B3528C94B7830A074514641244B12FBE2127A (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) ;
// System.Void UltimateXR.Core.Components.UxrComponent::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UxrComponent_OnDisable_mCC9A18F682546580B0A67A788DFFD33595ECE1DB (UxrComponent_tA6AC6651B5C934626995D87127173273775B1011* __this, const RuntimeMethod* method) ;
// System.Void UltimateXR.Core.UxrManager::remove_AvatarMoved(System.EventHandler`1<UltimateXR.Avatar.UxrAvatarMoveEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UxrManager_remove_AvatarMoved_mABE51EE175DC25505C33588DFBAB50D44D566A2A (EventHandler_1_tED3DC79456BF1AB7E153063AE84D07955753DD54* ___value0, const RuntimeMethod* method) ;
// System.Void UltimateXR.Core.UxrManager::remove_AvatarsUpdated(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UxrManager_remove_AvatarsUpdated_m06CD0E601A8F84D4489953418E9A3D68D6E96F6E (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) ;
// System.Void UltimateXR.Core.Components.UxrComponent::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UxrComponent_Start_m24F2104BC70550511F773715262B361E292CAD18 (UxrComponent_tA6AC6651B5C934626995D87127173273775B1011* __this, const RuntimeMethod* method) ;
// T UltimateXR.Core.Components.Singleton.UxrSingleton`1<UltimateXR.Core.UxrManager>::get_Instance()
inline UxrManager_t0BB2898400B82F4D4701B135D91724026F5E602D* UxrSingleton_1_get_Instance_mAEADF1C21E330A5564E4A52BC09D06D9B5599008 (const RuntimeMethod* method)
{
	return ((  UxrManager_t0BB2898400B82F4D4701B135D91724026F5E602D* (*) (const RuntimeMethod*))UxrSingleton_1_get_Instance_m7DCDC0008C756BFE64A0C351FCD9297323AC5CC6_gshared)(method);
}
// UltimateXR.Avatar.UxrAvatar UltimateXR.Avatar.UxrAvatar::get_LocalAvatar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UxrAvatar_t880FC3AD5A9A30338CFDF4653C86343B16ACDE79* UxrAvatar_get_LocalAvatar_m57231BC6DC4B6F43EC6BB81C005CA50265112F80 (const RuntimeMethod* method) ;
// System.Void UltimateXR.Core.UxrManager::MoveAvatarTo(UltimateXR.Avatar.UxrAvatar,UnityEngine.Transform,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UxrManager_MoveAvatarTo_m33273AADA93DEE8F33F820331BE4556E11703002 (UxrManager_t0BB2898400B82F4D4701B135D91724026F5E602D* __this, UxrAvatar_t880FC3AD5A9A30338CFDF4653C86343B16ACDE79* ___avatar0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___destination1, bool ___propagateEvents2, const RuntimeMethod* method) ;
// System.Void UltimateXR.Examples.FullScene.GlobalLogic::UpdateVisibility()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlobalLogic_UpdateVisibility_m7197DB89354B15E43FE35BAAFC7EA58617AD03F8 (GlobalLogic_t200876C43EB8393A83FDCFA472C9E734546F9EEB* __this, const RuntimeMethod* method) ;
// System.Boolean UltimateXR.Devices.Keyboard.UxrKeyboardInput::GetPressDown(UltimateXR.Devices.Keyboard.UxrKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UxrKeyboardInput_GetPressDown_mFCA3CB652C0DC592DAD4962CF9356B57DB835F75 (int32_t ___key0, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1 (int32_t ___sceneBuildIndex0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_mE304382DB9A6455C2A474C8F364C7387F37E9281 (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UltimateXR.Core.UxrManager::TeleportLocalAvatar(UnityEngine.Vector3,UnityEngine.Quaternion,UltimateXR.Locomotion.UxrTranslationType,System.Single,System.Action,System.Action`1<System.Boolean>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UxrManager_TeleportLocalAvatar_mEA787355F1FEF54BF7C8BA0C04D16AABEE47202E (UxrManager_t0BB2898400B82F4D4701B135D91724026F5E602D* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___newFloorPosition0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___newRotation1, int32_t ___translationType2, float ___transitionSeconds3, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___teleportedCallback4, Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___finishedCallback5, bool ___propagateEvents6, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Boolean UltimateXR.CameraUtils.UxrCameraWallFade::IsAvatarPeekingThroughGeometry(UltimateXR.Avatar.UxrAvatar)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UxrCameraWallFade_IsAvatarPeekingThroughGeometry_m3715904B42C4B39A29F38E042537A732A5A73D99 (UxrAvatar_t880FC3AD5A9A30338CFDF4653C86343B16ACDE79* ___avatar0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UltimateXR.Avatar.UxrAvatar::get_CameraPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 UxrAvatar_get_CameraPosition_m23687EBA4527BB067387C5E7F38E4E1ACDFB08F1 (UxrAvatar_t880FC3AD5A9A30338CFDF4653C86343B16ACDE79* __this, const RuntimeMethod* method) ;
// System.Boolean UltimateXR.Extensions.Unity.Math.Vector3Ext::IsInsideBox(UnityEngine.Vector3,UnityEngine.BoxCollider,UnityEngine.Vector3,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector3Ext_IsInsideBox_m7E8797A0592E772EDC8A64677F56CEE4E82F4B8E (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point0, BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* ___box1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___margin2, bool ___marginIsWorld3, const RuntimeMethod* method) ;
// System.Single UltimateXR.Examples.FullScene.Doors.AutomaticDoor::get_OpenValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float AutomaticDoor_get_OpenValue_mDB196EDB79C51FC9E86AA0F578C02D3DA5639B43_inline (AutomaticDoor_t1300394E882F63AD7DCD712530F55D334F86B1FC* __this, const RuntimeMethod* method) ;
// System.Void UltimateXR.Extensions.Unity.GameObjectExt::CheckSetActive(UnityEngine.GameObject,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObjectExt_CheckSetActive_mF2AA9690740549BCEEDF6CF0B6E9ED2E9DA20C65 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___self0, bool ___activate1, const RuntimeMethod* method) ;
// System.Void UltimateXR.Extensions.Unity.MonoBehaviourExt::CheckSetEnabled(UnityEngine.MonoBehaviour,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviourExt_CheckSetEnabled_m05B3FA6026375F6871B789D33086D76F5C0E4285 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* ___self0, bool ___enable1, const RuntimeMethod* method) ;
// System.Void UltimateXR.Core.Components.UxrComponent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UxrComponent__ctor_mAE5417B1456451CA1927CE21DF3731194A1CA64A (UxrComponent_tA6AC6651B5C934626995D87127173273775B1011* __this, const RuntimeMethod* method) ;
// System.Void UltimateXR.Core.Components.UxrComponent::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UxrComponent_Awake_m99D44E2A1351BB489585DBBD619F82CCAE366C24 (UxrComponent_tA6AC6651B5C934626995D87127173273775B1011* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UltimateXR.Mechanics.Weapons.UxrFirearmMag>()
inline UxrFirearmMag_tBEA739C8C38E1746316937E4BCBC7471EA02EC5C* Component_GetComponent_TisUxrFirearmMag_tBEA739C8C38E1746316937E4BCBC7471EA02EC5C_m87D3E49B15B732176AC404723523F2D27797E4F1 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  UxrFirearmMag_tBEA739C8C38E1746316937E4BCBC7471EA02EC5C* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___a0, Delegate_t* ___b1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___source0, Delegate_t* ___value1, const RuntimeMethod* method) ;
// System.Void UltimateXR.Examples.FullScene.Weapons.MagAmmoIndicator::OnRoundsChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MagAmmoIndicator_OnRoundsChanged_mAE8DE6668D1CB47A69FFA08B69A0A525A7591505 (MagAmmoIndicator_t8B07F09F92B9AA96AA4E615ED6443811B80EF9D4* __this, const RuntimeMethod* method) ;
// UnityEngine.Material UnityEngine.Renderer::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// System.Int32 UltimateXR.Mechanics.Weapons.UxrFirearmMag::get_Rounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UxrFirearmMag_get_Rounds_m4F391C506014ADF7200045CD550097889EA20BA9 (UxrFirearmMag_tBEA739C8C38E1746316937E4BCBC7471EA02EC5C* __this, const RuntimeMethod* method) ;
// System.Int32 UltimateXR.Mechanics.Weapons.UxrFirearmMag::get_Capacity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UxrFirearmMag_get_Capacity_m0D6296E2BF4F0631583AA398AF15FE89E489AB32_inline (UxrFirearmMag_tBEA739C8C38E1746316937E4BCBC7471EA02EC5C* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, float ___value1, const RuntimeMethod* method) ;
// System.Void UltimateXR.Core.Components.Composite.UxrGrabbableObjectComponent`1<UltimateXR.Examples.FullScene.Lab.Battery>::Awake()
inline void UxrGrabbableObjectComponent_1_Awake_m9410EE9EA1E839A27FF10C24475F5AD768AFF303 (UxrGrabbableObjectComponent_1_tFE02A697C5B42FECE385B3A530702420DFC6E020* __this, const RuntimeMethod* method)
{
	((  void (*) (UxrGrabbableObjectComponent_1_tFE02A697C5B42FECE385B3A530702420DFC6E020*, const RuntimeMethod*))UxrGrabbableObjectComponent_1_Awake_m4FD19B05992618CED0D6B5951E64F92907B11889_gshared)(__this, method);
}
// UltimateXR.Manipulation.UxrGrabbableObject UltimateXR.Core.Components.Composite.UxrGrabbableObjectComponent`1<UltimateXR.Examples.FullScene.Lab.Battery>::get_GrabbableObject()
inline UxrGrabbableObject_tCA9C5B90AC9CB9830D3D50AE51F7FF342511E3BC* UxrGrabbableObjectComponent_1_get_GrabbableObject_mFA0E4181BAD136313E485FD1F6604C3BA09B9E3C (UxrGrabbableObjectComponent_1_tFE02A697C5B42FECE385B3A530702420DFC6E020* __this, const RuntimeMethod* method)
{
	return ((  UxrGrabbableObject_tCA9C5B90AC9CB9830D3D50AE51F7FF342511E3BC* (*) (UxrGrabbableObjectComponent_1_tFE02A697C5B42FECE385B3A530702420DFC6E020*, const RuntimeMethod*))UxrGrabbableObjectComponent_1_get_GrabbableObject_m540A6B5438302F600D37A053E6543866316AE4DD_gshared)(__this, method);
}
// UltimateXR.Manipulation.UxrGrabbableObjectAnchor UltimateXR.Manipulation.UxrGrabbableObject::get_CurrentAnchor()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UxrGrabbableObjectAnchor_tE7110AF7891C09542149FC793D1C0C9A9D95F66A* UxrGrabbableObject_get_CurrentAnchor_mFAF2BAAB5BC5FEE894E0EB4874ECD590CD0284BD_inline (UxrGrabbableObject_tCA9C5B90AC9CB9830D3D50AE51F7FF342511E3BC* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UltimateXR.Manipulation.UxrGrabbableObject::get_TranslationLimitsMax()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 UxrGrabbableObject_get_TranslationLimitsMax_m3A01D28CEC970FD9FB1F7D04A9CE4ACB2266F584_inline (UxrGrabbableObject_tCA9C5B90AC9CB9830D3D50AE51F7FF342511E3BC* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UltimateXR.Haptics.Helpers.UxrManipulationHapticFeedback>()
inline UxrManipulationHapticFeedback_t6DA4A9477852BE09667C082006431E86BC9271D3* Component_GetComponent_TisUxrManipulationHapticFeedback_t6DA4A9477852BE09667C082006431E86BC9271D3_m11B487A5D4D43C49910AF886B3B10131472D27BD (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  UxrManipulationHapticFeedback_t6DA4A9477852BE09667C082006431E86BC9271D3* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UltimateXR.Core.Components.Composite.UxrGrabbableObjectComponent`1<UltimateXR.Examples.FullScene.Lab.Battery>::OnEnable()
inline void UxrGrabbableObjectComponent_1_OnEnable_m9FD689540A0494BA5510E0FCDE3233F0A8676ED1 (UxrGrabbableObjectComponent_1_tFE02A697C5B42FECE385B3A530702420DFC6E020* __this, const RuntimeMethod* method)
{
	((  void (*) (UxrGrabbableObjectComponent_1_tFE02A697C5B42FECE385B3A530702420DFC6E020*, const RuntimeMethod*))UxrGrabbableObjectComponent_1_OnEnable_m3C04FA308728128EFEB9DB84846B1825FE00A19F_gshared)(__this, method);
}
// System.Void UltimateXR.Core.Components.Composite.UxrGrabbableObjectComponent`1<UltimateXR.Examples.FullScene.Lab.Battery>::OnDisable()
inline void UxrGrabbableObjectComponent_1_OnDisable_m2CE8EDF6A887C89870E49BB14286F7C5100BEADB (UxrGrabbableObjectComponent_1_tFE02A697C5B42FECE385B3A530702420DFC6E020* __this, const RuntimeMethod* method)
{
	((  void (*) (UxrGrabbableObjectComponent_1_tFE02A697C5B42FECE385B3A530702420DFC6E020*, const RuntimeMethod*))UxrGrabbableObjectComponent_1_OnDisable_m80767D2DC934C84C29A74A71A151FB422AF3E9C1_gshared)(__this, method);
}
// T UltimateXR.Core.Components.Singleton.UxrSingleton`1<UltimateXR.Manipulation.UxrGrabManager>::get_Instance()
inline UxrGrabManager_t76F8EBC3B188C8BB86C683C7B3E0E699CDEA7104* UxrSingleton_1_get_Instance_mA15387C4D93C58879A6567FD6EA7BE6DE8A46DC7 (const RuntimeMethod* method)
{
	return ((  UxrGrabManager_t76F8EBC3B188C8BB86C683C7B3E0E699CDEA7104* (*) (const RuntimeMethod*))UxrSingleton_1_get_Instance_m7DCDC0008C756BFE64A0C351FCD9297323AC5CC6_gshared)(method);
}
// System.Boolean UltimateXR.Manipulation.UxrGrabManager::IsBeingGrabbed(UltimateXR.Manipulation.UxrGrabbableObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UxrGrabManager_IsBeingGrabbed_mFC0D94B4E31E1AD28D75AFDA6C85B51B6F035E2D (UxrGrabManager_t76F8EBC3B188C8BB86C683C7B3E0E699CDEA7104* __this, UxrGrabbableObject_tCA9C5B90AC9CB9830D3D50AE51F7FF342511E3BC* ___grabbableObject0, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<T> UltimateXR.Core.Components.UxrComponent`1<UltimateXR.Examples.FullScene.Lab.BatteryAnchor>::get_EnabledComponents()
inline RuntimeObject* UxrComponent_1_get_EnabledComponents_m80D87C49AFFE8431CCEBEBD31AEF3A860773CF8B (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))UxrComponent_1_get_EnabledComponents_m91D648291F8952B85FBFA265EB6811A8D4E8F398_gshared)(method);
}
// UltimateXR.Manipulation.UxrGrabbableObjectAnchor UltimateXR.Examples.FullScene.Lab.BatteryAnchor::get_Anchor()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UxrGrabbableObjectAnchor_tE7110AF7891C09542149FC793D1C0C9A9D95F66A* BatteryAnchor_get_Anchor_mAE18114D9A38411ECAC1A1E47C8A249124F3F719_inline (BatteryAnchor_t01234E44479A11E2168D9712174DA3B7B28ED114* __this, const RuntimeMethod* method) ;
// UltimateXR.Manipulation.UxrGrabbableObject UltimateXR.Manipulation.UxrGrabbableObjectAnchor::get_CurrentPlacedObject()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UxrGrabbableObject_tCA9C5B90AC9CB9830D3D50AE51F7FF342511E3BC* UxrGrabbableObjectAnchor_get_CurrentPlacedObject_m0988C02C0982FDEA3373963A7E310E149AC522B5_inline (UxrGrabbableObjectAnchor_tE7110AF7891C09542149FC793D1C0C9A9D95F66A* __this, const RuntimeMethod* method) ;
// System.Boolean UltimateXR.Examples.FullScene.Lab.Battery::IsBatteryNearPlacement(UltimateXR.Manipulation.UxrGrabbableObjectAnchor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Battery_IsBatteryNearPlacement_mD901A66A752363AB828111EFA32A4808AC9D9828 (Battery_t56FF6D15FAC1E9B259C0EF64902537FB2B41FA8B* __this, UxrGrabbableObjectAnchor_tE7110AF7891C09542149FC793D1C0C9A9D95F66A* ___anchor0, const RuntimeMethod* method) ;
// System.Void UltimateXR.Manipulation.UxrGrabbableObject::set_TranslationConstraint(UltimateXR.Manipulation.UxrTranslationConstraintMode)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UxrGrabbableObject_set_TranslationConstraint_m87F0647E2F082718C13CEB93B96360EBC32ECB7E_inline (UxrGrabbableObject_tCA9C5B90AC9CB9830D3D50AE51F7FF342511E3BC* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UltimateXR.Manipulation.UxrGrabbableObject::set_RotationConstraint(UltimateXR.Manipulation.UxrRotationConstraintMode)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UxrGrabbableObject_set_RotationConstraint_m6236C3CB606BEA6D244AE74FA810016FD1A27B4A_inline (UxrGrabbableObject_tCA9C5B90AC9CB9830D3D50AE51F7FF342511E3BC* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Boolean UltimateXR.Manipulation.UxrGrabManager::PlaceObject(UltimateXR.Manipulation.UxrGrabbableObject,UltimateXR.Manipulation.UxrGrabbableObjectAnchor,UltimateXR.Manipulation.UxrPlacementType,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UxrGrabManager_PlaceObject_mD7E88B3760936FCF707B3A5E48B9BE89932A7C5F (UxrGrabManager_t76F8EBC3B188C8BB86C683C7B3E0E699CDEA7104* __this, UxrGrabbableObject_tCA9C5B90AC9CB9830D3D50AE51F7FF342511E3BC* ___grabbableObject0, UxrGrabbableObjectAnchor_tE7110AF7891C09542149FC793D1C0C9A9D95F66A* ___anchor1, int32_t ___placementType2, bool ___propagateEvents3, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// System.Void UltimateXR.Haptics.Helpers.UxrManipulationHapticFeedback::set_MinAmplitude(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UxrManipulationHapticFeedback_set_MinAmplitude_m34FD38C4DD993091D1A06BB890FA12394A7EAB3C_inline (UxrManipulationHapticFeedback_t6DA4A9477852BE09667C082006431E86BC9271D3* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UltimateXR.Haptics.Helpers.UxrManipulationHapticFeedback::set_MaxAmplitude(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UxrManipulationHapticFeedback_set_MaxAmplitude_mD29EF350C59E3905439A7176F2D0401F1231989F_inline (UxrManipulationHapticFeedback_t6DA4A9477852BE09667C082006431E86BC9271D3* __this, float ___value0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInParent<UltimateXR.Examples.FullScene.Lab.GeneratorDoor>()
inline GeneratorDoor_t33EB8ADB2139695767CD1080E775EA94B6DD3037* Component_GetComponentInParent_TisGeneratorDoor_t33EB8ADB2139695767CD1080E775EA94B6DD3037_m8321A5B9EADE7967CF085D027E4EF9978D9AB074 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  GeneratorDoor_t33EB8ADB2139695767CD1080E775EA94B6DD3037* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInParent_TisRuntimeObject_m6746D6BB99912B1B509746C993906492F86CD119_gshared)(__this, method);
}
// System.Boolean UltimateXR.Examples.FullScene.Lab.GeneratorDoor::get_IsLockOpen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GeneratorDoor_get_IsLockOpen_mA379CCEF72904EBFCECCB283E489F978739FCC73 (GeneratorDoor_t33EB8ADB2139695767CD1080E775EA94B6DD3037* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// System.Void UltimateXR.Manipulation.UxrGrabbableObject::set_TranslationLimitsMax(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UxrGrabbableObject_set_TranslationLimitsMax_mE36CDD587F8B7EC09466939280A4FF91B17FD113_inline (UxrGrabbableObject_tCA9C5B90AC9CB9830D3D50AE51F7FF342511E3BC* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Single UltimateXR.Haptics.Helpers.UxrManipulationHapticFeedback::get_MinAmplitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float UxrManipulationHapticFeedback_get_MinAmplitude_m816282408BAFD981909F3A3B82C16D718D232210_inline (UxrManipulationHapticFeedback_t6DA4A9477852BE09667C082006431E86BC9271D3* __this, const RuntimeMethod* method) ;
// System.Single UltimateXR.Haptics.Helpers.UxrManipulationHapticFeedback::get_MaxAmplitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float UxrManipulationHapticFeedback_get_MaxAmplitude_m685EF33F3045E85DADE7A061146BCA789C1C21E0_inline (UxrManipulationHapticFeedback_t6DA4A9477852BE09667C082006431E86BC9271D3* __this, const RuntimeMethod* method) ;
// System.Void UltimateXR.Manipulation.UxrGrabManager::RemoveObjectFromAnchor(UltimateXR.Manipulation.UxrGrabbableObject,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UxrGrabManager_RemoveObjectFromAnchor_m37586DB7EB4D3C6B083D1EE48DCAC8D90AB25DD2 (UxrGrabManager_t76F8EBC3B188C8BB86C683C7B3E0E699CDEA7104* __this, UxrGrabbableObject_tCA9C5B90AC9CB9830D3D50AE51F7FF342511E3BC* ___grabbableObject0, bool ___propagateEvents1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Physics::get_gravity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Physics_get_gravity_m94393492AE4ED8B38A22ECCDCD2DDDB71BFA010D (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// System.Void UltimateXR.Examples.FullScene.Lab.GeneratorDoor::set_IsBatteryInContact(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GeneratorDoor_set_IsBatteryInContact_mFF2AED00F8E373F46A1D6C63150254B7C29331E4_inline (GeneratorDoor_t33EB8ADB2139695767CD1080E775EA94B6DD3037* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UltimateXR.Manipulation.UxrGrabbableObject UltimateXR.Manipulation.UxrManipulationEventArgs::get_GrabbableObject()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UxrGrabbableObject_tCA9C5B90AC9CB9830D3D50AE51F7FF342511E3BC* UxrManipulationEventArgs_get_GrabbableObject_m94A2B77251CC7B8B2B0B5620252EA79EBC52C9BC_inline (UxrManipulationEventArgs_tD33E70382345A37F8AE2C8B4A533810FB76EDA78* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector3::op_Inequality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Inequality_m9F170CDFBF1E490E559DA5D06D6547501A402BBF_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
// UnityEngine.Rigidbody UltimateXR.Manipulation.UxrGrabbableObject::get_RigidBodySource()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* UxrGrabbableObject_get_RigidBodySource_m6758B00D10ECE61793CC17AE2F9CCC4D8E9375D0_inline (UxrGrabbableObject_tCA9C5B90AC9CB9830D3D50AE51F7FF342511E3BC* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_isKinematic(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_isKinematic_m6C3FD3EA358DADA3B191F2449CF1C4F8B22695ED (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.Transform UltimateXR.Manipulation.UxrGrabbableObjectAnchor::get_AlignTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* UxrGrabbableObjectAnchor_get_AlignTransform_mF861D7065443D9A24282993FDD7135CB94FC4BE4 (UxrGrabbableObjectAnchor_tE7110AF7891C09542149FC793D1C0C9A9D95F66A* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UltimateXR.Manipulation.UxrGrabbableObject::get_DropAlignTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* UxrGrabbableObject_get_DropAlignTransform_m0DA9250DC517BBFD3ECEC2CCA28CD0DDE63AE60B (UxrGrabbableObject_tCA9C5B90AC9CB9830D3D50AE51F7FF342511E3BC* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::InverseTransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_InverseTransformPoint_m18CD395144D9C78F30E15A5B82B6670E792DBA5D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) ;
// System.Void UltimateXR.Core.Components.Composite.UxrGrabbableObjectComponent`1<UltimateXR.Examples.FullScene.Lab.Battery>::.ctor()
inline void UxrGrabbableObjectComponent_1__ctor_m6449DF5F963B00C8327E37984D2452FEA5C2E429 (UxrGrabbableObjectComponent_1_tFE02A697C5B42FECE385B3A530702420DFC6E020* __this, const RuntimeMethod* method)
{
	((  void (*) (UxrGrabbableObjectComponent_1_tFE02A697C5B42FECE385B3A530702420DFC6E020*, const RuntimeMethod*))UxrGrabbableObjectComponent_1__ctor_mC7717ABF491F7D1A2002DDA95A98162B69219860_gshared)(__this, method);
}
// System.Void UltimateXR.Core.Components.UxrComponent`1<UltimateXR.Examples.FullScene.Lab.BatteryAnchor>::.ctor()
inline void UxrComponent_1__ctor_m7961FB498AE621BFBCEAE3A02DF31A5D75B2C437 (UxrComponent_1_t87BAA908145649D47C98BE530A9F80A805F9E90F* __this, const RuntimeMethod* method)
{
	((  void (*) (UxrComponent_1_t87BAA908145649D47C98BE530A9F80A805F9E90F*, const RuntimeMethod*))UxrComponent_1__ctor_m9306DE8F3D0BDEE20C1EA88316A0168C023676B2_gshared)(__this, method);
}
// System.Single UltimateXR.Examples.FullScene.Lab.GeneratorDoor::get_LockHandleOpenValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GeneratorDoor_get_LockHandleOpenValue_m6AFBE177CFDD5C320BFB8DE72D7FEE1EE4F88C2A (GeneratorDoor_t33EB8ADB2139695767CD1080E775EA94B6DD3037* __this, const RuntimeMethod* method) ;
// System.Void UltimateXR.Manipulation.UxrGrabbableObject::set_SingleRotationAxisDegrees(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UxrGrabbableObject_set_SingleRotationAxisDegrees_m2BE147E578062C7033C43571AAFCADE40D761F06 (UxrGrabbableObject_tCA9C5B90AC9CB9830D3D50AE51F7FF342511E3BC* __this, float ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline (const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::AngleAxis(System.Single,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_AngleAxis_mF37022977B297E63AA70D69EA1C4C922FF22CC80 (float ___angle0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___axis1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// System.Void UltimateXR.Core.Components.UxrComponent`1<UltimateXR.Examples.FullScene.Lab.GeneratorDoor>::Awake()
inline void UxrComponent_1_Awake_m18681FB238CD8A28AE2F171623E3A2F9242C8E7F (UxrComponent_1_tFF860D099F37155A76017CCC0C7DE9B4C0AE9E3C* __this, const RuntimeMethod* method)
{
	((  void (*) (UxrComponent_1_tFF860D099F37155A76017CCC0C7DE9B4C0AE9E3C*, const RuntimeMethod*))UxrComponent_1_Awake_m8BE168187EFD9A3A61E8F8E04CA5660E5CFFA28D_gshared)(__this, method);
}
// UnityEngine.Quaternion UnityEngine.Transform::get_localRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UltimateXR.Core.Components.UxrComponent`1<UltimateXR.Examples.FullScene.Lab.GeneratorDoor>::OnEnable()
inline void UxrComponent_1_OnEnable_mF69B12CC9773C94630991CCD81E99269DB92E99D (UxrComponent_1_tFF860D099F37155A76017CCC0C7DE9B4C0AE9E3C* __this, const RuntimeMethod* method)
{
	((  void (*) (UxrComponent_1_tFF860D099F37155A76017CCC0C7DE9B4C0AE9E3C*, const RuntimeMethod*))UxrComponent_1_OnEnable_m55D9CDC9E1BA4729C212C0A84B94488459B7D672_gshared)(__this, method);
}
// System.Void System.EventHandler`1<UltimateXR.Manipulation.UxrManipulationEventArgs>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_m2E1E6A7E7F0F43779AD852D5337525744987CD73 (EventHandler_1_tFB1A27628EFA23760E6E055C0CC402DA6F5ABAD1* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tFB1A27628EFA23760E6E055C0CC402DA6F5ABAD1*, RuntimeObject*, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_mBA2E748CFBA7A0EEC0A373A6F634D3B5774EA370_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UltimateXR.Manipulation.UxrGrabbableObjectAnchor::add_Placed(System.EventHandler`1<UltimateXR.Manipulation.UxrManipulationEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UxrGrabbableObjectAnchor_add_Placed_mD94ACA8FFF7F3C1AD1E2D7764C912FBE2E8B3811 (UxrGrabbableObjectAnchor_tE7110AF7891C09542149FC793D1C0C9A9D95F66A* __this, EventHandler_1_tFB1A27628EFA23760E6E055C0CC402DA6F5ABAD1* ___value0, const RuntimeMethod* method) ;
// System.Void UltimateXR.Manipulation.UxrGrabbableObjectAnchor::add_Removed(System.EventHandler`1<UltimateXR.Manipulation.UxrManipulationEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UxrGrabbableObjectAnchor_add_Removed_m8B801B10D90D2D5F51FFE330949F66B019D48D5B (UxrGrabbableObjectAnchor_tE7110AF7891C09542149FC793D1C0C9A9D95F66A* __this, EventHandler_1_tFB1A27628EFA23760E6E055C0CC402DA6F5ABAD1* ___value0, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<UltimateXR.Manipulation.UxrApplyConstraintsEventArgs>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_m61E2C2A6093831400772D65E21D68390BE77C4D5 (EventHandler_1_t6FCADDF8DC5CFC67E12B6324C77ABD7EEDE695AC* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t6FCADDF8DC5CFC67E12B6324C77ABD7EEDE695AC*, RuntimeObject*, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_mBA2E748CFBA7A0EEC0A373A6F634D3B5774EA370_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UltimateXR.Manipulation.UxrGrabbableObject::add_ConstraintsApplied(System.EventHandler`1<UltimateXR.Manipulation.UxrApplyConstraintsEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UxrGrabbableObject_add_ConstraintsApplied_m98070E5F0ACE610FA929EA5EDC676ADB5FB75403 (UxrGrabbableObject_tCA9C5B90AC9CB9830D3D50AE51F7FF342511E3BC* __this, EventHandler_1_t6FCADDF8DC5CFC67E12B6324C77ABD7EEDE695AC* ___value0, const RuntimeMethod* method) ;
// System.Void UltimateXR.Core.Components.UxrComponent`1<UltimateXR.Examples.FullScene.Lab.GeneratorDoor>::OnDisable()
inline void UxrComponent_1_OnDisable_mF27E965C1ABB0FEAE01568B66EDCF99C5BB87BE5 (UxrComponent_1_tFF860D099F37155A76017CCC0C7DE9B4C0AE9E3C* __this, const RuntimeMethod* method)
{
	((  void (*) (UxrComponent_1_tFF860D099F37155A76017CCC0C7DE9B4C0AE9E3C*, const RuntimeMethod*))UxrComponent_1_OnDisable_m33306E77EEA63F19CA88E9D3F441737DA40820DD_gshared)(__this, method);
}
// System.Void UltimateXR.Manipulation.UxrGrabbableObjectAnchor::remove_Placed(System.EventHandler`1<UltimateXR.Manipulation.UxrManipulationEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UxrGrabbableObjectAnchor_remove_Placed_m1C851B3B5AE8A597323C6CF99AE3F807B3784D74 (UxrGrabbableObjectAnchor_tE7110AF7891C09542149FC793D1C0C9A9D95F66A* __this, EventHandler_1_tFB1A27628EFA23760E6E055C0CC402DA6F5ABAD1* ___value0, const RuntimeMethod* method) ;
// System.Void UltimateXR.Manipulation.UxrGrabbableObjectAnchor::remove_Removed(System.EventHandler`1<UltimateXR.Manipulation.UxrManipulationEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UxrGrabbableObjectAnchor_remove_Removed_mBA86FD866516B383FBEF869F1F2E8722A783CA25 (UxrGrabbableObjectAnchor_tE7110AF7891C09542149FC793D1C0C9A9D95F66A* __this, EventHandler_1_tFB1A27628EFA23760E6E055C0CC402DA6F5ABAD1* ___value0, const RuntimeMethod* method) ;
// System.Void UltimateXR.Manipulation.UxrGrabbableObject::remove_ConstraintsApplied(System.EventHandler`1<UltimateXR.Manipulation.UxrApplyConstraintsEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UxrGrabbableObject_remove_ConstraintsApplied_m53E4BECE768CE782284E71A9BC84B5EE982FCE51 (UxrGrabbableObject_tCA9C5B90AC9CB9830D3D50AE51F7FF342511E3BC* __this, EventHandler_1_t6FCADDF8DC5CFC67E12B6324C77ABD7EEDE695AC* ___value0, const RuntimeMethod* method) ;
// System.Void UltimateXR.Examples.FullScene.Lab.GeneratorDoor::set_IsLockOpen(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeneratorDoor_set_IsLockOpen_m389833849BBA15A70431A0987E217FD4251755CF (GeneratorDoor_t33EB8ADB2139695767CD1080E775EA94B6DD3037* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::get_eulerAngles()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___value0, const RuntimeMethod* method) ;
// System.Void UltimateXR.Core.Components.UxrComponent`1<UltimateXR.Examples.FullScene.Lab.GeneratorDoor>::.ctor()
inline void UxrComponent_1__ctor_m0E2EECED676F2CA8025E5FDEEB3D384DE52C3BD3 (UxrComponent_1_tFF860D099F37155A76017CCC0C7DE9B4C0AE9E3C* __this, const RuntimeMethod* method)
{
	((  void (*) (UxrComponent_1_tFF860D099F37155A76017CCC0C7DE9B4C0AE9E3C*, const RuntimeMethod*))UxrComponent_1__ctor_m9306DE8F3D0BDEE20C1EA88316A0168C023676B2_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponentInChildren<UltimateXR.Examples.FullScene.Lab.LightBulb>()
inline LightBulb_tD2997DB52DC01475297BAF83A889E14D2913D473* Component_GetComponentInChildren_TisLightBulb_tD2997DB52DC01475297BAF83A889E14D2913D473_m62DE299FA33489B039353A298D196A8390CA8B0F (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  LightBulb_tD2997DB52DC01475297BAF83A889E14D2913D473* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared)(__this, method);
}
// System.Single UltimateXR.Examples.FullScene.Lab.LightBulb::get_Intensity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LightBulb_get_Intensity_mD4E3C66ED92979EEFFD2FD4256113265FDDACCD7 (LightBulb_tD2997DB52DC01475297BAF83A889E14D2913D473* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Light::set_intensity(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Light_set_intensity_mE4820C7F39F490B92ED5EA0C3AADA7C0775BE854 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, float ___value0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<UnityEngine.LineRenderer>()
inline LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* GameObject_AddComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_mF8C0D953BCBFDD5A01A09ADB67EB04F0D677A056 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void UnityEngine.LineRenderer::set_useWorldSpace(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_set_useWorldSpace_m0204DB2541CC37DC4DC15DA15FD5A66EDC507CE8 (LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UltimateXR.Examples.FullScene.Lab.Laser::SetLaserLineRendererMesh(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Laser_SetLaserLineRendererMesh_m71D4A078FAE33D5C510186ACB2BF38668C7FFA48 (Laser_t7D7E61C4CF345606101C0ACC8089A4E8B5A7E74B* __this, float ___rayLength0, const RuntimeMethod* method) ;
// UnityEngine.Shader UltimateXR.Extensions.Unity.Render.ShaderExt::get_UnlitTransparentColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ShaderExt_get_UnlitTransparentColor_m7B2B30FA961F6217CEDDA51E79365A08D62586EB (const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::.ctor(UnityEngine.Shader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___shader0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_material(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::set_renderQueue(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_renderQueue_mFBB72A781DCCF0D4B85670B597788EC2D02D1C14 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.LineRenderer::set_loop(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_set_loop_mC7FBA197A227B62F11DE01264C68357FBA475058 (LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UltimateXR.Examples.FullScene.Lab.Laser/LaserBurn>::.ctor()
inline void List_1__ctor_m1F762EB1D37883D76E3A3A469C3EAF9A479AAD52 (List_1_t5BCE8DC4120D9E3C21A36514644646DBB9FBDE2F* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t5BCE8DC4120D9E3C21A36514644646DBB9FBDE2F*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// UnityEngine.ParticleSystem/EmissionModule UnityEngine.ParticleSystem::get_emission()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678 ParticleSystem_get_emission_mD9402CE632A3607DA0B0486F9F58F7FB2B44CF08 (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/EmissionModule::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmissionModule_set_enabled_mC82B6915ED485AB8DB54DFA6599C9C973BB5D867 (EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Boolean UltimateXR.Manipulation.UxrGrabManager::GetGrabbingHand(UltimateXR.Manipulation.UxrGrabbableObject,System.Int32,UltimateXR.Manipulation.UxrGrabber&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UxrGrabManager_GetGrabbingHand_mC6EB8EFB8D8E505EE807662E6B0A159F1D1EAD24 (UxrGrabManager_t76F8EBC3B188C8BB86C683C7B3E0E699CDEA7104* __this, UxrGrabbableObject_tCA9C5B90AC9CB9830D3D50AE51F7FF342511E3BC* ___grabbableObject0, int32_t ___point1, UxrGrabber_tC236DD7475C2506468E010D407CFF2F8375A5ED2** ___grabber2, const RuntimeMethod* method) ;
// UltimateXR.Devices.UxrControllerInput UltimateXR.Avatar.UxrAvatar::get_LocalAvatarInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UxrControllerInput_tF9ABB63F2B9B59D50DA1561F8DD21BB9F24446BB* UxrAvatar_get_LocalAvatarInput_mBC7D8C130AA4AA7740CE3C9BF13C1E7491B97032 (const RuntimeMethod* method) ;
// UltimateXR.Core.UxrHandSide UltimateXR.Manipulation.UxrGrabber::get_Side()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UxrGrabber_get_Side_mD6F0B9A381994DD30FAE16FADFD50AEFA04DEAE4 (UxrGrabber_tC236DD7475C2506468E010D407CFF2F8375A5ED2* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UltimateXR.Manipulation.UxrGrabPointInfo UltimateXR.Manipulation.UxrGrabbableObject::GetGrabPoint(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UxrGrabPointInfo_tF536E172E12DD70FDA2B3E21733B1CEB08D35079* UxrGrabbableObject_GetGrabPoint_m0AC4A037DD5ABADBFC5FBB2F06EFC460A0821F7A (UxrGrabbableObject_tCA9C5B90AC9CB9830D3D50AE51F7FF342511E3BC* __this, int32_t ___index0, const RuntimeMethod* method) ;
// UltimateXR.Avatar.UxrAvatar UltimateXR.Core.Components.Composite.UxrAvatarComponent`1<UltimateXR.Manipulation.UxrGrabber>::get_Avatar()
inline UxrAvatar_t880FC3AD5A9A30338CFDF4653C86343B16ACDE79* UxrAvatarComponent_1_get_Avatar_m7075FCDBDAAD3743FF4A735606DFDDEF7A152B8A (UxrAvatarComponent_1_t2D8119B812CF65EC273D2719764BF585BF91AD8C* __this, const RuntimeMethod* method)
{
	return ((  UxrAvatar_t880FC3AD5A9A30338CFDF4653C86343B16ACDE79* (*) (UxrAvatarComponent_1_t2D8119B812CF65EC273D2719764BF585BF91AD8C*, const RuntimeMethod*))UxrAvatarComponent_1_get_Avatar_m4F1A8B16C1BC637A48195A2743B2196EC57E3FC4_gshared)(__this, method);
}
// UltimateXR.Manipulation.UxrGripPoseInfo UltimateXR.Manipulation.UxrGrabPointInfo::GetGripPoseInfo(UltimateXR.Avatar.UxrAvatar,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UxrGripPoseInfo_t35D8985EE8490D4E4617C24300EC9A18363D01FC* UxrGrabPointInfo_GetGripPoseInfo_m2FD016CBBD33E58FD8806555977C79CBFE1CA5DB (UxrGrabPointInfo_tF536E172E12DD70FDA2B3E21733B1CEB08D35079* __this, UxrAvatar_t880FC3AD5A9A30338CFDF4653C86343B16ACDE79* ___avatar0, bool ___usePrefabInheritance1, const RuntimeMethod* method) ;
// System.Void UltimateXR.Manipulation.UxrGripPoseInfo::set_PoseBlendValue(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UxrGripPoseInfo_set_PoseBlendValue_m87BA55ED7AD988EBE7AA628A4C264ADB50C18053_inline (UxrGripPoseInfo_t35D8985EE8490D4E4617C24300EC9A18363D01FC* __this, float ___value0, const RuntimeMethod* method) ;
// System.Boolean UltimateXR.Devices.UxrControllerInput::GetButtonsPress(UltimateXR.Core.UxrHandSide,UltimateXR.Devices.UxrInputButtons,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UxrControllerInput_GetButtonsPress_m5B29D719D5AAD37B8876B43943E9348722D366AF (UxrControllerInput_tF9ABB63F2B9B59D50DA1561F8DD21BB9F24446BB* __this, int32_t ___handSide0, int32_t ___buttons1, bool ___getIgnoredInput2, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Renderer::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Renderer_get_enabled_mFDDF363859AEC88105A925FA7EA341C077B09B54 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UltimateXR.Examples.FullScene.Lab.Laser/LaserBurn>::Add(T)
inline void List_1_Add_mC14699E148A59839D1CFCB1C5546718DBD170C5C_inline (List_1_t5BCE8DC4120D9E3C21A36514644646DBB9FBDE2F* __this, LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t5BCE8DC4120D9E3C21A36514644646DBB9FBDE2F*, LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.LayerMask::op_Implicit(UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D (LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___mask0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_mA782767AD4F149FBEA32C71460DFF061B7563688 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___origin0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction1, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___hitInfo2, float ___maxDistance3, int32_t ___layerMask4, int32_t ___queryTriggerInteraction5, const RuntimeMethod* method) ;
// UltimateXR.Examples.FullScene.Lab.Laser/LaserBurn UltimateXR.Examples.FullScene.Lab.Laser::get_CurrentLaserBurn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557* Laser_get_CurrentLaserBurn_m52B4EB715F06633D0CBAC89B2B6C557A19AB8014 (Laser_t7D7E61C4CF345606101C0ACC8089A4E8B5A7E74B* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UltimateXR.Examples.FullScene.Lab.Laser/LaserBurn>::get_Count()
inline int32_t List_1_get_Count_m64F8D95A0D124BA799350AA8FBCF379E69A667E9_inline (List_1_t5BCE8DC4120D9E3C21A36514644646DBB9FBDE2F* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t5BCE8DC4120D9E3C21A36514644646DBB9FBDE2F*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// UnityEngine.Collider UnityEngine.RaycastHit::get_collider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// UltimateXR.Examples.FullScene.Lab.Laser/LaserBurn UltimateXR.Examples.FullScene.Lab.Laser::CreateNewLaserBurn(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557* Laser_CreateNewLaserBurn_m7F5D14C1CD2E0B87C29F7774FAEE978887FC0590 (Laser_t7D7E61C4CF345606101C0ACC8089A4E8B5A7E74B* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___collider0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UltimateXR.Examples.FullScene.Lab.Laser/LaserBurn>::set_Item(System.Int32,T)
inline void List_1_set_Item_m82BF4E041D2E59348188F4CE1DFFC8B2C7CB9AA3 (List_1_t5BCE8DC4120D9E3C21A36514644646DBB9FBDE2F* __this, int32_t ___index0, LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557* ___value1, const RuntimeMethod* method)
{
	((  void (*) (List_1_t5BCE8DC4120D9E3C21A36514644646DBB9FBDE2F*, int32_t, LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557*, const RuntimeMethod*))List_1_set_Item_m3C58DBC69A321AF2826595584FF3E9F43C07EA56_gshared)(__this, ___index0, ___value1, method);
}
// UnityEngine.Collider UltimateXR.Examples.FullScene.Lab.Laser/LaserBurn::get_Collider()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* LaserBurn_get_Collider_m2F511D05F4090A86846ABF9000FF39BA3ADBF173_inline (LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_point()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_normal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 RaycastHit_get_normal_mD8741B70D2039C5CAFC4368D4CE59D89562040B5 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_LookRotation_mFB02EDC8F733774DFAC3BEA4B4BB265A228F8307 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forward0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upwards1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Slerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Slerp_m0A9969F500E7716EA4F6BC4E7D5464372D8E9E15 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___a0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___b1, float ___t2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Reflect(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Reflect_mE584AF88A0C648C9559633260F24DB697AB176CF_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___inDirection0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___inNormal1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_LookRotation_mDB2CCA75B8E1AB98104F2A6E1A1EA57D0D1298D7 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forward0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<UnityEngine.Vector3> UltimateXR.Examples.FullScene.Lab.Laser/LaserBurn::get_PathPositions()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* LaserBurn_get_PathPositions_m7F8D39BA85C9F72D4D99A56A5A7716E200556734_inline (LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Count()
inline int32_t List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, const RuntimeMethod*))List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_gshared_inline)(__this, method);
}
// UnityEngine.Vector3 UltimateXR.Examples.FullScene.Lab.Laser/LaserBurn::get_LastWorldPathPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 LaserBurn_get_LastWorldPathPosition_mEE5D40582C05D02C07EA1E474D7493EE1334D450 (LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UltimateXR.Examples.FullScene.Lab.Laser/LaserBurn::get_LastWorldNormal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 LaserBurn_get_LastWorldNormal_mA43D8D7F36D5865F178E4BCAABF2DBBD6B88F7AB (LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Cross(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Cross_mF93A280558BCE756D13B6CC5DCD7DE8A43148987_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
// System.Single UltimateXR.Extensions.Unity.Math.Vector3Ext::DistanceToLine(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3Ext_DistanceToLine_m7D662244502A174A5C0A592DB9A7BC95B7C05159 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lineA1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lineB2, const RuntimeMethod* method) ;
// UnityEngine.Transform UltimateXR.Examples.FullScene.Lab.Laser/LaserBurn::get_Transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* LaserBurn_get_Transform_m043480C46DFFC8EAA7137C4F7C914F0D467D58D0 (LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(T)
inline void List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*))List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_gshared_inline)(__this, ___item0, method);
}
// System.Collections.Generic.List`1<System.Single> UltimateXR.Examples.FullScene.Lab.Laser/LaserBurn::get_PathCreationTimes()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* LaserBurn_get_PathCreationTimes_mA4484DEB4636DA4F6F81B5B441B9A5C5E7BC3388_inline (LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Single>::Add(T)
inline void List_1_Add_m2F86E252D086E288E02FA1C830B7E86C0A431E51_inline (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, float ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918*, float, const RuntimeMethod*))List_1_Add_m2F86E252D086E288E02FA1C830B7E86C0A431E51_gshared_inline)(__this, ___item0, method);
}
// UnityEngine.Vector3 UnityEngine.Transform::InverseTransformVector(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_InverseTransformVector_mBBA687CE32C0394FC9AB4F273D4E4A11F53FB044 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) ;
// System.Void UltimateXR.Examples.FullScene.Lab.Laser/LaserBurn::set_LastNormal(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LaserBurn_set_LastNormal_mBCF9EDF824414D2F0410E06E1B75B411D3F2A78D_inline (LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UltimateXR.Examples.FullScene.Lab.Laser::UpdateLaserBurnLineRenderer(UltimateXR.Examples.FullScene.Lab.Laser/LaserBurn)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Laser_UpdateLaserBurnLineRenderer_mDF1635EA93F8AF77ED3A6924849CC4CEC6CB036A (Laser_t7D7E61C4CF345606101C0ACC8089A4E8B5A7E74B* __this, LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557* ___laserBurn0, const RuntimeMethod* method) ;
// System.Void UltimateXR.Examples.FullScene.Lab.Laser::UpdateLaserBurns(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Laser_UpdateLaserBurns_m90F17BFF1B0CD2A4CCA2CF54CFFFE10C0A33F83E (Laser_t7D7E61C4CF345606101C0ACC8089A4E8B5A7E74B* __this, int32_t ___startIndex0, int32_t ___count1, const RuntimeMethod* method) ;
// System.Single UnityEngine.RaycastHit::get_distance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float RaycastHit_get_distance_m035194B0E9BB6229259CFC43B095A9C8E5011C78 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// System.Void UltimateXR.Haptics.Helpers.UxrFixedHapticFeedback::set_HandSide(UltimateXR.Core.UxrHandSide)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UxrFixedHapticFeedback_set_HandSide_m0CF10CB54F226DF68E7DFD692F6D0493AF5CCD98_inline (UxrFixedHapticFeedback_tB4275F8F9577DB366B776F01947C53E48F015FEE* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::get_activeSelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.LineRenderer::set_startWidth(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_set_startWidth_m3899722E198D636DB216CB61C980214707069F4A (LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.LineRenderer::set_endWidth(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_set_endWidth_mC7260401655C8BE1CBDFB832009295C89613F81D (LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::TransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) ;
// System.Void UnityEngine.LineRenderer::set_positionCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_set_positionCount_m2001FB4044053895ECBE897AB833284F3300B205 (LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.LineRenderer::SetPositions(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_SetPositions_m7F7B7B54428437D0BF5256D4C82F92180B577B02 (LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* __this, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___positions0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Gradient::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gradient__ctor_m5EC470BB063D4831774C7CDA5D471EBEB5CE7B54 (Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.GradientColorKey::.ctor(UnityEngine.Color,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GradientColorKey__ctor_mE26D7B8DA1283FDC3ADF628A3AC3E1B7246CD8A1 (GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___col0, float ___time1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Gradient::set_colorKeys(UnityEngine.GradientColorKey[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gradient_set_colorKeys_m5336A05DEF9B078212F6BB77DD33A6F1D34392DA (Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* __this, GradientColorKeyU5BU5D_tB8929E6EE130CA1F3C1664B300BE83A95A642C18* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GradientAlphaKey::.ctor(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GradientAlphaKey__ctor_m62D622565E6C8BF94E6E90A4CA6C866A5BC3B41B (GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0* __this, float ___alpha0, float ___time1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Gradient::set_alphaKeys(UnityEngine.GradientAlphaKey[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gradient_set_alphaKeys_mA77CAA2DC3D652BBC57A996AAC2E48DAD2569FEB (Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* __this, GradientAlphaKeyU5BU5D_tA5D7ED787780B5C01635C8C59B15B2BC01AEC50E* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.LineRenderer::set_colorGradient(UnityEngine.Gradient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_set_colorGradient_mD2CB3340AC9467782331011754187A2862216183 (LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* __this, Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* ___value0, const RuntimeMethod* method) ;
// System.Void UltimateXR.Examples.FullScene.Lab.Laser/LaserBurn::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LaserBurn__ctor_mC33119BD53F5EDB8977346E5F95A31DB661CAB32 (LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557* __this, const RuntimeMethod* method) ;
// System.Void UltimateXR.Examples.FullScene.Lab.Laser/LaserBurn::set_Collider(UnityEngine.Collider)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LaserBurn_set_Collider_m52437E78A89360AA30F49774BA130F5E59339C1F_inline (LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Void UltimateXR.Examples.FullScene.Lab.Laser/LaserBurn::set_GameObject(UnityEngine.GameObject)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LaserBurn_set_GameObject_m2A9521CC8C09437B10B05AF981CA664EDF7B7EB5_inline (LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___value0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UltimateXR.Examples.FullScene.Lab.Laser/LaserBurn::get_GameObject()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* LaserBurn_get_GameObject_mA4967FE6AC9A28115D93252D72C6CC8061118271_inline (LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___value0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) ;
// System.Void UltimateXR.Examples.FullScene.Lab.Laser/LaserBurn::set_LineRenderer(UnityEngine.LineRenderer)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LaserBurn_set_LineRenderer_m8E0CC57FEF6467C9926E4B75F1B9AED21AD663DB_inline (LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557* __this, LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* ___value0, const RuntimeMethod* method) ;
// UnityEngine.LineRenderer UltimateXR.Examples.FullScene.Lab.Laser/LaserBurn::get_LineRenderer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* LaserBurn_get_LineRenderer_m0C54B788116EE4B86B0409086E8B6C2E2D93773F_inline (LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_receiveShadows(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_receiveShadows_mABEB4C72E96E65117B7FFFD4180247565D0C1A09 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_shadowCastingMode(UnityEngine.Rendering.ShadowCastingMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_shadowCastingMode_mB0CD3D153E43044388AEFF7AEFDA93E80EB36D11 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UltimateXR.Examples.FullScene.Lab.Laser/LaserBurn::set_GameObjectIncandescent(UnityEngine.GameObject)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LaserBurn_set_GameObjectIncandescent_mDE15F0CD6FB664165D814431C5BEE1E5F4F0FE2C_inline (LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___value0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UltimateXR.Examples.FullScene.Lab.Laser/LaserBurn::get_GameObjectIncandescent()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* LaserBurn_get_GameObjectIncandescent_m4728BFBD17952FED2E5DFB68F09A8B7B7BBC6C09_inline (LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557* __this, const RuntimeMethod* method) ;
// System.Void UltimateXR.Examples.FullScene.Lab.Laser/LaserBurn::set_IncandescentLineRenderer(UnityEngine.LineRenderer)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LaserBurn_set_IncandescentLineRenderer_m5AF7A2EB97F440559412AF90D2286B3CB3F6D804_inline (LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557* __this, LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* ___value0, const RuntimeMethod* method) ;
// UnityEngine.LineRenderer UltimateXR.Examples.FullScene.Lab.Laser/LaserBurn::get_IncandescentLineRenderer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* LaserBurn_get_IncandescentLineRenderer_m30C81AAE9780422CAC0C96D79D0E113A6F0B7023_inline (LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557* __this, const RuntimeMethod* method) ;
// UnityEngine.Shader UltimateXR.Extensions.Unity.Render.ShaderExt::get_UnlitAdditiveColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ShaderExt_get_UnlitAdditiveColor_mE11F223E4A886851DE4AF9BA7C5E46FDAE4A3675 (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor()
inline void List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, const RuntimeMethod*))List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_gshared)(__this, method);
}
// System.Void UltimateXR.Examples.FullScene.Lab.Laser/LaserBurn::set_PathPositions(System.Collections.Generic.List`1<UnityEngine.Vector3>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LaserBurn_set_PathPositions_m568735D653C1113A82F229D5BF8E6E5C3FA3BE28_inline (LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557* __this, List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Single>::.ctor()
inline void List_1__ctor_mC29D3D824786832A31096310B3B3016B8B42B802 (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918*, const RuntimeMethod*))List_1__ctor_mC29D3D824786832A31096310B3B3016B8B42B802_gshared)(__this, method);
}
// System.Void UltimateXR.Examples.FullScene.Lab.Laser/LaserBurn::set_PathCreationTimes(System.Collections.Generic.List`1<System.Single>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LaserBurn_set_PathCreationTimes_m78F2EC1D5F07BA0DC59B9320251D3F362F53085C_inline (LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557* __this, List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* ___value0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UltimateXR.Examples.FullScene.Lab.Laser/LaserBurn>::get_Item(System.Int32)
inline LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557* List_1_get_Item_mDEB236AC8E8785C93A3547CB4734B3F375DB157C (List_1_t5BCE8DC4120D9E3C21A36514644646DBB9FBDE2F* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557* (*) (List_1_t5BCE8DC4120D9E3C21A36514644646DBB9FBDE2F*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UltimateXR.Examples.FullScene.Lab.Laser/LaserBurn>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_m02C1B8299C8117EECF9A1B9FEA98C66A35695C91 (List_1_t5BCE8DC4120D9E3C21A36514644646DBB9FBDE2F* __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t5BCE8DC4120D9E3C21A36514644646DBB9FBDE2F*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared)(__this, ___index0, method);
}
// T System.Collections.Generic.List`1<System.Single>::get_Item(System.Int32)
inline float List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50 (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  float (*) (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918*, int32_t, const RuntimeMethod*))List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50_gshared)(__this, ___index0, method);
}
// System.Int32 System.Collections.Generic.List`1<System.Single>::get_Count()
inline int32_t List_1_get_Count_m545762F67009314D9C63DD209B42FFF950569B05_inline (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918*, const RuntimeMethod*))List_1_get_Count_m545762F67009314D9C63DD209B42FFF950569B05_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Single>::RemoveRange(System.Int32,System.Int32)
inline void List_1_RemoveRange_m0B9C23AD79609782B89695407DD77AFFA2857589 (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, int32_t ___index0, int32_t ___count1, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918*, int32_t, int32_t, const RuntimeMethod*))List_1_RemoveRange_m0B9C23AD79609782B89695407DD77AFFA2857589_gshared)(__this, ___index0, ___count1, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::RemoveRange(System.Int32,System.Int32)
inline void List_1_RemoveRange_m2459C0BC8F20CF66E82F55757ABCF60A69752B6D (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, int32_t ___index0, int32_t ___count1, const RuntimeMethod* method)
{
	((  void (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, int32_t, int32_t, const RuntimeMethod*))List_1_RemoveRange_m2459C0BC8F20CF66E82F55757ABCF60A69752B6D_gshared)(__this, ___index0, ___count1, method);
}
// System.Int32 UnityEngine.Mathf::RoundToInt(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline (float ___f0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::Clamp(System.Int32,System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline (int32_t ___value0, int32_t ___min1, int32_t ___max2, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<UnityEngine.Vector3>::ToArray()
inline Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* List_1_ToArray_mF7A66D08104196EBAE0E29F0DD9BA140656EA5F3 (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method)
{
	return ((  Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, const RuntimeMethod*))List_1_ToArray_mF7A66D08104196EBAE0E29F0DD9BA140656EA5F3_gshared)(__this, method);
}
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.Vector3>::GetRange(System.Int32,System.Int32)
inline List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* List_1_GetRange_m6C4CA260108AD2A75C9B4B2DD344FD0996883E34 (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, int32_t ___index0, int32_t ___count1, const RuntimeMethod* method)
{
	return ((  List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, int32_t, int32_t, const RuntimeMethod*))List_1_GetRange_m6C4CA260108AD2A75C9B4B2DD344FD0996883E34_gshared)(__this, ___index0, ___count1, method);
}
// UnityEngine.LayerMask UnityEngine.LayerMask::op_Implicit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB LayerMask_op_Implicit_m01C8996A2CB2085328B9C33539C43139660D8222 (int32_t ___intVal0, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_red()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UltimateXR.Examples.FullScene.Lab.Laser/LaserBurn::get_LastNormal()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 LaserBurn_get_LastNormal_m2A525EA2FA754C2DBD6F91792ECD6F4229410DBB_inline (LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::TransformVector(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_TransformVector_mFA6FB7570442728CB15D03C696353148711CDD98 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32)
inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810 (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, int32_t, const RuntimeMethod*))List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_gshared)(__this, ___index0, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInParent<UltimateXR.Examples.FullScene.Lab.Lamp>()
inline Lamp_t17C08BD87F9AAA690D376991BEC03122E7B9124A* Component_GetComponentInParent_TisLamp_t17C08BD87F9AAA690D376991BEC03122E7B9124A_m4B75357CA1F88009E0615F17F7F30608C070F868 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Lamp_t17C08BD87F9AAA690D376991BEC03122E7B9124A* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInParent_TisRuntimeObject_m6746D6BB99912B1B509746C993906492F86CD119_gshared)(__this, method);
}
// System.Single UnityEngine.Mathf::PerlinNoise(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_PerlinNoise_mAB0E53C29FE95469CF303364910AD0D8662A9A6A (float ___x0, float ___y1, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Renderer>()
inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Single UnityEngine.Random::get_value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_get_value_m2CEA87FADF5222EF9E13D32695F15E2BA282E24B (const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::Lerp(UnityEngine.Color,UnityEngine.Color,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_Lerp_mE79F87889843ECDC188E4CB5B5E1F1B2256E5EBE_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___a0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetColor(System.String,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value1, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_black()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_eulerAngles(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_eulerAngles_m9F0BC484A7915A51FAB87230644229B75BACA004 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Boolean UltimateXR.Manipulation.UxrManipulationEventArgs::get_IsOwnershipChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UxrManipulationEventArgs_get_IsOwnershipChanged_mF8E9617E07E36EB8120DD920AA03680BE306EFCD (UxrManipulationEventArgs_tD33E70382345A37F8AE2C8B4A533810FB76EDA78* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_eulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UltimateXR.Manipulation.UxrManipulationEventArgs::get_ReleaseVelocity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 UxrManipulationEventArgs_get_ReleaseVelocity_mF4B983EC1189963B18CBAB47EBEB2A362BE40A4B_inline (UxrManipulationEventArgs_tD33E70382345A37F8AE2C8B4A533810FB76EDA78* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UltimateXR.Manipulation.UxrManipulationEventArgs::get_ReleaseAngularVelocity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 UxrManipulationEventArgs_get_ReleaseAngularVelocity_m21F3AAF359AC33913EDCEF2E1A9D0EAC863FA286_inline (UxrManipulationEventArgs_tD33E70382345A37F8AE2C8B4A533810FB76EDA78* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Void UltimateXR.Core.Components.Composite.UxrGrabbableObjectComponent`1<UltimateXR.Examples.FullScene.Lab.SpringOnRelease>::.ctor()
inline void UxrGrabbableObjectComponent_1__ctor_m80875487FAF4430CD13FD80EA5B889A4F4865999 (UxrGrabbableObjectComponent_1_tAE488CF95E619715F04F3337799454B1A8061678* __this, const RuntimeMethod* method)
{
	((  void (*) (UxrGrabbableObjectComponent_1_tAE488CF95E619715F04F3337799454B1A8061678*, const RuntimeMethod*))UxrGrabbableObjectComponent_1__ctor_mC7717ABF491F7D1A2002DDA95A98162B69219860_gshared)(__this, method);
}
// System.Boolean UltimateXR.Examples.FullScene.Doors.ArmoredDoor::IsAvatarInside(UltimateXR.Avatar.UxrAvatar)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ArmoredDoor_IsAvatarInside_mFFF2E10D711B8AF25D53E7F1EBF5EC21E7456DB7 (ArmoredDoor_t8B70669952214138BE0A4C9684AFA4A01E27E439* __this, UxrAvatar_t880FC3AD5A9A30338CFDF4653C86343B16ACDE79* ___avatar0, const RuntimeMethod* method) ;
// UnityEngine.Transform UltimateXR.Examples.FullScene.Doors.AutomaticDoor::get_FloorCenter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* AutomaticDoor_get_FloorCenter_m8489CB0A8F41BFCE580B7D670ED420A4360BB4A5 (AutomaticDoor_t1300394E882F63AD7DCD712530F55D334F86B1FC* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Plane::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Plane__ctor_m2BFB65EBFF51123791878684ECC375B99FAD10A2 (Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___inNormal0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___inPoint1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Plane::GetSide(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Plane_GetSide_mE71EA98675FA3FA61EAF83A79EA61CFCD6F4F3DC (Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point0, const RuntimeMethod* method) ;
// System.Void UltimateXR.Examples.FullScene.Doors.AutomaticDoor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AutomaticDoor__ctor_m2745DB463053995F72FCABEA31A05E319C89BF79 (AutomaticDoor_t1300394E882F63AD7DCD712530F55D334F86B1FC* __this, const RuntimeMethod* method) ;
// System.Void UltimateXR.Examples.FullScene.Doors.AutomaticDoor::set_IsOpen(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutomaticDoor_set_IsOpen_m69E70E2C51265E1DFD6B2A0DB6804511D37AEEB7_inline (AutomaticDoor_t1300394E882F63AD7DCD712530F55D334F86B1FC* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UltimateXR.Avatar.UxrAvatar::get_CameraFloorPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 UxrAvatar_get_CameraFloorPosition_m265C0627D9ED6DE838C832015153149B7E515D9A (UxrAvatar_t880FC3AD5A9A30338CFDF4653C86343B16ACDE79* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Mathf::Approximately(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Mathf_Approximately_m1DADD012A8FC82E11FB282501AE2EBBF9A77150B_inline (float ___a0, float ___b1, const RuntimeMethod* method) ;
// System.Void UltimateXR.Audio.UxrAudioSample::Play(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UxrAudioSample_Play_m9D583A9FB6C4D92C0DCA6B1DE3240456A41E81A7 (UxrAudioSample_t01A5C41E145D2E83FE924FFFFBBC451376881ED9* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) ;
// System.Boolean UltimateXR.Examples.FullScene.Doors.AutomaticDoor::get_IsOpen()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AutomaticDoor_get_IsOpen_m3A140D006C9B9218649846DAEE3AC5060CF4A43B_inline (AutomaticDoor_t1300394E882F63AD7DCD712530F55D334F86B1FC* __this, const RuntimeMethod* method) ;
// System.Void UltimateXR.Examples.FullScene.Doors.AutomaticDoor::set_OpenValue(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutomaticDoor_set_OpenValue_mEB76541384929F0497F01A49F6067009A611A0C2_inline (AutomaticDoor_t1300394E882F63AD7DCD712530F55D334F86B1FC* __this, float ___value0, const RuntimeMethod* method) ;
// System.Single UltimateXR.Animation.Interpolation.UxrInterpolator::GetInterpolationFactor(System.Single,UltimateXR.Animation.Interpolation.UxrEasing,UltimateXR.Animation.Interpolation.UxrLoopMode,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UxrInterpolator_GetInterpolationFactor_m8825B361BACFF879FC0EE7578B911F4A695D6AAF (float ___t0, int32_t ___easing1, int32_t ___loopMode2, float ___loopedDuration3, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, float ___t2, const RuntimeMethod* method) ;
// UnityEngine.Material UnityEngine.Renderer::get_sharedMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Material::GetColor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Material_GetColor_mAC702C70081A597DD2AA2F4627B1A1C65DDF6609 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Renderer>::Add(T)
inline void List_1_Add_mB608316C3D0F44AB60BB05CC6676E509D51F7AC2_inline (List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93* __this, Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93*, Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Transform)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mD136E37F696C00A3A1D4F65724ACAE903E385181 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent3, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m5F38AE6B74636F569647D545E365C5579E5F59CE_gshared)(___original0, ___position1, ___rotation2, ___parent3, method);
}
// T UnityEngine.GameObject::GetComponent<UnityEngine.Renderer>()
inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.Color UnityEngine.Material::get_color()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Material_get_color_mA4B7D4B96200D9D8B4F36BF19957E9DA81071DBB (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UltimateXR.Extensions.Unity.Render.ColorExt::ColorAlpha(UnityEngine.Color&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ColorExt_ColorAlpha_m44D92977457C75B3453FF37F47B10952C5F347D6 (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___color0, float ___alpha1, const RuntimeMethod* method) ;
// System.Void UltimateXR.Examples.FullScene.Doors.HandScanner::EnableBeams(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandScanner_EnableBeams_m6687395CE93F716625110AADC3A08FC11F0AA4F2 (HandScanner_t42A4D993924FECBCA1CFEA7D1E0335ADAB95D3D6* __this, bool ___enable0, const RuntimeMethod* method) ;
// UnityEngine.Transform UltimateXR.Avatar.UxrAvatar::GetHandBone(UltimateXR.Core.UxrHandSide)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* UxrAvatar_GetHandBone_m16098C4C14A7BCCC7823F3F0B71F703C4249A7EE (UxrAvatar_t880FC3AD5A9A30338CFDF4653C86343B16ACDE79* __this, int32_t ___handSide0, const RuntimeMethod* method) ;
// UltimateXR.Core.UxrHandSide UltimateXR.Core.UxrUtils::GetOppositeSide(UltimateXR.Core.UxrHandSide)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UxrUtils_GetOppositeSide_m6D94F1B84A2E1DD36FD24C7AF06218532D521FEC (int32_t ___handSide0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Renderer>::get_Count()
inline int32_t List_1_get_Count_mEDD6D3CBA7B18AB7F0E8E301BF83BF3C114E5C70_inline (List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<UnityEngine.Renderer>::get_Item(System.Int32)
inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* List_1_get_Item_m2A866E5FF9CD642C76D27133D3FCEC2F15033DA2 (List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* (*) (List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UltimateXR.Examples.FullScene.Doors.HandScanner::ProcessScanResult(UltimateXR.Avatar.UxrAvatar,UltimateXR.Core.UxrHandSide,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandScanner_ProcessScanResult_m062A2D62650EFB3B4DAFD9C073664FEB4B5A84CF (HandScanner_t42A4D993924FECBCA1CFEA7D1E0335ADAB95D3D6* __this, UxrAvatar_t880FC3AD5A9A30338CFDF4653C86343B16ACDE79* ___avatar0, int32_t ___handSide1, bool ___isValid2, const RuntimeMethod* method) ;
// System.Void UltimateXR.Examples.FullScene.Doors.AutomaticDoor::OpenDoor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AutomaticDoor_OpenDoor_m08C61FCE0D97C1425EC43536611FD2C0E9D32915 (AutomaticDoor_t1300394E882F63AD7DCD712530F55D334F86B1FC* __this, const RuntimeMethod* method) ;
// System.Void UltimateXR.Examples.FullScene.Doors.HandScanner/<>c__DisplayClass26_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass26_0__ctor_m213F5EAEA005EE01568A4C81D3FA7215973B70BA (U3CU3Ec__DisplayClass26_0_tE467941C5965810C7B12382E4B6493C6DBEB7436* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.Renderer>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m4FA40673099C2B0B6B60E3DBD2671AEDEC2A7E24 (Action_1_tC44940B0562C5ADFA6C6CD80984D4A4CFBA1E7A0* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tC44940B0562C5ADFA6C6CD80984D4A4CFBA1E7A0*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Renderer>::ForEach(System.Action`1<T>)
inline void List_1_ForEach_mABFCEE200DFAA5E585E78E56EE1CC46304C03F11 (List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93* __this, Action_1_tC44940B0562C5ADFA6C6CD80984D4A4CFBA1E7A0* ___action0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93*, Action_1_tC44940B0562C5ADFA6C6CD80984D4A4CFBA1E7A0*, const RuntimeMethod*))List_1_ForEach_m47052B1B7C82747D3D5D2CAD15A30DB9AB95FF68_gshared)(__this, ___action0, method);
}
// UnityEngine.Color UltimateXR.Extensions.Unity.Render.ColorExt::WithAlpha(UnityEngine.Color&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ColorExt_WithAlpha_m7A14319C675C3759B032044A9916A92BEE313BA9 (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___self0, float ___alpha1, const RuntimeMethod* method) ;
// UltimateXR.Animation.Materials.UxrAnimatedMaterial UltimateXR.Animation.Materials.UxrAnimatedMaterial::AnimateBlinkColor(UnityEngine.GameObject,System.String,UnityEngine.Color,UnityEngine.Color,System.Single,System.Single,UltimateXR.Animation.Materials.UxrMaterialMode,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UxrAnimatedMaterial_t6AA0B6F355D7F547152A8A3BA66E81808300FDB0* UxrAnimatedMaterial_AnimateBlinkColor_m78A2BD08D45093A282EDB8F3040C922834E47246 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___gameObject0, String_t* ___varNameColor1, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___colorOff2, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___colorOn3, float ___blinkFrequency4, float ___durationSeconds5, int32_t ___materialMode6, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___finishedCallback7, const RuntimeMethod* method) ;
// System.Void System.Action`3<UltimateXR.Avatar.UxrAvatar,UltimateXR.Core.UxrHandSide,System.Boolean>::Invoke(T1,T2,T3)
inline void Action_3_Invoke_mCD6B59F11A789AD5737BB3D4D17A2773B12B6C12_inline (Action_3_t5D0E6372A9C59C311A4BF2EE5AD6784EB7F2913C* __this, UxrAvatar_t880FC3AD5A9A30338CFDF4653C86343B16ACDE79* ___arg10, int32_t ___arg21, bool ___arg32, const RuntimeMethod* method)
{
	((  void (*) (Action_3_t5D0E6372A9C59C311A4BF2EE5AD6784EB7F2913C*, UxrAvatar_t880FC3AD5A9A30338CFDF4653C86343B16ACDE79*, int32_t, bool, const RuntimeMethod*))Action_3_Invoke_m74553696A7925B7173D6F62C410A7FF17E8E599B_gshared_inline)(__this, ___arg10, ___arg21, ___arg32, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Renderer>::.ctor()
inline void List_1__ctor_m803E10F7A50EB22BF82C0C1AB251D5407B4496DE (List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_ToEulerRad(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_Internal_ToEulerRad_m5BD0EEC543120C320DC77FCCDFD2CE2E6BD3F1A8 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_MakePositive(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_Internal_MakePositive_m73E2D01920CB0DFE661A55022C129E8617F0C9A8 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Dot(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___a0, float ___b1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::AddWithResize(T)
inline void List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4 (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::AddWithResize(T)
inline void List_1_AddWithResize_mCDB189127FC2EE67B5EED9DE34F837DFC6EDC212 (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*))List_1_AddWithResize_mCDB189127FC2EE67B5EED9DE34F837DFC6EDC212_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<System.Single>::AddWithResize(T)
inline void List_1_AddWithResize_m446487BF7F55E757E7D552B2436AD74AC354EA99 (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, float ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918*, float, const RuntimeMethod*))List_1_AddWithResize_m446487BF7F55E757E7D552B2436AD74AC354EA99_gshared)(__this, ___item0, method);
}
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UltimateXR.Examples.FullScene.GlobalLogic::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlobalLogic_OnEnable_mEB01799779BCDF2206F97AFE7C272E58860894D9 (GlobalLogic_t200876C43EB8393A83FDCFA472C9E734546F9EEB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tED3DC79456BF1AB7E153063AE84D07955753DD54_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlobalLogic_UxrManager_AvatarMoved_mB6EE42A52B9D2FF68FF419552D18E00CAD959C78_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlobalLogic_UxrManager_AvatarsUpdated_m18755EBDAF29B2561FDCE7BE996CFDB0D7E99A37_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.OnEnable();
		UxrComponent_OnEnable_mB30EBD913BFCBA1B1B248C0C4E93F3E63136DFF6(__this, NULL);
		// UxrManager.AvatarMoved    += UxrManager_AvatarMoved;
		EventHandler_1_tED3DC79456BF1AB7E153063AE84D07955753DD54* L_0 = (EventHandler_1_tED3DC79456BF1AB7E153063AE84D07955753DD54*)il2cpp_codegen_object_new(EventHandler_1_tED3DC79456BF1AB7E153063AE84D07955753DD54_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		EventHandler_1__ctor_mE96CF0831852EEA69C9F9D29399DD93056D583F4(L_0, __this, (intptr_t)((void*)GlobalLogic_UxrManager_AvatarMoved_mB6EE42A52B9D2FF68FF419552D18E00CAD959C78_RuntimeMethod_var), NULL);
		UxrManager_add_AvatarMoved_m699E0D13BFEA924B47B2A6CFFAC18FC1DFB81482(L_0, NULL);
		// UxrManager.AvatarsUpdated += UxrManager_AvatarsUpdated;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_1, __this, (intptr_t)((void*)GlobalLogic_UxrManager_AvatarsUpdated_m18755EBDAF29B2561FDCE7BE996CFDB0D7E99A37_RuntimeMethod_var), NULL);
		UxrManager_add_AvatarsUpdated_m380B3528C94B7830A074514641244B12FBE2127A(L_1, NULL);
		// }
		return;
	}
}
// System.Void UltimateXR.Examples.FullScene.GlobalLogic::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlobalLogic_OnDisable_m9442243F142F3A119310F7C24A9F6F38FC503BF9 (GlobalLogic_t200876C43EB8393A83FDCFA472C9E734546F9EEB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tED3DC79456BF1AB7E153063AE84D07955753DD54_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlobalLogic_UxrManager_AvatarMoved_mB6EE42A52B9D2FF68FF419552D18E00CAD959C78_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlobalLogic_UxrManager_AvatarsUpdated_m18755EBDAF29B2561FDCE7BE996CFDB0D7E99A37_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.OnDisable();
		UxrComponent_OnDisable_mCC9A18F682546580B0A67A788DFFD33595ECE1DB(__this, NULL);
		// UxrManager.AvatarMoved    -= UxrManager_AvatarMoved;
		EventHandler_1_tED3DC79456BF1AB7E153063AE84D07955753DD54* L_0 = (EventHandler_1_tED3DC79456BF1AB7E153063AE84D07955753DD54*)il2cpp_codegen_object_new(EventHandler_1_tED3DC79456BF1AB7E153063AE84D07955753DD54_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		EventHandler_1__ctor_mE96CF0831852EEA69C9F9D29399DD93056D583F4(L_0, __this, (intptr_t)((void*)GlobalLogic_UxrManager_AvatarMoved_mB6EE42A52B9D2FF68FF419552D18E00CAD959C78_RuntimeMethod_var), NULL);
		UxrManager_remove_AvatarMoved_mABE51EE175DC25505C33588DFBAB50D44D566A2A(L_0, NULL);
		// UxrManager.AvatarsUpdated -= UxrManager_AvatarsUpdated;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_1, __this, (intptr_t)((void*)GlobalLogic_UxrManager_AvatarsUpdated_m18755EBDAF29B2561FDCE7BE996CFDB0D7E99A37_RuntimeMethod_var), NULL);
		UxrManager_remove_AvatarsUpdated_m06CD0E601A8F84D4489953418E9A3D68D6E96F6E(L_1, NULL);
		// }
		return;
	}
}
// System.Void UltimateXR.Examples.FullScene.GlobalLogic::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlobalLogic_Start_m944142AA85C62AE9008597CED39F031B1819859A (GlobalLogic_t200876C43EB8393A83FDCFA472C9E734546F9EEB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UxrSingleton_1_get_Instance_mAEADF1C21E330A5564E4A52BC09D06D9B5599008_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Start();
		UxrComponent_Start_m24F2104BC70550511F773715262B361E292CAD18(__this, NULL);
		// UxrManager.Instance.MoveAvatarTo(UxrAvatar.LocalAvatar, _spawnMain);
		UxrManager_t0BB2898400B82F4D4701B135D91724026F5E602D* L_0;
		L_0 = UxrSingleton_1_get_Instance_mAEADF1C21E330A5564E4A52BC09D06D9B5599008(UxrSingleton_1_get_Instance_mAEADF1C21E330A5564E4A52BC09D06D9B5599008_RuntimeMethod_var);
		UxrAvatar_t880FC3AD5A9A30338CFDF4653C86343B16ACDE79* L_1;
		L_1 = UxrAvatar_get_LocalAvatar_m57231BC6DC4B6F43EC6BB81C005CA50265112F80(NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->____spawnMain_28;
		NullCheck(L_0);
		UxrManager_MoveAvatarTo_m33273AADA93DEE8F33F820331BE4556E11703002(L_0, L_1, L_2, (bool)1, NULL);
		// UpdateVisibility();
		GlobalLogic_UpdateVisibility_m7197DB89354B15E43FE35BAAFC7EA58617AD03F8(__this, NULL);
		// }
		return;
	}
}
// System.Void UltimateXR.Examples.FullScene.GlobalLogic::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlobalLogic_Update_m8E7C114391990668FA615540FC2C2E5501458FBE (GlobalLogic_t200876C43EB8393A83FDCFA472C9E734546F9EEB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UxrKeyboardInput_tF22D3AF2028ABCDD49214AA79276A3E988D189F5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UxrSingleton_1_get_Instance_mAEADF1C21E330A5564E4A52BC09D06D9B5599008_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (UxrKeyboardInput.GetPressDown(UxrKey.Enter))
		il2cpp_codegen_runtime_class_init_inline(UxrKeyboardInput_tF22D3AF2028ABCDD49214AA79276A3E988D189F5_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = UxrKeyboardInput_GetPressDown_mFCA3CB652C0DC592DAD4962CF9356B57DB835F75(2, NULL);
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		// SceneManager.LoadScene(0);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(0, NULL);
		goto IL_001e;
	}

IL_0010:
	{
		// else if (UxrKeyboardInput.GetPressDown(UxrKey.Q))
		il2cpp_codegen_runtime_class_init_inline(UxrKeyboardInput_tF22D3AF2028ABCDD49214AA79276A3E988D189F5_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = UxrKeyboardInput_GetPressDown_mFCA3CB652C0DC592DAD4962CF9356B57DB835F75(((int32_t)31), NULL);
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		// Application.Quit();
		Application_Quit_mE304382DB9A6455C2A474C8F364C7387F37E9281(NULL);
	}

IL_001e:
	{
		// if (UxrKeyboardInput.GetPressDown(UxrKey.Digit1))
		il2cpp_codegen_runtime_class_init_inline(UxrKeyboardInput_tF22D3AF2028ABCDD49214AA79276A3E988D189F5_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = UxrKeyboardInput_GetPressDown_mFCA3CB652C0DC592DAD4962CF9356B57DB835F75(((int32_t)41), NULL);
		if (!L_2)
		{
			goto IL_0051;
		}
	}
	{
		// UxrManager.Instance.TeleportLocalAvatar(_spawnMain.position, _spawnMain.rotation, UxrTranslationType.Fade);
		UxrManager_t0BB2898400B82F4D4701B135D91724026F5E602D* L_3;
		L_3 = UxrSingleton_1_get_Instance_mAEADF1C21E330A5564E4A52BC09D06D9B5599008(UxrSingleton_1_get_Instance_mAEADF1C21E330A5564E4A52BC09D06D9B5599008_RuntimeMethod_var);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->____spawnMain_28;
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = __this->____spawnMain_28;
		NullCheck(L_6);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7;
		L_7 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_6, NULL);
		NullCheck(L_3);
		UxrManager_TeleportLocalAvatar_mEA787355F1FEF54BF7C8BA0C04D16AABEE47202E(L_3, L_5, L_7, 1, (0.200000003f), (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)NULL, (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)NULL, (bool)1, NULL);
		return;
	}

IL_0051:
	{
		// else if (UxrKeyboardInput.GetPressDown(UxrKey.Digit2))
		il2cpp_codegen_runtime_class_init_inline(UxrKeyboardInput_tF22D3AF2028ABCDD49214AA79276A3E988D189F5_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = UxrKeyboardInput_GetPressDown_mFCA3CB652C0DC592DAD4962CF9356B57DB835F75(((int32_t)42), NULL);
		if (!L_8)
		{
			goto IL_0084;
		}
	}
	{
		// UxrManager.Instance.TeleportLocalAvatar(_spawnLab.position, _spawnLab.rotation, UxrTranslationType.Fade);
		UxrManager_t0BB2898400B82F4D4701B135D91724026F5E602D* L_9;
		L_9 = UxrSingleton_1_get_Instance_mAEADF1C21E330A5564E4A52BC09D06D9B5599008(UxrSingleton_1_get_Instance_mAEADF1C21E330A5564E4A52BC09D06D9B5599008_RuntimeMethod_var);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10 = __this->____spawnLab_29;
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_10, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12 = __this->____spawnLab_29;
		NullCheck(L_12);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_13;
		L_13 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_12, NULL);
		NullCheck(L_9);
		UxrManager_TeleportLocalAvatar_mEA787355F1FEF54BF7C8BA0C04D16AABEE47202E(L_9, L_11, L_13, 1, (0.200000003f), (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)NULL, (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)NULL, (bool)1, NULL);
		return;
	}

IL_0084:
	{
		// else if (UxrKeyboardInput.GetPressDown(UxrKey.Digit3))
		il2cpp_codegen_runtime_class_init_inline(UxrKeyboardInput_tF22D3AF2028ABCDD49214AA79276A3E988D189F5_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = UxrKeyboardInput_GetPressDown_mFCA3CB652C0DC592DAD4962CF9356B57DB835F75(((int32_t)43), NULL);
		if (!L_14)
		{
			goto IL_00b7;
		}
	}
	{
		// UxrManager.Instance.TeleportLocalAvatar(_spawnControllers.position, _spawnControllers.rotation, UxrTranslationType.Fade);
		UxrManager_t0BB2898400B82F4D4701B135D91724026F5E602D* L_15;
		L_15 = UxrSingleton_1_get_Instance_mAEADF1C21E330A5564E4A52BC09D06D9B5599008(UxrSingleton_1_get_Instance_mAEADF1C21E330A5564E4A52BC09D06D9B5599008_RuntimeMethod_var);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16 = __this->____spawnControllers_30;
		NullCheck(L_16);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_16, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18 = __this->____spawnControllers_30;
		NullCheck(L_18);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_19;
		L_19 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_18, NULL);
		NullCheck(L_15);
		UxrManager_TeleportLocalAvatar_mEA787355F1FEF54BF7C8BA0C04D16AABEE47202E(L_15, L_17, L_19, 1, (0.200000003f), (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)NULL, (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)NULL, (bool)1, NULL);
		return;
	}

IL_00b7:
	{
		// else if (UxrKeyboardInput.GetPressDown(UxrKey.Digit4))
		il2cpp_codegen_runtime_class_init_inline(UxrKeyboardInput_tF22D3AF2028ABCDD49214AA79276A3E988D189F5_il2cpp_TypeInfo_var);
		bool L_20;
		L_20 = UxrKeyboardInput_GetPressDown_mFCA3CB652C0DC592DAD4962CF9356B57DB835F75(((int32_t)44), NULL);
		if (!L_20)
		{
			goto IL_00e9;
		}
	}
	{
		// UxrManager.Instance.TeleportLocalAvatar(_spawnShootingRange.position, _spawnShootingRange.rotation, UxrTranslationType.Fade);
		UxrManager_t0BB2898400B82F4D4701B135D91724026F5E602D* L_21;
		L_21 = UxrSingleton_1_get_Instance_mAEADF1C21E330A5564E4A52BC09D06D9B5599008(UxrSingleton_1_get_Instance_mAEADF1C21E330A5564E4A52BC09D06D9B5599008_RuntimeMethod_var);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22 = __this->____spawnShootingRange_31;
		NullCheck(L_22);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_22, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24 = __this->____spawnShootingRange_31;
		NullCheck(L_24);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_25;
		L_25 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_24, NULL);
		NullCheck(L_21);
		UxrManager_TeleportLocalAvatar_mEA787355F1FEF54BF7C8BA0C04D16AABEE47202E(L_21, L_23, L_25, 1, (0.200000003f), (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)NULL, (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)NULL, (bool)1, NULL);
	}

IL_00e9:
	{
		// }
		return;
	}
}
// System.Void UltimateXR.Examples.FullScene.GlobalLogic::UxrManager_AvatarMoved(System.Object,UltimateXR.Avatar.UxrAvatarMoveEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlobalLogic_UxrManager_AvatarMoved_mB6EE42A52B9D2FF68FF419552D18E00CAD959C78 (GlobalLogic_t200876C43EB8393A83FDCFA472C9E734546F9EEB* __this, RuntimeObject* ___sender0, UxrAvatarMoveEventArgs_t20D28939F2A40931E89800912DF891DB898F1127* ___e1, const RuntimeMethod* method) 
{
	{
		// UpdateVisibility();
		GlobalLogic_UpdateVisibility_m7197DB89354B15E43FE35BAAFC7EA58617AD03F8(__this, NULL);
		// }
		return;
	}
}
// System.Void UltimateXR.Examples.FullScene.GlobalLogic::UxrManager_AvatarsUpdated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlobalLogic_UxrManager_AvatarsUpdated_m18755EBDAF29B2561FDCE7BE996CFDB0D7E99A37 (GlobalLogic_t200876C43EB8393A83FDCFA472C9E734546F9EEB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3Ext_tE79960C7FB3A6DFB9D509BE3E9DBF1A9A6F2D52D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B5_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B6_1 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B8_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B7_0 = NULL;
	int32_t G_B9_0 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B9_1 = NULL;
	{
		// if (UxrAvatar.LocalAvatar == null || UxrCameraWallFade.IsAvatarPeekingThroughGeometry(UxrAvatar.LocalAvatar))
		UxrAvatar_t880FC3AD5A9A30338CFDF4653C86343B16ACDE79* L_0;
		L_0 = UxrAvatar_get_LocalAvatar_m57231BC6DC4B6F43EC6BB81C005CA50265112F80(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		UxrAvatar_t880FC3AD5A9A30338CFDF4653C86343B16ACDE79* L_2;
		L_2 = UxrAvatar_get_LocalAvatar_m57231BC6DC4B6F43EC6BB81C005CA50265112F80(NULL);
		bool L_3;
		L_3 = UxrCameraWallFade_IsAvatarPeekingThroughGeometry_m3715904B42C4B39A29F38E042537A732A5A73D99(L_2, NULL);
		if (!L_3)
		{
			goto IL_001a;
		}
	}

IL_0019:
	{
		// return;
		return;
	}

IL_001a:
	{
		// _rootRestrictedArea.CheckSetActive(UxrAvatar.LocalAvatar.CameraPosition.IsInsideBox(_boxShootingRange) || _armoredDoor.OpenValue > 0.0f);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->____rootRestrictedArea_39;
		UxrAvatar_t880FC3AD5A9A30338CFDF4653C86343B16ACDE79* L_5;
		L_5 = UxrAvatar_get_LocalAvatar_m57231BC6DC4B6F43EC6BB81C005CA50265112F80(NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = UxrAvatar_get_CameraPosition_m23687EBA4527BB067387C5E7F38E4E1ACDFB08F1(L_5, NULL);
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_7 = __this->____boxShootingRange_37;
		il2cpp_codegen_initobj((&V_0), sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Vector3Ext_tE79960C7FB3A6DFB9D509BE3E9DBF1A9A6F2D52D_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Vector3Ext_IsInsideBox_m7E8797A0592E772EDC8A64677F56CEE4E82F4B8E(L_6, L_7, L_8, (bool)1, NULL);
		G_B4_0 = L_4;
		if (L_9)
		{
			G_B5_0 = L_4;
			goto IL_0055;
		}
	}
	{
		ArmoredDoor_t8B70669952214138BE0A4C9684AFA4A01E27E439* L_10 = __this->____armoredDoor_43;
		NullCheck(L_10);
		float L_11;
		L_11 = AutomaticDoor_get_OpenValue_mDB196EDB79C51FC9E86AA0F578C02D3DA5639B43_inline(L_10, NULL);
		G_B6_0 = ((((float)L_11) > ((float)(0.0f)))? 1 : 0);
		G_B6_1 = G_B4_0;
		goto IL_0056;
	}

IL_0055:
	{
		G_B6_0 = 1;
		G_B6_1 = G_B5_0;
	}

IL_0056:
	{
		GameObjectExt_CheckSetActive_mF2AA9690740549BCEEDF6CF0B6E9ED2E9DA20C65(G_B6_1, (bool)G_B6_0, NULL);
		// _rootUnrestrictedArea.CheckSetActive(!UxrAvatar.LocalAvatar.CameraPosition.IsInsideBox(_boxShootingRange) || _armoredDoor.OpenValue > 0.0f);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = __this->____rootUnrestrictedArea_38;
		UxrAvatar_t880FC3AD5A9A30338CFDF4653C86343B16ACDE79* L_13;
		L_13 = UxrAvatar_get_LocalAvatar_m57231BC6DC4B6F43EC6BB81C005CA50265112F80(NULL);
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = UxrAvatar_get_CameraPosition_m23687EBA4527BB067387C5E7F38E4E1ACDFB08F1(L_13, NULL);
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_15 = __this->____boxShootingRange_37;
		il2cpp_codegen_initobj((&V_0), sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Vector3Ext_tE79960C7FB3A6DFB9D509BE3E9DBF1A9A6F2D52D_il2cpp_TypeInfo_var);
		bool L_17;
		L_17 = Vector3Ext_IsInsideBox_m7E8797A0592E772EDC8A64677F56CEE4E82F4B8E(L_14, L_15, L_16, (bool)1, NULL);
		G_B7_0 = L_12;
		if (!L_17)
		{
			G_B8_0 = L_12;
			goto IL_0096;
		}
	}
	{
		ArmoredDoor_t8B70669952214138BE0A4C9684AFA4A01E27E439* L_18 = __this->____armoredDoor_43;
		NullCheck(L_18);
		float L_19;
		L_19 = AutomaticDoor_get_OpenValue_mDB196EDB79C51FC9E86AA0F578C02D3DA5639B43_inline(L_18, NULL);
		G_B9_0 = ((((float)L_19) > ((float)(0.0f)))? 1 : 0);
		G_B9_1 = G_B7_0;
		goto IL_0097;
	}

IL_0096:
	{
		G_B9_0 = 1;
		G_B9_1 = G_B8_0;
	}

IL_0097:
	{
		GameObjectExt_CheckSetActive_mF2AA9690740549BCEEDF6CF0B6E9ED2E9DA20C65(G_B9_1, (bool)G_B9_0, NULL);
		// }
		return;
	}
}
// System.Void UltimateXR.Examples.FullScene.GlobalLogic::UpdateVisibility()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlobalLogic_UpdateVisibility_m7197DB89354B15E43FE35BAAFC7EA58617AD03F8 (GlobalLogic_t200876C43EB8393A83FDCFA472C9E734546F9EEB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3Ext_tE79960C7FB3A6DFB9D509BE3E9DBF1A9A6F2D52D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B5_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B6_1 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B8_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B7_0 = NULL;
	int32_t G_B9_0 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B9_1 = NULL;
	{
		// if (UxrAvatar.LocalAvatar == null || UxrCameraWallFade.IsAvatarPeekingThroughGeometry(UxrAvatar.LocalAvatar))
		UxrAvatar_t880FC3AD5A9A30338CFDF4653C86343B16ACDE79* L_0;
		L_0 = UxrAvatar_get_LocalAvatar_m57231BC6DC4B6F43EC6BB81C005CA50265112F80(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		UxrAvatar_t880FC3AD5A9A30338CFDF4653C86343B16ACDE79* L_2;
		L_2 = UxrAvatar_get_LocalAvatar_m57231BC6DC4B6F43EC6BB81C005CA50265112F80(NULL);
		bool L_3;
		L_3 = UxrCameraWallFade_IsAvatarPeekingThroughGeometry_m3715904B42C4B39A29F38E042537A732A5A73D99(L_2, NULL);
		if (!L_3)
		{
			goto IL_001a;
		}
	}

IL_0019:
	{
		// return;
		return;
	}

IL_001a:
	{
		// _mirrorComponent.CheckSetEnabled(UxrAvatar.LocalAvatar.CameraPosition.IsInsideBox(_boxSpawnRoomMirror));
		UxrComponent_tA6AC6651B5C934626995D87127173273775B1011* L_4 = __this->____mirrorComponent_40;
		UxrAvatar_t880FC3AD5A9A30338CFDF4653C86343B16ACDE79* L_5;
		L_5 = UxrAvatar_get_LocalAvatar_m57231BC6DC4B6F43EC6BB81C005CA50265112F80(NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = UxrAvatar_get_CameraPosition_m23687EBA4527BB067387C5E7F38E4E1ACDFB08F1(L_5, NULL);
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_7 = __this->____boxSpawnRoomMirror_32;
		il2cpp_codegen_initobj((&V_0), sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Vector3Ext_tE79960C7FB3A6DFB9D509BE3E9DBF1A9A6F2D52D_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Vector3Ext_IsInsideBox_m7E8797A0592E772EDC8A64677F56CEE4E82F4B8E(L_6, L_7, L_8, (bool)1, NULL);
		MonoBehaviourExt_CheckSetEnabled_m05B3FA6026375F6871B789D33086D76F5C0E4285(L_4, L_9, NULL);
		// _rootRestrictedArea.CheckSetActive(UxrAvatar.LocalAvatar.CameraPosition.IsInsideBox(_boxShootingRange) || _armoredDoor.OpenValue > 0.0f);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->____rootRestrictedArea_39;
		UxrAvatar_t880FC3AD5A9A30338CFDF4653C86343B16ACDE79* L_11;
		L_11 = UxrAvatar_get_LocalAvatar_m57231BC6DC4B6F43EC6BB81C005CA50265112F80(NULL);
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = UxrAvatar_get_CameraPosition_m23687EBA4527BB067387C5E7F38E4E1ACDFB08F1(L_11, NULL);
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_13 = __this->____boxShootingRange_37;
		il2cpp_codegen_initobj((&V_0), sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = V_0;
		bool L_15;
		L_15 = Vector3Ext_IsInsideBox_m7E8797A0592E772EDC8A64677F56CEE4E82F4B8E(L_12, L_13, L_14, (bool)1, NULL);
		G_B4_0 = L_10;
		if (L_15)
		{
			G_B5_0 = L_10;
			goto IL_007f;
		}
	}
	{
		ArmoredDoor_t8B70669952214138BE0A4C9684AFA4A01E27E439* L_16 = __this->____armoredDoor_43;
		NullCheck(L_16);
		float L_17;
		L_17 = AutomaticDoor_get_OpenValue_mDB196EDB79C51FC9E86AA0F578C02D3DA5639B43_inline(L_16, NULL);
		G_B6_0 = ((((float)L_17) > ((float)(0.0f)))? 1 : 0);
		G_B6_1 = G_B4_0;
		goto IL_0080;
	}

IL_007f:
	{
		G_B6_0 = 1;
		G_B6_1 = G_B5_0;
	}

IL_0080:
	{
		GameObjectExt_CheckSetActive_mF2AA9690740549BCEEDF6CF0B6E9ED2E9DA20C65(G_B6_1, (bool)G_B6_0, NULL);
		// _rootUnrestrictedArea.CheckSetActive(!UxrAvatar.LocalAvatar.CameraPosition.IsInsideBox(_boxShootingRange) || _armoredDoor.OpenValue > 0.0f);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18 = __this->____rootUnrestrictedArea_38;
		UxrAvatar_t880FC3AD5A9A30338CFDF4653C86343B16ACDE79* L_19;
		L_19 = UxrAvatar_get_LocalAvatar_m57231BC6DC4B6F43EC6BB81C005CA50265112F80(NULL);
		NullCheck(L_19);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = UxrAvatar_get_CameraPosition_m23687EBA4527BB067387C5E7F38E4E1ACDFB08F1(L_19, NULL);
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_21 = __this->____boxShootingRange_37;
		il2cpp_codegen_initobj((&V_0), sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Vector3Ext_tE79960C7FB3A6DFB9D509BE3E9DBF1A9A6F2D52D_il2cpp_TypeInfo_var);
		bool L_23;
		L_23 = Vector3Ext_IsInsideBox_m7E8797A0592E772EDC8A64677F56CEE4E82F4B8E(L_20, L_21, L_22, (bool)1, NULL);
		G_B7_0 = L_18;
		if (!L_23)
		{
			G_B8_0 = L_18;
			goto IL_00c0;
		}
	}
	{
		ArmoredDoor_t8B70669952214138BE0A4C9684AFA4A01E27E439* L_24 = __this->____armoredDoor_43;
		NullCheck(L_24);
		float L_25;
		L_25 = AutomaticDoor_get_OpenValue_mDB196EDB79C51FC9E86AA0F578C02D3DA5639B43_inline(L_24, NULL);
		G_B9_0 = ((((float)L_25) > ((float)(0.0f)))? 1 : 0);
		G_B9_1 = G_B7_0;
		goto IL_00c1;
	}

IL_00c0:
	{
		G_B9_0 = 1;
		G_B9_1 = G_B8_0;
	}

IL_00c1:
	{
		GameObjectExt_CheckSetActive_mF2AA9690740549BCEEDF6CF0B6E9ED2E9DA20C65(G_B9_1, (bool)G_B9_0, NULL);
		// if (UxrAvatar.LocalAvatar.CameraPosition.IsInsideBox(_boxSpawnRoomMirror))
		UxrAvatar_t880FC3AD5A9A30338CFDF4653C86343B16ACDE79* L_26;
		L_26 = UxrAvatar_get_LocalAvatar_m57231BC6DC4B6F43EC6BB81C005CA50265112F80(NULL);
		NullCheck(L_26);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = UxrAvatar_get_CameraPosition_m23687EBA4527BB067387C5E7F38E4E1ACDFB08F1(L_26, NULL);
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_28 = __this->____boxSpawnRoomMirror_32;
		il2cpp_codegen_initobj((&V_0), sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Vector3Ext_tE79960C7FB3A6DFB9D509BE3E9DBF1A9A6F2D52D_il2cpp_TypeInfo_var);
		bool L_30;
		L_30 = Vector3Ext_IsInsideBox_m7E8797A0592E772EDC8A64677F56CEE4E82F4B8E(L_27, L_28, L_29, (bool)1, NULL);
		if (!L_30)
		{
			goto IL_0100;
		}
	}
	{
		// _controllerRoomElements.CheckSetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_31 = __this->____controllerRoomElements_41;
		GameObjectExt_CheckSetActive_mF2AA9690740549BCEEDF6CF0B6E9ED2E9DA20C65(L_31, (bool)0, NULL);
		// _rootLabElements.CheckSetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_32 = __this->____rootLabElements_42;
		GameObjectExt_CheckSetActive_mF2AA9690740549BCEEDF6CF0B6E9ED2E9DA20C65(L_32, (bool)0, NULL);
		return;
	}

IL_0100:
	{
		// else if (UxrAvatar.LocalAvatar.CameraPosition.IsInsideBox(_boxSpawnRoomDoor))
		UxrAvatar_t880FC3AD5A9A30338CFDF4653C86343B16ACDE79* L_33;
		L_33 = UxrAvatar_get_LocalAvatar_m57231BC6DC4B6F43EC6BB81C005CA50265112F80(NULL);
		NullCheck(L_33);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		L_34 = UxrAvatar_get_CameraPosition_m23687EBA4527BB067387C5E7F38E4E1ACDFB08F1(L_33, NULL);
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_35 = __this->____boxSpawnRoomDoor_33;
		il2cpp_codegen_initobj((&V_0), sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Vector3Ext_tE79960C7FB3A6DFB9D509BE3E9DBF1A9A6F2D52D_il2cpp_TypeInfo_var);
		bool L_37;
		L_37 = Vector3Ext_IsInsideBox_m7E8797A0592E772EDC8A64677F56CEE4E82F4B8E(L_34, L_35, L_36, (bool)1, NULL);
		if (!L_37)
		{
			goto IL_013a;
		}
	}
	{
		// _controllerRoomElements.CheckSetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_38 = __this->____controllerRoomElements_41;
		GameObjectExt_CheckSetActive_mF2AA9690740549BCEEDF6CF0B6E9ED2E9DA20C65(L_38, (bool)0, NULL);
		// _rootLabElements.CheckSetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_39 = __this->____rootLabElements_42;
		GameObjectExt_CheckSetActive_mF2AA9690740549BCEEDF6CF0B6E9ED2E9DA20C65(L_39, (bool)1, NULL);
		return;
	}

IL_013a:
	{
		// else if (UxrAvatar.LocalAvatar.CameraPosition.IsInsideBox(_boxCentralRoom) || UxrAvatar.LocalAvatar.CameraPosition.IsInsideBox(_boxLabRoom) || UxrAvatar.LocalAvatar.CameraPosition.IsInsideBox(_boxControllerRoom))
		UxrAvatar_t880FC3AD5A9A30338CFDF4653C86343B16ACDE79* L_40;
		L_40 = UxrAvatar_get_LocalAvatar_m57231BC6DC4B6F43EC6BB81C005CA50265112F80(NULL);
		NullCheck(L_40);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41;
		L_41 = UxrAvatar_get_CameraPosition_m23687EBA4527BB067387C5E7F38E4E1ACDFB08F1(L_40, NULL);
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_42 = __this->____boxCentralRoom_34;
		il2cpp_codegen_initobj((&V_0), sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Vector3Ext_tE79960C7FB3A6DFB9D509BE3E9DBF1A9A6F2D52D_il2cpp_TypeInfo_var);
		bool L_44;
		L_44 = Vector3Ext_IsInsideBox_m7E8797A0592E772EDC8A64677F56CEE4E82F4B8E(L_41, L_42, L_43, (bool)1, NULL);
		if (L_44)
		{
			goto IL_019d;
		}
	}
	{
		UxrAvatar_t880FC3AD5A9A30338CFDF4653C86343B16ACDE79* L_45;
		L_45 = UxrAvatar_get_LocalAvatar_m57231BC6DC4B6F43EC6BB81C005CA50265112F80(NULL);
		NullCheck(L_45);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
		L_46 = UxrAvatar_get_CameraPosition_m23687EBA4527BB067387C5E7F38E4E1ACDFB08F1(L_45, NULL);
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_47 = __this->____boxLabRoom_35;
		il2cpp_codegen_initobj((&V_0), sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_48 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Vector3Ext_tE79960C7FB3A6DFB9D509BE3E9DBF1A9A6F2D52D_il2cpp_TypeInfo_var);
		bool L_49;
		L_49 = Vector3Ext_IsInsideBox_m7E8797A0592E772EDC8A64677F56CEE4E82F4B8E(L_46, L_47, L_48, (bool)1, NULL);
		if (L_49)
		{
			goto IL_019d;
		}
	}
	{
		UxrAvatar_t880FC3AD5A9A30338CFDF4653C86343B16ACDE79* L_50;
		L_50 = UxrAvatar_get_LocalAvatar_m57231BC6DC4B6F43EC6BB81C005CA50265112F80(NULL);
		NullCheck(L_50);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_51;
		L_51 = UxrAvatar_get_CameraPosition_m23687EBA4527BB067387C5E7F38E4E1ACDFB08F1(L_50, NULL);
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_52 = __this->____boxControllerRoom_36;
		il2cpp_codegen_initobj((&V_0), sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_53 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Vector3Ext_tE79960C7FB3A6DFB9D509BE3E9DBF1A9A6F2D52D_il2cpp_TypeInfo_var);
		bool L_54;
		L_54 = Vector3Ext_IsInsideBox_m7E8797A0592E772EDC8A64677F56CEE4E82F4B8E(L_51, L_52, L_53, (bool)1, NULL);
		if (!L_54)
		{
			goto IL_01b6;
		}
	}

IL_019d:
	{
		// _controllerRoomElements.CheckSetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_55 = __this->____controllerRoomElements_41;
		GameObjectExt_CheckSetActive_mF2AA9690740549BCEEDF6CF0B6E9ED2E9DA20C65(L_55, (bool)1, NULL);
		// _rootLabElements.CheckSetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_56 = __this->____rootLabElements_42;
		GameObjectExt_CheckSetActive_mF2AA9690740549BCEEDF6CF0B6E9ED2E9DA20C65(L_56, (bool)1, NULL);
		return;
	}

IL_01b6:
	{
		// else if (UxrAvatar.LocalAvatar.CameraPosition.IsInsideBox(_boxShootingRange))
		UxrAvatar_t880FC3AD5A9A30338CFDF4653C86343B16ACDE79* L_57;
		L_57 = UxrAvatar_get_LocalAvatar_m57231BC6DC4B6F43EC6BB81C005CA50265112F80(NULL);
		NullCheck(L_57);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58;
		L_58 = UxrAvatar_get_CameraPosition_m23687EBA4527BB067387C5E7F38E4E1ACDFB08F1(L_57, NULL);
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_59 = __this->____boxShootingRange_37;
		il2cpp_codegen_initobj((&V_0), sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_60 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Vector3Ext_tE79960C7FB3A6DFB9D509BE3E9DBF1A9A6F2D52D_il2cpp_TypeInfo_var);
		bool L_61;
		L_61 = Vector3Ext_IsInsideBox_m7E8797A0592E772EDC8A64677F56CEE4E82F4B8E(L_58, L_59, L_60, (bool)1, NULL);
		if (!L_61)
		{
			goto IL_01ef;
		}
	}
	{
		// _controllerRoomElements.CheckSetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_62 = __this->____controllerRoomElements_41;
		GameObjectExt_CheckSetActive_mF2AA9690740549BCEEDF6CF0B6E9ED2E9DA20C65(L_62, (bool)0, NULL);
		// _rootLabElements.CheckSetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_63 = __this->____rootLabElements_42;
		GameObjectExt_CheckSetActive_mF2AA9690740549BCEEDF6CF0B6E9ED2E9DA20C65(L_63, (bool)0, NULL);
	}

IL_01ef:
	{
		// }
		return;
	}
}
// System.Void UltimateXR.Examples.FullScene.GlobalLogic::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlobalLogic__ctor_m301559A81CE92391FC6C07927C75A1B1CA515145 (GlobalLogic_t200876C43EB8393A83FDCFA472C9E734546F9EEB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UxrComponent_tA6AC6651B5C934626995D87127173273775B1011_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UxrComponent_tA6AC6651B5C934626995D87127173273775B1011_il2cpp_TypeInfo_var);
		UxrComponent__ctor_mAE5417B1456451CA1927CE21DF3731194A1CA64A(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UltimateXR.Examples.FullScene.Weapons.MagAmmoIndicator::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MagAmmoIndicator_Awake_m8485DB8D8AE3F7E60CB6F8EF0CCA03E43C2712FD (MagAmmoIndicator_t8B07F09F92B9AA96AA4E615ED6443811B80EF9D4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisUxrFirearmMag_tBEA739C8C38E1746316937E4BCBC7471EA02EC5C_m87D3E49B15B732176AC404723523F2D27797E4F1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Awake();
		UxrComponent_Awake_m99D44E2A1351BB489585DBBD619F82CCAE366C24(__this, NULL);
		// _mag = GetComponent<UxrFirearmMag>();
		UxrFirearmMag_tBEA739C8C38E1746316937E4BCBC7471EA02EC5C* L_0;
		L_0 = Component_GetComponent_TisUxrFirearmMag_tBEA739C8C38E1746316937E4BCBC7471EA02EC5C_m87D3E49B15B732176AC404723523F2D27797E4F1(__this, Component_GetComponent_TisUxrFirearmMag_tBEA739C8C38E1746316937E4BCBC7471EA02EC5C_m87D3E49B15B732176AC404723523F2D27797E4F1_RuntimeMethod_var);
		__this->____mag_31 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____mag_31), (void*)L_0);
		// }
		return;
	}
}
// System.Void UltimateXR.Examples.FullScene.Weapons.MagAmmoIndicator::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MagAmmoIndicator_OnEnable_m458B10DC11C27B646AE0B46D2B07EC8F25879200 (MagAmmoIndicator_t8B07F09F92B9AA96AA4E615ED6443811B80EF9D4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MagAmmoIndicator_OnRoundsChanged_mAE8DE6668D1CB47A69FFA08B69A0A525A7591505_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.OnEnable();
		UxrComponent_OnEnable_mB30EBD913BFCBA1B1B248C0C4E93F3E63136DFF6(__this, NULL);
		// _mag.RoundsChanged += OnRoundsChanged;
		UxrFirearmMag_tBEA739C8C38E1746316937E4BCBC7471EA02EC5C* L_0 = __this->____mag_31;
		UxrFirearmMag_tBEA739C8C38E1746316937E4BCBC7471EA02EC5C* L_1 = L_0;
		NullCheck(L_1);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = L_1->___RoundsChanged_30;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_3, __this, (intptr_t)((void*)MagAmmoIndicator_OnRoundsChanged_mAE8DE6668D1CB47A69FFA08B69A0A525A7591505_RuntimeMethod_var), NULL);
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		NullCheck(L_1);
		L_1->___RoundsChanged_30 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___RoundsChanged_30), (void*)((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void UltimateXR.Examples.FullScene.Weapons.MagAmmoIndicator::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MagAmmoIndicator_OnDisable_m29F8CF5709F75B3907389597F099BA259F43F8A7 (MagAmmoIndicator_t8B07F09F92B9AA96AA4E615ED6443811B80EF9D4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MagAmmoIndicator_OnRoundsChanged_mAE8DE6668D1CB47A69FFA08B69A0A525A7591505_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.OnDisable();
		UxrComponent_OnDisable_mCC9A18F682546580B0A67A788DFFD33595ECE1DB(__this, NULL);
		// _mag.RoundsChanged -= OnRoundsChanged;
		UxrFirearmMag_tBEA739C8C38E1746316937E4BCBC7471EA02EC5C* L_0 = __this->____mag_31;
		UxrFirearmMag_tBEA739C8C38E1746316937E4BCBC7471EA02EC5C* L_1 = L_0;
		NullCheck(L_1);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = L_1->___RoundsChanged_30;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_3, __this, (intptr_t)((void*)MagAmmoIndicator_OnRoundsChanged_mAE8DE6668D1CB47A69FFA08B69A0A525A7591505_RuntimeMethod_var), NULL);
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		NullCheck(L_1);
		L_1->___RoundsChanged_30 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___RoundsChanged_30), (void*)((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void UltimateXR.Examples.FullScene.Weapons.MagAmmoIndicator::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MagAmmoIndicator_Start_mCFDABB6AA0CC9621557993EE0BA43ED0AE65C5FA (MagAmmoIndicator_t8B07F09F92B9AA96AA4E615ED6443811B80EF9D4* __this, const RuntimeMethod* method) 
{
	{
		// base.OnEnable();
		UxrComponent_OnEnable_mB30EBD913BFCBA1B1B248C0C4E93F3E63136DFF6(__this, NULL);
		// if (_setValueOnStart)
		bool L_0 = __this->____setValueOnStart_28;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// OnRoundsChanged();
		MagAmmoIndicator_OnRoundsChanged_mAE8DE6668D1CB47A69FFA08B69A0A525A7591505(__this, NULL);
	}

IL_0014:
	{
		// }
		return;
	}
}
// System.Void UltimateXR.Examples.FullScene.Weapons.MagAmmoIndicator::OnRoundsChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MagAmmoIndicator_OnRoundsChanged_mAE8DE6668D1CB47A69FFA08B69A0A525A7591505 (MagAmmoIndicator_t8B07F09F92B9AA96AA4E615ED6443811B80EF9D4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralED3E394CD8989C9069B26DA80D8A90E02D972827);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _renderer.material.SetFloat(FillVariableName, (float)_mag.Rounds / _mag.Capacity);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_0 = __this->____renderer_29;
		NullCheck(L_0);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_1;
		L_1 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_0, NULL);
		UxrFirearmMag_tBEA739C8C38E1746316937E4BCBC7471EA02EC5C* L_2 = __this->____mag_31;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = UxrFirearmMag_get_Rounds_m4F391C506014ADF7200045CD550097889EA20BA9(L_2, NULL);
		UxrFirearmMag_tBEA739C8C38E1746316937E4BCBC7471EA02EC5C* L_4 = __this->____mag_31;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = UxrFirearmMag_get_Capacity_m0D6296E2BF4F0631583AA398AF15FE89E489AB32_inline(L_4, NULL);
		NullCheck(L_1);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_1, _stringLiteralED3E394CD8989C9069B26DA80D8A90E02D972827, ((float)(((float)L_3)/((float)L_5))), NULL);
		// }
		return;
	}
}
// System.Void UltimateXR.Examples.FullScene.Weapons.MagAmmoIndicator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MagAmmoIndicator__ctor_m012A08303096C22A1F0979245C2DF8C197497FFC (MagAmmoIndicator_t8B07F09F92B9AA96AA4E615ED6443811B80EF9D4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UxrComponent_tA6AC6651B5C934626995D87127173273775B1011_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] private bool     _setValueOnStart = true;
		__this->____setValueOnStart_28 = (bool)1;
		il2cpp_codegen_runtime_class_init_inline(UxrComponent_tA6AC6651B5C934626995D87127173273775B1011_il2cpp_TypeInfo_var);
		UxrComponent__ctor_mAE5417B1456451CA1927CE21DF3731194A1CA64A(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UltimateXR.Examples.FullScene.Lab.Battery::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Battery_Awake_m3962B46C54C4EBC80AC823F4AA8046B2286E56BB (Battery_t56FF6D15FAC1E9B259C0EF64902537FB2B41FA8B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisUxrManipulationHapticFeedback_t6DA4A9477852BE09667C082006431E86BC9271D3_m11B487A5D4D43C49910AF886B3B10131472D27BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UxrGrabbableObjectComponent_1_Awake_m9410EE9EA1E839A27FF10C24475F5AD768AFF303_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UxrGrabbableObjectComponent_1_get_GrabbableObject_mFA0E4181BAD136313E485FD1F6604C3BA09B9E3C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Awake();
		UxrGrabbableObjectComponent_1_Awake_m9410EE9EA1E839A27FF10C24475F5AD768AFF303(__this, UxrGrabbableObjectComponent_1_Awake_m9410EE9EA1E839A27FF10C24475F5AD768AFF303_RuntimeMethod_var);
		// _placed                     = GrabbableObject.CurrentAnchor != null;
		UxrGrabbableObject_tCA9C5B90AC9CB9830D3D50AE51F7FF342511E3BC* L_0;
		L_0 = UxrGrabbableObjectComponent_1_get_GrabbableObject_mFA0E4181BAD136313E485FD1F6604C3BA09B9E3C(__this, UxrGrabbableObjectComponent_1_get_GrabbableObject_mFA0E4181BAD136313E485FD1F6604C3BA09B9E3C_RuntimeMethod_var);
		NullCheck(L_0);
		UxrGrabbableObjectAnchor_tE7110AF7891C09542149FC793D1C0C9A9D95F66A* L_1;
		L_1 = UxrGrabbableObject_get_CurrentAnchor_mFAF2BAAB5BC5FEE894E0EB4874ECD590CD0284BD_inline(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		__this->____placed_40 = L_2;
		// _batteryOffsetConstraint    = GrabbableObject.TranslationLimitsMax;
		UxrGrabbableObject_tCA9C5B90AC9CB9830D3D50AE51F7FF342511E3BC* L_3;
		L_3 = UxrGrabbableObjectComponent_1_get_GrabbableObject_mFA0E4181BAD136313E485FD1F6604C3BA09B9E3C(__this, UxrGrabbableObjectComponent_1_get_GrabbableObject_mFA0E4181BAD136313E485FD1F6604C3BA09B9E3C_RuntimeMethod_var);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = UxrGrabbableObject_get_TranslationLimitsMax_m3A01D28CEC970FD9FB1F7D04A9CE4ACB2266F584_inline(L_3, NULL);
		__this->____batteryOffsetConstraint_38 = L_4;
		// _manipulationHapticFeedback = GetComponent<UxrManipulationHapticFeedback>();
		UxrManipulationHapticFeedback_t6DA4A9477852BE09667C082006431E86BC9271D3* L_5;
		L_5 = Component_GetComponent_TisUxrManipulationHapticFeedback_t6DA4A9477852BE09667C082006431E86BC9271D3_m11B487A5D4D43C49910AF886B3B10131472D27BD(__this, Component_GetComponent_TisUxrManipulationHapticFeedback_t6DA4A9477852BE09667C082006431E86BC9271D3_m11B487A5D4D43C49910AF886B3B10131472D27BD_RuntimeMethod_var);
		__this->____manipulationHapticFeedback_41 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____manipulationHapticFeedback_41), (void*)L_5);
		// }
		return;
	}
}
// System.Void UltimateXR.Examples.FullScene.Lab.Battery::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Battery_OnEnable_mD82379C47A3C71AAD28FC713EF776DA028DA6B44 (Battery_t56FF6D15FAC1E9B259C0EF64902537FB2B41FA8B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Battery_UxrManager_AvatarsUpdated_mB00076C5D25BCEB5E35E93815EBDA188BF118750_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UxrGrabbableObjectComponent_1_OnEnable_m9FD689540A0494BA5510E0FCDE3233F0A8676ED1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.OnEnable();
		UxrGrabbableObjectComponent_1_OnEnable_m9FD689540A0494BA5510E0FCDE3233F0A8676ED1(__this, UxrGrabbableObjectComponent_1_OnEnable_m9FD689540A0494BA5510E0FCDE3233F0A8676ED1_RuntimeMethod_var);
		// UxrManager.AvatarsUpdated += UxrManager_AvatarsUpdated;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_0, __this, (intptr_t)((void*)Battery_UxrManager_AvatarsUpdated_mB00076C5D25BCEB5E35E93815EBDA188BF118750_RuntimeMethod_var), NULL);
		UxrManager_add_AvatarsUpdated_m380B3528C94B7830A074514641244B12FBE2127A(L_0, NULL);
		// }
		return;
	}
}
// System.Void UltimateXR.Examples.FullScene.Lab.Battery::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Battery_OnDisable_m0A5E856D0E39DF9F7A49167F191199AC5D16A9BE (Battery_t56FF6D15FAC1E9B259C0EF64902537FB2B41FA8B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Battery_UxrManager_AvatarsUpdated_mB00076C5D25BCEB5E35E93815EBDA188BF118750_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UxrGrabbableObjectComponent_1_OnDisable_m2CE8EDF6A887C89870E49BB14286F7C5100BEADB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.OnDisable();
		UxrGrabbableObjectComponent_1_OnDisable_m2CE8EDF6A887C89870E49BB14286F7C5100BEADB(__this, UxrGrabbableObjectComponent_1_OnDisable_m2CE8EDF6A887C89870E49BB14286F7C5100BEADB_RuntimeMethod_var);
		// UxrManager.AvatarsUpdated -= UxrManager_AvatarsUpdated;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_0, __this, (intptr_t)((void*)Battery_UxrManager_AvatarsUpdated_mB00076C5D25BCEB5E35E93815EBDA188BF118750_RuntimeMethod_var), NULL);
		UxrManager_remove_AvatarsUpdated_m06CD0E601A8F84D4489953418E9A3D68D6E96F6E(L_0, NULL);
		// }
		return;
	}
}
// System.Void UltimateXR.Examples.FullScene.Lab.Battery::UxrManager_AvatarsUpdated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Battery_UxrManager_AvatarsUpdated_mB00076C5D25BCEB5E35E93815EBDA188BF118750 (Battery_t56FF6D15FAC1E9B259C0EF64902537FB2B41FA8B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInParent_TisGeneratorDoor_t33EB8ADB2139695767CD1080E775EA94B6DD3037_m8321A5B9EADE7967CF085D027E4EF9978D9AB074_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tFF63E4E3AB695EFCE6D76302D97255A7FF102F1A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t91C5A3BEBB236B637876D28658685DEFAFC51194_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UxrComponent_1_get_EnabledComponents_m80D87C49AFFE8431CCEBEBD31AEF3A860773CF8B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UxrComponent_1_t87BAA908145649D47C98BE530A9F80A805F9E90F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UxrGrabbableObjectComponent_1_get_GrabbableObject_mFA0E4181BAD136313E485FD1F6604C3BA09B9E3C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UxrSingleton_1_get_Instance_mA15387C4D93C58879A6567FD6EA7BE6DE8A46DC7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	BatteryAnchor_t01234E44479A11E2168D9712174DA3B7B28ED114* V_1 = NULL;
	GeneratorDoor_t33EB8ADB2139695767CD1080E775EA94B6DD3037* V_2 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// if (GrabbableObject.CurrentAnchor == null && UxrGrabManager.Instance.IsBeingGrabbed(GrabbableObject))
		UxrGrabbableObject_tCA9C5B90AC9CB9830D3D50AE51F7FF342511E3BC* L_0;
		L_0 = UxrGrabbableObjectComponent_1_get_GrabbableObject_mFA0E4181BAD136313E485FD1F6604C3BA09B9E3C(__this, UxrGrabbableObjectComponent_1_get_GrabbableObject_mFA0E4181BAD136313E485FD1F6604C3BA09B9E3C_RuntimeMethod_var);
		NullCheck(L_0);
		UxrGrabbableObjectAnchor_tE7110AF7891C09542149FC793D1C0C9A9D95F66A* L_1;
		L_1 = UxrGrabbableObject_get_CurrentAnchor_mFAF2BAAB5BC5FEE894E0EB4874ECD590CD0284BD_inline(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_00dc;
		}
	}
	{
		UxrGrabManager_t76F8EBC3B188C8BB86C683C7B3E0E699CDEA7104* L_3;
		L_3 = UxrSingleton_1_get_Instance_mA15387C4D93C58879A6567FD6EA7BE6DE8A46DC7(UxrSingleton_1_get_Instance_mA15387C4D93C58879A6567FD6EA7BE6DE8A46DC7_RuntimeMethod_var);
		UxrGrabbableObject_tCA9C5B90AC9CB9830D3D50AE51F7FF342511E3BC* L_4;
		L_4 = UxrGrabbableObjectComponent_1_get_GrabbableObject_mFA0E4181BAD136313E485FD1F6604C3BA09B9E3C(__this, UxrGrabbableObjectComponent_1_get_GrabbableObject_mFA0E4181BAD136313E485FD1F6604C3BA09B9E3C_RuntimeMethod_var);
		NullCheck(L_3);
		bool L_5;
		L_5 = UxrGrabManager_IsBeingGrabbed_mFC0D94B4E31E1AD28D75AFDA6C85B51B6F035E2D(L_3, L_4, NULL);
		if (!L_5)
		{
			goto IL_00dc;
		}
	}
	{
		// foreach (BatteryAnchor batteryAnchor in BatteryAnchor.EnabledComponents)
		il2cpp_codegen_runtime_class_init_inline(UxrComponent_1_t87BAA908145649D47C98BE530A9F80A805F9E90F_il2cpp_TypeInfo_var);
		RuntimeObject* L_6;
		L_6 = UxrComponent_1_get_EnabledComponents_m80D87C49AFFE8431CCEBEBD31AEF3A860773CF8B(UxrComponent_1_get_EnabledComponents_m80D87C49AFFE8431CCEBEBD31AEF3A860773CF8B_RuntimeMethod_var);
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UltimateXR.Examples.FullScene.Lab.BatteryAnchor>::GetEnumerator() */, IEnumerable_1_tFF63E4E3AB695EFCE6D76302D97255A7FF102F1A_il2cpp_TypeInfo_var, L_6);
		V_0 = L_7;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d2:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_8 = V_0;
					if (!L_8)
					{
						goto IL_00db;
					}
				}
				{
					RuntimeObject* L_9 = V_0;
					NullCheck(L_9);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_9);
				}

IL_00db:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00c5_1;
			}

IL_003b_1:
			{
				// foreach (BatteryAnchor batteryAnchor in BatteryAnchor.EnabledComponents)
				RuntimeObject* L_10 = V_0;
				NullCheck(L_10);
				BatteryAnchor_t01234E44479A11E2168D9712174DA3B7B28ED114* L_11;
				L_11 = InterfaceFuncInvoker0< BatteryAnchor_t01234E44479A11E2168D9712174DA3B7B28ED114* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<UltimateXR.Examples.FullScene.Lab.BatteryAnchor>::get_Current() */, IEnumerator_1_t91C5A3BEBB236B637876D28658685DEFAFC51194_il2cpp_TypeInfo_var, L_10);
				V_1 = L_11;
				// if (batteryAnchor.Anchor.CurrentPlacedObject == null && IsBatteryNearPlacement(batteryAnchor.Anchor))
				BatteryAnchor_t01234E44479A11E2168D9712174DA3B7B28ED114* L_12 = V_1;
				NullCheck(L_12);
				UxrGrabbableObjectAnchor_tE7110AF7891C09542149FC793D1C0C9A9D95F66A* L_13;
				L_13 = BatteryAnchor_get_Anchor_mAE18114D9A38411ECAC1A1E47C8A249124F3F719_inline(L_12, NULL);
				NullCheck(L_13);
				UxrGrabbableObject_tCA9C5B90AC9CB9830D3D50AE51F7FF342511E3BC* L_14;
				L_14 = UxrGrabbableObjectAnchor_get_CurrentPlacedObject_m0988C02C0982FDEA3373963A7E310E149AC522B5_inline(L_13, NULL);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_15;
				L_15 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_14, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
				if (!L_15)
				{
					goto IL_00c5_1;
				}
			}
			{
				BatteryAnchor_t01234E44479A11E2168D9712174DA3B7B28ED114* L_16 = V_1;
				NullCheck(L_16);
				UxrGrabbableObjectAnchor_tE7110AF7891C09542149FC793D1C0C9A9D95F66A* L_17;
				L_17 = BatteryAnchor_get_Anchor_mAE18114D9A38411ECAC1A1E47C8A249124F3F719_inline(L_16, NULL);
				bool L_18;
				L_18 = Battery_IsBatteryNearPlacement_mD901A66A752363AB828111EFA32A4808AC9D9828(__this, L_17, NULL);
				if (!L_18)
				{
					goto IL_00c5_1;
				}
			}
			{
				// GrabbableObject.TranslationConstraint = UxrTranslationConstraintMode.RestrictLocalOffset;
				UxrGrabbableObject_tCA9C5B90AC9CB9830D3D50AE51F7FF342511E3BC* L_19;
				L_19 = UxrGrabbableObjectComponent_1_get_GrabbableObject_mFA0E4181BAD136313E485FD1F6604C3BA09B9E3C(__this, UxrGrabbableObjectComponent_1_get_GrabbableObject_mFA0E4181BAD136313E485FD1F6604C3BA09B9E3C_RuntimeMethod_var);
				NullCheck(L_19);
				UxrGrabbableObject_set_TranslationConstraint_m87F0647E2F082718C13CEB93B96360EBC32ECB7E_inline(L_19, 2, NULL);
				// GrabbableObject.RotationConstraint    = UxrRotationConstraintMode.Locked;
				UxrGrabbableObject_tCA9C5B90AC9CB9830D3D50AE51F7FF342511E3BC* L_20;
				L_20 = UxrGrabbableObjectComponent_1_get_GrabbableObject_mFA0E4181BAD136313E485FD1F6604C3BA09B9E3C(__this, UxrGrabbableObjectComponent_1_get_GrabbableObject_mFA0E4181BAD136313E485FD1F6604C3BA09B9E3C_RuntimeMethod_var);
				NullCheck(L_20);
				UxrGrabbableObject_set_RotationConstraint_m6236C3CB606BEA6D244AE74FA810016FD1A27B4A_inline(L_20, 2, NULL);
				// UxrGrabManager.Instance.PlaceObject(GrabbableObject, batteryAnchor.Anchor, UxrPlacementType.Smooth, false);
				UxrGrabManager_t76F8EBC3B188C8BB86C683C7B3E0E699CDEA7104* L_21;
				L_21 = UxrSingleton_1_get_Instance_mA15387C4D93C58879A6567FD6EA7BE6DE8A46DC7(UxrSingleton_1_get_Instance_mA15387C4D93C58879A6567FD6EA7BE6DE8A46DC7_RuntimeMethod_var);
				UxrGrabbableObject_tCA9C5B90AC9CB9830D3D50AE51F7FF342511E3BC* L_22;
				L_22 = UxrGrabbableObjectComponent_1_get_GrabbableObject_mFA0E4181BAD136313E485FD1F6604C3BA09B9E3C(__this, UxrGrabbableObjectComponent_1_get_GrabbableObject_mFA0E4181BAD136313E485FD1F6604C3BA09B9E3C_RuntimeMethod_var);
				BatteryAnchor_t01234E44479A11E2168D9712174DA3B7B28ED114* L_23 = V_1;
				NullCheck(L_23);
				UxrGrabbableObjectAnchor_tE7110AF7891C09542149FC793D1C0C9A9D95F66A* L_24;
				L_24 = BatteryAnchor_get_Anchor_mAE18114D9A38411ECAC1A1E47C8A249124F3F719_inline(L_23, NULL);
				NullCheck(L_21);
				bool L_25;
				L_25 = UxrGrabManager_PlaceObject_mD7E88B3760936FCF707B3A5E48B9BE89932A7C5F(L_21, L_22, L_24, 1, (bool)0, NULL);
				// if (_manipulationHapticFeedback)
				UxrManipulationHapticFeedback_t6DA4A9477852BE09667C082006431E86BC9271D3* L_26 = __this->____manipulationHapticFeedback_41;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_27;
				L_27 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_26, NULL);
				if (!L_27)
				{
					goto IL_00d0_1;
				}
			}
			{
				// _manipulationHapticFeedback.MinAmplitude = _minHapticAmplitude;
				UxrManipulationHapticFeedback_t6DA4A9477852BE09667C082006431E86BC9271D3* L_28 = __this->____manipulationHapticFeedback_41;
				float L_29 = __this->____minHapticAmplitude_42;
				NullCheck(L_28);
				UxrManipulationHapticFeedback_set_MinAmplitude_m34FD38C4DD993091D1A06BB890FA12394A7EAB3C_inline(L_28, L_29, NULL);
				// _manipulationHapticFeedback.MaxAmplitude = _maxHapticAmplitude;
				UxrManipulationHapticFeedback_t6DA4A9477852BE09667C082006431E86BC9271D3* L_30 = __this->____manipulationHapticFeedback_41;
				float L_31 = __this->____maxHapticAmplitude_43;
				NullCheck(L_30);
				UxrManipulationHapticFeedback_set_MaxAmplitude_mD29EF350C59E3905439A7176F2D0401F1231989F_inline(L_30, L_31, NULL);
				// break;
				goto IL_00dc;
			}

IL_00c5_1:
			{
				// foreach (BatteryAnchor batteryAnchor in BatteryAnchor.EnabledComponents)
				RuntimeObject* L_32 = V_0;
				NullCheck(L_32);
				bool L_33;
				L_33 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_32);
				if (L_33)
				{
					goto IL_003b_1;
				}
			}

IL_00d0_1:
			{
				goto IL_00dc;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00dc:
	{
		// if (GrabbableObject.CurrentAnchor != null)
		UxrGrabbableObject_tCA9C5B90AC9CB9830D3D50AE51F7FF342511E3BC* L_34;
		L_34 = UxrGrabbableObjectComponent_1_get_GrabbableObject_mFA0E4181BAD136313E485FD1F6604C3BA09B9E3C(__this, UxrGrabbableObjectComponent_1_get_GrabbableObject_mFA0E4181BAD136313E485FD1F6604C3BA09B9E3C_RuntimeMethod_var);
		NullCheck(L_34);
		UxrGrabbableObjectAnchor_tE7110AF7891C09542149FC793D1C0C9A9D95F66A* L_35;
		L_35 = UxrGrabbableObject_get_CurrentAnchor_mFAF2BAAB5BC5FEE894E0EB4874ECD590CD0284BD_inline(L_34, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_36;
		L_36 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_35, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_36)
		{
			goto IL_0294;
		}
	}
	{
		// GeneratorDoor generatorDoor = GrabbableObject.CurrentAnchor.GetComponentInParent<GeneratorDoor>();
		UxrGrabbableObject_tCA9C5B90AC9CB9830D3D50AE51F7FF342511E3BC* L_37;
		L_37 = UxrGrabbableObjectComponent_1_get_GrabbableObject_mFA0E4181BAD136313E485FD1F6604C3BA09B9E3C(__this, UxrGrabbableObjectComponent_1_get_GrabbableObject_mFA0E4181BAD136313E485FD1F6604C3BA09B9E3C_RuntimeMethod_var);
		NullCheck(L_37);
		UxrGrabbableObjectAnchor_tE7110AF7891C09542149FC793D1C0C9A9D95F66A* L_38;
		L_38 = UxrGrabbableObject_get_CurrentAnchor_mFAF2BAAB5BC5FEE894E0EB4874ECD590CD0284BD_inline(L_37, NULL);
		NullCheck(L_38);
		GeneratorDoor_t33EB8ADB2139695767CD1080E775EA94B6DD3037* L_39;
		L_39 = Component_GetComponentInParent_TisGeneratorDoor_t33EB8ADB2139695767CD1080E775EA94B6DD3037_m8321A5B9EADE7967CF085D027E4EF9978D9AB074(L_38, Component_GetComponentInParent_TisGeneratorDoor_t33EB8ADB2139695767CD1080E775EA94B6DD3037_m8321A5B9EADE7967CF085D027E4EF9978D9AB074_RuntimeMethod_var);
		V_2 = L_39;
		// if (generatorDoor != null && !generatorDoor.IsLockOpen)
		GeneratorDoor_t33EB8ADB2139695767CD1080E775EA94B6DD3037* L_40 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_41;
		L_41 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_40, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_41)
		{
			goto IL_0125;
		}
	}
	{
		GeneratorDoor_t33EB8ADB2139695767CD1080E775EA94B6DD3037* L_42 = V_2;
		NullCheck(L_42);
		bool L_43;
		L_43 = GeneratorDoor_get_IsLockOpen_mA379CCEF72904EBFCECCB283E489F978739FCC73(L_42, NULL);
		if (L_43)
		{
			goto IL_0125;
		}
	}
	{
		// GrabbableObject.TranslationLimitsMax = Vector3.zero;
		UxrGrabbableObject_tCA9C5B90AC9CB9830D3D50AE51F7FF342511E3BC* L_44;
		L_44 = UxrGrabbableObjectComponent_1_get_GrabbableObject_mFA0E4181BAD136313E485FD1F6604C3BA09B9E3C(__this, UxrGrabbableObjectComponent_1_get_GrabbableObject_mFA0E4181BAD136313E485FD1F6604C3BA09B9E3C_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45;
		L_45 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		NullCheck(L_44);
		UxrGrabbableObject_set_TranslationLimitsMax_mE36CDD587F8B7EC09466939280A4FF91B17FD113_inline(L_44, L_45, NULL);
		return;
	}

IL_0125:
	{
		// GrabbableObject.TranslationLimitsMax = _batteryOffsetConstraint;
		UxrGrabbableObject_tCA9C5B90AC9CB9830D3D50AE51F7FF342511E3BC* L_46;
		L_46 = UxrGrabbableObjectComponent_1_get_GrabbableObject_mFA0E4181BAD136313E485FD1F6604C3BA09B9E3C(__this, UxrGrabbableObjectComponent_1_get_GrabbableObject_mFA0E4181BAD136313E485FD1F6604C3BA09B9E3C_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47 = __this->____batteryOffsetConstraint_38;
		NullCheck(L_46);
		UxrGrabbableObject_set_TranslationLimitsMax_mE36CDD587F8B7EC09466939280A4FF91B17FD113_inline(L_46, L_47, NULL);
		// if (transform.parent != null && transform.localPosition.z > _batteryInsertOffset)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_48;
		L_48 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_48);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_49;
		L_49 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_48, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_50;
		L_50 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_49, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_50)
		{
			goto IL_01dc;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_51;
		L_51 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_51);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_52;
		L_52 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_51, NULL);
		float L_53 = L_52.___z_4;
		float L_54 = __this->____batteryInsertOffset_37;
		if ((!(((float)L_53) > ((float)L_54))))
		{
			goto IL_01dc;
		}
	}
	{
		// if (_manipulationHapticFeedback)
		UxrManipulationHapticFeedback_t6DA4A9477852BE09667C082006431E86BC9271D3* L_55 = __this->____manipulationHapticFeedback_41;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_56;
		L_56 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_55, NULL);
		if (!L_56)
		{
			goto IL_01b3;
		}
	}
	{
		// _minHapticAmplitude                      = _manipulationHapticFeedback.MinAmplitude;
		UxrManipulationHapticFeedback_t6DA4A9477852BE09667C082006431E86BC9271D3* L_57 = __this->____manipulationHapticFeedback_41;
		NullCheck(L_57);
		float L_58;
		L_58 = UxrManipulationHapticFeedback_get_MinAmplitude_m816282408BAFD981909F3A3B82C16D718D232210_inline(L_57, NULL);
		__this->____minHapticAmplitude_42 = L_58;
		// _maxHapticAmplitude                      = _manipulationHapticFeedback.MaxAmplitude;
		UxrManipulationHapticFeedback_t6DA4A9477852BE09667C082006431E86BC9271D3* L_59 = __this->____manipulationHapticFeedback_41;
		NullCheck(L_59);
		float L_60;
		L_60 = UxrManipulationHapticFeedback_get_MaxAmplitude_m685EF33F3045E85DADE7A061146BCA789C1C21E0_inline(L_59, NULL);
		__this->____maxHapticAmplitude_43 = L_60;
		// _manipulationHapticFeedback.MinAmplitude = 0.0f;
		UxrManipulationHapticFeedback_t6DA4A9477852BE09667C082006431E86BC9271D3* L_61 = __this->____manipulationHapticFeedback_41;
		NullCheck(L_61);
		UxrManipulationHapticFeedback_set_MinAmplitude_m34FD38C4DD993091D1A06BB890FA12394A7EAB3C_inline(L_61, (0.0f), NULL);
		// _manipulationHapticFeedback.MaxAmplitude = 0.0f;
		UxrManipulationHapticFeedback_t6DA4A9477852BE09667C082006431E86BC9271D3* L_62 = __this->____manipulationHapticFeedback_41;
		NullCheck(L_62);
		UxrManipulationHapticFeedback_set_MaxAmplitude_mD29EF350C59E3905439A7176F2D0401F1231989F_inline(L_62, (0.0f), NULL);
	}

IL_01b3:
	{
		// UxrGrabManager.Instance.RemoveObjectFromAnchor(GrabbableObject, false);
		UxrGrabManager_t76F8EBC3B188C8BB86C683C7B3E0E699CDEA7104* L_63;
		L_63 = UxrSingleton_1_get_Instance_mA15387C4D93C58879A6567FD6EA7BE6DE8A46DC7(UxrSingleton_1_get_Instance_mA15387C4D93C58879A6567FD6EA7BE6DE8A46DC7_RuntimeMethod_var);
		UxrGrabbableObject_tCA9C5B90AC9CB9830D3D50AE51F7FF342511E3BC* L_64;
		L_64 = UxrGrabbableObjectComponent_1_get_GrabbableObject_mFA0E4181BAD136313E485FD1F6604C3BA09B9E3C(__this, UxrGrabbableObjectComponent_1_get_GrabbableObject_mFA0E4181BAD136313E485FD1F6604C3BA09B9E3C_RuntimeMethod_var);
		NullCheck(L_63);
		UxrGrabManager_RemoveObjectFromAnchor_m37586DB7EB4D3C6B083D1EE48DCAC8D90AB25DD2(L_63, L_64, (bool)0, NULL);
		// GrabbableObject.TranslationConstraint = UxrTranslationConstraintMode.Free;
		UxrGrabbableObject_tCA9C5B90AC9CB9830D3D50AE51F7FF342511E3BC* L_65;
		L_65 = UxrGrabbableObjectComponent_1_get_GrabbableObject_mFA0E4181BAD136313E485FD1F6604C3BA09B9E3C(__this, UxrGrabbableObjectComponent_1_get_GrabbableObject_mFA0E4181BAD136313E485FD1F6604C3BA09B9E3C_RuntimeMethod_var);
		NullCheck(L_65);
		UxrGrabbableObject_set_TranslationConstraint_m87F0647E2F082718C13CEB93B96360EBC32ECB7E_inline(L_65, 0, NULL);
		// GrabbableObject.RotationConstraint    = UxrRotationConstraintMode.Free;
		UxrGrabbableObject_tCA9C5B90AC9CB9830D3D50AE51F7FF342511E3BC* L_66;
		L_66 = UxrGrabbableObjectComponent_1_get_GrabbableObject_mFA0E4181BAD136313E485FD1F6604C3BA09B9E3C(__this, UxrGrabbableObjectComponent_1_get_GrabbableObject_mFA0E4181BAD136313E485FD1F6604C3BA09B9E3C_RuntimeMethod_var);
		NullCheck(L_66);
		UxrGrabbableObject_set_RotationConstraint_m6236C3CB606BEA6D244AE74FA810016FD1A27B4A_inline(L_66, 0, NULL);
	}

IL_01dc:
	{
		// if (UxrGrabManager.Instance.IsBeingGrabbed(GrabbableObject) == false)
		UxrGrabManager_t76F8EBC3B188C8BB86C683C7B3E0E699CDEA7104* L_67;
		L_67 = UxrSingleton_1_get_Instance_mA15387C4D93C58879A6567FD6EA7BE6DE8A46DC7(UxrSingleton_1_get_Instance_mA15387C4D93C58879A6567FD6EA7BE6DE8A46DC7_RuntimeMethod_var);
		UxrGrabbableObject_tCA9C5B90AC9CB9830D3D50AE51F7FF342511E3BC* L_68;
		L_68 = UxrGrabbableObjectComponent_1_get_GrabbableObject_mFA0E4181BAD136313E485FD1F6604C3BA09B9E3C(__this, UxrGrabbableObjectComponent_1_get_GrabbableObject_mFA0E4181BAD136313E485FD1F6604C3BA09B9E3C_RuntimeMethod_var);
		NullCheck(L_67);
		bool L_69;
		L_69 = UxrGrabManager_IsBeingGrabbed_mFC0D94B4E31E1AD28D75AFDA6C85B51B6F035E2D(L_67, L_68, NULL);
		if (L_69)
		{
			goto IL_0289;
		}
	}
	{
		// Vector3 speed = Physics.gravity * _slideInTimer;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_70;
		L_70 = Physics_get_gravity_m94393492AE4ED8B38A22ECCDCD2DDDB71BFA010D(NULL);
		float L_71 = __this->____slideInTimer_39;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_72;
		L_72 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_70, L_71, NULL);
		V_3 = L_72;
		// Vector3 pos   = GrabbableObject.transform.localPosition;
		UxrGrabbableObject_tCA9C5B90AC9CB9830D3D50AE51F7FF342511E3BC* L_73;
		L_73 = UxrGrabbableObjectComponent_1_get_GrabbableObject_mFA0E4181BAD136313E485FD1F6604C3BA09B9E3C(__this, UxrGrabbableObjectComponent_1_get_GrabbableObject_mFA0E4181BAD136313E485FD1F6604C3BA09B9E3C_RuntimeMethod_var);
		NullCheck(L_73);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_74;
		L_74 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_73, NULL);
		NullCheck(L_74);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_75;
		L_75 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_74, NULL);
		V_4 = L_75;
		// pos.z += Time.deltaTime * speed.y;
		float* L_76 = (&(&V_4)->___z_4);
		float* L_77 = L_76;
		float L_78 = *((float*)L_77);
		float L_79;
		L_79 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_80 = V_3;
		float L_81 = L_80.___y_3;
		*((float*)L_77) = (float)((float)il2cpp_codegen_add(L_78, ((float)il2cpp_codegen_multiply(L_79, L_81))));
		// if (pos.z < 0.0f)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_82 = V_4;
		float L_83 = L_82.___z_4;
		if ((!(((float)L_83) < ((float)(0.0f)))))
		{
			goto IL_0264;
		}
	}
	{
		// pos.z = 0.0f;
		(&V_4)->___z_4 = (0.0f);
		// if (_placed == false)
		bool L_84 = __this->____placed_40;
		if (L_84)
		{
			goto IL_0264;
		}
	}
	{
		// _placed = true;
		__this->____placed_40 = (bool)1;
		// if (generatorDoor != null)
		GeneratorDoor_t33EB8ADB2139695767CD1080E775EA94B6DD3037* L_85 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_86;
		L_86 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_85, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_86)
		{
			goto IL_0264;
		}
	}
	{
		// generatorDoor.IsBatteryInContact = true;
		GeneratorDoor_t33EB8ADB2139695767CD1080E775EA94B6DD3037* L_87 = V_2;
		NullCheck(L_87);
		GeneratorDoor_set_IsBatteryInContact_mFF2AED00F8E373F46A1D6C63150254B7C29331E4_inline(L_87, (bool)1, NULL);
	}

IL_0264:
	{
		// GrabbableObject.transform.localPosition = pos;
		UxrGrabbableObject_tCA9C5B90AC9CB9830D3D50AE51F7FF342511E3BC* L_88;
		L_88 = UxrGrabbableObjectComponent_1_get_GrabbableObject_mFA0E4181BAD136313E485FD1F6604C3BA09B9E3C(__this, UxrGrabbableObjectComponent_1_get_GrabbableObject_mFA0E4181BAD136313E485FD1F6604C3BA09B9E3C_RuntimeMethod_var);
		NullCheck(L_88);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_89;
		L_89 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_88, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_90 = V_4;
		NullCheck(L_89);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_89, L_90, NULL);
		// _slideInTimer += Time.deltaTime;
		float L_91 = __this->____slideInTimer_39;
		float L_92;
		L_92 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->____slideInTimer_39 = ((float)il2cpp_codegen_add(L_91, L_92));
		return;
	}

IL_0289:
	{
		// _slideInTimer = 0.0f;
		__this->____slideInTimer_39 = (0.0f);
	}

IL_0294:
	{
		// }
		return;
	}
}
// System.Void UltimateXR.Examples.FullScene.Lab.Battery::OnObjectGrabbed(UltimateXR.Manipulation.UxrManipulationEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Battery_OnObjectGrabbed_m2764D867B5B7D6DAABB77B096D6F1E90474B101E (Battery_t56FF6D15FAC1E9B259C0EF64902537FB2B41FA8B* __this, UxrManipulationEventArgs_tD33E70382345A37F8AE2C8B4A533810FB76EDA78* ___e0, const RuntimeMethod* method) 
{
	{
		// if (e.GrabbableObject.TranslationLimitsMax != Vector3.zero)
		UxrManipulationEventArgs_tD33E70382345A37F8AE2C8B4A533810FB76EDA78* L_0 = ___e0;
		NullCheck(L_0);
		UxrGrabbableObject_tCA9C5B90AC9CB9830D3D50AE51F7FF342511E3BC* L_1;
		L_1 = UxrManipulationEventArgs_get_GrabbableObject_m94A2B77251CC7B8B2B0B5620252EA79EBC52C9BC_inline(L_0, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = UxrGrabbableObject_get_TranslationLimitsMax_m3A01D28CEC970FD9FB1F7D04A9CE4ACB2266F584_inline(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		bool L_4;
		L_4 = Vector3_op_Inequality_m9F170CDFBF1E490E559DA5D06D6547501A402BBF_inline(L_2, L_3, NULL);
		if (!L_4)
		{
			goto IL_001e;
		}
	}
	{
		// _placed = false;
		__this->____placed_40 = (bool)0;
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void UltimateXR.Examples.FullScene.Lab.Battery::OnObjectReleased(UltimateXR.Manipulation.UxrManipulationEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Battery_OnObjectReleased_m9C596DD26918AE998EE2C00F4701F82699768694 (Battery_t56FF6D15FAC1E9B259C0EF64902537FB2B41FA8B* __this, UxrManipulationEventArgs_tD33E70382345A37F8AE2C8B4A533810FB76EDA78* ___e0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (e.GrabbableObject.CurrentAnchor != null && e.GrabbableObject.RigidBodySource)
		UxrManipulationEventArgs_tD33E70382345A37F8AE2C8B4A533810FB76EDA78* L_0 = ___e0;
		NullCheck(L_0);
		UxrGrabbableObject_tCA9C5B90AC9CB9830D3D50AE51F7FF342511E3BC* L_1;
		L_1 = UxrManipulationEventArgs_get_GrabbableObject_m94A2B77251CC7B8B2B0B5620252EA79EBC52C9BC_inline(L_0, NULL);
		NullCheck(L_1);
		UxrGrabbableObjectAnchor_tE7110AF7891C09542149FC793D1C0C9A9D95F66A* L_2;
		L_2 = UxrGrabbableObject_get_CurrentAnchor_mFAF2BAAB5BC5FEE894E0EB4874ECD590CD0284BD_inline(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0036;
		}
	}
	{
		UxrManipulationEventArgs_tD33E70382345A37F8AE2C8B4A533810FB76EDA78* L_4 = ___e0;
		NullCheck(L_4);
		UxrGrabbableObject_tCA9C5B90AC9CB9830D3D50AE51F7FF342511E3BC* L_5;
		L_5 = UxrManipulationEventArgs_get_GrabbableObject_m94A2B77251CC7B8B2B0B5620252EA79EBC52C9BC_inline(L_4, NULL);
		NullCheck(L_5);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_6;
		L_6 = UxrGrabbableObject_get_RigidBodySource_m6758B00D10ECE61793CC17AE2F9CCC4D8E9375D0_inline(L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_6, NULL);
		if (!L_7)
		{
			goto IL_0036;
		}
	}
	{
		// e.GrabbableObject.RigidBodySource.isKinematic = true;
		UxrManipulationEventArgs_tD33E70382345A37F8AE2C8B4A533810FB76EDA78* L_8 = ___e0;
		NullCheck(L_8);
		UxrGrabbableObject_tCA9C5B90AC9CB9830D3D50AE51F7FF342511E3BC* L_9;
		L_9 = UxrManipulationEventArgs_get_GrabbableObject_m94A2B77251CC7B8B2B0B5620252EA79EBC52C9BC_inline(L_8, NULL);
		NullCheck(L_9);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_10;
		L_10 = UxrGrabbableObject_get_RigidBodySource_m6758B00D10ECE61793CC17AE2F9CCC4D8E9375D0_inline(L_9, NULL);
		NullCheck(L_10);
		Rigidbody_set_isKinematic_m6C3FD3EA358DADA3B191F2449CF1C4F8B22695ED(L_10, (bool)1, NULL);
	}

IL_0036:
	{
		// }
		return;
	}
}
// System.Boolean UltimateXR.Examples.FullScene.Lab.Battery::IsBatteryNearPlacement(UltimateXR.Manipulation.UxrGrabbableObjectAnchor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Battery_IsBatteryNearPlacement_mD901A66A752363AB828111EFA32A4808AC9D9828 (Battery_t56FF6D15FAC1E9B259C0EF64902537FB2B41FA8B* __this, UxrGrabbableObjectAnchor_tE7110AF7891C09542149FC793D1C0C9A9D95F66A* ___anchor0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UxrGrabbableObjectComponent_1_get_GrabbableObject_mFA0E4181BAD136313E485FD1F6604C3BA09B9E3C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// float bias = -0.05f;
		V_0 = (-0.0500000007f);
		// Vector3 localPos = anchor.AlignTransform.InverseTransformPoint(GrabbableObject.DropAlignTransform.position);
		UxrGrabbableObjectAnchor_tE7110AF7891C09542149FC793D1C0C9A9D95F66A* L_0 = ___anchor0;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = UxrGrabbableObjectAnchor_get_AlignTransform_mF861D7065443D9A24282993FDD7135CB94FC4BE4(L_0, NULL);
		UxrGrabbableObject_tCA9C5B90AC9CB9830D3D50AE51F7FF342511E3BC* L_2;
		L_2 = UxrGrabbableObjectComponent_1_get_GrabbableObject_mFA0E4181BAD136313E485FD1F6604C3BA09B9E3C(__this, UxrGrabbableObjectComponent_1_get_GrabbableObject_mFA0E4181BAD136313E485FD1F6604C3BA09B9E3C_RuntimeMethod_var);
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = UxrGrabbableObject_get_DropAlignTransform_m0DA9250DC517BBFD3ECEC2CCA28CD0DDE63AE60B(L_2, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_InverseTransformPoint_m18CD395144D9C78F30E15A5B82B6670E792DBA5D(L_1, L_4, NULL);
		V_1 = L_5;
		// return localPos.z < _batteryInsertOffset + bias && localPos.z > 0.0f && Mathf.Abs(localPos.x) < _batteryDiameter && Mathf.Abs(localPos.y) < _batteryDiameter;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = V_1;
		float L_7 = L_6.___z_4;
		float L_8 = __this->____batteryInsertOffset_37;
		float L_9 = V_0;
		if ((!(((float)L_7) < ((float)((float)il2cpp_codegen_add(L_8, L_9))))))
		{
			goto IL_0066;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_1;
		float L_11 = L_10.___z_4;
		if ((!(((float)L_11) > ((float)(0.0f)))))
		{
			goto IL_0066;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = V_1;
		float L_13 = L_12.___x_2;
		float L_14;
		L_14 = fabsf(L_13);
		float L_15 = __this->____batteryDiameter_36;
		if ((!(((float)L_14) < ((float)L_15))))
		{
			goto IL_0066;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = V_1;
		float L_17 = L_16.___y_3;
		float L_18;
		L_18 = fabsf(L_17);
		float L_19 = __this->____batteryDiameter_36;
		return (bool)((((float)L_18) < ((float)L_19))? 1 : 0);
	}

IL_0066:
	{
		return (bool)0;
	}
}
// System.Void UltimateXR.Examples.FullScene.Lab.Battery::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Battery__ctor_m072FDF3258D1197C2A0D1AD2522A5627B61270FB (Battery_t56FF6D15FAC1E9B259C0EF64902537FB2B41FA8B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UxrGrabbableObjectComponent_1__ctor_m6449DF5F963B00C8327E37984D2452FEA5C2E429_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UxrGrabbableObjectComponent_1__ctor_m6449DF5F963B00C8327E37984D2452FEA5C2E429(__this, UxrGrabbableObjectComponent_1__ctor_m6449DF5F963B00C8327E37984D2452FEA5C2E429_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UltimateXR.Manipulation.UxrGrabbableObjectAnchor UltimateXR.Examples.FullScene.Lab.BatteryAnchor::get_Anchor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UxrGrabbableObjectAnchor_tE7110AF7891C09542149FC793D1C0C9A9D95F66A* BatteryAnchor_get_Anchor_mAE18114D9A38411ECAC1A1E47C8A249124F3F719 (BatteryAnchor_t01234E44479A11E2168D9712174DA3B7B28ED114* __this, const RuntimeMethod* method) 
{
	{
		// public UxrGrabbableObjectAnchor Anchor => _batteryAnchor;
		UxrGrabbableObjectAnchor_tE7110AF7891C09542149FC793D1C0C9A9D95F66A* L_0 = __this->____batteryAnchor_35;
		return L_0;
	}
}
// System.Void UltimateXR.Examples.FullScene.Lab.BatteryAnchor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BatteryAnchor__ctor_mD603B1FB439EDECAE043AC3E3F30BEAFC4332E6C (BatteryAnchor_t01234E44479A11E2168D9712174DA3B7B28ED114* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UxrComponent_1__ctor_m7961FB498AE621BFBCEAE3A02DF31A5D75B2C437_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UxrComponent_1_t87BAA908145649D47C98BE530A9F80A805F9E90F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UxrComponent_1_t87BAA908145649D47C98BE530A9F80A805F9E90F_il2cpp_TypeInfo_var);
		UxrComponent_1__ctor_m7961FB498AE621BFBCEAE3A02DF31A5D75B2C437(__this, UxrComponent_1__ctor_m7961FB498AE621BFBCEAE3A02DF31A5D75B2C437_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean UltimateXR.Examples.FullScene.Lab.GeneratorDoor::get_IsLockOpen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GeneratorDoor_get_IsLockOpen_mA379CCEF72904EBFCECCB283E489F978739FCC73 (GeneratorDoor_t33EB8ADB2139695767CD1080E775EA94B6DD3037* __this, const RuntimeMethod* method) 
{
	{
		// get => LockHandleOpenValue > 0.5f;
		float L_0;
		L_0 = GeneratorDoor_get_LockHandleOpenValue_m6AFBE177CFDD5C320BFB8DE72D7FEE1EE4F88C2A(__this, NULL);
		return (bool)((((float)L_0) > ((float)(0.5f)))? 1 : 0);
	}
}
// System.Void UltimateXR.Examples.FullScene.Lab.GeneratorDoor::set_IsLockOpen(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeneratorDoor_set_IsLockOpen_m389833849BBA15A70431A0987E217FD4251755CF (GeneratorDoor_t33EB8ADB2139695767CD1080E775EA94B6DD3037* __this, bool ___value0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	UxrGrabbableObject_tCA9C5B90AC9CB9830D3D50AE51F7FF342511E3BC* G_B2_0 = NULL;
	UxrGrabbableObject_tCA9C5B90AC9CB9830D3D50AE51F7FF342511E3BC* G_B1_0 = NULL;
	float G_B3_0 = 0.0f;
	UxrGrabbableObject_tCA9C5B90AC9CB9830D3D50AE51F7FF342511E3BC* G_B3_1 = NULL;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 G_B6_0;
	memset((&G_B6_0), 0, sizeof(G_B6_0));
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B6_1 = NULL;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 G_B5_0;
	memset((&G_B5_0), 0, sizeof(G_B5_0));
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B5_1 = NULL;
	float G_B7_0 = 0.0f;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 G_B7_1;
	memset((&G_B7_1), 0, sizeof(G_B7_1));
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B7_2 = NULL;
	{
		// _grabbableLock.SingleRotationAxisDegrees = value ? _lockHandleAngleOpen : _lockHandleAngleClosed;
		UxrGrabbableObject_tCA9C5B90AC9CB9830D3D50AE51F7FF342511E3BC* L_0 = __this->____grabbableLock_36;
		bool L_1 = ___value0;
		G_B1_0 = L_0;
		if (L_1)
		{
			G_B2_0 = L_0;
			goto IL_0011;
		}
	}
	{
		float L_2 = __this->____lockHandleAngleClosed_38;
		G_B3_0 = L_2;
		G_B3_1 = G_B1_0;
		goto IL_0017;
	}

IL_0011:
	{
		float L_3 = __this->____lockHandleAngleOpen_39;
		G_B3_0 = L_3;
		G_B3_1 = G_B2_0;
	}

IL_0017:
	{
		NullCheck(G_B3_1);
		UxrGrabbableObject_set_SingleRotationAxisDegrees_m2BE147E578062C7033C43571AAFCADE40D761F06(G_B3_1, G_B3_0, NULL);
		// for (int i = 0; i < _locks.Length; ++i)
		V_0 = 0;
		goto IL_006e;
	}

IL_0020:
	{
		// _locks[i].transform.localRotation = _lockInitialRotation[i] * Quaternion.AngleAxis((value ? 1.0f : 0.0f) * (_lockHandleAngleOpen - _lockHandleAngleClosed), Vector3.right);
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_4 = __this->____locks_37;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_7, NULL);
		QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* L_9 = __this->____lockInitialRotation_43;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		bool L_13 = ___value0;
		G_B5_0 = L_12;
		G_B5_1 = L_8;
		if (L_13)
		{
			G_B6_0 = L_12;
			G_B6_1 = L_8;
			goto IL_0043;
		}
	}
	{
		G_B7_0 = (0.0f);
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0048;
	}

IL_0043:
	{
		G_B7_0 = (1.0f);
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0048:
	{
		float L_14 = __this->____lockHandleAngleOpen_39;
		float L_15 = __this->____lockHandleAngleClosed_38;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_17;
		L_17 = Quaternion_AngleAxis_mF37022977B297E63AA70D69EA1C4C922FF22CC80(((float)il2cpp_codegen_multiply(G_B7_0, ((float)il2cpp_codegen_subtract(L_14, L_15)))), L_16, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18;
		L_18 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(G_B7_1, L_17, NULL);
		NullCheck(G_B7_2);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(G_B7_2, L_18, NULL);
		// for (int i = 0; i < _locks.Length; ++i)
		int32_t L_19 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_006e:
	{
		// for (int i = 0; i < _locks.Length; ++i)
		int32_t L_20 = V_0;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_21 = __this->____locks_37;
		NullCheck(L_21);
		if ((((int32_t)L_20) < ((int32_t)((int32_t)(((RuntimeArray*)L_21)->max_length)))))
		{
			goto IL_0020;
		}
	}
	{
		// }
		return;
	}
}
// System.Boolean UltimateXR.Examples.FullScene.Lab.GeneratorDoor::get_IsBatteryInContact()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GeneratorDoor_get_IsBatteryInContact_m76EAB71E6D9B7C5E53175E8B0434972F13B1CDC5 (GeneratorDoor_t33EB8ADB2139695767CD1080E775EA94B6DD3037* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsBatteryInContact { get; set; }
		bool L_0 = __this->___U3CIsBatteryInContactU3Ek__BackingField_41;
		return L_0;
	}
}
// System.Void UltimateXR.Examples.FullScene.Lab.GeneratorDoor::set_IsBatteryInContact(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeneratorDoor_set_IsBatteryInContact_mFF2AED00F8E373F46A1D6C63150254B7C29331E4 (GeneratorDoor_t33EB8ADB2139695767CD1080E775EA94B6DD3037* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool IsBatteryInContact { get; set; }
		bool L_0 = ___value0;
		__this->___U3CIsBatteryInContactU3Ek__BackingField_41 = L_0;
		return;
	}
}
// System.Void UltimateXR.Examples.FullScene.Lab.GeneratorDoor::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeneratorDoor_Awake_m67FEF18B46374118BC299770BA003C8972AC5CD0 (GeneratorDoor_t33EB8ADB2139695767CD1080E775EA94B6DD3037* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UxrComponent_1_Awake_m18681FB238CD8A28AE2F171623E3A2F9242C8E7F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// base.Awake();
		UxrComponent_1_Awake_m18681FB238CD8A28AE2F171623E3A2F9242C8E7F(__this, UxrComponent_1_Awake_m18681FB238CD8A28AE2F171623E3A2F9242C8E7F_RuntimeMethod_var);
		// _lockInitialRotation = new Quaternion[_locks.Length];
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_0 = __this->____locks_37;
		NullCheck(L_0);
		QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* L_1 = (QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7*)(QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7*)SZArrayNew(QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)));
		__this->____lockInitialRotation_43 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____lockInitialRotation_43), (void*)L_1);
		// for (int i = 0; i < _locks.Length; ++i)
		V_0 = 0;
		goto IL_003a;
	}

IL_001d:
	{
		// _lockInitialRotation[i] = _locks[i].localRotation;
		QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* L_2 = __this->____lockInitialRotation_43;
		int32_t L_3 = V_0;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_4 = __this->____locks_37;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_7);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8;
		L_8 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_7, NULL);
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974)L_8);
		// for (int i = 0; i < _locks.Length; ++i)
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_003a:
	{
		// for (int i = 0; i < _locks.Length; ++i)
		int32_t L_10 = V_0;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_11 = __this->____locks_37;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))
		{
			goto IL_001d;
		}
	}
	{
		// IsBatteryInContact = _batteryAnchor.Anchor.CurrentPlacedObject != null;
		BatteryAnchor_t01234E44479A11E2168D9712174DA3B7B28ED114* L_12 = __this->____batteryAnchor_35;
		NullCheck(L_12);
		UxrGrabbableObjectAnchor_tE7110AF7891C09542149FC793D1C0C9A9D95F66A* L_13;
		L_13 = BatteryAnchor_get_Anchor_mAE18114D9A38411ECAC1A1E47C8A249124F3F719_inline(L_12, NULL);
		NullCheck(L_13);
		UxrGrabbableObject_tCA9C5B90AC9CB9830D3D50AE51F7FF342511E3BC* L_14;
		L_14 = UxrGrabbableObjectAnchor_get_CurrentPlacedObject_m0988C02C0982FDEA3373963A7E310E149AC522B5_inline(L_13, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_14, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		GeneratorDoor_set_IsBatteryInContact_mFF2AED00F8E373F46A1D6C63150254B7C29331E4_inline(__this, L_15, NULL);
		// }
		return;
	}
}
// System.Void UltimateXR.Examples.FullScene.Lab.GeneratorDoor::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeneratorDoor_OnEnable_mA77DD1D8F065A418EB3F268EC60169BD5CE9D70A (GeneratorDoor_t33EB8ADB2139695767CD1080E775EA94B6DD3037* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t6FCADDF8DC5CFC67E12B6324C77ABD7EEDE695AC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tFB1A27628EFA23760E6E055C0CC402DA6F5ABAD1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GeneratorDoor_Battery_Placed_m3EFD5C7366131575B508860587574165FDEC9C4F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GeneratorDoor_Battery_Removed_m3D29CA5E1B92E27E1453209DA6DCD6F037B223EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GeneratorDoor_Lock_ConstraintsApplied_m0699E2C1E035BDFCB8580E25FB81ADB30009BE24_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UxrComponent_1_OnEnable_mF69B12CC9773C94630991CCD81E99269DB92E99D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.OnEnable();
		UxrComponent_1_OnEnable_mF69B12CC9773C94630991CCD81E99269DB92E99D(__this, UxrComponent_1_OnEnable_mF69B12CC9773C94630991CCD81E99269DB92E99D_RuntimeMethod_var);
		// _batteryAnchor.Anchor.Placed      += Battery_Placed;
		BatteryAnchor_t01234E44479A11E2168D9712174DA3B7B28ED114* L_0 = __this->____batteryAnchor_35;
		NullCheck(L_0);
		UxrGrabbableObjectAnchor_tE7110AF7891C09542149FC793D1C0C9A9D95F66A* L_1;
		L_1 = BatteryAnchor_get_Anchor_mAE18114D9A38411ECAC1A1E47C8A249124F3F719_inline(L_0, NULL);
		EventHandler_1_tFB1A27628EFA23760E6E055C0CC402DA6F5ABAD1* L_2 = (EventHandler_1_tFB1A27628EFA23760E6E055C0CC402DA6F5ABAD1*)il2cpp_codegen_object_new(EventHandler_1_tFB1A27628EFA23760E6E055C0CC402DA6F5ABAD1_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		EventHandler_1__ctor_m2E1E6A7E7F0F43779AD852D5337525744987CD73(L_2, __this, (intptr_t)((void*)GeneratorDoor_Battery_Placed_m3EFD5C7366131575B508860587574165FDEC9C4F_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		UxrGrabbableObjectAnchor_add_Placed_mD94ACA8FFF7F3C1AD1E2D7764C912FBE2E8B3811(L_1, L_2, NULL);
		// _batteryAnchor.Anchor.Removed     += Battery_Removed;
		BatteryAnchor_t01234E44479A11E2168D9712174DA3B7B28ED114* L_3 = __this->____batteryAnchor_35;
		NullCheck(L_3);
		UxrGrabbableObjectAnchor_tE7110AF7891C09542149FC793D1C0C9A9D95F66A* L_4;
		L_4 = BatteryAnchor_get_Anchor_mAE18114D9A38411ECAC1A1E47C8A249124F3F719_inline(L_3, NULL);
		EventHandler_1_tFB1A27628EFA23760E6E055C0CC402DA6F5ABAD1* L_5 = (EventHandler_1_tFB1A27628EFA23760E6E055C0CC402DA6F5ABAD1*)il2cpp_codegen_object_new(EventHandler_1_tFB1A27628EFA23760E6E055C0CC402DA6F5ABAD1_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		EventHandler_1__ctor_m2E1E6A7E7F0F43779AD852D5337525744987CD73(L_5, __this, (intptr_t)((void*)GeneratorDoor_Battery_Removed_m3D29CA5E1B92E27E1453209DA6DCD6F037B223EA_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		UxrGrabbableObjectAnchor_add_Removed_m8B801B10D90D2D5F51FFE330949F66B019D48D5B(L_4, L_5, NULL);
		// _grabbableLock.ConstraintsApplied += Lock_ConstraintsApplied;
		UxrGrabbableObject_tCA9C5B90AC9CB9830D3D50AE51F7FF342511E3BC* L_6 = __this->____grabbableLock_36;
		EventHandler_1_t6FCADDF8DC5CFC67E12B6324C77ABD7EEDE695AC* L_7 = (EventHandler_1_t6FCADDF8DC5CFC67E12B6324C77ABD7EEDE695AC*)il2cpp_codegen_object_new(EventHandler_1_t6FCADDF8DC5CFC67E12B6324C77ABD7EEDE695AC_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		EventHandler_1__ctor_m61E2C2A6093831400772D65E21D68390BE77C4D5(L_7, __this, (intptr_t)((void*)GeneratorDoor_Lock_ConstraintsApplied_m0699E2C1E035BDFCB8580E25FB81ADB30009BE24_RuntimeMethod_var), NULL);
		NullCheck(L_6);
		UxrGrabbableObject_add_ConstraintsApplied_m98070E5F0ACE610FA929EA5EDC676ADB5FB75403(L_6, L_7, NULL);
		// }
		return;
	}
}
// System.Void UltimateXR.Examples.FullScene.Lab.GeneratorDoor::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeneratorDoor_OnDisable_m085892FB8C3B6924DFFBC2A567CC335D1CC1D69E (GeneratorDoor_t33EB8ADB2139695767CD1080E775EA94B6DD3037* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t6FCADDF8DC5CFC67E12B6324C77ABD7EEDE695AC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tFB1A27628EFA23760E6E055C0CC402DA6F5ABAD1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GeneratorDoor_Battery_Placed_m3EFD5C7366131575B508860587574165FDEC9C4F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GeneratorDoor_Battery_Removed_m3D29CA5E1B92E27E1453209DA6DCD6F037B223EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GeneratorDoor_Lock_ConstraintsApplied_m0699E2C1E035BDFCB8580E25FB81ADB30009BE24_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UxrComponent_1_OnDisable_mF27E965C1ABB0FEAE01568B66EDCF99C5BB87BE5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.OnDisable();
		UxrComponent_1_OnDisable_mF27E965C1ABB0FEAE01568B66EDCF99C5BB87BE5(__this, UxrComponent_1_OnDisable_mF27E965C1ABB0FEAE01568B66EDCF99C5BB87BE5_RuntimeMethod_var);
		// _batteryAnchor.Anchor.Placed      -= Battery_Placed;
		BatteryAnchor_t01234E44479A11E2168D9712174DA3B7B28ED114* L_0 = __this->____batteryAnchor_35;
		NullCheck(L_0);
		UxrGrabbableObjectAnchor_tE7110AF7891C09542149FC793D1C0C9A9D95F66A* L_1;
		L_1 = BatteryAnchor_get_Anchor_mAE18114D9A38411ECAC1A1E47C8A249124F3F719_inline(L_0, NULL);
		EventHandler_1_tFB1A27628EFA23760E6E055C0CC402DA6F5ABAD1* L_2 = (EventHandler_1_tFB1A27628EFA23760E6E055C0CC402DA6F5ABAD1*)il2cpp_codegen_object_new(EventHandler_1_tFB1A27628EFA23760E6E055C0CC402DA6F5ABAD1_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		EventHandler_1__ctor_m2E1E6A7E7F0F43779AD852D5337525744987CD73(L_2, __this, (intptr_t)((void*)GeneratorDoor_Battery_Placed_m3EFD5C7366131575B508860587574165FDEC9C4F_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		UxrGrabbableObjectAnchor_remove_Placed_m1C851B3B5AE8A597323C6CF99AE3F807B3784D74(L_1, L_2, NULL);
		// _batteryAnchor.Anchor.Removed     -= Battery_Removed;
		BatteryAnchor_t01234E44479A11E2168D9712174DA3B7B28ED114* L_3 = __this->____batteryAnchor_35;
		NullCheck(L_3);
		UxrGrabbableObjectAnchor_tE7110AF7891C09542149FC793D1C0C9A9D95F66A* L_4;
		L_4 = BatteryAnchor_get_Anchor_mAE18114D9A38411ECAC1A1E47C8A249124F3F719_inline(L_3, NULL);
		EventHandler_1_tFB1A27628EFA23760E6E055C0CC402DA6F5ABAD1* L_5 = (EventHandler_1_tFB1A27628EFA23760E6E055C0CC402DA6F5ABAD1*)il2cpp_codegen_object_new(EventHandler_1_tFB1A27628EFA23760E6E055C0CC402DA6F5ABAD1_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		EventHandler_1__ctor_m2E1E6A7E7F0F43779AD852D5337525744987CD73(L_5, __this, (intptr_t)((void*)GeneratorDoor_Battery_Removed_m3D29CA5E1B92E27E1453209DA6DCD6F037B223EA_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		UxrGrabbableObjectAnchor_remove_Removed_mBA86FD866516B383FBEF869F1F2E8722A783CA25(L_4, L_5, NULL);
		// _grabbableLock.ConstraintsApplied -= Lock_ConstraintsApplied;
		UxrGrabbableObject_tCA9C5B90AC9CB9830D3D50AE51F7FF342511E3BC* L_6 = __this->____grabbableLock_36;
		EventHandler_1_t6FCADDF8DC5CFC67E12B6324C77ABD7EEDE695AC* L_7 = (EventHandler_1_t6FCADDF8DC5CFC67E12B6324C77ABD7EEDE695AC*)il2cpp_codegen_object_new(EventHandler_1_t6FCADDF8DC5CFC67E12B6324C77ABD7EEDE695AC_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		EventHandler_1__ctor_m61E2C2A6093831400772D65E21D68390BE77C4D5(L_7, __this, (intptr_t)((void*)GeneratorDoor_Lock_ConstraintsApplied_m0699E2C1E035BDFCB8580E25FB81ADB30009BE24_RuntimeMethod_var), NULL);
		NullCheck(L_6);
		UxrGrabbableObject_remove_ConstraintsApplied_m53E4BECE768CE782284E71A9BC84B5EE982FCE51(L_6, L_7, NULL);
		// }
		return;
	}
}
// System.Void UltimateXR.Examples.FullScene.Lab.GeneratorDoor::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeneratorDoor_Start_m736DC32AC0F1C0DB4DBEFA6414D5B7F53CD255E8 (GeneratorDoor_t33EB8ADB2139695767CD1080E775EA94B6DD3037* __this, const RuntimeMethod* method) 
{
	{
		// base.Start();
		UxrComponent_Start_m24F2104BC70550511F773715262B361E292CAD18(__this, NULL);
		// IsLockOpen = _startLockOpen;
		bool L_0 = __this->____startLockOpen_40;
		GeneratorDoor_set_IsLockOpen_m389833849BBA15A70431A0987E217FD4251755CF(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void UltimateXR.Examples.FullScene.Lab.GeneratorDoor::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeneratorDoor_Update_m7722402AB870C21C9B3748A4852C4CAD3512CED5 (GeneratorDoor_t33EB8ADB2139695767CD1080E775EA94B6DD3037* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_batteryAnchor.Anchor.CurrentPlacedObject == null && !IsLockOpen)
		BatteryAnchor_t01234E44479A11E2168D9712174DA3B7B28ED114* L_0 = __this->____batteryAnchor_35;
		NullCheck(L_0);
		UxrGrabbableObjectAnchor_tE7110AF7891C09542149FC793D1C0C9A9D95F66A* L_1;
		L_1 = BatteryAnchor_get_Anchor_mAE18114D9A38411ECAC1A1E47C8A249124F3F719_inline(L_0, NULL);
		NullCheck(L_1);
		UxrGrabbableObject_tCA9C5B90AC9CB9830D3D50AE51F7FF342511E3BC* L_2;
		L_2 = UxrGrabbableObjectAnchor_get_CurrentPlacedObject_m0988C02C0982FDEA3373963A7E310E149AC522B5_inline(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		bool L_4;
		L_4 = GeneratorDoor_get_IsLockOpen_mA379CCEF72904EBFCECCB283E489F978739FCC73(__this, NULL);
		if (L_4)
		{
			goto IL_002d;
		}
	}
	{
		// _batteryAnchor.enabled = false;
		BatteryAnchor_t01234E44479A11E2168D9712174DA3B7B28ED114* L_5 = __this->____batteryAnchor_35;
		NullCheck(L_5);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_5, (bool)0, NULL);
		return;
	}

IL_002d:
	{
		// _batteryAnchor.enabled = true;
		BatteryAnchor_t01234E44479A11E2168D9712174DA3B7B28ED114* L_6 = __this->____batteryAnchor_35;
		NullCheck(L_6);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_6, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void UltimateXR.Examples.FullScene.Lab.GeneratorDoor::Lock_ConstraintsApplied(System.Object,UltimateXR.Manipulation.UxrApplyConstraintsEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeneratorDoor_Lock_ConstraintsApplied_m0699E2C1E035BDFCB8580E25FB81ADB30009BE24 (GeneratorDoor_t33EB8ADB2139695767CD1080E775EA94B6DD3037* __this, RuntimeObject* ___sender0, UxrApplyConstraintsEventArgs_t958B12AB329E72D08160B16BA0F60C11C019F2E6* ___e1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	{
		// float lockHandleOpenValue = LockHandleOpenValue;
		float L_0;
		L_0 = GeneratorDoor_get_LockHandleOpenValue_m6AFBE177CFDD5C320BFB8DE72D7FEE1EE4F88C2A(__this, NULL);
		V_0 = L_0;
		// float locksOpenValue      = 1.0f - (1.0f - lockHandleOpenValue) * (1.0f - lockHandleOpenValue);
		float L_1 = V_0;
		float L_2 = V_0;
		V_1 = ((float)il2cpp_codegen_subtract((1.0f), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract((1.0f), L_1)), ((float)il2cpp_codegen_subtract((1.0f), L_2))))));
		// for (int i = 0; i < _locks.Length; ++i)
		V_2 = 0;
		goto IL_0061;
	}

IL_0021:
	{
		// _locks[i].transform.localRotation = _lockInitialRotation[i] * Quaternion.AngleAxis(locksOpenValue * (_lockHandleAngleOpen - _lockHandleAngleClosed), Vector3.right);
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_3 = __this->____locks_37;
		int32_t L_4 = V_2;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_6, NULL);
		QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* L_8 = __this->____lockInitialRotation_43;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		float L_12 = V_1;
		float L_13 = __this->____lockHandleAngleOpen_39;
		float L_14 = __this->____lockHandleAngleClosed_38;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16;
		L_16 = Quaternion_AngleAxis_mF37022977B297E63AA70D69EA1C4C922FF22CC80(((float)il2cpp_codegen_multiply(L_12, ((float)il2cpp_codegen_subtract(L_13, L_14)))), L_15, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_17;
		L_17 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_11, L_16, NULL);
		NullCheck(L_7);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_7, L_17, NULL);
		// for (int i = 0; i < _locks.Length; ++i)
		int32_t L_18 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0061:
	{
		// for (int i = 0; i < _locks.Length; ++i)
		int32_t L_19 = V_2;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_20 = __this->____locks_37;
		NullCheck(L_20);
		if ((((int32_t)L_19) < ((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length)))))
		{
			goto IL_0021;
		}
	}
	{
		// if (_batteryAnchor.Anchor.CurrentPlacedObject != null && _batteryAnchor.Anchor.CurrentPlacedObject.transform.localPosition.z > 0.01f)
		BatteryAnchor_t01234E44479A11E2168D9712174DA3B7B28ED114* L_21 = __this->____batteryAnchor_35;
		NullCheck(L_21);
		UxrGrabbableObjectAnchor_tE7110AF7891C09542149FC793D1C0C9A9D95F66A* L_22;
		L_22 = BatteryAnchor_get_Anchor_mAE18114D9A38411ECAC1A1E47C8A249124F3F719_inline(L_21, NULL);
		NullCheck(L_22);
		UxrGrabbableObject_tCA9C5B90AC9CB9830D3D50AE51F7FF342511E3BC* L_23;
		L_23 = UxrGrabbableObjectAnchor_get_CurrentPlacedObject_m0988C02C0982FDEA3373963A7E310E149AC522B5_inline(L_22, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_23, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_24)
		{
			goto IL_00b7;
		}
	}
	{
		BatteryAnchor_t01234E44479A11E2168D9712174DA3B7B28ED114* L_25 = __this->____batteryAnchor_35;
		NullCheck(L_25);
		UxrGrabbableObjectAnchor_tE7110AF7891C09542149FC793D1C0C9A9D95F66A* L_26;
		L_26 = BatteryAnchor_get_Anchor_mAE18114D9A38411ECAC1A1E47C8A249124F3F719_inline(L_25, NULL);
		NullCheck(L_26);
		UxrGrabbableObject_tCA9C5B90AC9CB9830D3D50AE51F7FF342511E3BC* L_27;
		L_27 = UxrGrabbableObjectAnchor_get_CurrentPlacedObject_m0988C02C0982FDEA3373963A7E310E149AC522B5_inline(L_26, NULL);
		NullCheck(L_27);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_28;
		L_28 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_27, NULL);
		NullCheck(L_28);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_28, NULL);
		float L_30 = L_29.___z_4;
		if ((!(((float)L_30) > ((float)(0.00999999978f)))))
		{
			goto IL_00b7;
		}
	}
	{
		// _grabbableLock.RotationConstraint = UxrRotationConstraintMode.Locked;
		UxrGrabbableObject_tCA9C5B90AC9CB9830D3D50AE51F7FF342511E3BC* L_31 = __this->____grabbableLock_36;
		NullCheck(L_31);
		UxrGrabbableObject_set_RotationConstraint_m6236C3CB606BEA6D244AE74FA810016FD1A27B4A_inline(L_31, 2, NULL);
		return;
	}

IL_00b7:
	{
		// _grabbableLock.RotationConstraint = UxrRotationConstraintMode.RestrictLocalRotation;
		UxrGrabbableObject_tCA9C5B90AC9CB9830D3D50AE51F7FF342511E3BC* L_32 = __this->____grabbableLock_36;
		NullCheck(L_32);
		UxrGrabbableObject_set_RotationConstraint_m6236C3CB606BEA6D244AE74FA810016FD1A27B4A_inline(L_32, 1, NULL);
		// }
		return;
	}
}
// System.Void UltimateXR.Examples.FullScene.Lab.GeneratorDoor::Battery_Placed(System.Object,UltimateXR.Manipulation.UxrManipulationEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeneratorDoor_Battery_Placed_m3EFD5C7366131575B508860587574165FDEC9C4F (GeneratorDoor_t33EB8ADB2139695767CD1080E775EA94B6DD3037* __this, RuntimeObject* ___sender0, UxrManipulationEventArgs_tD33E70382345A37F8AE2C8B4A533810FB76EDA78* ___e1, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void UltimateXR.Examples.FullScene.Lab.GeneratorDoor::Battery_Removed(System.Object,UltimateXR.Manipulation.UxrManipulationEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeneratorDoor_Battery_Removed_m3D29CA5E1B92E27E1453209DA6DCD6F037B223EA (GeneratorDoor_t33EB8ADB2139695767CD1080E775EA94B6DD3037* __this, RuntimeObject* ___sender0, UxrManipulationEventArgs_tD33E70382345A37F8AE2C8B4A533810FB76EDA78* ___e1, const RuntimeMethod* method) 
{
	{
		// IsBatteryInContact = false;
		GeneratorDoor_set_IsBatteryInContact_mFF2AED00F8E373F46A1D6C63150254B7C29331E4_inline(__this, (bool)0, NULL);
		// }
		return;
	}
}
// System.Single UltimateXR.Examples.FullScene.Lab.GeneratorDoor::get_LockHandleOpenValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GeneratorDoor_get_LockHandleOpenValue_m6AFBE177CFDD5C320BFB8DE72D7FEE1EE4F88C2A (GeneratorDoor_t33EB8ADB2139695767CD1080E775EA94B6DD3037* __this, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// float lockHandleOpenValue = Mathf.Clamp01((_grabbableLock.transform.localRotation.eulerAngles.z - _lockHandleAngleClosed) / (_lockHandleAngleOpen - _lockHandleAngleClosed));
		UxrGrabbableObject_tCA9C5B90AC9CB9830D3D50AE51F7FF342511E3BC* L_0 = __this->____grabbableLock_36;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		NullCheck(L_1);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_1, NULL);
		V_0 = L_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline((&V_0), NULL);
		float L_4 = L_3.___z_4;
		float L_5 = __this->____lockHandleAngleClosed_38;
		float L_6 = __this->____lockHandleAngleOpen_39;
		float L_7 = __this->____lockHandleAngleClosed_38;
		float L_8;
		L_8 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(((float)(((float)il2cpp_codegen_subtract(L_4, L_5))/((float)il2cpp_codegen_subtract(L_6, L_7)))), NULL);
		// return lockHandleOpenValue;
		return L_8;
	}
}
// System.Void UltimateXR.Examples.FullScene.Lab.GeneratorDoor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeneratorDoor__ctor_m7E0985B2DA1012363AB1D21B71E9FED20A69231D (GeneratorDoor_t33EB8ADB2139695767CD1080E775EA94B6DD3037* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UxrComponent_1__ctor_m0E2EECED676F2CA8025E5FDEEB3D384DE52C3BD3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UxrComponent_1_tFF860D099F37155A76017CCC0C7DE9B4C0AE9E3C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] private bool               _startLockOpen = true;
		__this->____startLockOpen_40 = (bool)1;
		il2cpp_codegen_runtime_class_init_inline(UxrComponent_1_tFF860D099F37155A76017CCC0C7DE9B4C0AE9E3C_il2cpp_TypeInfo_var);
		UxrComponent_1__ctor_m0E2EECED676F2CA8025E5FDEEB3D384DE52C3BD3(__this, UxrComponent_1__ctor_m0E2EECED676F2CA8025E5FDEEB3D384DE52C3BD3_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UltimateXR.Examples.FullScene.Lab.Lamp::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lamp_Update_m5BDA988FFC094ACF31713F0D51166AA94EEA93AA (Lamp_t17C08BD87F9AAA690D376991BEC03122E7B9124A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisLightBulb_tD2997DB52DC01475297BAF83A889E14D2913D473_m62DE299FA33489B039353A298D196A8390CA8B0F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	UxrGrabbableObjectAnchorU5BU5D_t086D051370506C7B677EA2AFD5BFCDDEEC4A12A7* V_1 = NULL;
	int32_t V_2 = 0;
	UxrGrabbableObjectAnchor_tE7110AF7891C09542149FC793D1C0C9A9D95F66A* V_3 = NULL;
	LightBulb_tD2997DB52DC01475297BAF83A889E14D2913D473* V_4 = NULL;
	{
		// float lightBulbIntensity = 0.0f;
		V_0 = (0.0f);
		// foreach (UxrGrabbableObjectAnchor socket in _sockets)
		UxrGrabbableObjectAnchorU5BU5D_t086D051370506C7B677EA2AFD5BFCDDEEC4A12A7* L_0 = __this->____sockets_28;
		V_1 = L_0;
		V_2 = 0;
		goto IL_0048;
	}

IL_0011:
	{
		// foreach (UxrGrabbableObjectAnchor socket in _sockets)
		UxrGrabbableObjectAnchorU5BU5D_t086D051370506C7B677EA2AFD5BFCDDEEC4A12A7* L_1 = V_1;
		int32_t L_2 = V_2;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		UxrGrabbableObjectAnchor_tE7110AF7891C09542149FC793D1C0C9A9D95F66A* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_3 = L_4;
		// if (socket.CurrentPlacedObject != null)
		UxrGrabbableObjectAnchor_tE7110AF7891C09542149FC793D1C0C9A9D95F66A* L_5 = V_3;
		NullCheck(L_5);
		UxrGrabbableObject_tCA9C5B90AC9CB9830D3D50AE51F7FF342511E3BC* L_6;
		L_6 = UxrGrabbableObjectAnchor_get_CurrentPlacedObject_m0988C02C0982FDEA3373963A7E310E149AC522B5_inline(L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_7)
		{
			goto IL_0044;
		}
	}
	{
		// LightBulb lightBulb = socket.CurrentPlacedObject.GetComponentInChildren<LightBulb>();
		UxrGrabbableObjectAnchor_tE7110AF7891C09542149FC793D1C0C9A9D95F66A* L_8 = V_3;
		NullCheck(L_8);
		UxrGrabbableObject_tCA9C5B90AC9CB9830D3D50AE51F7FF342511E3BC* L_9;
		L_9 = UxrGrabbableObjectAnchor_get_CurrentPlacedObject_m0988C02C0982FDEA3373963A7E310E149AC522B5_inline(L_8, NULL);
		NullCheck(L_9);
		LightBulb_tD2997DB52DC01475297BAF83A889E14D2913D473* L_10;
		L_10 = Component_GetComponentInChildren_TisLightBulb_tD2997DB52DC01475297BAF83A889E14D2913D473_m62DE299FA33489B039353A298D196A8390CA8B0F(L_9, Component_GetComponentInChildren_TisLightBulb_tD2997DB52DC01475297BAF83A889E14D2913D473_m62DE299FA33489B039353A298D196A8390CA8B0F_RuntimeMethod_var);
		V_4 = L_10;
		// if (lightBulb != null)
		LightBulb_tD2997DB52DC01475297BAF83A889E14D2913D473* L_11 = V_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_11, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_12)
		{
			goto IL_0044;
		}
	}
	{
		// lightBulbIntensity += lightBulb.Intensity;
		float L_13 = V_0;
		LightBulb_tD2997DB52DC01475297BAF83A889E14D2913D473* L_14 = V_4;
		NullCheck(L_14);
		float L_15;
		L_15 = LightBulb_get_Intensity_mD4E3C66ED92979EEFFD2FD4256113265FDDACCD7(L_14, NULL);
		V_0 = ((float)il2cpp_codegen_add(L_13, L_15));
	}

IL_0044:
	{
		int32_t L_16 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0048:
	{
		// foreach (UxrGrabbableObjectAnchor socket in _sockets)
		int32_t L_17 = V_2;
		UxrGrabbableObjectAnchorU5BU5D_t086D051370506C7B677EA2AFD5BFCDDEEC4A12A7* L_18 = V_1;
		NullCheck(L_18);
		if ((((int32_t)L_17) < ((int32_t)((int32_t)(((RuntimeArray*)L_18)->max_length)))))
		{
			goto IL_0011;
		}
	}
	{
		// _light.intensity = lightBulbIntensity;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_19 = __this->____light_29;
		float L_20 = V_0;
		NullCheck(L_19);
		Light_set_intensity_mE4820C7F39F490B92ED5EA0C3AADA7C0775BE854(L_19, L_20, NULL);
		// }
		return;
	}
}
// System.Void UltimateXR.Examples.FullScene.Lab.Lamp::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lamp__ctor_m49F62CBFF7AEACCE6F62CCF980E97E40907D4854 (Lamp_t17C08BD87F9AAA690D376991BEC03122E7B9124A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UxrComponent_tA6AC6651B5C934626995D87127173273775B1011_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UxrComponent_tA6AC6651B5C934626995D87127173273775B1011_il2cpp_TypeInfo_var);
		UxrComponent__ctor_mAE5417B1456451CA1927CE21DF3731194A1CA64A(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UltimateXR.Examples.FullScene.Lab.Laser::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Laser_Awake_mB9D43D8CF6B4C751D6E172F9714387A8C0F5738D (Laser_t7D7E61C4CF345606101C0ACC8089A4E8B5A7E74B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_mF8C0D953BCBFDD5A01A09ADB67EB04F0D677A056_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m1F762EB1D37883D76E3A3A469C3EAF9A479AAD52_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t5BCE8DC4120D9E3C21A36514644646DBB9FBDE2F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// base.Awake();
		UxrComponent_Awake_m99D44E2A1351BB489585DBBD619F82CCAE366C24(__this, NULL);
		// _triggerInitialOffset = _trigger.localPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->____trigger_47;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_0, NULL);
		__this->____triggerInitialOffset_55 = L_1;
		// _laserLineRenderer               = gameObject.AddComponent<LineRenderer>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_2);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_3;
		L_3 = GameObject_AddComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_mF8C0D953BCBFDD5A01A09ADB67EB04F0D677A056(L_2, GameObject_AddComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_mF8C0D953BCBFDD5A01A09ADB67EB04F0D677A056_RuntimeMethod_var);
		__this->____laserLineRenderer_56 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____laserLineRenderer_56), (void*)L_3);
		// _laserLineRenderer.useWorldSpace = false;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_4 = __this->____laserLineRenderer_56;
		NullCheck(L_4);
		LineRenderer_set_useWorldSpace_m0204DB2541CC37DC4DC15DA15FD5A66EDC507CE8(L_4, (bool)0, NULL);
		// SetLaserLineRendererMesh(_laserRayLength);
		float L_5 = __this->____laserRayLength_31;
		Laser_SetLaserLineRendererMesh_m71D4A078FAE33D5C510186ACB2BF38668C7FFA48(__this, L_5, NULL);
		// _laserLineRenderer.material             = new Material(ShaderExt.UnlitTransparentColor);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_6 = __this->____laserLineRenderer_56;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_7;
		L_7 = ShaderExt_get_UnlitTransparentColor_m7B2B30FA961F6217CEDDA51E79365A08D62586EB(NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_8 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_8, L_7, NULL);
		NullCheck(L_6);
		Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A(L_6, L_8, NULL);
		// _laserLineRenderer.material.renderQueue = (int)RenderQueue.Overlay + 1;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_9 = __this->____laserLineRenderer_56;
		NullCheck(L_9);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_10;
		L_10 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_9, NULL);
		NullCheck(L_10);
		Material_set_renderQueue_mFBB72A781DCCF0D4B85670B597788EC2D02D1C14(L_10, ((int32_t)4001), NULL);
		// _laserLineRenderer.material.color       = _laserColor;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_11 = __this->____laserLineRenderer_56;
		NullCheck(L_11);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_12;
		L_12 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_11, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13 = __this->____laserColor_32;
		NullCheck(L_12);
		Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D(L_12, L_13, NULL);
		// _laserLineRenderer.loop                 = true;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_14 = __this->____laserLineRenderer_56;
		NullCheck(L_14);
		LineRenderer_set_loop_mC7FBA197A227B62F11DE01264C68357FBA475058(L_14, (bool)1, NULL);
		// _laserLineRenderer.enabled              = false;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_15 = __this->____laserLineRenderer_56;
		NullCheck(L_15);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_15, (bool)0, NULL);
		// _laserBurns = new List<LaserBurn>();
		List_1_t5BCE8DC4120D9E3C21A36514644646DBB9FBDE2F* L_16 = (List_1_t5BCE8DC4120D9E3C21A36514644646DBB9FBDE2F*)il2cpp_codegen_object_new(List_1_t5BCE8DC4120D9E3C21A36514644646DBB9FBDE2F_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		List_1__ctor_m1F762EB1D37883D76E3A3A469C3EAF9A479AAD52(L_16, List_1__ctor_m1F762EB1D37883D76E3A3A469C3EAF9A479AAD52_RuntimeMethod_var);
		__this->____laserBurns_57 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____laserBurns_57), (void*)L_16);
		// ParticleSystem.EmissionModule emission = _laserBurnParticles.emission;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_17 = __this->____laserBurnParticles_42;
		NullCheck(L_17);
		EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678 L_18;
		L_18 = ParticleSystem_get_emission_mD9402CE632A3607DA0B0486F9F58F7FB2B44CF08(L_17, NULL);
		V_0 = L_18;
		// emission.enabled = false;
		EmissionModule_set_enabled_mC82B6915ED485AB8DB54DFA6599C9C973BB5D867((&V_0), (bool)0, NULL);
		// _createBurnTimer = _laserBurnDelaySeconds;
		float L_19 = __this->____laserBurnDelaySeconds_33;
		__this->____createBurnTimer_59 = L_19;
		// }
		return;
	}
}
// System.Void UltimateXR.Examples.FullScene.Lab.Laser::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Laser_OnEnable_mB28CA3F16721C1F5C4150B7C4A45EBB3F75584C8 (Laser_t7D7E61C4CF345606101C0ACC8089A4E8B5A7E74B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Laser_UxrManager_AvatarsUpdated_mE3069BDE4C34554D58B8A55F0E912D31806E8B26_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.OnEnable();
		UxrComponent_OnEnable_mB30EBD913BFCBA1B1B248C0C4E93F3E63136DFF6(__this, NULL);
		// UxrManager.AvatarsUpdated += UxrManager_AvatarsUpdated;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_0, __this, (intptr_t)((void*)Laser_UxrManager_AvatarsUpdated_mE3069BDE4C34554D58B8A55F0E912D31806E8B26_RuntimeMethod_var), NULL);
		UxrManager_add_AvatarsUpdated_m380B3528C94B7830A074514641244B12FBE2127A(L_0, NULL);
		// }
		return;
	}
}
// System.Void UltimateXR.Examples.FullScene.Lab.Laser::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Laser_OnDisable_mFD85C8CB15F41142F5165D6D958564A55EA3BD66 (Laser_t7D7E61C4CF345606101C0ACC8089A4E8B5A7E74B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Laser_UxrManager_AvatarsUpdated_mE3069BDE4C34554D58B8A55F0E912D31806E8B26_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.OnDisable();
		UxrComponent_OnDisable_mCC9A18F682546580B0A67A788DFFD33595ECE1DB(__this, NULL);
		// UxrManager.AvatarsUpdated -= UxrManager_AvatarsUpdated;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_0, __this, (intptr_t)((void*)Laser_UxrManager_AvatarsUpdated_mE3069BDE4C34554D58B8A55F0E912D31806E8B26_RuntimeMethod_var), NULL);
		UxrManager_remove_AvatarsUpdated_m06CD0E601A8F84D4489953418E9A3D68D6E96F6E(L_0, NULL);
		// }
		return;
	}
}
// System.Void UltimateXR.Examples.FullScene.Lab.Laser::UxrManager_AvatarsUpdated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Laser_UxrManager_AvatarsUpdated_mE3069BDE4C34554D58B8A55F0E912D31806E8B26 (Laser_t7D7E61C4CF345606101C0ACC8089A4E8B5A7E74B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m2F86E252D086E288E02FA1C830B7E86C0A431E51_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mC14699E148A59839D1CFCB1C5546718DBD170C5C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m64F8D95A0D124BA799350AA8FBCF379E69A667E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_m82BF4E041D2E59348188F4CE1DFFC8B2C7CB9AA3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UxrAvatarComponent_1_get_Avatar_m7075FCDBDAAD3743FF4A735606DFDDEF7A152B8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UxrSingleton_1_get_Instance_mA15387C4D93C58879A6567FD6EA7BE6DE8A46DC7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3Ext_tE79960C7FB3A6DFB9D509BE3E9DBF1A9A6F2D52D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UxrGrabber_tC236DD7475C2506468E010D407CFF2F8375A5ED2* V_0 = NULL;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_3;
	memset((&V_3), 0, sizeof(V_3));
	EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678 V_4;
	memset((&V_4), 0, sizeof(V_4));
	float V_5 = 0.0f;
	bool V_6 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_7;
	memset((&V_7), 0, sizeof(V_7));
	int32_t V_8 = 0;
	float V_9 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_10;
	memset((&V_10), 0, sizeof(V_10));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_11;
	memset((&V_11), 0, sizeof(V_11));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_12;
	memset((&V_12), 0, sizeof(V_12));
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_13;
	memset((&V_13), 0, sizeof(V_13));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_14;
	memset((&V_14), 0, sizeof(V_14));
	EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678 V_15;
	memset((&V_15), 0, sizeof(V_15));
	EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678 V_16;
	memset((&V_16), 0, sizeof(V_16));
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B17_0 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B16_0 = NULL;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 G_B18_0;
	memset((&G_B18_0), 0, sizeof(G_B18_0));
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B18_1 = NULL;
	float G_B22_0 = 0.0f;
	{
		// if (UxrGrabManager.Instance.GetGrabbingHand(_triggerGrabbable, 0, out UxrGrabber grabber))
		UxrGrabManager_t76F8EBC3B188C8BB86C683C7B3E0E699CDEA7104* L_0;
		L_0 = UxrSingleton_1_get_Instance_mA15387C4D93C58879A6567FD6EA7BE6DE8A46DC7(UxrSingleton_1_get_Instance_mA15387C4D93C58879A6567FD6EA7BE6DE8A46DC7_RuntimeMethod_var);
		UxrGrabbableObject_tCA9C5B90AC9CB9830D3D50AE51F7FF342511E3BC* L_1 = __this->____triggerGrabbable_46;
		NullCheck(L_0);
		bool L_2;
		L_2 = UxrGrabManager_GetGrabbingHand_mC6EB8EFB8D8E505EE807662E6B0A159F1D1EAD24(L_0, L_1, 0, (&V_0), NULL);
		if (!L_2)
		{
			goto IL_00b8;
		}
	}
	{
		// float trigger = UxrAvatar.LocalAvatarInput.GetInput1D(grabber.Side, UxrInput1D.Trigger);
		UxrControllerInput_tF9ABB63F2B9B59D50DA1561F8DD21BB9F24446BB* L_3;
		L_3 = UxrAvatar_get_LocalAvatarInput_mBC7D8C130AA4AA7740CE3C9BF13C1E7491B97032(NULL);
		UxrGrabber_tC236DD7475C2506468E010D407CFF2F8375A5ED2* L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = UxrGrabber_get_Side_mD6F0B9A381994DD30FAE16FADFD50AEFA04DEAE4(L_4, NULL);
		NullCheck(L_3);
		float L_6;
		L_6 = VirtualFuncInvoker3< float, int32_t, int32_t, bool >::Invoke(87 /* System.Single UltimateXR.Devices.UxrControllerInput::GetInput1D(UltimateXR.Core.UxrHandSide,UltimateXR.Devices.UxrInput1D,System.Boolean) */, L_3, L_5, 2, (bool)0);
		V_1 = L_6;
		// _trigger.localPosition = _triggerInitialOffset + _triggerOffset * trigger;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = __this->____trigger_47;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = __this->____triggerInitialOffset_55;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = __this->____triggerOffset_48;
		float L_10 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_9, L_10, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_8, L_11, NULL);
		NullCheck(L_7);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_7, L_12, NULL);
		// _triggerGrabbable.GetGrabPoint(0).GetGripPoseInfo(grabber.Avatar).PoseBlendValue = trigger;
		UxrGrabbableObject_tCA9C5B90AC9CB9830D3D50AE51F7FF342511E3BC* L_13 = __this->____triggerGrabbable_46;
		NullCheck(L_13);
		UxrGrabPointInfo_tF536E172E12DD70FDA2B3E21733B1CEB08D35079* L_14;
		L_14 = UxrGrabbableObject_GetGrabPoint_m0AC4A037DD5ABADBFC5FBB2F06EFC460A0821F7A(L_13, 0, NULL);
		UxrGrabber_tC236DD7475C2506468E010D407CFF2F8375A5ED2* L_15 = V_0;
		NullCheck(L_15);
		UxrAvatar_t880FC3AD5A9A30338CFDF4653C86343B16ACDE79* L_16;
		L_16 = UxrAvatarComponent_1_get_Avatar_m7075FCDBDAAD3743FF4A735606DFDDEF7A152B8A(L_15, UxrAvatarComponent_1_get_Avatar_m7075FCDBDAAD3743FF4A735606DFDDEF7A152B8A_RuntimeMethod_var);
		NullCheck(L_14);
		UxrGripPoseInfo_t35D8985EE8490D4E4617C24300EC9A18363D01FC* L_17;
		L_17 = UxrGrabPointInfo_GetGripPoseInfo_m2FD016CBBD33E58FD8806555977C79CBFE1CA5DB(L_14, L_16, (bool)1, NULL);
		float L_18 = V_1;
		NullCheck(L_17);
		UxrGripPoseInfo_set_PoseBlendValue_m87BA55ED7AD988EBE7AA628A4C264ADB50C18053_inline(L_17, L_18, NULL);
		// if (UxrAvatar.LocalAvatarInput.GetButtonsPress(grabber.Side, UxrInputButtons.Trigger))
		UxrControllerInput_tF9ABB63F2B9B59D50DA1561F8DD21BB9F24446BB* L_19;
		L_19 = UxrAvatar_get_LocalAvatarInput_mBC7D8C130AA4AA7740CE3C9BF13C1E7491B97032(NULL);
		UxrGrabber_tC236DD7475C2506468E010D407CFF2F8375A5ED2* L_20 = V_0;
		NullCheck(L_20);
		int32_t L_21;
		L_21 = UxrGrabber_get_Side_mD6F0B9A381994DD30FAE16FADFD50AEFA04DEAE4(L_20, NULL);
		NullCheck(L_19);
		bool L_22;
		L_22 = UxrControllerInput_GetButtonsPress_m5B29D719D5AAD37B8876B43943E9348722D366AF(L_19, L_21, ((int32_t)16384), (bool)0, NULL);
		if (!L_22)
		{
			goto IL_00aa;
		}
	}
	{
		// if (_laserLineRenderer.enabled == false)
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_23 = __this->____laserLineRenderer_56;
		NullCheck(L_23);
		bool L_24;
		L_24 = Renderer_get_enabled_mFDDF363859AEC88105A925FA7EA341C077B09B54(L_23, NULL);
		if (L_24)
		{
			goto IL_00c4;
		}
	}
	{
		// _laserBurns.Add(null);
		List_1_t5BCE8DC4120D9E3C21A36514644646DBB9FBDE2F* L_25 = __this->____laserBurns_57;
		NullCheck(L_25);
		List_1_Add_mC14699E148A59839D1CFCB1C5546718DBD170C5C_inline(L_25, (LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557*)NULL, List_1_Add_mC14699E148A59839D1CFCB1C5546718DBD170C5C_RuntimeMethod_var);
		// _laserLineRenderer.enabled = true;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_26 = __this->____laserLineRenderer_56;
		NullCheck(L_26);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_26, (bool)1, NULL);
		goto IL_00c4;
	}

IL_00aa:
	{
		// _laserLineRenderer.enabled = false;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_27 = __this->____laserLineRenderer_56;
		NullCheck(L_27);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_27, (bool)0, NULL);
		goto IL_00c4;
	}

IL_00b8:
	{
		// _laserLineRenderer.enabled = false;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_28 = __this->____laserLineRenderer_56;
		NullCheck(L_28);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_28, (bool)0, NULL);
	}

IL_00c4:
	{
		// if (_laserLineRenderer.enabled)
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_29 = __this->____laserLineRenderer_56;
		NullCheck(L_29);
		bool L_30;
		L_30 = Renderer_get_enabled_mFDDF363859AEC88105A925FA7EA341C077B09B54(L_29, NULL);
		if (!L_30)
		{
			goto IL_0568;
		}
	}
	{
		// float currentRayLength = _laserRayLength;
		float L_31 = __this->____laserRayLength_31;
		V_2 = L_31;
		// if (Physics.Raycast(_laserSource.position, _laserSource.forward, out RaycastHit hitInfo, currentRayLength, _collisionMask, QueryTriggerInteraction.Ignore))
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_32 = __this->____laserSource_28;
		NullCheck(L_32);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		L_33 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_32, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_34 = __this->____laserSource_28;
		NullCheck(L_34);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_34, NULL);
		float L_36 = V_2;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_37 = __this->____collisionMask_29;
		int32_t L_38;
		L_38 = LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D(L_37, NULL);
		bool L_39;
		L_39 = Physics_Raycast_mA782767AD4F149FBEA32C71460DFF061B7563688(L_33, L_35, (&V_3), L_36, L_38, 1, NULL);
		if (!L_39)
		{
			goto IL_052c;
		}
	}
	{
		// if (CurrentLaserBurn == null)
		LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557* L_40;
		L_40 = Laser_get_CurrentLaserBurn_m52B4EB715F06633D0CBAC89B2B6C557A19AB8014(__this, NULL);
		if (L_40)
		{
			goto IL_0145;
		}
	}
	{
		// _laserBurns[_laserBurns.Count - 1] = CreateNewLaserBurn(hitInfo.collider);
		List_1_t5BCE8DC4120D9E3C21A36514644646DBB9FBDE2F* L_41 = __this->____laserBurns_57;
		List_1_t5BCE8DC4120D9E3C21A36514644646DBB9FBDE2F* L_42 = __this->____laserBurns_57;
		NullCheck(L_42);
		int32_t L_43;
		L_43 = List_1_get_Count_m64F8D95A0D124BA799350AA8FBCF379E69A667E9_inline(L_42, List_1_get_Count_m64F8D95A0D124BA799350AA8FBCF379E69A667E9_RuntimeMethod_var);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_44;
		L_44 = RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D((&V_3), NULL);
		LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557* L_45;
		L_45 = Laser_CreateNewLaserBurn_m7F5D14C1CD2E0B87C29F7774FAEE978887FC0590(__this, L_44, NULL);
		NullCheck(L_41);
		List_1_set_Item_m82BF4E041D2E59348188F4CE1DFFC8B2C7CB9AA3(L_41, ((int32_t)il2cpp_codegen_subtract(L_43, 1)), L_45, List_1_set_Item_m82BF4E041D2E59348188F4CE1DFFC8B2C7CB9AA3_RuntimeMethod_var);
		// _createBurnTimer                   = _laserBurnDelaySeconds;
		float L_46 = __this->____laserBurnDelaySeconds_33;
		__this->____createBurnTimer_59 = L_46;
		goto IL_0182;
	}

IL_0145:
	{
		// else if (CurrentLaserBurn.Collider != hitInfo.collider)
		LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557* L_47;
		L_47 = Laser_get_CurrentLaserBurn_m52B4EB715F06633D0CBAC89B2B6C557A19AB8014(__this, NULL);
		NullCheck(L_47);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_48;
		L_48 = LaserBurn_get_Collider_m2F511D05F4090A86846ABF9000FF39BA3ADBF173_inline(L_47, NULL);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_49;
		L_49 = RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D((&V_3), NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_50;
		L_50 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_48, L_49, NULL);
		if (!L_50)
		{
			goto IL_0182;
		}
	}
	{
		// _laserBurns.Add(CreateNewLaserBurn(hitInfo.collider));
		List_1_t5BCE8DC4120D9E3C21A36514644646DBB9FBDE2F* L_51 = __this->____laserBurns_57;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_52;
		L_52 = RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D((&V_3), NULL);
		LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557* L_53;
		L_53 = Laser_CreateNewLaserBurn_m7F5D14C1CD2E0B87C29F7774FAEE978887FC0590(__this, L_52, NULL);
		NullCheck(L_51);
		List_1_Add_mC14699E148A59839D1CFCB1C5546718DBD170C5C_inline(L_51, L_53, List_1_Add_mC14699E148A59839D1CFCB1C5546718DBD170C5C_RuntimeMethod_var);
		// _createBurnTimer = _laserBurnDelaySeconds;
		float L_54 = __this->____laserBurnDelaySeconds_33;
		__this->____createBurnTimer_59 = L_54;
	}

IL_0182:
	{
		// if (Vector3.Distance(_lastLaserHitPosition, hitInfo.point) / Time.deltaTime < _laserBurnSpeedThreshold)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_55 = __this->____lastLaserHitPosition_58;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56;
		L_56 = RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39((&V_3), NULL);
		float L_57;
		L_57 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_55, L_56, NULL);
		float L_58;
		L_58 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_59 = __this->____laserBurnSpeedThreshold_34;
		if ((!(((float)((float)(L_57/L_58))) < ((float)L_59))))
		{
			goto IL_01b6;
		}
	}
	{
		// _createBurnTimer -= Time.deltaTime;
		float L_60 = __this->____createBurnTimer_59;
		float L_61;
		L_61 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->____createBurnTimer_59 = ((float)il2cpp_codegen_subtract(L_60, L_61));
		goto IL_01da;
	}

IL_01b6:
	{
		// _laserBurns.Add(CreateNewLaserBurn(hitInfo.collider));
		List_1_t5BCE8DC4120D9E3C21A36514644646DBB9FBDE2F* L_62 = __this->____laserBurns_57;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_63;
		L_63 = RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D((&V_3), NULL);
		LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557* L_64;
		L_64 = Laser_CreateNewLaserBurn_m7F5D14C1CD2E0B87C29F7774FAEE978887FC0590(__this, L_63, NULL);
		NullCheck(L_62);
		List_1_Add_mC14699E148A59839D1CFCB1C5546718DBD170C5C_inline(L_62, L_64, List_1_Add_mC14699E148A59839D1CFCB1C5546718DBD170C5C_RuntimeMethod_var);
		// _createBurnTimer = _laserBurnDelaySeconds;
		float L_65 = __this->____laserBurnDelaySeconds_33;
		__this->____createBurnTimer_59 = L_65;
	}

IL_01da:
	{
		// _lastLaserHitPosition = hitInfo.point;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_66;
		L_66 = RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39((&V_3), NULL);
		__this->____lastLaserHitPosition_58 = L_66;
		// ParticleSystem.EmissionModule emission = _laserBurnParticles.emission;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_67 = __this->____laserBurnParticles_42;
		NullCheck(L_67);
		EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678 L_68;
		L_68 = ParticleSystem_get_emission_mD9402CE632A3607DA0B0486F9F58F7FB2B44CF08(L_67, NULL);
		V_4 = L_68;
		// emission.enabled                       = _createBurnTimer < 0.0f;
		float L_69 = __this->____createBurnTimer_59;
		EmissionModule_set_enabled_mC82B6915ED485AB8DB54DFA6599C9C973BB5D867((&V_4), (bool)((((float)L_69) < ((float)(0.0f)))? 1 : 0), NULL);
		// _laserBurnParticles.transform.position = hitInfo.point + hitInfo.normal * _laserBurnParticlesHeightOffset;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_70 = __this->____laserBurnParticles_42;
		NullCheck(L_70);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_71;
		L_71 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_70, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_72;
		L_72 = RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39((&V_3), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_73;
		L_73 = RaycastHit_get_normal_mD8741B70D2039C5CAFC4368D4CE59D89562040B5((&V_3), NULL);
		float L_74 = __this->____laserBurnParticlesHeightOffset_43;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_75;
		L_75 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_73, L_74, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_76;
		L_76 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_72, L_75, NULL);
		NullCheck(L_71);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_71, L_76, NULL);
		// _laserBurnParticles.transform.rotation = _laserBurnReflectParticles ? Quaternion.LookRotation(Vector3.Reflect(_laserSource.forward, hitInfo.normal)) : Quaternion.Slerp(Quaternion.LookRotation(hitInfo.normal, Vector3.right), Quaternion.LookRotation(Vector3.up, Vector3.right), 0.9f);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_77 = __this->____laserBurnParticles_42;
		NullCheck(L_77);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_78;
		L_78 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_77, NULL);
		bool L_79 = __this->____laserBurnReflectParticles_44;
		G_B16_0 = L_78;
		if (L_79)
		{
			G_B17_0 = L_78;
			goto IL_0275;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_80;
		L_80 = RaycastHit_get_normal_mD8741B70D2039C5CAFC4368D4CE59D89562040B5((&V_3), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_81;
		L_81 = Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_82;
		L_82 = Quaternion_LookRotation_mFB02EDC8F733774DFAC3BEA4B4BB265A228F8307(L_80, L_81, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_83;
		L_83 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_84;
		L_84 = Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_85;
		L_85 = Quaternion_LookRotation_mFB02EDC8F733774DFAC3BEA4B4BB265A228F8307(L_83, L_84, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_86;
		L_86 = Quaternion_Slerp_m0A9969F500E7716EA4F6BC4E7D5464372D8E9E15(L_82, L_85, (0.899999976f), NULL);
		G_B18_0 = L_86;
		G_B18_1 = G_B16_0;
		goto IL_0291;
	}

IL_0275:
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_87 = __this->____laserSource_28;
		NullCheck(L_87);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_88;
		L_88 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_87, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_89;
		L_89 = RaycastHit_get_normal_mD8741B70D2039C5CAFC4368D4CE59D89562040B5((&V_3), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_90;
		L_90 = Vector3_Reflect_mE584AF88A0C648C9559633260F24DB697AB176CF_inline(L_88, L_89, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_91;
		L_91 = Quaternion_LookRotation_mDB2CCA75B8E1AB98104F2A6E1A1EA57D0D1298D7(L_90, NULL);
		G_B18_0 = L_91;
		G_B18_1 = G_B17_0;
	}

IL_0291:
	{
		NullCheck(G_B18_1);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(G_B18_1, G_B18_0, NULL);
		// if (_createBurnTimer < 0.0f)
		float L_92 = __this->____createBurnTimer_59;
		if ((!(((float)L_92) < ((float)(0.0f)))))
		{
			goto IL_0510;
		}
	}
	{
		// float segmentDistance = CurrentLaserBurn.PathPositions.Count == 0 ? 0.0f : Vector3.Distance(hitInfo.point, CurrentLaserBurn.LastWorldPathPosition);
		LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557* L_93;
		L_93 = Laser_get_CurrentLaserBurn_m52B4EB715F06633D0CBAC89B2B6C557A19AB8014(__this, NULL);
		NullCheck(L_93);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_94;
		L_94 = LaserBurn_get_PathPositions_m7F8D39BA85C9F72D4D99A56A5A7716E200556734_inline(L_93, NULL);
		NullCheck(L_94);
		int32_t L_95;
		L_95 = List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline(L_94, List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		if (!L_95)
		{
			goto IL_02d1;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_96;
		L_96 = RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39((&V_3), NULL);
		LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557* L_97;
		L_97 = Laser_get_CurrentLaserBurn_m52B4EB715F06633D0CBAC89B2B6C557A19AB8014(__this, NULL);
		NullCheck(L_97);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_98;
		L_98 = LaserBurn_get_LastWorldPathPosition_mEE5D40582C05D02C07EA1E474D7493EE1334D450(L_97, NULL);
		float L_99;
		L_99 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_96, L_98, NULL);
		G_B22_0 = L_99;
		goto IL_02d6;
	}

IL_02d1:
	{
		G_B22_0 = (0.0f);
	}

IL_02d6:
	{
		V_5 = G_B22_0;
		// if (CurrentLaserBurn.PathPositions.Count == 0 || segmentDistance > _laserBurnVertexDistance)
		LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557* L_100;
		L_100 = Laser_get_CurrentLaserBurn_m52B4EB715F06633D0CBAC89B2B6C557A19AB8014(__this, NULL);
		NullCheck(L_100);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_101;
		L_101 = LaserBurn_get_PathPositions_m7F8D39BA85C9F72D4D99A56A5A7716E200556734_inline(L_100, NULL);
		NullCheck(L_101);
		int32_t L_102;
		L_102 = List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline(L_101, List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		if (!L_102)
		{
			goto IL_02f7;
		}
	}
	{
		float L_103 = V_5;
		float L_104 = __this->____laserBurnVertexDistance_36;
		if ((!(((float)L_103) > ((float)L_104))))
		{
			goto IL_04fc;
		}
	}

IL_02f7:
	{
		// if (CurrentLaserBurn.PathPositions.Count > 0 && segmentDistance > BurnGapCheckMinDistance)
		LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557* L_105;
		L_105 = Laser_get_CurrentLaserBurn_m52B4EB715F06633D0CBAC89B2B6C557A19AB8014(__this, NULL);
		NullCheck(L_105);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_106;
		L_106 = LaserBurn_get_PathPositions_m7F8D39BA85C9F72D4D99A56A5A7716E200556734_inline(L_105, NULL);
		NullCheck(L_106);
		int32_t L_107;
		L_107 = List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline(L_106, List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		if ((((int32_t)L_107) <= ((int32_t)0)))
		{
			goto IL_0465;
		}
	}
	{
		float L_108 = V_5;
		if ((!(((float)L_108) > ((float)(0.0199999996f)))))
		{
			goto IL_0465;
		}
	}
	{
		// bool startNewBurn = false;
		V_6 = (bool)0;
		// Vector3 vectorAB = hitInfo.point - CurrentLaserBurn.LastWorldPathPosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_109;
		L_109 = RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39((&V_3), NULL);
		LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557* L_110;
		L_110 = Laser_get_CurrentLaserBurn_m52B4EB715F06633D0CBAC89B2B6C557A19AB8014(__this, NULL);
		NullCheck(L_110);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_111;
		L_111 = LaserBurn_get_LastWorldPathPosition_mEE5D40582C05D02C07EA1E474D7493EE1334D450(L_110, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_112;
		L_112 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_109, L_111, NULL);
		V_7 = L_112;
		// for (int checkStep = 0; checkStep < BurnGapCheckSteps; ++checkStep)
		V_8 = 0;
		goto IL_043c;
	}

IL_033d:
	{
		// float   t             = (checkStep + 1.0f) / (BurnGapCheckSteps + 1.0f);
		int32_t L_113 = V_8;
		V_9 = ((float)(((float)il2cpp_codegen_add(((float)L_113), (1.0f)))/(5.0f)));
		// Vector3 pointCheck    = hitInfo.point + vectorAB * t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_114;
		L_114 = RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39((&V_3), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_115 = V_7;
		float L_116 = V_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_117;
		L_117 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_115, L_116, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_118;
		L_118 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_114, L_117, NULL);
		V_10 = L_118;
		// Vector3 perpendicular = Vector3.Cross(Vector3.Cross(vectorAB.normalized, ((CurrentLaserBurn.LastWorldNormal + hitInfo.normal) * 0.5f).normalized), vectorAB.normalized);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_119;
		L_119 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_7), NULL);
		LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557* L_120;
		L_120 = Laser_get_CurrentLaserBurn_m52B4EB715F06633D0CBAC89B2B6C557A19AB8014(__this, NULL);
		NullCheck(L_120);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_121;
		L_121 = LaserBurn_get_LastWorldNormal_mA43D8D7F36D5865F178E4BCAABF2DBBD6B88F7AB(L_120, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_122;
		L_122 = RaycastHit_get_normal_mD8741B70D2039C5CAFC4368D4CE59D89562040B5((&V_3), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_123;
		L_123 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_121, L_122, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_124;
		L_124 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_123, (0.5f), NULL);
		V_14 = L_124;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_125;
		L_125 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_14), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_126;
		L_126 = Vector3_Cross_mF93A280558BCE756D13B6CC5DCD7DE8A43148987_inline(L_119, L_125, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_127;
		L_127 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_7), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_128;
		L_128 = Vector3_Cross_mF93A280558BCE756D13B6CC5DCD7DE8A43148987_inline(L_126, L_127, NULL);
		V_11 = L_128;
		// Vector3 raySource     = CurrentLaserBurn.LastWorldPathPosition + vectorAB * 0.5f + perpendicular * BurnGapCheckRaySourceDistance;
		LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557* L_129;
		L_129 = Laser_get_CurrentLaserBurn_m52B4EB715F06633D0CBAC89B2B6C557A19AB8014(__this, NULL);
		NullCheck(L_129);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_130;
		L_130 = LaserBurn_get_LastWorldPathPosition_mEE5D40582C05D02C07EA1E474D7493EE1334D450(L_129, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_131 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_132;
		L_132 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_131, (0.5f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_133;
		L_133 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_130, L_132, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_134 = V_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_135;
		L_135 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_134, (0.100000001f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_136;
		L_136 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_133, L_135, NULL);
		V_12 = L_136;
		// if (Physics.Raycast(raySource, (pointCheck - raySource).normalized, out RaycastHit hitInfoBurnGapCheck, _laserRayLength, _collisionMask, QueryTriggerInteraction.Ignore))
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_137 = V_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_138 = V_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_139 = V_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_140;
		L_140 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_138, L_139, NULL);
		V_14 = L_140;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_141;
		L_141 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_14), NULL);
		float L_142 = __this->____laserRayLength_31;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_143 = __this->____collisionMask_29;
		int32_t L_144;
		L_144 = LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D(L_143, NULL);
		bool L_145;
		L_145 = Physics_Raycast_mA782767AD4F149FBEA32C71460DFF061B7563688(L_137, L_141, (&V_13), L_142, L_144, 1, NULL);
		if (!L_145)
		{
			goto IL_0431;
		}
	}
	{
		// float distanceToLine = hitInfoBurnGapCheck.point.DistanceToLine(CurrentLaserBurn.LastWorldPathPosition, hitInfo.point);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_146;
		L_146 = RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39((&V_13), NULL);
		LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557* L_147;
		L_147 = Laser_get_CurrentLaserBurn_m52B4EB715F06633D0CBAC89B2B6C557A19AB8014(__this, NULL);
		NullCheck(L_147);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_148;
		L_148 = LaserBurn_get_LastWorldPathPosition_mEE5D40582C05D02C07EA1E474D7493EE1334D450(L_147, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_149;
		L_149 = RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39((&V_3), NULL);
		il2cpp_codegen_runtime_class_init_inline(Vector3Ext_tE79960C7FB3A6DFB9D509BE3E9DBF1A9A6F2D52D_il2cpp_TypeInfo_var);
		float L_150;
		L_150 = Vector3Ext_DistanceToLine_m7D662244502A174A5C0A592DB9A7BC95B7C05159(L_146, L_148, L_149, NULL);
		// if (distanceToLine > BurnGapCheckLineDistanceThreshold)
		if ((!(((float)L_150) > ((float)(0.00200000009f)))))
		{
			goto IL_0436;
		}
	}
	{
		// startNewBurn = true;
		V_6 = (bool)1;
		// break;
		goto IL_0449;
	}

IL_0431:
	{
		// startNewBurn = true;
		V_6 = (bool)1;
		// break;
		goto IL_0449;
	}

IL_0436:
	{
		// for (int checkStep = 0; checkStep < BurnGapCheckSteps; ++checkStep)
		int32_t L_151 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_151, 1));
	}

IL_043c:
	{
		// for (int checkStep = 0; checkStep < BurnGapCheckSteps; ++checkStep)
		int32_t L_152 = V_8;
		if ((((float)((float)L_152)) < ((float)(4.0f))))
		{
			goto IL_033d;
		}
	}

IL_0449:
	{
		// if (startNewBurn)
		bool L_153 = V_6;
		if (!L_153)
		{
			goto IL_0465;
		}
	}
	{
		// _laserBurns.Add(CreateNewLaserBurn(hitInfo.collider));
		List_1_t5BCE8DC4120D9E3C21A36514644646DBB9FBDE2F* L_154 = __this->____laserBurns_57;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_155;
		L_155 = RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D((&V_3), NULL);
		LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557* L_156;
		L_156 = Laser_CreateNewLaserBurn_m7F5D14C1CD2E0B87C29F7774FAEE978887FC0590(__this, L_155, NULL);
		NullCheck(L_154);
		List_1_Add_mC14699E148A59839D1CFCB1C5546718DBD170C5C_inline(L_154, L_156, List_1_Add_mC14699E148A59839D1CFCB1C5546718DBD170C5C_RuntimeMethod_var);
	}

IL_0465:
	{
		// CurrentLaserBurn.PathPositions.Add(CurrentLaserBurn.Transform.InverseTransformPoint(hitInfo.point + hitInfo.normal * _laserBurnHeightOffset));
		LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557* L_157;
		L_157 = Laser_get_CurrentLaserBurn_m52B4EB715F06633D0CBAC89B2B6C557A19AB8014(__this, NULL);
		NullCheck(L_157);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_158;
		L_158 = LaserBurn_get_PathPositions_m7F8D39BA85C9F72D4D99A56A5A7716E200556734_inline(L_157, NULL);
		LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557* L_159;
		L_159 = Laser_get_CurrentLaserBurn_m52B4EB715F06633D0CBAC89B2B6C557A19AB8014(__this, NULL);
		NullCheck(L_159);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_160;
		L_160 = LaserBurn_get_Transform_m043480C46DFFC8EAA7137C4F7C914F0D467D58D0(L_159, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_161;
		L_161 = RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39((&V_3), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_162;
		L_162 = RaycastHit_get_normal_mD8741B70D2039C5CAFC4368D4CE59D89562040B5((&V_3), NULL);
		float L_163 = __this->____laserBurnHeightOffset_37;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_164;
		L_164 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_162, L_163, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_165;
		L_165 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_161, L_164, NULL);
		NullCheck(L_160);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_166;
		L_166 = Transform_InverseTransformPoint_m18CD395144D9C78F30E15A5B82B6670E792DBA5D(L_160, L_165, NULL);
		NullCheck(L_158);
		List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline(L_158, L_166, List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		// CurrentLaserBurn.PathCreationTimes.Add(Time.time);
		LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557* L_167;
		L_167 = Laser_get_CurrentLaserBurn_m52B4EB715F06633D0CBAC89B2B6C557A19AB8014(__this, NULL);
		NullCheck(L_167);
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_168;
		L_168 = LaserBurn_get_PathCreationTimes_mA4484DEB4636DA4F6F81B5B441B9A5C5E7BC3388_inline(L_167, NULL);
		float L_169;
		L_169 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		NullCheck(L_168);
		List_1_Add_m2F86E252D086E288E02FA1C830B7E86C0A431E51_inline(L_168, L_169, List_1_Add_m2F86E252D086E288E02FA1C830B7E86C0A431E51_RuntimeMethod_var);
		// CurrentLaserBurn.LastNormal = CurrentLaserBurn.Transform.InverseTransformVector(hitInfo.normal);
		LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557* L_170;
		L_170 = Laser_get_CurrentLaserBurn_m52B4EB715F06633D0CBAC89B2B6C557A19AB8014(__this, NULL);
		LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557* L_171;
		L_171 = Laser_get_CurrentLaserBurn_m52B4EB715F06633D0CBAC89B2B6C557A19AB8014(__this, NULL);
		NullCheck(L_171);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_172;
		L_172 = LaserBurn_get_Transform_m043480C46DFFC8EAA7137C4F7C914F0D467D58D0(L_171, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_173;
		L_173 = RaycastHit_get_normal_mD8741B70D2039C5CAFC4368D4CE59D89562040B5((&V_3), NULL);
		NullCheck(L_172);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_174;
		L_174 = Transform_InverseTransformVector_mBBA687CE32C0394FC9AB4F273D4E4A11F53FB044(L_172, L_173, NULL);
		NullCheck(L_170);
		LaserBurn_set_LastNormal_mBCF9EDF824414D2F0410E06E1B75B411D3F2A78D_inline(L_170, L_174, NULL);
		// UpdateLaserBurnLineRenderer(CurrentLaserBurn);
		LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557* L_175;
		L_175 = Laser_get_CurrentLaserBurn_m52B4EB715F06633D0CBAC89B2B6C557A19AB8014(__this, NULL);
		Laser_UpdateLaserBurnLineRenderer_mDF1635EA93F8AF77ED3A6924849CC4CEC6CB036A(__this, L_175, NULL);
		// UpdateLaserBurns(0, _laserBurns.Count - 1);
		List_1_t5BCE8DC4120D9E3C21A36514644646DBB9FBDE2F* L_176 = __this->____laserBurns_57;
		NullCheck(L_176);
		int32_t L_177;
		L_177 = List_1_get_Count_m64F8D95A0D124BA799350AA8FBCF379E69A667E9_inline(L_176, List_1_get_Count_m64F8D95A0D124BA799350AA8FBCF379E69A667E9_RuntimeMethod_var);
		Laser_UpdateLaserBurns_m90F17BFF1B0CD2A4CCA2CF54CFFFE10C0A33F83E(__this, 0, ((int32_t)il2cpp_codegen_subtract(L_177, 1)), NULL);
		goto IL_0522;
	}

IL_04fc:
	{
		// UpdateLaserBurns(0, _laserBurns.Count);
		List_1_t5BCE8DC4120D9E3C21A36514644646DBB9FBDE2F* L_178 = __this->____laserBurns_57;
		NullCheck(L_178);
		int32_t L_179;
		L_179 = List_1_get_Count_m64F8D95A0D124BA799350AA8FBCF379E69A667E9_inline(L_178, List_1_get_Count_m64F8D95A0D124BA799350AA8FBCF379E69A667E9_RuntimeMethod_var);
		Laser_UpdateLaserBurns_m90F17BFF1B0CD2A4CCA2CF54CFFFE10C0A33F83E(__this, 0, L_179, NULL);
		goto IL_0522;
	}

IL_0510:
	{
		// UpdateLaserBurns(0, _laserBurns.Count);
		List_1_t5BCE8DC4120D9E3C21A36514644646DBB9FBDE2F* L_180 = __this->____laserBurns_57;
		NullCheck(L_180);
		int32_t L_181;
		L_181 = List_1_get_Count_m64F8D95A0D124BA799350AA8FBCF379E69A667E9_inline(L_180, List_1_get_Count_m64F8D95A0D124BA799350AA8FBCF379E69A667E9_RuntimeMethod_var);
		Laser_UpdateLaserBurns_m90F17BFF1B0CD2A4CCA2CF54CFFFE10C0A33F83E(__this, 0, L_181, NULL);
	}

IL_0522:
	{
		// currentRayLength = hitInfo.distance;
		float L_182;
		L_182 = RaycastHit_get_distance_m035194B0E9BB6229259CFC43B095A9C8E5011C78((&V_3), NULL);
		V_2 = L_182;
		goto IL_055f;
	}

IL_052c:
	{
		// ParticleSystem.EmissionModule emission = _laserBurnParticles.emission;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_183 = __this->____laserBurnParticles_42;
		NullCheck(L_183);
		EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678 L_184;
		L_184 = ParticleSystem_get_emission_mD9402CE632A3607DA0B0486F9F58F7FB2B44CF08(L_183, NULL);
		V_15 = L_184;
		// emission.enabled = false;
		EmissionModule_set_enabled_mC82B6915ED485AB8DB54DFA6599C9C973BB5D867((&V_15), (bool)0, NULL);
		// _createBurnTimer = _laserBurnDelaySeconds;
		float L_185 = __this->____laserBurnDelaySeconds_33;
		__this->____createBurnTimer_59 = L_185;
		// UpdateLaserBurns(0, _laserBurns.Count);
		List_1_t5BCE8DC4120D9E3C21A36514644646DBB9FBDE2F* L_186 = __this->____laserBurns_57;
		NullCheck(L_186);
		int32_t L_187;
		L_187 = List_1_get_Count_m64F8D95A0D124BA799350AA8FBCF379E69A667E9_inline(L_186, List_1_get_Count_m64F8D95A0D124BA799350AA8FBCF379E69A667E9_RuntimeMethod_var);
		Laser_UpdateLaserBurns_m90F17BFF1B0CD2A4CCA2CF54CFFFE10C0A33F83E(__this, 0, L_187, NULL);
	}

IL_055f:
	{
		// SetLaserLineRendererMesh(currentRayLength);
		float L_188 = V_2;
		Laser_SetLaserLineRendererMesh_m71D4A078FAE33D5C510186ACB2BF38668C7FFA48(__this, L_188, NULL);
		goto IL_059b;
	}

IL_0568:
	{
		// ParticleSystem.EmissionModule emission = _laserBurnParticles.emission;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_189 = __this->____laserBurnParticles_42;
		NullCheck(L_189);
		EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678 L_190;
		L_190 = ParticleSystem_get_emission_mD9402CE632A3607DA0B0486F9F58F7FB2B44CF08(L_189, NULL);
		V_16 = L_190;
		// emission.enabled = false;
		EmissionModule_set_enabled_mC82B6915ED485AB8DB54DFA6599C9C973BB5D867((&V_16), (bool)0, NULL);
		// _createBurnTimer = _laserBurnDelaySeconds;
		float L_191 = __this->____laserBurnDelaySeconds_33;
		__this->____createBurnTimer_59 = L_191;
		// UpdateLaserBurns(0, _laserBurns.Count);
		List_1_t5BCE8DC4120D9E3C21A36514644646DBB9FBDE2F* L_192 = __this->____laserBurns_57;
		NullCheck(L_192);
		int32_t L_193;
		L_193 = List_1_get_Count_m64F8D95A0D124BA799350AA8FBCF379E69A667E9_inline(L_192, List_1_get_Count_m64F8D95A0D124BA799350AA8FBCF379E69A667E9_RuntimeMethod_var);
		Laser_UpdateLaserBurns_m90F17BFF1B0CD2A4CCA2CF54CFFFE10C0A33F83E(__this, 0, L_193, NULL);
	}

IL_059b:
	{
		// if (_laserHaptics)
		UxrFixedHapticFeedback_tB4275F8F9577DB366B776F01947C53E48F015FEE* L_194 = __this->____laserHaptics_49;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_195;
		L_195 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_194, NULL);
		if (!L_195)
		{
			goto IL_05d7;
		}
	}
	{
		// _laserHaptics.enabled = _laserLineRenderer.enabled;
		UxrFixedHapticFeedback_tB4275F8F9577DB366B776F01947C53E48F015FEE* L_196 = __this->____laserHaptics_49;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_197 = __this->____laserLineRenderer_56;
		NullCheck(L_197);
		bool L_198;
		L_198 = Renderer_get_enabled_mFDDF363859AEC88105A925FA7EA341C077B09B54(L_197, NULL);
		NullCheck(L_196);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_196, L_198, NULL);
		// if (grabber)
		UxrGrabber_tC236DD7475C2506468E010D407CFF2F8375A5ED2* L_199 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_200;
		L_200 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_199, NULL);
		if (!L_200)
		{
			goto IL_05d7;
		}
	}
	{
		// _laserHaptics.HandSide = grabber.Side;
		UxrFixedHapticFeedback_tB4275F8F9577DB366B776F01947C53E48F015FEE* L_201 = __this->____laserHaptics_49;
		UxrGrabber_tC236DD7475C2506468E010D407CFF2F8375A5ED2* L_202 = V_0;
		NullCheck(L_202);
		int32_t L_203;
		L_203 = UxrGrabber_get_Side_mD6F0B9A381994DD30FAE16FADFD50AEFA04DEAE4(L_202, NULL);
		NullCheck(L_201);
		UxrFixedHapticFeedback_set_HandSide_m0CF10CB54F226DF68E7DFD692F6D0493AF5CCD98_inline(L_201, L_203, NULL);
	}

IL_05d7:
	{
		// if (_enableWhenLaserActive && !_enableWhenLaserActive.activeSelf && _laserLineRenderer.enabled)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_204 = __this->____enableWhenLaserActive_45;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_205;
		L_205 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_204, NULL);
		if (!L_205)
		{
			goto IL_060b;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_206 = __this->____enableWhenLaserActive_45;
		NullCheck(L_206);
		bool L_207;
		L_207 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_206, NULL);
		if (L_207)
		{
			goto IL_060b;
		}
	}
	{
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_208 = __this->____laserLineRenderer_56;
		NullCheck(L_208);
		bool L_209;
		L_209 = Renderer_get_enabled_mFDDF363859AEC88105A925FA7EA341C077B09B54(L_208, NULL);
		if (!L_209)
		{
			goto IL_060b;
		}
	}
	{
		// _enableWhenLaserActive.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_210 = __this->____enableWhenLaserActive_45;
		NullCheck(L_210);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_210, (bool)1, NULL);
		return;
	}

IL_060b:
	{
		// else if (_enableWhenLaserActive && _enableWhenLaserActive.activeSelf && !_laserLineRenderer.enabled)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_211 = __this->____enableWhenLaserActive_45;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_212;
		L_212 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_211, NULL);
		if (!L_212)
		{
			goto IL_063e;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_213 = __this->____enableWhenLaserActive_45;
		NullCheck(L_213);
		bool L_214;
		L_214 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_213, NULL);
		if (!L_214)
		{
			goto IL_063e;
		}
	}
	{
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_215 = __this->____laserLineRenderer_56;
		NullCheck(L_215);
		bool L_216;
		L_216 = Renderer_get_enabled_mFDDF363859AEC88105A925FA7EA341C077B09B54(L_215, NULL);
		if (L_216)
		{
			goto IL_063e;
		}
	}
	{
		// _enableWhenLaserActive.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_217 = __this->____enableWhenLaserActive_45;
		NullCheck(L_217);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_217, (bool)0, NULL);
	}

IL_063e:
	{
		// }
		return;
	}
}
// System.Void UltimateXR.Examples.FullScene.Lab.Laser::SetLaserLineRendererMesh(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Laser_SetLaserLineRendererMesh_m71D4A078FAE33D5C510186ACB2BF38668C7FFA48 (Laser_t7D7E61C4CF345606101C0ACC8089A4E8B5A7E74B* __this, float ___rayLength0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GradientAlphaKeyU5BU5D_tA5D7ED787780B5C01635C8C59B15B2BC01AEC50E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GradientColorKeyU5BU5D_tB8929E6EE130CA1F3C1664B300BE83A95A642C18_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_0 = NULL;
	Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* V_1 = NULL;
	int32_t V_2 = 0;
	float G_B2_0 = 0.0f;
	float G_B2_1 = 0.0f;
	int32_t G_B2_2 = 0;
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* G_B2_3 = NULL;
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* G_B2_4 = NULL;
	float G_B1_0 = 0.0f;
	float G_B1_1 = 0.0f;
	int32_t G_B1_2 = 0;
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* G_B1_3 = NULL;
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* G_B1_4 = NULL;
	float G_B3_0 = 0.0f;
	float G_B3_1 = 0.0f;
	float G_B3_2 = 0.0f;
	int32_t G_B3_3 = 0;
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* G_B3_4 = NULL;
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* G_B3_5 = NULL;
	float G_B5_0 = 0.0f;
	float G_B5_1 = 0.0f;
	int32_t G_B5_2 = 0;
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* G_B5_3 = NULL;
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* G_B5_4 = NULL;
	float G_B4_0 = 0.0f;
	float G_B4_1 = 0.0f;
	int32_t G_B4_2 = 0;
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* G_B4_3 = NULL;
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* G_B4_4 = NULL;
	float G_B6_0 = 0.0f;
	float G_B6_1 = 0.0f;
	float G_B6_2 = 0.0f;
	int32_t G_B6_3 = 0;
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* G_B6_4 = NULL;
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* G_B6_5 = NULL;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F G_B11_0;
	memset((&G_B11_0), 0, sizeof(G_B11_0));
	int32_t G_B11_1 = 0;
	GradientColorKeyU5BU5D_tB8929E6EE130CA1F3C1664B300BE83A95A642C18* G_B11_2 = NULL;
	GradientColorKeyU5BU5D_tB8929E6EE130CA1F3C1664B300BE83A95A642C18* G_B11_3 = NULL;
	Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* G_B11_4 = NULL;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F G_B10_0;
	memset((&G_B10_0), 0, sizeof(G_B10_0));
	int32_t G_B10_1 = 0;
	GradientColorKeyU5BU5D_tB8929E6EE130CA1F3C1664B300BE83A95A642C18* G_B10_2 = NULL;
	GradientColorKeyU5BU5D_tB8929E6EE130CA1F3C1664B300BE83A95A642C18* G_B10_3 = NULL;
	Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* G_B10_4 = NULL;
	float G_B12_0 = 0.0f;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F G_B12_1;
	memset((&G_B12_1), 0, sizeof(G_B12_1));
	int32_t G_B12_2 = 0;
	GradientColorKeyU5BU5D_tB8929E6EE130CA1F3C1664B300BE83A95A642C18* G_B12_3 = NULL;
	GradientColorKeyU5BU5D_tB8929E6EE130CA1F3C1664B300BE83A95A642C18* G_B12_4 = NULL;
	Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* G_B12_5 = NULL;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F G_B14_0;
	memset((&G_B14_0), 0, sizeof(G_B14_0));
	int32_t G_B14_1 = 0;
	GradientColorKeyU5BU5D_tB8929E6EE130CA1F3C1664B300BE83A95A642C18* G_B14_2 = NULL;
	GradientColorKeyU5BU5D_tB8929E6EE130CA1F3C1664B300BE83A95A642C18* G_B14_3 = NULL;
	Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* G_B14_4 = NULL;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F G_B13_0;
	memset((&G_B13_0), 0, sizeof(G_B13_0));
	int32_t G_B13_1 = 0;
	GradientColorKeyU5BU5D_tB8929E6EE130CA1F3C1664B300BE83A95A642C18* G_B13_2 = NULL;
	GradientColorKeyU5BU5D_tB8929E6EE130CA1F3C1664B300BE83A95A642C18* G_B13_3 = NULL;
	Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* G_B13_4 = NULL;
	float G_B15_0 = 0.0f;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F G_B15_1;
	memset((&G_B15_1), 0, sizeof(G_B15_1));
	int32_t G_B15_2 = 0;
	GradientColorKeyU5BU5D_tB8929E6EE130CA1F3C1664B300BE83A95A642C18* G_B15_3 = NULL;
	GradientColorKeyU5BU5D_tB8929E6EE130CA1F3C1664B300BE83A95A642C18* G_B15_4 = NULL;
	Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* G_B15_5 = NULL;
	float G_B17_0 = 0.0f;
	int32_t G_B17_1 = 0;
	GradientAlphaKeyU5BU5D_tA5D7ED787780B5C01635C8C59B15B2BC01AEC50E* G_B17_2 = NULL;
	GradientAlphaKeyU5BU5D_tA5D7ED787780B5C01635C8C59B15B2BC01AEC50E* G_B17_3 = NULL;
	Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* G_B17_4 = NULL;
	float G_B16_0 = 0.0f;
	int32_t G_B16_1 = 0;
	GradientAlphaKeyU5BU5D_tA5D7ED787780B5C01635C8C59B15B2BC01AEC50E* G_B16_2 = NULL;
	GradientAlphaKeyU5BU5D_tA5D7ED787780B5C01635C8C59B15B2BC01AEC50E* G_B16_3 = NULL;
	Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* G_B16_4 = NULL;
	float G_B18_0 = 0.0f;
	float G_B18_1 = 0.0f;
	int32_t G_B18_2 = 0;
	GradientAlphaKeyU5BU5D_tA5D7ED787780B5C01635C8C59B15B2BC01AEC50E* G_B18_3 = NULL;
	GradientAlphaKeyU5BU5D_tA5D7ED787780B5C01635C8C59B15B2BC01AEC50E* G_B18_4 = NULL;
	Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* G_B18_5 = NULL;
	float G_B20_0 = 0.0f;
	int32_t G_B20_1 = 0;
	GradientAlphaKeyU5BU5D_tA5D7ED787780B5C01635C8C59B15B2BC01AEC50E* G_B20_2 = NULL;
	GradientAlphaKeyU5BU5D_tA5D7ED787780B5C01635C8C59B15B2BC01AEC50E* G_B20_3 = NULL;
	Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* G_B20_4 = NULL;
	float G_B19_0 = 0.0f;
	int32_t G_B19_1 = 0;
	GradientAlphaKeyU5BU5D_tA5D7ED787780B5C01635C8C59B15B2BC01AEC50E* G_B19_2 = NULL;
	GradientAlphaKeyU5BU5D_tA5D7ED787780B5C01635C8C59B15B2BC01AEC50E* G_B19_3 = NULL;
	Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* G_B19_4 = NULL;
	float G_B21_0 = 0.0f;
	float G_B21_1 = 0.0f;
	int32_t G_B21_2 = 0;
	GradientAlphaKeyU5BU5D_tA5D7ED787780B5C01635C8C59B15B2BC01AEC50E* G_B21_3 = NULL;
	GradientAlphaKeyU5BU5D_tA5D7ED787780B5C01635C8C59B15B2BC01AEC50E* G_B21_4 = NULL;
	Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* G_B21_5 = NULL;
	{
		// _laserLineRenderer.startWidth = _laserRayWidth;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_0 = __this->____laserLineRenderer_56;
		float L_1 = __this->____laserRayWidth_30;
		NullCheck(L_0);
		LineRenderer_set_startWidth_m3899722E198D636DB216CB61C980214707069F4A(L_0, L_1, NULL);
		// _laserLineRenderer.endWidth   = _laserRayWidth;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_2 = __this->____laserLineRenderer_56;
		float L_3 = __this->____laserRayWidth_30;
		NullCheck(L_2);
		LineRenderer_set_endWidth_mC7260401655C8BE1CBDFB832009295C89613F81D(L_2, L_3, NULL);
		// Vector3[] positions =
		// {
		//             new Vector3(0.0f, 0.0f, 0.0f),
		//             new Vector3(0.0f, 0.0f, rayLength > LaserGradientLength ? LaserGradientLength : rayLength * 0.33f),
		//             new Vector3(0.0f, 0.0f, rayLength < LaserGradientLength * 2.0f ? rayLength * 0.66f : rayLength - LaserGradientLength),
		//             new Vector3(0.0f, 0.0f, rayLength)
		// };
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_4 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)4);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_5 = L_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_6), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_6);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_7 = L_5;
		float L_8 = ___rayLength0;
		G_B1_0 = (0.0f);
		G_B1_1 = (0.0f);
		G_B1_2 = 1;
		G_B1_3 = L_7;
		G_B1_4 = L_7;
		if ((((float)L_8) > ((float)(0.400000006f))))
		{
			G_B2_0 = (0.0f);
			G_B2_1 = (0.0f);
			G_B2_2 = 1;
			G_B2_3 = L_7;
			G_B2_4 = L_7;
			goto IL_0060;
		}
	}
	{
		float L_9 = ___rayLength0;
		G_B3_0 = ((float)il2cpp_codegen_multiply(L_9, (0.330000013f)));
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		G_B3_5 = G_B1_4;
		goto IL_0065;
	}

IL_0060:
	{
		G_B3_0 = (0.400000006f);
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
		G_B3_5 = G_B2_4;
	}

IL_0065:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_10), G_B3_2, G_B3_1, G_B3_0, /*hidden argument*/NULL);
		NullCheck(G_B3_4);
		(G_B3_4)->SetAt(static_cast<il2cpp_array_size_t>(G_B3_3), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_10);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_11 = G_B3_5;
		float L_12 = ___rayLength0;
		G_B4_0 = (0.0f);
		G_B4_1 = (0.0f);
		G_B4_2 = 2;
		G_B4_3 = L_11;
		G_B4_4 = L_11;
		if ((((float)L_12) < ((float)(0.800000012f))))
		{
			G_B5_0 = (0.0f);
			G_B5_1 = (0.0f);
			G_B5_2 = 2;
			G_B5_3 = L_11;
			G_B5_4 = L_11;
			goto IL_008c;
		}
	}
	{
		float L_13 = ___rayLength0;
		G_B6_0 = ((float)il2cpp_codegen_subtract(L_13, (0.400000006f)));
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		G_B6_4 = G_B4_3;
		G_B6_5 = G_B4_4;
		goto IL_0093;
	}

IL_008c:
	{
		float L_14 = ___rayLength0;
		G_B6_0 = ((float)il2cpp_codegen_multiply(L_14, (0.660000026f)));
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
		G_B6_4 = G_B5_3;
		G_B6_5 = G_B5_4;
	}

IL_0093:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		memset((&L_15), 0, sizeof(L_15));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_15), G_B6_2, G_B6_1, G_B6_0, /*hidden argument*/NULL);
		NullCheck(G_B6_4);
		(G_B6_4)->SetAt(static_cast<il2cpp_array_size_t>(G_B6_3), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_15);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_16 = G_B6_5;
		float L_17 = ___rayLength0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		memset((&L_18), 0, sizeof(L_18));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_18), (0.0f), (0.0f), L_17, /*hidden argument*/NULL);
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(3), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_18);
		V_0 = L_16;
		// for (int i = 0; i < positions.Length; ++i)
		V_2 = 0;
		goto IL_00e6;
	}

IL_00b9:
	{
		// positions[i] = _laserLineRenderer.transform.InverseTransformPoint(_laserSource.TransformPoint(positions[i]));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_19 = V_0;
		int32_t L_20 = V_2;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_21 = __this->____laserLineRenderer_56;
		NullCheck(L_21);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_21, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23 = __this->____laserSource_28;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_24 = V_0;
		int32_t L_25 = V_2;
		NullCheck(L_24);
		int32_t L_26 = L_25;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		NullCheck(L_23);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44(L_23, L_27, NULL);
		NullCheck(L_22);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Transform_InverseTransformPoint_m18CD395144D9C78F30E15A5B82B6670E792DBA5D(L_22, L_28, NULL);
		NullCheck(L_19);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(L_20), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_29);
		// for (int i = 0; i < positions.Length; ++i)
		int32_t L_30 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_30, 1));
	}

IL_00e6:
	{
		// for (int i = 0; i < positions.Length; ++i)
		int32_t L_31 = V_2;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_32 = V_0;
		NullCheck(L_32);
		if ((((int32_t)L_31) < ((int32_t)((int32_t)(((RuntimeArray*)L_32)->max_length)))))
		{
			goto IL_00b9;
		}
	}
	{
		// _laserLineRenderer.positionCount = 4;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_33 = __this->____laserLineRenderer_56;
		NullCheck(L_33);
		LineRenderer_set_positionCount_m2001FB4044053895ECBE897AB833284F3300B205(L_33, 4, NULL);
		// _laserLineRenderer.SetPositions(positions);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_34 = __this->____laserLineRenderer_56;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_35 = V_0;
		NullCheck(L_34);
		LineRenderer_SetPositions_m7F7B7B54428437D0BF5256D4C82F92180B577B02(L_34, L_35, NULL);
		// Gradient colorGradient = new Gradient();
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_36 = (Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*)il2cpp_codegen_object_new(Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_il2cpp_TypeInfo_var);
		NullCheck(L_36);
		Gradient__ctor_m5EC470BB063D4831774C7CDA5D471EBEB5CE7B54(L_36, NULL);
		V_1 = L_36;
		// colorGradient.colorKeys = new[]
		//                           {
		//                                       new GradientColorKey(Color.white, 0.0f),
		//                                       new GradientColorKey(Color.white, rayLength > LaserGradientLength ? LaserGradientLength / rayLength : 0.33f),
		//                                       new GradientColorKey(Color.white, rayLength < LaserGradientLength * 2.0f ? 0.66f : 1.0f - LaserGradientLength / rayLength),
		//                                       new GradientColorKey(Color.white, 1.0f)
		//                           };
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_37 = V_1;
		GradientColorKeyU5BU5D_tB8929E6EE130CA1F3C1664B300BE83A95A642C18* L_38 = (GradientColorKeyU5BU5D_tB8929E6EE130CA1F3C1664B300BE83A95A642C18*)(GradientColorKeyU5BU5D_tB8929E6EE130CA1F3C1664B300BE83A95A642C18*)SZArrayNew(GradientColorKeyU5BU5D_tB8929E6EE130CA1F3C1664B300BE83A95A642C18_il2cpp_TypeInfo_var, (uint32_t)4);
		GradientColorKeyU5BU5D_tB8929E6EE130CA1F3C1664B300BE83A95A642C18* L_39 = L_38;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_40;
		L_40 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A L_41;
		memset((&L_41), 0, sizeof(L_41));
		GradientColorKey__ctor_mE26D7B8DA1283FDC3ADF628A3AC3E1B7246CD8A1((&L_41), L_40, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_39);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(0), (GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A)L_41);
		GradientColorKeyU5BU5D_tB8929E6EE130CA1F3C1664B300BE83A95A642C18* L_42 = L_39;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_43;
		L_43 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		float L_44 = ___rayLength0;
		G_B10_0 = L_43;
		G_B10_1 = 1;
		G_B10_2 = L_42;
		G_B10_3 = L_42;
		G_B10_4 = L_37;
		if ((((float)L_44) > ((float)(0.400000006f))))
		{
			G_B11_0 = L_43;
			G_B11_1 = 1;
			G_B11_2 = L_42;
			G_B11_3 = L_42;
			G_B11_4 = L_37;
			goto IL_013d;
		}
	}
	{
		G_B12_0 = (0.330000013f);
		G_B12_1 = G_B10_0;
		G_B12_2 = G_B10_1;
		G_B12_3 = G_B10_2;
		G_B12_4 = G_B10_3;
		G_B12_5 = G_B10_4;
		goto IL_0144;
	}

IL_013d:
	{
		float L_45 = ___rayLength0;
		G_B12_0 = ((float)((0.400000006f)/L_45));
		G_B12_1 = G_B11_0;
		G_B12_2 = G_B11_1;
		G_B12_3 = G_B11_2;
		G_B12_4 = G_B11_3;
		G_B12_5 = G_B11_4;
	}

IL_0144:
	{
		GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A L_46;
		memset((&L_46), 0, sizeof(L_46));
		GradientColorKey__ctor_mE26D7B8DA1283FDC3ADF628A3AC3E1B7246CD8A1((&L_46), G_B12_1, G_B12_0, /*hidden argument*/NULL);
		NullCheck(G_B12_3);
		(G_B12_3)->SetAt(static_cast<il2cpp_array_size_t>(G_B12_2), (GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A)L_46);
		GradientColorKeyU5BU5D_tB8929E6EE130CA1F3C1664B300BE83A95A642C18* L_47 = G_B12_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_48;
		L_48 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		float L_49 = ___rayLength0;
		G_B13_0 = L_48;
		G_B13_1 = 2;
		G_B13_2 = L_47;
		G_B13_3 = L_47;
		G_B13_4 = G_B12_5;
		if ((((float)L_49) < ((float)(0.800000012f))))
		{
			G_B14_0 = L_48;
			G_B14_1 = 2;
			G_B14_2 = L_47;
			G_B14_3 = L_47;
			G_B14_4 = G_B12_5;
			goto IL_016c;
		}
	}
	{
		float L_50 = ___rayLength0;
		G_B15_0 = ((float)il2cpp_codegen_subtract((1.0f), ((float)((0.400000006f)/L_50))));
		G_B15_1 = G_B13_0;
		G_B15_2 = G_B13_1;
		G_B15_3 = G_B13_2;
		G_B15_4 = G_B13_3;
		G_B15_5 = G_B13_4;
		goto IL_0171;
	}

IL_016c:
	{
		G_B15_0 = (0.660000026f);
		G_B15_1 = G_B14_0;
		G_B15_2 = G_B14_1;
		G_B15_3 = G_B14_2;
		G_B15_4 = G_B14_3;
		G_B15_5 = G_B14_4;
	}

IL_0171:
	{
		GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A L_51;
		memset((&L_51), 0, sizeof(L_51));
		GradientColorKey__ctor_mE26D7B8DA1283FDC3ADF628A3AC3E1B7246CD8A1((&L_51), G_B15_1, G_B15_0, /*hidden argument*/NULL);
		NullCheck(G_B15_3);
		(G_B15_3)->SetAt(static_cast<il2cpp_array_size_t>(G_B15_2), (GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A)L_51);
		GradientColorKeyU5BU5D_tB8929E6EE130CA1F3C1664B300BE83A95A642C18* L_52 = G_B15_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_53;
		L_53 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A L_54;
		memset((&L_54), 0, sizeof(L_54));
		GradientColorKey__ctor_mE26D7B8DA1283FDC3ADF628A3AC3E1B7246CD8A1((&L_54), L_53, (1.0f), /*hidden argument*/NULL);
		NullCheck(L_52);
		(L_52)->SetAt(static_cast<il2cpp_array_size_t>(3), (GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A)L_54);
		NullCheck(G_B15_5);
		Gradient_set_colorKeys_m5336A05DEF9B078212F6BB77DD33A6F1D34392DA(G_B15_5, L_52, NULL);
		// colorGradient.alphaKeys = new[]
		//                           {
		//                                       new GradientAlphaKey(0.0f, 0.0f),
		//                                       new GradientAlphaKey(1.0f, rayLength > LaserGradientLength ? LaserGradientLength / rayLength : 0.3f),
		//                                       new GradientAlphaKey(1.0f, rayLength < LaserGradientLength * 2.0f ? 0.66f : 1.0f - LaserGradientLength / rayLength),
		//                                       new GradientAlphaKey(0.0f, 1.0f)
		//                           };
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_55 = V_1;
		GradientAlphaKeyU5BU5D_tA5D7ED787780B5C01635C8C59B15B2BC01AEC50E* L_56 = (GradientAlphaKeyU5BU5D_tA5D7ED787780B5C01635C8C59B15B2BC01AEC50E*)(GradientAlphaKeyU5BU5D_tA5D7ED787780B5C01635C8C59B15B2BC01AEC50E*)SZArrayNew(GradientAlphaKeyU5BU5D_tA5D7ED787780B5C01635C8C59B15B2BC01AEC50E_il2cpp_TypeInfo_var, (uint32_t)4);
		GradientAlphaKeyU5BU5D_tA5D7ED787780B5C01635C8C59B15B2BC01AEC50E* L_57 = L_56;
		GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0 L_58;
		memset((&L_58), 0, sizeof(L_58));
		GradientAlphaKey__ctor_m62D622565E6C8BF94E6E90A4CA6C866A5BC3B41B((&L_58), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_57);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(0), (GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0)L_58);
		GradientAlphaKeyU5BU5D_tA5D7ED787780B5C01635C8C59B15B2BC01AEC50E* L_59 = L_57;
		float L_60 = ___rayLength0;
		G_B16_0 = (1.0f);
		G_B16_1 = 1;
		G_B16_2 = L_59;
		G_B16_3 = L_59;
		G_B16_4 = L_55;
		if ((((float)L_60) > ((float)(0.400000006f))))
		{
			G_B17_0 = (1.0f);
			G_B17_1 = 1;
			G_B17_2 = L_59;
			G_B17_3 = L_59;
			G_B17_4 = L_55;
			goto IL_01c9;
		}
	}
	{
		G_B18_0 = (0.300000012f);
		G_B18_1 = G_B16_0;
		G_B18_2 = G_B16_1;
		G_B18_3 = G_B16_2;
		G_B18_4 = G_B16_3;
		G_B18_5 = G_B16_4;
		goto IL_01d0;
	}

IL_01c9:
	{
		float L_61 = ___rayLength0;
		G_B18_0 = ((float)((0.400000006f)/L_61));
		G_B18_1 = G_B17_0;
		G_B18_2 = G_B17_1;
		G_B18_3 = G_B17_2;
		G_B18_4 = G_B17_3;
		G_B18_5 = G_B17_4;
	}

IL_01d0:
	{
		GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0 L_62;
		memset((&L_62), 0, sizeof(L_62));
		GradientAlphaKey__ctor_m62D622565E6C8BF94E6E90A4CA6C866A5BC3B41B((&L_62), G_B18_1, G_B18_0, /*hidden argument*/NULL);
		NullCheck(G_B18_3);
		(G_B18_3)->SetAt(static_cast<il2cpp_array_size_t>(G_B18_2), (GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0)L_62);
		GradientAlphaKeyU5BU5D_tA5D7ED787780B5C01635C8C59B15B2BC01AEC50E* L_63 = G_B18_4;
		float L_64 = ___rayLength0;
		G_B19_0 = (1.0f);
		G_B19_1 = 2;
		G_B19_2 = L_63;
		G_B19_3 = L_63;
		G_B19_4 = G_B18_5;
		if ((((float)L_64) < ((float)(0.800000012f))))
		{
			G_B20_0 = (1.0f);
			G_B20_1 = 2;
			G_B20_2 = L_63;
			G_B20_3 = L_63;
			G_B20_4 = G_B18_5;
			goto IL_01f8;
		}
	}
	{
		float L_65 = ___rayLength0;
		G_B21_0 = ((float)il2cpp_codegen_subtract((1.0f), ((float)((0.400000006f)/L_65))));
		G_B21_1 = G_B19_0;
		G_B21_2 = G_B19_1;
		G_B21_3 = G_B19_2;
		G_B21_4 = G_B19_3;
		G_B21_5 = G_B19_4;
		goto IL_01fd;
	}

IL_01f8:
	{
		G_B21_0 = (0.660000026f);
		G_B21_1 = G_B20_0;
		G_B21_2 = G_B20_1;
		G_B21_3 = G_B20_2;
		G_B21_4 = G_B20_3;
		G_B21_5 = G_B20_4;
	}

IL_01fd:
	{
		GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0 L_66;
		memset((&L_66), 0, sizeof(L_66));
		GradientAlphaKey__ctor_m62D622565E6C8BF94E6E90A4CA6C866A5BC3B41B((&L_66), G_B21_1, G_B21_0, /*hidden argument*/NULL);
		NullCheck(G_B21_3);
		(G_B21_3)->SetAt(static_cast<il2cpp_array_size_t>(G_B21_2), (GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0)L_66);
		GradientAlphaKeyU5BU5D_tA5D7ED787780B5C01635C8C59B15B2BC01AEC50E* L_67 = G_B21_4;
		GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0 L_68;
		memset((&L_68), 0, sizeof(L_68));
		GradientAlphaKey__ctor_m62D622565E6C8BF94E6E90A4CA6C866A5BC3B41B((&L_68), (0.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_67);
		(L_67)->SetAt(static_cast<il2cpp_array_size_t>(3), (GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0)L_68);
		NullCheck(G_B21_5);
		Gradient_set_alphaKeys_mA77CAA2DC3D652BBC57A996AAC2E48DAD2569FEB(G_B21_5, L_67, NULL);
		// _laserLineRenderer.colorGradient = colorGradient;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_69 = __this->____laserLineRenderer_56;
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_70 = V_1;
		NullCheck(L_69);
		LineRenderer_set_colorGradient_mD2CB3340AC9467782331011754187A2862216183(L_69, L_70, NULL);
		// }
		return;
	}
}
// UltimateXR.Examples.FullScene.Lab.Laser/LaserBurn UltimateXR.Examples.FullScene.Lab.Laser::CreateNewLaserBurn(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557* Laser_CreateNewLaserBurn_m7F5D14C1CD2E0B87C29F7774FAEE978887FC0590 (Laser_t7D7E61C4CF345606101C0ACC8089A4E8B5A7E74B* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___collider0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_mF8C0D953BCBFDD5A01A09ADB67EB04F0D677A056_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC29D3D824786832A31096310B3B3016B8B42B802_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DC7F1608E133799F549A3108DFB74EF172E971D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral38552E7167E05BBE6C64EC01C55233407F0FFFA1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// LaserBurn newLaserBurn = new LaserBurn();
		LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557* L_0 = (LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557*)il2cpp_codegen_object_new(LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		LaserBurn__ctor_mC33119BD53F5EDB8977346E5F95A31DB661CAB32(L_0, NULL);
		// newLaserBurn.Collider = collider;
		LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557* L_1 = L_0;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_2 = ___collider0;
		NullCheck(L_1);
		LaserBurn_set_Collider_m52437E78A89360AA30F49774BA130F5E59339C1F_inline(L_1, L_2, NULL);
		// newLaserBurn.GameObject                         = new GameObject("LaserBurn");
		LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557* L_3 = L_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_4, _stringLiteral38552E7167E05BBE6C64EC01C55233407F0FFFA1, NULL);
		NullCheck(L_3);
		LaserBurn_set_GameObject_m2A9521CC8C09437B10B05AF981CA664EDF7B7EB5_inline(L_3, L_4, NULL);
		// newLaserBurn.GameObject.transform.parent        = collider.transform;
		LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557* L_5 = L_3;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = LaserBurn_get_GameObject_mA4967FE6AC9A28115D93252D72C6CC8061118271_inline(L_5, NULL);
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_6, NULL);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_8 = ___collider0;
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_8, NULL);
		NullCheck(L_7);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_7, L_9, NULL);
		// newLaserBurn.GameObject.transform.localPosition = Vector3.zero;
		LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557* L_10 = L_5;
		NullCheck(L_10);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = LaserBurn_get_GameObject_mA4967FE6AC9A28115D93252D72C6CC8061118271_inline(L_10, NULL);
		NullCheck(L_11);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_11, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		NullCheck(L_12);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_12, L_13, NULL);
		// newLaserBurn.GameObject.transform.localRotation = Quaternion.identity;
		LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557* L_14 = L_10;
		NullCheck(L_14);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15;
		L_15 = LaserBurn_get_GameObject_mA4967FE6AC9A28115D93252D72C6CC8061118271_inline(L_14, NULL);
		NullCheck(L_15);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_15, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_17;
		L_17 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		NullCheck(L_16);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_16, L_17, NULL);
		// newLaserBurn.LineRenderer                       = newLaserBurn.GameObject.AddComponent<LineRenderer>();
		LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557* L_18 = L_14;
		LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557* L_19 = L_18;
		NullCheck(L_19);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20;
		L_20 = LaserBurn_get_GameObject_mA4967FE6AC9A28115D93252D72C6CC8061118271_inline(L_19, NULL);
		NullCheck(L_20);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_21;
		L_21 = GameObject_AddComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_mF8C0D953BCBFDD5A01A09ADB67EB04F0D677A056(L_20, GameObject_AddComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_mF8C0D953BCBFDD5A01A09ADB67EB04F0D677A056_RuntimeMethod_var);
		NullCheck(L_19);
		LaserBurn_set_LineRenderer_m8E0CC57FEF6467C9926E4B75F1B9AED21AD663DB_inline(L_19, L_21, NULL);
		// newLaserBurn.LineRenderer.receiveShadows        = true;
		LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557* L_22 = L_18;
		NullCheck(L_22);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_23;
		L_23 = LaserBurn_get_LineRenderer_m0C54B788116EE4B86B0409086E8B6C2E2D93773F_inline(L_22, NULL);
		NullCheck(L_23);
		Renderer_set_receiveShadows_mABEB4C72E96E65117B7FFFD4180247565D0C1A09(L_23, (bool)1, NULL);
		// newLaserBurn.LineRenderer.shadowCastingMode     = ShadowCastingMode.Off;
		LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557* L_24 = L_22;
		NullCheck(L_24);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_25;
		L_25 = LaserBurn_get_LineRenderer_m0C54B788116EE4B86B0409086E8B6C2E2D93773F_inline(L_24, NULL);
		NullCheck(L_25);
		Renderer_set_shadowCastingMode_mB0CD3D153E43044388AEFF7AEFDA93E80EB36D11(L_25, 0, NULL);
		// newLaserBurn.LineRenderer.useWorldSpace         = false;
		LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557* L_26 = L_24;
		NullCheck(L_26);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_27;
		L_27 = LaserBurn_get_LineRenderer_m0C54B788116EE4B86B0409086E8B6C2E2D93773F_inline(L_26, NULL);
		NullCheck(L_27);
		LineRenderer_set_useWorldSpace_m0204DB2541CC37DC4DC15DA15FD5A66EDC507CE8(L_27, (bool)0, NULL);
		// newLaserBurn.LineRenderer.material              = new Material(ShaderExt.UnlitTransparentColor);
		LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557* L_28 = L_26;
		NullCheck(L_28);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_29;
		L_29 = LaserBurn_get_LineRenderer_m0C54B788116EE4B86B0409086E8B6C2E2D93773F_inline(L_28, NULL);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_30;
		L_30 = ShaderExt_get_UnlitTransparentColor_m7B2B30FA961F6217CEDDA51E79365A08D62586EB(NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_31 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_31);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_31, L_30, NULL);
		NullCheck(L_29);
		Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A(L_29, L_31, NULL);
		// newLaserBurn.LineRenderer.material.renderQueue  = (int)RenderQueue.Overlay + 1;
		LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557* L_32 = L_28;
		NullCheck(L_32);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_33;
		L_33 = LaserBurn_get_LineRenderer_m0C54B788116EE4B86B0409086E8B6C2E2D93773F_inline(L_32, NULL);
		NullCheck(L_33);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_34;
		L_34 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_33, NULL);
		NullCheck(L_34);
		Material_set_renderQueue_mFBB72A781DCCF0D4B85670B597788EC2D02D1C14(L_34, ((int32_t)4001), NULL);
		// newLaserBurn.LineRenderer.material.color        = _laserBurnColor;
		LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557* L_35 = L_32;
		NullCheck(L_35);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_36;
		L_36 = LaserBurn_get_LineRenderer_m0C54B788116EE4B86B0409086E8B6C2E2D93773F_inline(L_35, NULL);
		NullCheck(L_36);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_37;
		L_37 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_36, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_38 = __this->____laserBurnColor_35;
		NullCheck(L_37);
		Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D(L_37, L_38, NULL);
		// newLaserBurn.LineRenderer.loop                  = false;
		LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557* L_39 = L_35;
		NullCheck(L_39);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_40;
		L_40 = LaserBurn_get_LineRenderer_m0C54B788116EE4B86B0409086E8B6C2E2D93773F_inline(L_39, NULL);
		NullCheck(L_40);
		LineRenderer_set_loop_mC7FBA197A227B62F11DE01264C68357FBA475058(L_40, (bool)0, NULL);
		// newLaserBurn.LineRenderer.positionCount         = 0;
		LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557* L_41 = L_39;
		NullCheck(L_41);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_42;
		L_42 = LaserBurn_get_LineRenderer_m0C54B788116EE4B86B0409086E8B6C2E2D93773F_inline(L_41, NULL);
		NullCheck(L_42);
		LineRenderer_set_positionCount_m2001FB4044053895ECBE897AB833284F3300B205(L_42, 0, NULL);
		// newLaserBurn.GameObjectIncandescent                         = new GameObject("LaserBurnIncandescent");
		LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557* L_43 = L_41;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_44 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_44);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_44, _stringLiteral2DC7F1608E133799F549A3108DFB74EF172E971D, NULL);
		NullCheck(L_43);
		LaserBurn_set_GameObjectIncandescent_mDE15F0CD6FB664165D814431C5BEE1E5F4F0FE2C_inline(L_43, L_44, NULL);
		// newLaserBurn.GameObjectIncandescent.transform.parent        = collider.transform;
		LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557* L_45 = L_43;
		NullCheck(L_45);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_46;
		L_46 = LaserBurn_get_GameObjectIncandescent_m4728BFBD17952FED2E5DFB68F09A8B7B7BBC6C09_inline(L_45, NULL);
		NullCheck(L_46);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_47;
		L_47 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_46, NULL);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_48 = ___collider0;
		NullCheck(L_48);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_49;
		L_49 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_48, NULL);
		NullCheck(L_47);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_47, L_49, NULL);
		// newLaserBurn.GameObjectIncandescent.transform.localPosition = Vector3.zero;
		LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557* L_50 = L_45;
		NullCheck(L_50);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_51;
		L_51 = LaserBurn_get_GameObjectIncandescent_m4728BFBD17952FED2E5DFB68F09A8B7B7BBC6C09_inline(L_50, NULL);
		NullCheck(L_51);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_52;
		L_52 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_51, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_53;
		L_53 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		NullCheck(L_52);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_52, L_53, NULL);
		// newLaserBurn.GameObjectIncandescent.transform.localRotation = Quaternion.identity;
		LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557* L_54 = L_50;
		NullCheck(L_54);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_55;
		L_55 = LaserBurn_get_GameObjectIncandescent_m4728BFBD17952FED2E5DFB68F09A8B7B7BBC6C09_inline(L_54, NULL);
		NullCheck(L_55);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_56;
		L_56 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_55, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_57;
		L_57 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		NullCheck(L_56);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_56, L_57, NULL);
		// newLaserBurn.IncandescentLineRenderer                       = newLaserBurn.GameObjectIncandescent.AddComponent<LineRenderer>();
		LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557* L_58 = L_54;
		LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557* L_59 = L_58;
		NullCheck(L_59);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_60;
		L_60 = LaserBurn_get_GameObjectIncandescent_m4728BFBD17952FED2E5DFB68F09A8B7B7BBC6C09_inline(L_59, NULL);
		NullCheck(L_60);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_61;
		L_61 = GameObject_AddComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_mF8C0D953BCBFDD5A01A09ADB67EB04F0D677A056(L_60, GameObject_AddComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_mF8C0D953BCBFDD5A01A09ADB67EB04F0D677A056_RuntimeMethod_var);
		NullCheck(L_59);
		LaserBurn_set_IncandescentLineRenderer_m5AF7A2EB97F440559412AF90D2286B3CB3F6D804_inline(L_59, L_61, NULL);
		// newLaserBurn.IncandescentLineRenderer.receiveShadows        = false;
		LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557* L_62 = L_58;
		NullCheck(L_62);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_63;
		L_63 = LaserBurn_get_IncandescentLineRenderer_m30C81AAE9780422CAC0C96D79D0E113A6F0B7023_inline(L_62, NULL);
		NullCheck(L_63);
		Renderer_set_receiveShadows_mABEB4C72E96E65117B7FFFD4180247565D0C1A09(L_63, (bool)0, NULL);
		// newLaserBurn.IncandescentLineRenderer.shadowCastingMode     = ShadowCastingMode.Off;
		LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557* L_64 = L_62;
		NullCheck(L_64);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_65;
		L_65 = LaserBurn_get_IncandescentLineRenderer_m30C81AAE9780422CAC0C96D79D0E113A6F0B7023_inline(L_64, NULL);
		NullCheck(L_65);
		Renderer_set_shadowCastingMode_mB0CD3D153E43044388AEFF7AEFDA93E80EB36D11(L_65, 0, NULL);
		// newLaserBurn.IncandescentLineRenderer.useWorldSpace         = false;
		LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557* L_66 = L_64;
		NullCheck(L_66);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_67;
		L_67 = LaserBurn_get_IncandescentLineRenderer_m30C81AAE9780422CAC0C96D79D0E113A6F0B7023_inline(L_66, NULL);
		NullCheck(L_67);
		LineRenderer_set_useWorldSpace_m0204DB2541CC37DC4DC15DA15FD5A66EDC507CE8(L_67, (bool)0, NULL);
		// newLaserBurn.IncandescentLineRenderer.material              = new Material(ShaderExt.UnlitAdditiveColor);
		LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557* L_68 = L_66;
		NullCheck(L_68);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_69;
		L_69 = LaserBurn_get_IncandescentLineRenderer_m30C81AAE9780422CAC0C96D79D0E113A6F0B7023_inline(L_68, NULL);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_70;
		L_70 = ShaderExt_get_UnlitAdditiveColor_mE11F223E4A886851DE4AF9BA7C5E46FDAE4A3675(NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_71 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_71);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_71, L_70, NULL);
		NullCheck(L_69);
		Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A(L_69, L_71, NULL);
		// newLaserBurn.IncandescentLineRenderer.material.renderQueue  = (int)RenderQueue.Overlay + 2;
		LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557* L_72 = L_68;
		NullCheck(L_72);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_73;
		L_73 = LaserBurn_get_IncandescentLineRenderer_m30C81AAE9780422CAC0C96D79D0E113A6F0B7023_inline(L_72, NULL);
		NullCheck(L_73);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_74;
		L_74 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_73, NULL);
		NullCheck(L_74);
		Material_set_renderQueue_mFBB72A781DCCF0D4B85670B597788EC2D02D1C14(L_74, ((int32_t)4002), NULL);
		// newLaserBurn.IncandescentLineRenderer.material.color        = _laserBurnIncandescentColor;
		LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557* L_75 = L_72;
		NullCheck(L_75);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_76;
		L_76 = LaserBurn_get_IncandescentLineRenderer_m30C81AAE9780422CAC0C96D79D0E113A6F0B7023_inline(L_75, NULL);
		NullCheck(L_76);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_77;
		L_77 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_76, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_78 = __this->____laserBurnIncandescentColor_40;
		NullCheck(L_77);
		Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D(L_77, L_78, NULL);
		// newLaserBurn.IncandescentLineRenderer.loop                  = false;
		LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557* L_79 = L_75;
		NullCheck(L_79);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_80;
		L_80 = LaserBurn_get_IncandescentLineRenderer_m30C81AAE9780422CAC0C96D79D0E113A6F0B7023_inline(L_79, NULL);
		NullCheck(L_80);
		LineRenderer_set_loop_mC7FBA197A227B62F11DE01264C68357FBA475058(L_80, (bool)0, NULL);
		// newLaserBurn.IncandescentLineRenderer.positionCount         = 0;
		LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557* L_81 = L_79;
		NullCheck(L_81);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_82;
		L_82 = LaserBurn_get_IncandescentLineRenderer_m30C81AAE9780422CAC0C96D79D0E113A6F0B7023_inline(L_81, NULL);
		NullCheck(L_82);
		LineRenderer_set_positionCount_m2001FB4044053895ECBE897AB833284F3300B205(L_82, 0, NULL);
		// newLaserBurn.PathPositions     = new List<Vector3>();
		LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557* L_83 = L_81;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_84 = (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*)il2cpp_codegen_object_new(List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var);
		NullCheck(L_84);
		List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C(L_84, List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var);
		NullCheck(L_83);
		LaserBurn_set_PathPositions_m568735D653C1113A82F229D5BF8E6E5C3FA3BE28_inline(L_83, L_84, NULL);
		// newLaserBurn.PathCreationTimes = new List<float>();
		LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557* L_85 = L_83;
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_86 = (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918*)il2cpp_codegen_object_new(List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918_il2cpp_TypeInfo_var);
		NullCheck(L_86);
		List_1__ctor_mC29D3D824786832A31096310B3B3016B8B42B802(L_86, List_1__ctor_mC29D3D824786832A31096310B3B3016B8B42B802_RuntimeMethod_var);
		NullCheck(L_85);
		LaserBurn_set_PathCreationTimes_m78F2EC1D5F07BA0DC59B9320251D3F362F53085C_inline(L_85, L_86, NULL);
		// _createBurnTimer = _laserBurnDelaySeconds;
		float L_87 = __this->____laserBurnDelaySeconds_33;
		__this->____createBurnTimer_59 = L_87;
		// return newLaserBurn;
		return L_85;
	}
}
// System.Void UltimateXR.Examples.FullScene.Lab.Laser::UpdateLaserBurns(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Laser_UpdateLaserBurns_m90F17BFF1B0CD2A4CCA2CF54CFFFE10C0A33F83E (Laser_t7D7E61C4CF345606101C0ACC8089A4E8B5A7E74B* __this, int32_t ___startIndex0, int32_t ___count1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m02C1B8299C8117EECF9A1B9FEA98C66A35695C91_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m64F8D95A0D124BA799350AA8FBCF379E69A667E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mDEB236AC8E8785C93A3547CB4734B3F375DB157C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for (int i = startIndex; i < startIndex + count && i < _laserBurns.Count; ++i)
		int32_t L_0 = ___startIndex0;
		V_0 = L_0;
		goto IL_0083;
	}

IL_0004:
	{
		// UpdateLaserBurnLineRenderer(_laserBurns[i]);
		List_1_t5BCE8DC4120D9E3C21A36514644646DBB9FBDE2F* L_1 = __this->____laserBurns_57;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557* L_3;
		L_3 = List_1_get_Item_mDEB236AC8E8785C93A3547CB4734B3F375DB157C(L_1, L_2, List_1_get_Item_mDEB236AC8E8785C93A3547CB4734B3F375DB157C_RuntimeMethod_var);
		Laser_UpdateLaserBurnLineRenderer_mDF1635EA93F8AF77ED3A6924849CC4CEC6CB036A(__this, L_3, NULL);
		// if (_laserBurns[i].PathPositions.Count <= 1 && _laserBurns[i] != CurrentLaserBurn)
		List_1_t5BCE8DC4120D9E3C21A36514644646DBB9FBDE2F* L_4 = __this->____laserBurns_57;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557* L_6;
		L_6 = List_1_get_Item_mDEB236AC8E8785C93A3547CB4734B3F375DB157C(L_4, L_5, List_1_get_Item_mDEB236AC8E8785C93A3547CB4734B3F375DB157C_RuntimeMethod_var);
		NullCheck(L_6);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_7;
		L_7 = LaserBurn_get_PathPositions_m7F8D39BA85C9F72D4D99A56A5A7716E200556734_inline(L_6, NULL);
		NullCheck(L_7);
		int32_t L_8;
		L_8 = List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline(L_7, List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		if ((((int32_t)L_8) > ((int32_t)1)))
		{
			goto IL_007f;
		}
	}
	{
		List_1_t5BCE8DC4120D9E3C21A36514644646DBB9FBDE2F* L_9 = __this->____laserBurns_57;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557* L_11;
		L_11 = List_1_get_Item_mDEB236AC8E8785C93A3547CB4734B3F375DB157C(L_9, L_10, List_1_get_Item_mDEB236AC8E8785C93A3547CB4734B3F375DB157C_RuntimeMethod_var);
		LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557* L_12;
		L_12 = Laser_get_CurrentLaserBurn_m52B4EB715F06633D0CBAC89B2B6C557A19AB8014(__this, NULL);
		if ((((RuntimeObject*)(LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557*)L_11) == ((RuntimeObject*)(LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557*)L_12)))
		{
			goto IL_007f;
		}
	}
	{
		// Destroy(_laserBurns[i].GameObject);
		List_1_t5BCE8DC4120D9E3C21A36514644646DBB9FBDE2F* L_13 = __this->____laserBurns_57;
		int32_t L_14 = V_0;
		NullCheck(L_13);
		LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557* L_15;
		L_15 = List_1_get_Item_mDEB236AC8E8785C93A3547CB4734B3F375DB157C(L_13, L_14, List_1_get_Item_mDEB236AC8E8785C93A3547CB4734B3F375DB157C_RuntimeMethod_var);
		NullCheck(L_15);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16;
		L_16 = LaserBurn_get_GameObject_mA4967FE6AC9A28115D93252D72C6CC8061118271_inline(L_15, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_16, NULL);
		// Destroy(_laserBurns[i].GameObjectIncandescent);
		List_1_t5BCE8DC4120D9E3C21A36514644646DBB9FBDE2F* L_17 = __this->____laserBurns_57;
		int32_t L_18 = V_0;
		NullCheck(L_17);
		LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557* L_19;
		L_19 = List_1_get_Item_mDEB236AC8E8785C93A3547CB4734B3F375DB157C(L_17, L_18, List_1_get_Item_mDEB236AC8E8785C93A3547CB4734B3F375DB157C_RuntimeMethod_var);
		NullCheck(L_19);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20;
		L_20 = LaserBurn_get_GameObjectIncandescent_m4728BFBD17952FED2E5DFB68F09A8B7B7BBC6C09_inline(L_19, NULL);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_20, NULL);
		// _laserBurns.RemoveAt(i);
		List_1_t5BCE8DC4120D9E3C21A36514644646DBB9FBDE2F* L_21 = __this->____laserBurns_57;
		int32_t L_22 = V_0;
		NullCheck(L_21);
		List_1_RemoveAt_m02C1B8299C8117EECF9A1B9FEA98C66A35695C91(L_21, L_22, List_1_RemoveAt_m02C1B8299C8117EECF9A1B9FEA98C66A35695C91_RuntimeMethod_var);
		// i--;
		int32_t L_23 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_23, 1));
	}

IL_007f:
	{
		// for (int i = startIndex; i < startIndex + count && i < _laserBurns.Count; ++i)
		int32_t L_24 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_0083:
	{
		// for (int i = startIndex; i < startIndex + count && i < _laserBurns.Count; ++i)
		int32_t L_25 = V_0;
		int32_t L_26 = ___startIndex0;
		int32_t L_27 = ___count1;
		if ((((int32_t)L_25) >= ((int32_t)((int32_t)il2cpp_codegen_add(L_26, L_27)))))
		{
			goto IL_009a;
		}
	}
	{
		int32_t L_28 = V_0;
		List_1_t5BCE8DC4120D9E3C21A36514644646DBB9FBDE2F* L_29 = __this->____laserBurns_57;
		NullCheck(L_29);
		int32_t L_30;
		L_30 = List_1_get_Count_m64F8D95A0D124BA799350AA8FBCF379E69A667E9_inline(L_29, List_1_get_Count_m64F8D95A0D124BA799350AA8FBCF379E69A667E9_RuntimeMethod_var);
		if ((((int32_t)L_28) < ((int32_t)L_30)))
		{
			goto IL_0004;
		}
	}

IL_009a:
	{
		// }
		return;
	}
}
// System.Void UltimateXR.Examples.FullScene.Lab.Laser::UpdateLaserBurnLineRenderer(UltimateXR.Examples.FullScene.Lab.Laser/LaserBurn)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Laser_UpdateLaserBurnLineRenderer_mDF1635EA93F8AF77ED3A6924849CC4CEC6CB036A (Laser_t7D7E61C4CF345606101C0ACC8089A4E8B5A7E74B* __this, LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557* ___laserBurn0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GradientAlphaKeyU5BU5D_tA5D7ED787780B5C01635C8C59B15B2BC01AEC50E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GradientColorKeyU5BU5D_tB8929E6EE130CA1F3C1664B300BE83A95A642C18_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetRange_m6C4CA260108AD2A75C9B4B2DD344FD0996883E34_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveRange_m0B9C23AD79609782B89695407DD77AFFA2857589_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveRange_m2459C0BC8F20CF66E82F55757ABCF60A69752B6D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_mF7A66D08104196EBAE0E29F0DD9BA140656EA5F3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m545762F67009314D9C63DD209B42FFF950569B05_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* V_4 = NULL;
	Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* V_5 = NULL;
	GradientAlphaKeyU5BU5D_tA5D7ED787780B5C01635C8C59B15B2BC01AEC50E* V_6 = NULL;
	GradientAlphaKeyU5BU5D_tA5D7ED787780B5C01635C8C59B15B2BC01AEC50E* V_7 = NULL;
	int32_t V_8 = 0;
	float V_9 = 0.0f;
	int32_t V_10 = 0;
	float V_11 = 0.0f;
	int32_t V_12 = 0;
	float V_13 = 0.0f;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	float V_16 = 0.0f;
	int32_t V_17 = 0;
	GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0* G_B19_0 = NULL;
	GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0* G_B18_0 = NULL;
	float G_B20_0 = 0.0f;
	GradientAlphaKey_tF469955E4BBAF1044320D956CD8D990F1A26EAA0* G_B20_1 = NULL;
	{
		// if (laserBurn == null || laserBurn.GameObject == null)
		LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557* L_0 = ___laserBurn0;
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557* L_1 = ___laserBurn0;
		NullCheck(L_1);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = LaserBurn_get_GameObject_mA4967FE6AC9A28115D93252D72C6CC8061118271_inline(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0012;
		}
	}

IL_0011:
	{
		// return;
		return;
	}

IL_0012:
	{
		// laserBurn.LineRenderer.startWidth             = _laserRayWidth * 2.5f;
		LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557* L_4 = ___laserBurn0;
		NullCheck(L_4);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_5;
		L_5 = LaserBurn_get_LineRenderer_m0C54B788116EE4B86B0409086E8B6C2E2D93773F_inline(L_4, NULL);
		float L_6 = __this->____laserRayWidth_30;
		NullCheck(L_5);
		LineRenderer_set_startWidth_m3899722E198D636DB216CB61C980214707069F4A(L_5, ((float)il2cpp_codegen_multiply(L_6, (2.5f))), NULL);
		// laserBurn.LineRenderer.endWidth               = _laserRayWidth * 2.5f;
		LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557* L_7 = ___laserBurn0;
		NullCheck(L_7);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_8;
		L_8 = LaserBurn_get_LineRenderer_m0C54B788116EE4B86B0409086E8B6C2E2D93773F_inline(L_7, NULL);
		float L_9 = __this->____laserRayWidth_30;
		NullCheck(L_8);
		LineRenderer_set_endWidth_mC7260401655C8BE1CBDFB832009295C89613F81D(L_8, ((float)il2cpp_codegen_multiply(L_9, (2.5f))), NULL);
		// laserBurn.IncandescentLineRenderer.startWidth = _laserRayWidth * 1.5f;
		LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557* L_10 = ___laserBurn0;
		NullCheck(L_10);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_11;
		L_11 = LaserBurn_get_IncandescentLineRenderer_m30C81AAE9780422CAC0C96D79D0E113A6F0B7023_inline(L_10, NULL);
		float L_12 = __this->____laserRayWidth_30;
		NullCheck(L_11);
		LineRenderer_set_startWidth_m3899722E198D636DB216CB61C980214707069F4A(L_11, ((float)il2cpp_codegen_multiply(L_12, (1.5f))), NULL);
		// laserBurn.IncandescentLineRenderer.endWidth   = _laserRayWidth * 1.5f;
		LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557* L_13 = ___laserBurn0;
		NullCheck(L_13);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_14;
		L_14 = LaserBurn_get_IncandescentLineRenderer_m30C81AAE9780422CAC0C96D79D0E113A6F0B7023_inline(L_13, NULL);
		float L_15 = __this->____laserRayWidth_30;
		NullCheck(L_14);
		LineRenderer_set_endWidth_mC7260401655C8BE1CBDFB832009295C89613F81D(L_14, ((float)il2cpp_codegen_multiply(L_15, (1.5f))), NULL);
		// int lastIndexToDelete = -1;
		V_0 = (-1);
		// for (int i = 0; i < laserBurn.PathCreationTimes.Count; ++i)
		V_2 = 0;
		goto IL_0094;
	}

IL_0074:
	{
		// if (Time.time - laserBurn.PathCreationTimes[i] >= _laserBurnDurationFadeEnd)
		float L_16;
		L_16 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557* L_17 = ___laserBurn0;
		NullCheck(L_17);
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_18;
		L_18 = LaserBurn_get_PathCreationTimes_mA4484DEB4636DA4F6F81B5B441B9A5C5E7BC3388_inline(L_17, NULL);
		int32_t L_19 = V_2;
		NullCheck(L_18);
		float L_20;
		L_20 = List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50(L_18, L_19, List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50_RuntimeMethod_var);
		float L_21 = __this->____laserBurnDurationFadeEnd_39;
		if ((!(((float)((float)il2cpp_codegen_subtract(L_16, L_20))) >= ((float)L_21))))
		{
			goto IL_00a2;
		}
	}
	{
		// lastIndexToDelete = i;
		int32_t L_22 = V_2;
		V_0 = L_22;
		// for (int i = 0; i < laserBurn.PathCreationTimes.Count; ++i)
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_0094:
	{
		// for (int i = 0; i < laserBurn.PathCreationTimes.Count; ++i)
		int32_t L_24 = V_2;
		LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557* L_25 = ___laserBurn0;
		NullCheck(L_25);
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_26;
		L_26 = LaserBurn_get_PathCreationTimes_mA4484DEB4636DA4F6F81B5B441B9A5C5E7BC3388_inline(L_25, NULL);
		NullCheck(L_26);
		int32_t L_27;
		L_27 = List_1_get_Count_m545762F67009314D9C63DD209B42FFF950569B05_inline(L_26, List_1_get_Count_m545762F67009314D9C63DD209B42FFF950569B05_RuntimeMethod_var);
		if ((((int32_t)L_24) < ((int32_t)L_27)))
		{
			goto IL_0074;
		}
	}

IL_00a2:
	{
		// if (lastIndexToDelete >= 0 && laserBurn.PathPositions.Count > 1)
		int32_t L_28 = V_0;
		if ((((int32_t)L_28) < ((int32_t)0)))
		{
			goto IL_00d2;
		}
	}
	{
		LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557* L_29 = ___laserBurn0;
		NullCheck(L_29);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_30;
		L_30 = LaserBurn_get_PathPositions_m7F8D39BA85C9F72D4D99A56A5A7716E200556734_inline(L_29, NULL);
		NullCheck(L_30);
		int32_t L_31;
		L_31 = List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline(L_30, List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		if ((((int32_t)L_31) <= ((int32_t)1)))
		{
			goto IL_00d2;
		}
	}
	{
		// laserBurn.PathCreationTimes.RemoveRange(0, lastIndexToDelete + 1);
		LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557* L_32 = ___laserBurn0;
		NullCheck(L_32);
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_33;
		L_33 = LaserBurn_get_PathCreationTimes_mA4484DEB4636DA4F6F81B5B441B9A5C5E7BC3388_inline(L_32, NULL);
		int32_t L_34 = V_0;
		NullCheck(L_33);
		List_1_RemoveRange_m0B9C23AD79609782B89695407DD77AFFA2857589(L_33, 0, ((int32_t)il2cpp_codegen_add(L_34, 1)), List_1_RemoveRange_m0B9C23AD79609782B89695407DD77AFFA2857589_RuntimeMethod_var);
		// laserBurn.PathPositions.RemoveRange(0, lastIndexToDelete + 1);
		LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557* L_35 = ___laserBurn0;
		NullCheck(L_35);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_36;
		L_36 = LaserBurn_get_PathPositions_m7F8D39BA85C9F72D4D99A56A5A7716E200556734_inline(L_35, NULL);
		int32_t L_37 = V_0;
		NullCheck(L_36);
		List_1_RemoveRange_m2459C0BC8F20CF66E82F55757ABCF60A69752B6D(L_36, 0, ((int32_t)il2cpp_codegen_add(L_37, 1)), List_1_RemoveRange_m2459C0BC8F20CF66E82F55757ABCF60A69752B6D_RuntimeMethod_var);
	}

IL_00d2:
	{
		// int incandescentIndexStart = 0;
		V_1 = 0;
		// for (int i = 0; i < laserBurn.PathCreationTimes.Count; ++i)
		V_3 = 0;
		goto IL_00fa;
	}

IL_00d8:
	{
		// if (Time.time - laserBurn.PathCreationTimes[i] < _laserBurnIncandescentDurationFadeEnd)
		float L_38;
		L_38 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557* L_39 = ___laserBurn0;
		NullCheck(L_39);
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_40;
		L_40 = LaserBurn_get_PathCreationTimes_mA4484DEB4636DA4F6F81B5B441B9A5C5E7BC3388_inline(L_39, NULL);
		int32_t L_41 = V_3;
		NullCheck(L_40);
		float L_42;
		L_42 = List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50(L_40, L_41, List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50_RuntimeMethod_var);
		float L_43 = __this->____laserBurnIncandescentDurationFadeEnd_41;
		if ((!(((float)((float)il2cpp_codegen_subtract(L_38, L_42))) < ((float)L_43))))
		{
			goto IL_00f6;
		}
	}
	{
		// incandescentIndexStart = i;
		int32_t L_44 = V_3;
		V_1 = L_44;
		// break;
		goto IL_0108;
	}

IL_00f6:
	{
		// for (int i = 0; i < laserBurn.PathCreationTimes.Count; ++i)
		int32_t L_45 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_00fa:
	{
		// for (int i = 0; i < laserBurn.PathCreationTimes.Count; ++i)
		int32_t L_46 = V_3;
		LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557* L_47 = ___laserBurn0;
		NullCheck(L_47);
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_48;
		L_48 = LaserBurn_get_PathCreationTimes_mA4484DEB4636DA4F6F81B5B441B9A5C5E7BC3388_inline(L_47, NULL);
		NullCheck(L_48);
		int32_t L_49;
		L_49 = List_1_get_Count_m545762F67009314D9C63DD209B42FFF950569B05_inline(L_48, List_1_get_Count_m545762F67009314D9C63DD209B42FFF950569B05_RuntimeMethod_var);
		if ((((int32_t)L_46) < ((int32_t)L_49)))
		{
			goto IL_00d8;
		}
	}

IL_0108:
	{
		// if (laserBurn.PathCreationTimes.Count > 0)
		LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557* L_50 = ___laserBurn0;
		NullCheck(L_50);
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_51;
		L_51 = LaserBurn_get_PathCreationTimes_mA4484DEB4636DA4F6F81B5B441B9A5C5E7BC3388_inline(L_50, NULL);
		NullCheck(L_51);
		int32_t L_52;
		L_52 = List_1_get_Count_m545762F67009314D9C63DD209B42FFF950569B05_inline(L_51, List_1_get_Count_m545762F67009314D9C63DD209B42FFF950569B05_RuntimeMethod_var);
		if ((((int32_t)L_52) <= ((int32_t)0)))
		{
			goto IL_0333;
		}
	}
	{
		// Gradient colorGradient             = new Gradient();
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_53 = (Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*)il2cpp_codegen_object_new(Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_il2cpp_TypeInfo_var);
		NullCheck(L_53);
		Gradient__ctor_m5EC470BB063D4831774C7CDA5D471EBEB5CE7B54(L_53, NULL);
		V_4 = L_53;
		// Gradient colorGradientIncandescent = new Gradient();
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_54 = (Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E*)il2cpp_codegen_object_new(Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_il2cpp_TypeInfo_var);
		NullCheck(L_54);
		Gradient__ctor_m5EC470BB063D4831774C7CDA5D471EBEB5CE7B54(L_54, NULL);
		V_5 = L_54;
		// colorGradient.colorKeys             = new[] { new GradientColorKey(Color.white, 0.0f), new GradientColorKey(Color.white, 1.0f) };
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_55 = V_4;
		GradientColorKeyU5BU5D_tB8929E6EE130CA1F3C1664B300BE83A95A642C18* L_56 = (GradientColorKeyU5BU5D_tB8929E6EE130CA1F3C1664B300BE83A95A642C18*)(GradientColorKeyU5BU5D_tB8929E6EE130CA1F3C1664B300BE83A95A642C18*)SZArrayNew(GradientColorKeyU5BU5D_tB8929E6EE130CA1F3C1664B300BE83A95A642C18_il2cpp_TypeInfo_var, (uint32_t)2);
		GradientColorKeyU5BU5D_tB8929E6EE130CA1F3C1664B300BE83A95A642C18* L_57 = L_56;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_58;
		L_58 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A L_59;
		memset((&L_59), 0, sizeof(L_59));
		GradientColorKey__ctor_mE26D7B8DA1283FDC3ADF628A3AC3E1B7246CD8A1((&L_59), L_58, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_57);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(0), (GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A)L_59);
		GradientColorKeyU5BU5D_tB8929E6EE130CA1F3C1664B300BE83A95A642C18* L_60 = L_57;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_61;
		L_61 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A L_62;
		memset((&L_62), 0, sizeof(L_62));
		GradientColorKey__ctor_mE26D7B8DA1283FDC3ADF628A3AC3E1B7246CD8A1((&L_62), L_61, (1.0f), /*hidden argument*/NULL);
		NullCheck(L_60);
		(L_60)->SetAt(static_cast<il2cpp_array_size_t>(1), (GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A)L_62);
		NullCheck(L_55);
		Gradient_set_colorKeys_m5336A05DEF9B078212F6BB77DD33A6F1D34392DA(L_55, L_60, NULL);
		// colorGradientIncandescent.colorKeys = new[] { new GradientColorKey(Color.white, 0.0f), new GradientColorKey(Color.white, 1.0f) };
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_63 = V_5;
		GradientColorKeyU5BU5D_tB8929E6EE130CA1F3C1664B300BE83A95A642C18* L_64 = (GradientColorKeyU5BU5D_tB8929E6EE130CA1F3C1664B300BE83A95A642C18*)(GradientColorKeyU5BU5D_tB8929E6EE130CA1F3C1664B300BE83A95A642C18*)SZArrayNew(GradientColorKeyU5BU5D_tB8929E6EE130CA1F3C1664B300BE83A95A642C18_il2cpp_TypeInfo_var, (uint32_t)2);
		GradientColorKeyU5BU5D_tB8929E6EE130CA1F3C1664B300BE83A95A642C18* L_65 = L_64;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_66;
		L_66 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A L_67;
		memset((&L_67), 0, sizeof(L_67));
		GradientColorKey__ctor_mE26D7B8DA1283FDC3ADF628A3AC3E1B7246CD8A1((&L_67), L_66, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_65);
		(L_65)->SetAt(static_cast<il2cpp_array_size_t>(0), (GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A)L_67);
		GradientColorKeyU5BU5D_tB8929E6EE130CA1F3C1664B300BE83A95A642C18* L_68 = L_65;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_69;
		L_69 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A L_70;
		memset((&L_70), 0, sizeof(L_70));
		GradientColorKey__ctor_mE26D7B8DA1283FDC3ADF628A3AC3E1B7246CD8A1((&L_70), L_69, (1.0f), /*hidden argument*/NULL);
		NullCheck(L_68);
		(L_68)->SetAt(static_cast<il2cpp_array_size_t>(1), (GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A)L_70);
		NullCheck(L_63);
		Gradient_set_colorKeys_m5336A05DEF9B078212F6BB77DD33A6F1D34392DA(L_63, L_68, NULL);
		// GradientAlphaKey[] alphaKeys             = new GradientAlphaKey[8];
		GradientAlphaKeyU5BU5D_tA5D7ED787780B5C01635C8C59B15B2BC01AEC50E* L_71 = (GradientAlphaKeyU5BU5D_tA5D7ED787780B5C01635C8C59B15B2BC01AEC50E*)(GradientAlphaKeyU5BU5D_tA5D7ED787780B5C01635C8C59B15B2BC01AEC50E*)SZArrayNew(GradientAlphaKeyU5BU5D_tA5D7ED787780B5C01635C8C59B15B2BC01AEC50E_il2cpp_TypeInfo_var, (uint32_t)8);
		V_6 = L_71;
		// GradientAlphaKey[] alphaKeysIncandescent = new GradientAlphaKey[8];
		GradientAlphaKeyU5BU5D_tA5D7ED787780B5C01635C8C59B15B2BC01AEC50E* L_72 = (GradientAlphaKeyU5BU5D_tA5D7ED787780B5C01635C8C59B15B2BC01AEC50E*)(GradientAlphaKeyU5BU5D_tA5D7ED787780B5C01635C8C59B15B2BC01AEC50E*)SZArrayNew(GradientAlphaKeyU5BU5D_tA5D7ED787780B5C01635C8C59B15B2BC01AEC50E_il2cpp_TypeInfo_var, (uint32_t)8);
		V_7 = L_72;
		// for (int i = 0; i < alphaKeys.Length; ++i)
		V_8 = 0;
		goto IL_025d;
	}

IL_01b1:
	{
		// float t         = i / (alphaKeys.Length - 1.0f);
		int32_t L_73 = V_8;
		GradientAlphaKeyU5BU5D_tA5D7ED787780B5C01635C8C59B15B2BC01AEC50E* L_74 = V_6;
		NullCheck(L_74);
		V_9 = ((float)(((float)L_73)/((float)il2cpp_codegen_subtract(((float)((int32_t)(((RuntimeArray*)L_74)->max_length))), (1.0f)))));
		// int   timeIndex = Mathf.Clamp(Mathf.RoundToInt(t * (laserBurn.PathCreationTimes.Count - 1.0f)), 0, laserBurn.PathCreationTimes.Count - 1);
		float L_75 = V_9;
		LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557* L_76 = ___laserBurn0;
		NullCheck(L_76);
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_77;
		L_77 = LaserBurn_get_PathCreationTimes_mA4484DEB4636DA4F6F81B5B441B9A5C5E7BC3388_inline(L_76, NULL);
		NullCheck(L_77);
		int32_t L_78;
		L_78 = List_1_get_Count_m545762F67009314D9C63DD209B42FFF950569B05_inline(L_77, List_1_get_Count_m545762F67009314D9C63DD209B42FFF950569B05_RuntimeMethod_var);
		int32_t L_79;
		L_79 = Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline(((float)il2cpp_codegen_multiply(L_75, ((float)il2cpp_codegen_subtract(((float)L_78), (1.0f))))), NULL);
		LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557* L_80 = ___laserBurn0;
		NullCheck(L_80);
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_81;
		L_81 = LaserBurn_get_PathCreationTimes_mA4484DEB4636DA4F6F81B5B441B9A5C5E7BC3388_inline(L_80, NULL);
		NullCheck(L_81);
		int32_t L_82;
		L_82 = List_1_get_Count_m545762F67009314D9C63DD209B42FFF950569B05_inline(L_81, List_1_get_Count_m545762F67009314D9C63DD209B42FFF950569B05_RuntimeMethod_var);
		int32_t L_83;
		L_83 = Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline(L_79, 0, ((int32_t)il2cpp_codegen_subtract(L_82, 1)), NULL);
		V_10 = L_83;
		// float life      = Time.time - laserBurn.PathCreationTimes[timeIndex];
		float L_84;
		L_84 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557* L_85 = ___laserBurn0;
		NullCheck(L_85);
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_86;
		L_86 = LaserBurn_get_PathCreationTimes_mA4484DEB4636DA4F6F81B5B441B9A5C5E7BC3388_inline(L_85, NULL);
		int32_t L_87 = V_10;
		NullCheck(L_86);
		float L_88;
		L_88 = List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50(L_86, L_87, List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50_RuntimeMethod_var);
		V_11 = ((float)il2cpp_codegen_subtract(L_84, L_88));
		// alphaKeys[i].alpha = life < _laserBurnDurationFadeStart ? 1.0f : 1.0f - Mathf.Clamp01((life - _laserBurnDurationFadeStart) / (_laserBurnDurationFadeEnd - _laserBurnDurationFadeStart));
		GradientAlphaKeyU5BU5D_tA5D7ED787780B5C01635C8C59B15B2BC01AEC50E* L_89 = V_6;
		int32_t L_90 = V_8;
		NullCheck(L_89);
		float L_91 = V_11;
		float L_92 = __this->____laserBurnDurationFadeStart_38;
		G_B18_0 = ((L_89)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_90)));
		if ((((float)L_91) < ((float)L_92)))
		{
			G_B19_0 = ((L_89)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_90)));
			goto IL_023d;
		}
	}
	{
		float L_93 = V_11;
		float L_94 = __this->____laserBurnDurationFadeStart_38;
		float L_95 = __this->____laserBurnDurationFadeEnd_39;
		float L_96 = __this->____laserBurnDurationFadeStart_38;
		float L_97;
		L_97 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(((float)(((float)il2cpp_codegen_subtract(L_93, L_94))/((float)il2cpp_codegen_subtract(L_95, L_96)))), NULL);
		G_B20_0 = ((float)il2cpp_codegen_subtract((1.0f), L_97));
		G_B20_1 = G_B18_0;
		goto IL_0242;
	}

IL_023d:
	{
		G_B20_0 = (1.0f);
		G_B20_1 = G_B19_0;
	}

IL_0242:
	{
		G_B20_1->___alpha_0 = G_B20_0;
		// alphaKeys[i].time  = t;
		GradientAlphaKeyU5BU5D_tA5D7ED787780B5C01635C8C59B15B2BC01AEC50E* L_98 = V_6;
		int32_t L_99 = V_8;
		NullCheck(L_98);
		float L_100 = V_9;
		((L_98)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_99)))->___time_1 = L_100;
		// for (int i = 0; i < alphaKeys.Length; ++i)
		int32_t L_101 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_101, 1));
	}

IL_025d:
	{
		// for (int i = 0; i < alphaKeys.Length; ++i)
		int32_t L_102 = V_8;
		GradientAlphaKeyU5BU5D_tA5D7ED787780B5C01635C8C59B15B2BC01AEC50E* L_103 = V_6;
		NullCheck(L_103);
		if ((((int32_t)L_102) < ((int32_t)((int32_t)(((RuntimeArray*)L_103)->max_length)))))
		{
			goto IL_01b1;
		}
	}
	{
		// for (int i = 0; i < alphaKeysIncandescent.Length; ++i)
		V_12 = 0;
		goto IL_02fc;
	}

IL_0270:
	{
		// float t                      = i / (alphaKeysIncandescent.Length - 1.0f);
		int32_t L_104 = V_12;
		GradientAlphaKeyU5BU5D_tA5D7ED787780B5C01635C8C59B15B2BC01AEC50E* L_105 = V_7;
		NullCheck(L_105);
		V_13 = ((float)(((float)L_104)/((float)il2cpp_codegen_subtract(((float)((int32_t)(((RuntimeArray*)L_105)->max_length))), (1.0f)))));
		// int   numIncandescentEntries = laserBurn.PathCreationTimes.Count - incandescentIndexStart;
		LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557* L_106 = ___laserBurn0;
		NullCheck(L_106);
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_107;
		L_107 = LaserBurn_get_PathCreationTimes_mA4484DEB4636DA4F6F81B5B441B9A5C5E7BC3388_inline(L_106, NULL);
		NullCheck(L_107);
		int32_t L_108;
		L_108 = List_1_get_Count_m545762F67009314D9C63DD209B42FFF950569B05_inline(L_107, List_1_get_Count_m545762F67009314D9C63DD209B42FFF950569B05_RuntimeMethod_var);
		int32_t L_109 = V_1;
		V_14 = ((int32_t)il2cpp_codegen_subtract(L_108, L_109));
		// int   timeIndex              = Mathf.Clamp(Mathf.RoundToInt(t * (numIncandescentEntries - 1.0f)), 0, numIncandescentEntries - 1);
		float L_110 = V_13;
		int32_t L_111 = V_14;
		int32_t L_112;
		L_112 = Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline(((float)il2cpp_codegen_multiply(L_110, ((float)il2cpp_codegen_subtract(((float)L_111), (1.0f))))), NULL);
		int32_t L_113 = V_14;
		int32_t L_114;
		L_114 = Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline(L_112, 0, ((int32_t)il2cpp_codegen_subtract(L_113, 1)), NULL);
		V_15 = L_114;
		// float life                   = Time.time - laserBurn.PathCreationTimes[incandescentIndexStart + timeIndex];
		float L_115;
		L_115 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557* L_116 = ___laserBurn0;
		NullCheck(L_116);
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_117;
		L_117 = LaserBurn_get_PathCreationTimes_mA4484DEB4636DA4F6F81B5B441B9A5C5E7BC3388_inline(L_116, NULL);
		int32_t L_118 = V_1;
		int32_t L_119 = V_15;
		NullCheck(L_117);
		float L_120;
		L_120 = List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50(L_117, ((int32_t)il2cpp_codegen_add(L_118, L_119)), List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50_RuntimeMethod_var);
		V_16 = ((float)il2cpp_codegen_subtract(L_115, L_120));
		// alphaKeysIncandescent[i].alpha = 1.0f - Mathf.Clamp01(life / _laserBurnIncandescentDurationFadeEnd);
		GradientAlphaKeyU5BU5D_tA5D7ED787780B5C01635C8C59B15B2BC01AEC50E* L_121 = V_7;
		int32_t L_122 = V_12;
		NullCheck(L_121);
		float L_123 = V_16;
		float L_124 = __this->____laserBurnIncandescentDurationFadeEnd_41;
		float L_125;
		L_125 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(((float)(L_123/L_124)), NULL);
		((L_121)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_122)))->___alpha_0 = ((float)il2cpp_codegen_subtract((1.0f), L_125));
		// alphaKeysIncandescent[i].time  = t;
		GradientAlphaKeyU5BU5D_tA5D7ED787780B5C01635C8C59B15B2BC01AEC50E* L_126 = V_7;
		int32_t L_127 = V_12;
		NullCheck(L_126);
		float L_128 = V_13;
		((L_126)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_127)))->___time_1 = L_128;
		// for (int i = 0; i < alphaKeysIncandescent.Length; ++i)
		int32_t L_129 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_129, 1));
	}

IL_02fc:
	{
		// for (int i = 0; i < alphaKeysIncandescent.Length; ++i)
		int32_t L_130 = V_12;
		GradientAlphaKeyU5BU5D_tA5D7ED787780B5C01635C8C59B15B2BC01AEC50E* L_131 = V_7;
		NullCheck(L_131);
		if ((((int32_t)L_130) < ((int32_t)((int32_t)(((RuntimeArray*)L_131)->max_length)))))
		{
			goto IL_0270;
		}
	}
	{
		// colorGradient.alphaKeys             = alphaKeys;
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_132 = V_4;
		GradientAlphaKeyU5BU5D_tA5D7ED787780B5C01635C8C59B15B2BC01AEC50E* L_133 = V_6;
		NullCheck(L_132);
		Gradient_set_alphaKeys_mA77CAA2DC3D652BBC57A996AAC2E48DAD2569FEB(L_132, L_133, NULL);
		// colorGradientIncandescent.alphaKeys = alphaKeysIncandescent;
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_134 = V_5;
		GradientAlphaKeyU5BU5D_tA5D7ED787780B5C01635C8C59B15B2BC01AEC50E* L_135 = V_7;
		NullCheck(L_134);
		Gradient_set_alphaKeys_mA77CAA2DC3D652BBC57A996AAC2E48DAD2569FEB(L_134, L_135, NULL);
		// laserBurn.LineRenderer.colorGradient             = colorGradient;
		LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557* L_136 = ___laserBurn0;
		NullCheck(L_136);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_137;
		L_137 = LaserBurn_get_LineRenderer_m0C54B788116EE4B86B0409086E8B6C2E2D93773F_inline(L_136, NULL);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_138 = V_4;
		NullCheck(L_137);
		LineRenderer_set_colorGradient_mD2CB3340AC9467782331011754187A2862216183(L_137, L_138, NULL);
		// laserBurn.IncandescentLineRenderer.colorGradient = colorGradientIncandescent;
		LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557* L_139 = ___laserBurn0;
		NullCheck(L_139);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_140;
		L_140 = LaserBurn_get_IncandescentLineRenderer_m30C81AAE9780422CAC0C96D79D0E113A6F0B7023_inline(L_139, NULL);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_141 = V_5;
		NullCheck(L_140);
		LineRenderer_set_colorGradient_mD2CB3340AC9467782331011754187A2862216183(L_140, L_141, NULL);
	}

IL_0333:
	{
		// if (laserBurn.PathPositions.Count > 1)
		LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557* L_142 = ___laserBurn0;
		NullCheck(L_142);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_143;
		L_143 = LaserBurn_get_PathPositions_m7F8D39BA85C9F72D4D99A56A5A7716E200556734_inline(L_142, NULL);
		NullCheck(L_143);
		int32_t L_144;
		L_144 = List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline(L_143, List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		if ((((int32_t)L_144) <= ((int32_t)1)))
		{
			goto IL_036f;
		}
	}
	{
		// laserBurn.LineRenderer.positionCount = laserBurn.PathPositions.Count;
		LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557* L_145 = ___laserBurn0;
		NullCheck(L_145);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_146;
		L_146 = LaserBurn_get_LineRenderer_m0C54B788116EE4B86B0409086E8B6C2E2D93773F_inline(L_145, NULL);
		LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557* L_147 = ___laserBurn0;
		NullCheck(L_147);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_148;
		L_148 = LaserBurn_get_PathPositions_m7F8D39BA85C9F72D4D99A56A5A7716E200556734_inline(L_147, NULL);
		NullCheck(L_148);
		int32_t L_149;
		L_149 = List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline(L_148, List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		NullCheck(L_146);
		LineRenderer_set_positionCount_m2001FB4044053895ECBE897AB833284F3300B205(L_146, L_149, NULL);
		// laserBurn.LineRenderer.SetPositions(laserBurn.PathPositions.ToArray());
		LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557* L_150 = ___laserBurn0;
		NullCheck(L_150);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_151;
		L_151 = LaserBurn_get_LineRenderer_m0C54B788116EE4B86B0409086E8B6C2E2D93773F_inline(L_150, NULL);
		LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557* L_152 = ___laserBurn0;
		NullCheck(L_152);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_153;
		L_153 = LaserBurn_get_PathPositions_m7F8D39BA85C9F72D4D99A56A5A7716E200556734_inline(L_152, NULL);
		NullCheck(L_153);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_154;
		L_154 = List_1_ToArray_mF7A66D08104196EBAE0E29F0DD9BA140656EA5F3(L_153, List_1_ToArray_mF7A66D08104196EBAE0E29F0DD9BA140656EA5F3_RuntimeMethod_var);
		NullCheck(L_151);
		LineRenderer_SetPositions_m7F7B7B54428437D0BF5256D4C82F92180B577B02(L_151, L_154, NULL);
		goto IL_037b;
	}

IL_036f:
	{
		// laserBurn.LineRenderer.positionCount = 0;
		LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557* L_155 = ___laserBurn0;
		NullCheck(L_155);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_156;
		L_156 = LaserBurn_get_LineRenderer_m0C54B788116EE4B86B0409086E8B6C2E2D93773F_inline(L_155, NULL);
		NullCheck(L_156);
		LineRenderer_set_positionCount_m2001FB4044053895ECBE897AB833284F3300B205(L_156, 0, NULL);
	}

IL_037b:
	{
		// if (incandescentIndexStart < laserBurn.PathPositions.Count - 1)
		int32_t L_157 = V_1;
		LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557* L_158 = ___laserBurn0;
		NullCheck(L_158);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_159;
		L_159 = LaserBurn_get_PathPositions_m7F8D39BA85C9F72D4D99A56A5A7716E200556734_inline(L_158, NULL);
		NullCheck(L_159);
		int32_t L_160;
		L_160 = List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline(L_159, List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		if ((((int32_t)L_157) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_160, 1)))))
		{
			goto IL_03c6;
		}
	}
	{
		// int count = laserBurn.PathPositions.Count - incandescentIndexStart;
		LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557* L_161 = ___laserBurn0;
		NullCheck(L_161);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_162;
		L_162 = LaserBurn_get_PathPositions_m7F8D39BA85C9F72D4D99A56A5A7716E200556734_inline(L_161, NULL);
		NullCheck(L_162);
		int32_t L_163;
		L_163 = List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline(L_162, List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		int32_t L_164 = V_1;
		V_17 = ((int32_t)il2cpp_codegen_subtract(L_163, L_164));
		// laserBurn.IncandescentLineRenderer.positionCount = count;
		LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557* L_165 = ___laserBurn0;
		NullCheck(L_165);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_166;
		L_166 = LaserBurn_get_IncandescentLineRenderer_m30C81AAE9780422CAC0C96D79D0E113A6F0B7023_inline(L_165, NULL);
		int32_t L_167 = V_17;
		NullCheck(L_166);
		LineRenderer_set_positionCount_m2001FB4044053895ECBE897AB833284F3300B205(L_166, L_167, NULL);
		// laserBurn.IncandescentLineRenderer.SetPositions(laserBurn.PathPositions.GetRange(incandescentIndexStart, count).ToArray());
		LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557* L_168 = ___laserBurn0;
		NullCheck(L_168);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_169;
		L_169 = LaserBurn_get_IncandescentLineRenderer_m30C81AAE9780422CAC0C96D79D0E113A6F0B7023_inline(L_168, NULL);
		LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557* L_170 = ___laserBurn0;
		NullCheck(L_170);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_171;
		L_171 = LaserBurn_get_PathPositions_m7F8D39BA85C9F72D4D99A56A5A7716E200556734_inline(L_170, NULL);
		int32_t L_172 = V_1;
		int32_t L_173 = V_17;
		NullCheck(L_171);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_174;
		L_174 = List_1_GetRange_m6C4CA260108AD2A75C9B4B2DD344FD0996883E34(L_171, L_172, L_173, List_1_GetRange_m6C4CA260108AD2A75C9B4B2DD344FD0996883E34_RuntimeMethod_var);
		NullCheck(L_174);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_175;
		L_175 = List_1_ToArray_mF7A66D08104196EBAE0E29F0DD9BA140656EA5F3(L_174, List_1_ToArray_mF7A66D08104196EBAE0E29F0DD9BA140656EA5F3_RuntimeMethod_var);
		NullCheck(L_169);
		LineRenderer_SetPositions_m7F7B7B54428437D0BF5256D4C82F92180B577B02(L_169, L_175, NULL);
		return;
	}

IL_03c6:
	{
		// laserBurn.IncandescentLineRenderer.positionCount = 0;
		LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557* L_176 = ___laserBurn0;
		NullCheck(L_176);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_177;
		L_177 = LaserBurn_get_IncandescentLineRenderer_m30C81AAE9780422CAC0C96D79D0E113A6F0B7023_inline(L_176, NULL);
		NullCheck(L_177);
		LineRenderer_set_positionCount_m2001FB4044053895ECBE897AB833284F3300B205(L_177, 0, NULL);
		// }
		return;
	}
}
// UltimateXR.Examples.FullScene.Lab.Laser/LaserBurn UltimateXR.Examples.FullScene.Lab.Laser::get_CurrentLaserBurn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557* Laser_get_CurrentLaserBurn_m52B4EB715F06633D0CBAC89B2B6C557A19AB8014 (Laser_t7D7E61C4CF345606101C0ACC8089A4E8B5A7E74B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m64F8D95A0D124BA799350AA8FBCF379E69A667E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mDEB236AC8E8785C93A3547CB4734B3F375DB157C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private LaserBurn CurrentLaserBurn => _laserBurns[_laserBurns.Count - 1];
		List_1_t5BCE8DC4120D9E3C21A36514644646DBB9FBDE2F* L_0 = __this->____laserBurns_57;
		List_1_t5BCE8DC4120D9E3C21A36514644646DBB9FBDE2F* L_1 = __this->____laserBurns_57;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_m64F8D95A0D124BA799350AA8FBCF379E69A667E9_inline(L_1, List_1_get_Count_m64F8D95A0D124BA799350AA8FBCF379E69A667E9_RuntimeMethod_var);
		NullCheck(L_0);
		LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557* L_3;
		L_3 = List_1_get_Item_mDEB236AC8E8785C93A3547CB4734B3F375DB157C(L_0, ((int32_t)il2cpp_codegen_subtract(L_2, 1)), List_1_get_Item_mDEB236AC8E8785C93A3547CB4734B3F375DB157C_RuntimeMethod_var);
		return L_3;
	}
}
// System.Void UltimateXR.Examples.FullScene.Lab.Laser::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Laser__ctor_m747A8713A690934EF57A957CF353F8CF33AC0AC6 (Laser_t7D7E61C4CF345606101C0ACC8089A4E8B5A7E74B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UxrComponent_tA6AC6651B5C934626995D87127173273775B1011_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] private LayerMask              _collisionMask                        = -1;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_0;
		L_0 = LayerMask_op_Implicit_m01C8996A2CB2085328B9C33539C43139660D8222((-1), NULL);
		__this->____collisionMask_29 = L_0;
		// [SerializeField] private float                  _laserRayWidth                        = 0.003f;
		__this->____laserRayWidth_30 = (0.00300000003f);
		// [SerializeField] private float                  _laserRayLength                       = 5.0f;
		__this->____laserRayLength_31 = (5.0f);
		// [SerializeField] private Color                  _laserColor                           = Color.red;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		L_1 = Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline(NULL);
		__this->____laserColor_32 = L_1;
		// [SerializeField] private float                  _laserBurnDelaySeconds                = 0.2f; // Time the laser needs to be travelling at a speed less than LaserBurnParticlesMaxSpeed to create burn FX
		__this->____laserBurnDelaySeconds_33 = (0.200000003f);
		// [SerializeField] private float                  _laserBurnSpeedThreshold              = 0.4f; // Maximum speed the laser can travel before stopping particles emission
		__this->____laserBurnSpeedThreshold_34 = (0.400000006f);
		// [SerializeField] private Color                  _laserBurnColor                       = new Color(0.0f, 0.0f, 0.0f, 0.6f);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2;
		memset((&L_2), 0, sizeof(L_2));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_2), (0.0f), (0.0f), (0.0f), (0.600000024f), /*hidden argument*/NULL);
		__this->____laserBurnColor_35 = L_2;
		// [SerializeField] private float                  _laserBurnVertexDistance              = 0.03f;
		__this->____laserBurnVertexDistance_36 = (0.0299999993f);
		// [SerializeField] private float                  _laserBurnHeightOffset                = 0.001f;
		__this->____laserBurnHeightOffset_37 = (0.00100000005f);
		// [SerializeField] private float                  _laserBurnDurationFadeStart           = 3.0f;
		__this->____laserBurnDurationFadeStart_38 = (3.0f);
		// [SerializeField] private float                  _laserBurnDurationFadeEnd             = 6.0f;
		__this->____laserBurnDurationFadeEnd_39 = (6.0f);
		// [SerializeField] private Color                  _laserBurnIncandescentColor           = new Color(0.7f, 0.7f, 0.1f, 1.0f);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3;
		memset((&L_3), 0, sizeof(L_3));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_3), (0.699999988f), (0.699999988f), (0.100000001f), (1.0f), /*hidden argument*/NULL);
		__this->____laserBurnIncandescentColor_40 = L_3;
		// [SerializeField] private float                  _laserBurnIncandescentDurationFadeEnd = 1.0f;
		__this->____laserBurnIncandescentDurationFadeEnd_41 = (1.0f);
		il2cpp_codegen_runtime_class_init_inline(UxrComponent_tA6AC6651B5C934626995D87127173273775B1011_il2cpp_TypeInfo_var);
		UxrComponent__ctor_mAE5417B1456451CA1927CE21DF3731194A1CA64A(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Transform UltimateXR.Examples.FullScene.Lab.Laser/LaserBurn::get_Transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* LaserBurn_get_Transform_m043480C46DFFC8EAA7137C4F7C914F0D467D58D0 (LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557* __this, const RuntimeMethod* method) 
{
	{
		// public Transform Transform => GameObject.transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = LaserBurn_get_GameObject_mA4967FE6AC9A28115D93252D72C6CC8061118271_inline(__this, NULL);
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		return L_1;
	}
}
// UnityEngine.Vector3 UltimateXR.Examples.FullScene.Lab.Laser/LaserBurn::get_LastWorldNormal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 LaserBurn_get_LastWorldNormal_mA43D8D7F36D5865F178E4BCAABF2DBBD6B88F7AB (LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 LastWorldNormal => Transform.TransformVector(LastNormal);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = LaserBurn_get_Transform_m043480C46DFFC8EAA7137C4F7C914F0D467D58D0(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = LaserBurn_get_LastNormal_m2A525EA2FA754C2DBD6F91792ECD6F4229410DBB_inline(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_TransformVector_mFA6FB7570442728CB15D03C696353148711CDD98(L_0, L_1, NULL);
		return L_2;
	}
}
// UnityEngine.Vector3 UltimateXR.Examples.FullScene.Lab.Laser/LaserBurn::get_LastWorldPathPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 LaserBurn_get_LastWorldPathPosition_mEE5D40582C05D02C07EA1E474D7493EE1334D450 (LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Vector3 LastWorldPathPosition => Transform.TransformPoint(PathPositions[PathPositions.Count - 1]);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = LaserBurn_get_Transform_m043480C46DFFC8EAA7137C4F7C914F0D467D58D0(__this, NULL);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_1;
		L_1 = LaserBurn_get_PathPositions_m7F8D39BA85C9F72D4D99A56A5A7716E200556734_inline(__this, NULL);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_2;
		L_2 = LaserBurn_get_PathPositions_m7F8D39BA85C9F72D4D99A56A5A7716E200556734_inline(__this, NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline(L_2, List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810(L_1, ((int32_t)il2cpp_codegen_subtract(L_3, 1)), List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44(L_0, L_4, NULL);
		return L_5;
	}
}
// UnityEngine.GameObject UltimateXR.Examples.FullScene.Lab.Laser/LaserBurn::get_GameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* LaserBurn_get_GameObject_mA4967FE6AC9A28115D93252D72C6CC8061118271 (LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557* __this, const RuntimeMethod* method) 
{
	{
		// public GameObject GameObject { get; set; }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___U3CGameObjectU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void UltimateXR.Examples.FullScene.Lab.Laser/LaserBurn::set_GameObject(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LaserBurn_set_GameObject_m2A9521CC8C09437B10B05AF981CA664EDF7B7EB5 (LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___value0, const RuntimeMethod* method) 
{
	{
		// public GameObject GameObject { get; set; }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___value0;
		__this->___U3CGameObjectU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CGameObjectU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// UnityEngine.GameObject UltimateXR.Examples.FullScene.Lab.Laser/LaserBurn::get_GameObjectIncandescent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* LaserBurn_get_GameObjectIncandescent_m4728BFBD17952FED2E5DFB68F09A8B7B7BBC6C09 (LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557* __this, const RuntimeMethod* method) 
{
	{
		// public GameObject GameObjectIncandescent { get; set; }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___U3CGameObjectIncandescentU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void UltimateXR.Examples.FullScene.Lab.Laser/LaserBurn::set_GameObjectIncandescent(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LaserBurn_set_GameObjectIncandescent_mDE15F0CD6FB664165D814431C5BEE1E5F4F0FE2C (LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___value0, const RuntimeMethod* method) 
{
	{
		// public GameObject GameObjectIncandescent { get; set; }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___value0;
		__this->___U3CGameObjectIncandescentU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CGameObjectIncandescentU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// UnityEngine.Collider UltimateXR.Examples.FullScene.Lab.Laser/LaserBurn::get_Collider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* LaserBurn_get_Collider_m2F511D05F4090A86846ABF9000FF39BA3ADBF173 (LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557* __this, const RuntimeMethod* method) 
{
	{
		// public Collider Collider { get; set; }
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = __this->___U3CColliderU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void UltimateXR.Examples.FullScene.Lab.Laser/LaserBurn::set_Collider(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LaserBurn_set_Collider_m52437E78A89360AA30F49774BA130F5E59339C1F (LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___value0, const RuntimeMethod* method) 
{
	{
		// public Collider Collider { get; set; }
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___value0;
		__this->___U3CColliderU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CColliderU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// UnityEngine.LineRenderer UltimateXR.Examples.FullScene.Lab.Laser/LaserBurn::get_LineRenderer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* LaserBurn_get_LineRenderer_m0C54B788116EE4B86B0409086E8B6C2E2D93773F (LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557* __this, const RuntimeMethod* method) 
{
	{
		// public LineRenderer LineRenderer { get; set; }
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_0 = __this->___U3CLineRendererU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void UltimateXR.Examples.FullScene.Lab.Laser/LaserBurn::set_LineRenderer(UnityEngine.LineRenderer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LaserBurn_set_LineRenderer_m8E0CC57FEF6467C9926E4B75F1B9AED21AD663DB (LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557* __this, LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* ___value0, const RuntimeMethod* method) 
{
	{
		// public LineRenderer LineRenderer { get; set; }
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_0 = ___value0;
		__this->___U3CLineRendererU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CLineRendererU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// UnityEngine.LineRenderer UltimateXR.Examples.FullScene.Lab.Laser/LaserBurn::get_IncandescentLineRenderer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* LaserBurn_get_IncandescentLineRenderer_m30C81AAE9780422CAC0C96D79D0E113A6F0B7023 (LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557* __this, const RuntimeMethod* method) 
{
	{
		// public LineRenderer IncandescentLineRenderer { get; set; }
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_0 = __this->___U3CIncandescentLineRendererU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void UltimateXR.Examples.FullScene.Lab.Laser/LaserBurn::set_IncandescentLineRenderer(UnityEngine.LineRenderer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LaserBurn_set_IncandescentLineRenderer_m5AF7A2EB97F440559412AF90D2286B3CB3F6D804 (LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557* __this, LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* ___value0, const RuntimeMethod* method) 
{
	{
		// public LineRenderer IncandescentLineRenderer { get; set; }
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_0 = ___value0;
		__this->___U3CIncandescentLineRendererU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CIncandescentLineRendererU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
// System.Collections.Generic.List`1<UnityEngine.Vector3> UltimateXR.Examples.FullScene.Lab.Laser/LaserBurn::get_PathPositions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* LaserBurn_get_PathPositions_m7F8D39BA85C9F72D4D99A56A5A7716E200556734 (LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557* __this, const RuntimeMethod* method) 
{
	{
		// public List<Vector3> PathPositions { get; set; }
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_0 = __this->___U3CPathPositionsU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void UltimateXR.Examples.FullScene.Lab.Laser/LaserBurn::set_PathPositions(System.Collections.Generic.List`1<UnityEngine.Vector3>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LaserBurn_set_PathPositions_m568735D653C1113A82F229D5BF8E6E5C3FA3BE28 (LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557* __this, List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___value0, const RuntimeMethod* method) 
{
	{
		// public List<Vector3> PathPositions { get; set; }
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_0 = ___value0;
		__this->___U3CPathPositionsU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPathPositionsU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
// System.Collections.Generic.List`1<System.Single> UltimateXR.Examples.FullScene.Lab.Laser/LaserBurn::get_PathCreationTimes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* LaserBurn_get_PathCreationTimes_mA4484DEB4636DA4F6F81B5B441B9A5C5E7BC3388 (LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557* __this, const RuntimeMethod* method) 
{
	{
		// public List<float> PathCreationTimes { get; set; }
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_0 = __this->___U3CPathCreationTimesU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void UltimateXR.Examples.FullScene.Lab.Laser/LaserBurn::set_PathCreationTimes(System.Collections.Generic.List`1<System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LaserBurn_set_PathCreationTimes_m78F2EC1D5F07BA0DC59B9320251D3F362F53085C (LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557* __this, List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* ___value0, const RuntimeMethod* method) 
{
	{
		// public List<float> PathCreationTimes { get; set; }
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_0 = ___value0;
		__this->___U3CPathCreationTimesU3Ek__BackingField_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPathCreationTimesU3Ek__BackingField_6), (void*)L_0);
		return;
	}
}
// UnityEngine.Vector3 UltimateXR.Examples.FullScene.Lab.Laser/LaserBurn::get_LastNormal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 LaserBurn_get_LastNormal_m2A525EA2FA754C2DBD6F91792ECD6F4229410DBB (LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 LastNormal { get; set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___U3CLastNormalU3Ek__BackingField_7;
		return L_0;
	}
}
// System.Void UltimateXR.Examples.FullScene.Lab.Laser/LaserBurn::set_LastNormal(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LaserBurn_set_LastNormal_mBCF9EDF824414D2F0410E06E1B75B411D3F2A78D (LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	{
		// public Vector3 LastNormal { get; set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		__this->___U3CLastNormalU3Ek__BackingField_7 = L_0;
		return;
	}
}
// System.Void UltimateXR.Examples.FullScene.Lab.Laser/LaserBurn::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LaserBurn__ctor_mC33119BD53F5EDB8977346E5F95A31DB661CAB32 (LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Single UltimateXR.Examples.FullScene.Lab.LightBulb::get_Intensity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LightBulb_get_Intensity_mD4E3C66ED92979EEFFD2FD4256113265FDDACCD7 (LightBulb_tD2997DB52DC01475297BAF83A889E14D2913D473* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInParent_TisLamp_t17C08BD87F9AAA690D376991BEC03122E7B9124A_m4B75357CA1F88009E0615F17F7F30608C070F868_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// if (_grabbableObject.CurrentAnchor == null)
		UxrGrabbableObject_tCA9C5B90AC9CB9830D3D50AE51F7FF342511E3BC* L_0 = __this->____grabbableObject_28;
		NullCheck(L_0);
		UxrGrabbableObjectAnchor_tE7110AF7891C09542149FC793D1C0C9A9D95F66A* L_1;
		L_1 = UxrGrabbableObject_get_CurrentAnchor_mFAF2BAAB5BC5FEE894E0EB4874ECD590CD0284BD_inline(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		// return 0.0f;
		return (0.0f);
	}

IL_0019:
	{
		// if (_grabbableObject.CurrentAnchor.GetComponentInParent<Lamp>())
		UxrGrabbableObject_tCA9C5B90AC9CB9830D3D50AE51F7FF342511E3BC* L_3 = __this->____grabbableObject_28;
		NullCheck(L_3);
		UxrGrabbableObjectAnchor_tE7110AF7891C09542149FC793D1C0C9A9D95F66A* L_4;
		L_4 = UxrGrabbableObject_get_CurrentAnchor_mFAF2BAAB5BC5FEE894E0EB4874ECD590CD0284BD_inline(L_3, NULL);
		NullCheck(L_4);
		Lamp_t17C08BD87F9AAA690D376991BEC03122E7B9124A* L_5;
		L_5 = Component_GetComponentInParent_TisLamp_t17C08BD87F9AAA690D376991BEC03122E7B9124A_m4B75357CA1F88009E0615F17F7F30608C070F868(L_4, Component_GetComponentInParent_TisLamp_t17C08BD87F9AAA690D376991BEC03122E7B9124A_m4B75357CA1F88009E0615F17F7F30608C070F868_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_5, NULL);
		if (!L_6)
		{
			goto IL_008d;
		}
	}
	{
		// if (_isFaulty)
		bool L_7 = __this->____isFaulty_30;
		if (!L_7)
		{
			goto IL_0086;
		}
	}
	{
		// float noise = Mathf.PerlinNoise(_randX + Time.time * 20.0f, _randY * 10.0f);
		float L_8 = __this->____randX_34;
		float L_9;
		L_9 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_10 = __this->____randY_35;
		float L_11;
		L_11 = Mathf_PerlinNoise_mAB0E53C29FE95469CF303364910AD0D8662A9A6A(((float)il2cpp_codegen_add(L_8, ((float)il2cpp_codegen_multiply(L_9, (20.0f))))), ((float)il2cpp_codegen_multiply(L_10, (10.0f))), NULL);
		V_0 = L_11;
		// if (noise > 0.66f)
		float L_12 = V_0;
		if ((!(((float)L_12) > ((float)(0.660000026f)))))
		{
			goto IL_006b;
		}
	}
	{
		// return _lightIntensity;
		float L_13 = __this->____lightIntensity_29;
		return L_13;
	}

IL_006b:
	{
		// if (noise > 0.16f)
		float L_14 = V_0;
		if ((!(((float)L_14) > ((float)(0.159999996f)))))
		{
			goto IL_0079;
		}
	}
	{
		// return 0.0f;
		return (0.0f);
	}

IL_0079:
	{
		// return _lightIntensity * 0.5f;
		float L_15 = __this->____lightIntensity_29;
		return ((float)il2cpp_codegen_multiply(L_15, (0.5f)));
	}

IL_0086:
	{
		// return _lightIntensity;
		float L_16 = __this->____lightIntensity_29;
		return L_16;
	}

IL_008d:
	{
		// return 0.0f;
		return (0.0f);
	}
}
// System.Void UltimateXR.Examples.FullScene.Lab.LightBulb::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightBulb_Awake_m1F949D198EC6CEE17DD40CC4091371D92F6BA78C (LightBulb_tD2997DB52DC01475297BAF83A889E14D2913D473* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* V_0 = NULL;
	{
		// base.Awake();
		UxrComponent_Awake_m99D44E2A1351BB489585DBBD619F82CCAE366C24(__this, NULL);
		// Renderer renderer = GetComponent<Renderer>();
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_0;
		L_0 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(__this, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		V_0 = L_0;
		// if (renderer)
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_1, NULL);
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		// _material = renderer.material;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_3 = V_0;
		NullCheck(L_3);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4;
		L_4 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_3, NULL);
		__this->____material_33 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____material_33), (void*)L_4);
	}

IL_0021:
	{
		// _randX = Random.value;
		float L_5;
		L_5 = Random_get_value_m2CEA87FADF5222EF9E13D32695F15E2BA282E24B(NULL);
		__this->____randX_34 = L_5;
		// _randY = Random.value;
		float L_6;
		L_6 = Random_get_value_m2CEA87FADF5222EF9E13D32695F15E2BA282E24B(NULL);
		__this->____randY_35 = L_6;
		// }
		return;
	}
}
// System.Void UltimateXR.Examples.FullScene.Lab.LightBulb::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightBulb_Update_m80163E72081CCDEE009C9DFE4728A3A02EE3748F (LightBulb_tD2997DB52DC01475297BAF83A889E14D2913D473* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB92EF51E45166C91E2762DB6C9F27C8BD6EBE466);
		s_Il2CppMethodInitialized = true;
	}
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (_material && _grabbableObject && _lightIntensity > 0.0f)
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->____material_33;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (!L_1)
		{
			goto IL_0057;
		}
	}
	{
		UxrGrabbableObject_tCA9C5B90AC9CB9830D3D50AE51F7FF342511E3BC* L_2 = __this->____grabbableObject_28;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_2, NULL);
		if (!L_3)
		{
			goto IL_0057;
		}
	}
	{
		float L_4 = __this->____lightIntensity_29;
		if ((!(((float)L_4) > ((float)(0.0f)))))
		{
			goto IL_0057;
		}
	}
	{
		// Color emissiveColor = Color.Lerp(_emissiveDisabled, _emissiveEnabled, Intensity / _lightIntensity);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5 = __this->____emissiveDisabled_31;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = __this->____emissiveEnabled_32;
		float L_7;
		L_7 = LightBulb_get_Intensity_mD4E3C66ED92979EEFFD2FD4256113265FDDACCD7(__this, NULL);
		float L_8 = __this->____lightIntensity_29;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9;
		L_9 = Color_Lerp_mE79F87889843ECDC188E4CB5B5E1F1B2256E5EBE_inline(L_5, L_6, ((float)(L_7/L_8)), NULL);
		V_0 = L_9;
		// _material.SetColor(UxrConstants.Shaders.EmissionColorVarName, emissiveColor);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_10 = __this->____material_33;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_11 = V_0;
		NullCheck(L_10);
		Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F(L_10, _stringLiteralB92EF51E45166C91E2762DB6C9F27C8BD6EBE466, L_11, NULL);
	}

IL_0057:
	{
		// }
		return;
	}
}
// System.Void UltimateXR.Examples.FullScene.Lab.LightBulb::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightBulb__ctor_m0B8A106003A7ADD99315A37318CAB726869E956D (LightBulb_tD2997DB52DC01475297BAF83A889E14D2913D473* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UxrComponent_tA6AC6651B5C934626995D87127173273775B1011_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] private Color              _emissiveDisabled = Color.black;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		L_0 = Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline(NULL);
		__this->____emissiveDisabled_31 = L_0;
		// [SerializeField] private Color              _emissiveEnabled  = Color.white;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		L_1 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		__this->____emissiveEnabled_32 = L_1;
		il2cpp_codegen_runtime_class_init_inline(UxrComponent_tA6AC6651B5C934626995D87127173273775B1011_il2cpp_TypeInfo_var);
		UxrComponent__ctor_mAE5417B1456451CA1927CE21DF3731194A1CA64A(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UltimateXR.Examples.FullScene.Lab.SpringOnRelease::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpringOnRelease_Update_mEC56D7DD02330AB5EB9A8C83DC3BEEC9CCF915A2 (SpringOnRelease_tF66652DE3566FD0575E2CD3B417EFF4592105B1B* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// if (_timer > 0.0f)
		float L_0 = __this->____timer_48;
		if ((!(((float)L_0) > ((float)(0.0f)))))
		{
			goto IL_0111;
		}
	}
	{
		// _timer -= Time.deltaTime;
		float L_1 = __this->____timer_48;
		float L_2;
		L_2 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->____timer_48 = ((float)il2cpp_codegen_subtract(L_1, L_2));
		// if (_timer < 0.0f)
		float L_3 = __this->____timer_48;
		if ((!(((float)L_3) < ((float)(0.0f)))))
		{
			goto IL_0052;
		}
	}
	{
		// transform.position    = _releasePosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = __this->____releasePosition_42;
		NullCheck(L_4);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_4, L_5, NULL);
		// transform.eulerAngles = _releaseEuler;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = __this->____releaseEuler_43;
		NullCheck(L_6);
		Transform_set_eulerAngles_m9F0BC484A7915A51FAB87230644229B75BACA004(L_6, L_7, NULL);
		return;
	}

IL_0052:
	{
		// float   t     = (_springDuration - _timer) / _springDuration;
		float L_8 = __this->____springDuration_40;
		float L_9 = __this->____timer_48;
		float L_10 = __this->____springDuration_40;
		V_0 = ((float)(((float)il2cpp_codegen_subtract(L_8, L_9))/L_10));
		// Vector3 delta = _filteredVelocity * Mathf.Sin(-(_springDuration - _timer) * Mathf.PI * 2.0f * _springFrequency) * (1.0f - t);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = __this->____filteredVelocity_46;
		float L_12 = __this->____springDuration_40;
		float L_13 = __this->____timer_48;
		float L_14 = __this->____springFrequency_41;
		float L_15;
		L_15 = sinf(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((-((float)il2cpp_codegen_subtract(L_12, L_13)))), (3.14159274f))), (2.0f))), L_14)));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_11, L_15, NULL);
		float L_17 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_16, ((float)il2cpp_codegen_subtract((1.0f), L_17)), NULL);
		V_1 = L_18;
		// transform.position = _releasePosition + delta;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = __this->____releasePosition_42;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_20, L_21, NULL);
		NullCheck(L_19);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_19, L_22, NULL);
		// Vector3 deltaEuler = _filteredAngularVelocity * Mathf.Sin(-(_springDuration - _timer) * Mathf.PI * 2.0f * _springFrequency) * (1.0f - t);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = __this->____filteredAngularVelocity_47;
		float L_24 = __this->____springDuration_40;
		float L_25 = __this->____timer_48;
		float L_26 = __this->____springFrequency_41;
		float L_27;
		L_27 = sinf(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((-((float)il2cpp_codegen_subtract(L_24, L_25)))), (3.14159274f))), (2.0f))), L_26)));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_23, L_27, NULL);
		float L_29 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_28, ((float)il2cpp_codegen_subtract((1.0f), L_29)), NULL);
		V_2 = L_30;
		// transform.eulerAngles = _releaseEuler + deltaEuler;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_31;
		L_31 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32 = __this->____releaseEuler_43;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		L_34 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_32, L_33, NULL);
		NullCheck(L_31);
		Transform_set_eulerAngles_m9F0BC484A7915A51FAB87230644229B75BACA004(L_31, L_34, NULL);
	}

IL_0111:
	{
		// }
		return;
	}
}
// System.Void UltimateXR.Examples.FullScene.Lab.SpringOnRelease::OnObjectGrabbed(UltimateXR.Manipulation.UxrManipulationEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpringOnRelease_OnObjectGrabbed_m8601AF4FCBCB1D76D1CD18C0050F5538EC6A6273 (SpringOnRelease_tF66652DE3566FD0575E2CD3B417EFF4592105B1B* __this, UxrManipulationEventArgs_tD33E70382345A37F8AE2C8B4A533810FB76EDA78* ___e0, const RuntimeMethod* method) 
{
	{
		// _timer = -1.0f;
		__this->____timer_48 = (-1.0f);
		// }
		return;
	}
}
// System.Void UltimateXR.Examples.FullScene.Lab.SpringOnRelease::OnObjectReleased(UltimateXR.Manipulation.UxrManipulationEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpringOnRelease_OnObjectReleased_m0FD15006035DE5BBD9453972AB8C3472C3C318DF (SpringOnRelease_tF66652DE3566FD0575E2CD3B417EFF4592105B1B* __this, UxrManipulationEventArgs_tD33E70382345A37F8AE2C8B4A533810FB76EDA78* ___e0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B6_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B5_0 = NULL;
	float G_B7_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B7_1 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B11_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B10_0 = NULL;
	float G_B12_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B12_1 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B16_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B15_0 = NULL;
	float G_B17_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B17_1 = NULL;
	{
		// if (e.IsOwnershipChanged)
		UxrManipulationEventArgs_tD33E70382345A37F8AE2C8B4A533810FB76EDA78* L_0 = ___e0;
		NullCheck(L_0);
		bool L_1;
		L_1 = UxrManipulationEventArgs_get_IsOwnershipChanged_mF8E9617E07E36EB8120DD920AA03680BE306EFCD(L_0, NULL);
		if (!L_1)
		{
			goto IL_017a;
		}
	}
	{
		// _releasePosition        = transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		__this->____releasePosition_42 = L_3;
		// _releaseEuler           = transform.eulerAngles;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_4, NULL);
		__this->____releaseEuler_43 = L_5;
		// _releaseVelocity        = e.ReleaseVelocity;
		UxrManipulationEventArgs_tD33E70382345A37F8AE2C8B4A533810FB76EDA78* L_6 = ___e0;
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = UxrManipulationEventArgs_get_ReleaseVelocity_mF4B983EC1189963B18CBAB47EBEB2A362BE40A4B_inline(L_6, NULL);
		__this->____releaseVelocity_44 = L_7;
		// _releaseAngularVelocity = e.ReleaseAngularVelocity;
		UxrManipulationEventArgs_tD33E70382345A37F8AE2C8B4A533810FB76EDA78* L_8 = ___e0;
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = UxrManipulationEventArgs_get_ReleaseAngularVelocity_m21F3AAF359AC33913EDCEF2E1A9D0EAC863FA286_inline(L_8, NULL);
		__this->____releaseAngularVelocity_45 = L_9;
		// _timer                  = _springDuration;
		float L_10 = __this->____springDuration_40;
		__this->____timer_48 = L_10;
		// _filteredVelocity = _releaseVelocity * _springAmplitudeMultiplier;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = __this->____releaseVelocity_44;
		float L_12 = __this->____springAmplitudeMultiplier_36;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_11, L_12, NULL);
		__this->____filteredVelocity_46 = L_13;
		// if (_filteredVelocity.magnitude > _springMaxAmplitude)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_14 = (&__this->____filteredVelocity_46);
		float L_15;
		L_15 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline(L_14, NULL);
		float L_16 = __this->____springMaxAmplitude_37;
		if ((!(((float)L_15) > ((float)L_16))))
		{
			goto IL_0097;
		}
	}
	{
		// _filteredVelocity = _filteredVelocity.normalized * _springMaxAmplitude;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_17 = (&__this->____filteredVelocity_46);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline(L_17, NULL);
		float L_19 = __this->____springMaxAmplitude_37;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_18, L_19, NULL);
		__this->____filteredVelocity_46 = L_20;
	}

IL_0097:
	{
		// _filteredAngularVelocity = _releaseAngularVelocity * _springRotAmplitudeMultiplier;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = __this->____releaseAngularVelocity_45;
		float L_22 = __this->____springRotAmplitudeMultiplier_38;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_21, L_22, NULL);
		__this->____filteredAngularVelocity_47 = L_23;
		// if (Mathf.Abs(_filteredAngularVelocity.x) > _springMaxRotAmplitude)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_24 = (&__this->____filteredAngularVelocity_47);
		float L_25 = L_24->___x_2;
		float L_26;
		L_26 = fabsf(L_25);
		float L_27 = __this->____springMaxRotAmplitude_39;
		if ((!(((float)L_26) > ((float)L_27))))
		{
			goto IL_00f2;
		}
	}
	{
		// _filteredAngularVelocity.x = _filteredAngularVelocity.x > 0.0f ? _springMaxRotAmplitude : -_springMaxRotAmplitude;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_28 = (&__this->____filteredAngularVelocity_47);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_29 = (&__this->____filteredAngularVelocity_47);
		float L_30 = L_29->___x_2;
		G_B5_0 = L_28;
		if ((((float)L_30) > ((float)(0.0f))))
		{
			G_B6_0 = L_28;
			goto IL_00e7;
		}
	}
	{
		float L_31 = __this->____springMaxRotAmplitude_39;
		G_B7_0 = ((-L_31));
		G_B7_1 = G_B5_0;
		goto IL_00ed;
	}

IL_00e7:
	{
		float L_32 = __this->____springMaxRotAmplitude_39;
		G_B7_0 = L_32;
		G_B7_1 = G_B6_0;
	}

IL_00ed:
	{
		G_B7_1->___x_2 = G_B7_0;
	}

IL_00f2:
	{
		// if (Mathf.Abs(_filteredAngularVelocity.y) > _springMaxRotAmplitude)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_33 = (&__this->____filteredAngularVelocity_47);
		float L_34 = L_33->___y_3;
		float L_35;
		L_35 = fabsf(L_34);
		float L_36 = __this->____springMaxRotAmplitude_39;
		if ((!(((float)L_35) > ((float)L_36))))
		{
			goto IL_0136;
		}
	}
	{
		// _filteredAngularVelocity.y = _filteredAngularVelocity.y > 0.0f ? _springMaxRotAmplitude : -_springMaxRotAmplitude;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_37 = (&__this->____filteredAngularVelocity_47);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_38 = (&__this->____filteredAngularVelocity_47);
		float L_39 = L_38->___y_3;
		G_B10_0 = L_37;
		if ((((float)L_39) > ((float)(0.0f))))
		{
			G_B11_0 = L_37;
			goto IL_012b;
		}
	}
	{
		float L_40 = __this->____springMaxRotAmplitude_39;
		G_B12_0 = ((-L_40));
		G_B12_1 = G_B10_0;
		goto IL_0131;
	}

IL_012b:
	{
		float L_41 = __this->____springMaxRotAmplitude_39;
		G_B12_0 = L_41;
		G_B12_1 = G_B11_0;
	}

IL_0131:
	{
		G_B12_1->___y_3 = G_B12_0;
	}

IL_0136:
	{
		// if (Mathf.Abs(_filteredAngularVelocity.z) > _springMaxRotAmplitude)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_42 = (&__this->____filteredAngularVelocity_47);
		float L_43 = L_42->___z_4;
		float L_44;
		L_44 = fabsf(L_43);
		float L_45 = __this->____springMaxRotAmplitude_39;
		if ((!(((float)L_44) > ((float)L_45))))
		{
			goto IL_017a;
		}
	}
	{
		// _filteredAngularVelocity.z = _filteredAngularVelocity.z > 0.0f ? _springMaxRotAmplitude : -_springMaxRotAmplitude;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_46 = (&__this->____filteredAngularVelocity_47);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_47 = (&__this->____filteredAngularVelocity_47);
		float L_48 = L_47->___z_4;
		G_B15_0 = L_46;
		if ((((float)L_48) > ((float)(0.0f))))
		{
			G_B16_0 = L_46;
			goto IL_016f;
		}
	}
	{
		float L_49 = __this->____springMaxRotAmplitude_39;
		G_B17_0 = ((-L_49));
		G_B17_1 = G_B15_0;
		goto IL_0175;
	}

IL_016f:
	{
		float L_50 = __this->____springMaxRotAmplitude_39;
		G_B17_0 = L_50;
		G_B17_1 = G_B16_0;
	}

IL_0175:
	{
		G_B17_1->___z_4 = G_B17_0;
	}

IL_017a:
	{
		// }
		return;
	}
}
// System.Void UltimateXR.Examples.FullScene.Lab.SpringOnRelease::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpringOnRelease__ctor_m7EC50108378A1B49F69760936F6A1CF866D48939 (SpringOnRelease_tF66652DE3566FD0575E2CD3B417EFF4592105B1B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UxrGrabbableObjectComponent_1__ctor_m80875487FAF4430CD13FD80EA5B889A4F4865999_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UxrGrabbableObjectComponent_1__ctor_m80875487FAF4430CD13FD80EA5B889A4F4865999(__this, UxrGrabbableObjectComponent_1__ctor_m80875487FAF4430CD13FD80EA5B889A4F4865999_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean UltimateXR.Examples.FullScene.Doors.ArmoredDoor::get_IsOpeningAllowed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ArmoredDoor_get_IsOpeningAllowed_m7ECD4EA2422D24682E5A57B178B022EBE6DB17FF (ArmoredDoor_t8B70669952214138BE0A4C9684AFA4A01E27E439* __this, const RuntimeMethod* method) 
{
	{
		// protected override bool IsOpeningAllowed => IsAvatarInside(UxrAvatar.LocalAvatar) && !UxrCameraWallFade.IsAvatarPeekingThroughGeometry(UxrAvatar.LocalAvatar);
		UxrAvatar_t880FC3AD5A9A30338CFDF4653C86343B16ACDE79* L_0;
		L_0 = UxrAvatar_get_LocalAvatar_m57231BC6DC4B6F43EC6BB81C005CA50265112F80(NULL);
		bool L_1;
		L_1 = ArmoredDoor_IsAvatarInside_mFFF2E10D711B8AF25D53E7F1EBF5EC21E7456DB7(__this, L_0, NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		UxrAvatar_t880FC3AD5A9A30338CFDF4653C86343B16ACDE79* L_2;
		L_2 = UxrAvatar_get_LocalAvatar_m57231BC6DC4B6F43EC6BB81C005CA50265112F80(NULL);
		bool L_3;
		L_3 = UxrCameraWallFade_IsAvatarPeekingThroughGeometry_m3715904B42C4B39A29F38E042537A732A5A73D99(L_2, NULL);
		return (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
	}

IL_001b:
	{
		return (bool)0;
	}
}
// System.Boolean UltimateXR.Examples.FullScene.Doors.ArmoredDoor::IsAvatarInside(UltimateXR.Avatar.UxrAvatar)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ArmoredDoor_IsAvatarInside_mFFF2E10D711B8AF25D53E7F1EBF5EC21E7456DB7 (ArmoredDoor_t8B70669952214138BE0A4C9684AFA4A01E27E439* __this, UxrAvatar_t880FC3AD5A9A30338CFDF4653C86343B16ACDE79* ___avatar0, const RuntimeMethod* method) 
{
	Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Plane doorPlane = new Plane(FloorCenter.forward, FloorCenter.position);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = AutomaticDoor_get_FloorCenter_m8489CB0A8F41BFCE580B7D670ED420A4360BB4A5(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_0, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = AutomaticDoor_get_FloorCenter_m8489CB0A8F41BFCE580B7D670ED420A4360BB4A5(__this, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		Plane__ctor_m2BFB65EBFF51123791878684ECC375B99FAD10A2((&V_0), L_1, L_3, NULL);
		// return !doorPlane.GetSide(avatar.CameraPosition);
		UxrAvatar_t880FC3AD5A9A30338CFDF4653C86343B16ACDE79* L_4 = ___avatar0;
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = UxrAvatar_get_CameraPosition_m23687EBA4527BB067387C5E7F38E4E1ACDFB08F1(L_4, NULL);
		bool L_6;
		L_6 = Plane_GetSide_mE71EA98675FA3FA61EAF83A79EA61CFCD6F4F3DC((&V_0), L_5, NULL);
		return (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void UltimateXR.Examples.FullScene.Doors.ArmoredDoor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArmoredDoor__ctor_m61582C160DC4411D1E5F8D9263620D78BE6D0C4D (ArmoredDoor_t8B70669952214138BE0A4C9684AFA4A01E27E439* __this, const RuntimeMethod* method) 
{
	{
		AutomaticDoor__ctor_m2745DB463053995F72FCABEA31A05E319C89BF79(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Single UltimateXR.Examples.FullScene.Doors.AutomaticDoor::get_OpenValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AutomaticDoor_get_OpenValue_mDB196EDB79C51FC9E86AA0F578C02D3DA5639B43 (AutomaticDoor_t1300394E882F63AD7DCD712530F55D334F86B1FC* __this, const RuntimeMethod* method) 
{
	{
		// public float OpenValue { get; private set; }
		float L_0 = __this->___U3COpenValueU3Ek__BackingField_41;
		return L_0;
	}
}
// System.Void UltimateXR.Examples.FullScene.Doors.AutomaticDoor::set_OpenValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AutomaticDoor_set_OpenValue_mEB76541384929F0497F01A49F6067009A611A0C2 (AutomaticDoor_t1300394E882F63AD7DCD712530F55D334F86B1FC* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float OpenValue { get; private set; }
		float L_0 = ___value0;
		__this->___U3COpenValueU3Ek__BackingField_41 = L_0;
		return;
	}
}
// System.Boolean UltimateXR.Examples.FullScene.Doors.AutomaticDoor::get_IsOpen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AutomaticDoor_get_IsOpen_m3A140D006C9B9218649846DAEE3AC5060CF4A43B (AutomaticDoor_t1300394E882F63AD7DCD712530F55D334F86B1FC* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsOpen { get; private set; }
		bool L_0 = __this->___U3CIsOpenU3Ek__BackingField_42;
		return L_0;
	}
}
// System.Void UltimateXR.Examples.FullScene.Doors.AutomaticDoor::set_IsOpen(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AutomaticDoor_set_IsOpen_m69E70E2C51265E1DFD6B2A0DB6804511D37AEEB7 (AutomaticDoor_t1300394E882F63AD7DCD712530F55D334F86B1FC* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool IsOpen { get; private set; }
		bool L_0 = ___value0;
		__this->___U3CIsOpenU3Ek__BackingField_42 = L_0;
		return;
	}
}
// System.Void UltimateXR.Examples.FullScene.Doors.AutomaticDoor::OpenDoor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AutomaticDoor_OpenDoor_m08C61FCE0D97C1425EC43536611FD2C0E9D32915 (AutomaticDoor_t1300394E882F63AD7DCD712530F55D334F86B1FC* __this, const RuntimeMethod* method) 
{
	{
		// IsOpen = true;
		AutomaticDoor_set_IsOpen_m69E70E2C51265E1DFD6B2A0DB6804511D37AEEB7_inline(__this, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void UltimateXR.Examples.FullScene.Doors.AutomaticDoor::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AutomaticDoor_Awake_mAF5C796D9FE5635920663DADFD451606A1655A97 (AutomaticDoor_t1300394E882F63AD7DCD712530F55D334F86B1FC* __this, const RuntimeMethod* method) 
{
	{
		// base.Awake();
		UxrComponent_Awake_m99D44E2A1351BB489585DBBD619F82CCAE366C24(__this, NULL);
		// _leftStartLocalPosition  = _leftDoor.localPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->____leftDoor_29;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_0, NULL);
		__this->____leftStartLocalPosition_44 = L_1;
		// _rightStartLocalPosition = _rightDoor.localPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->____rightDoor_30;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_2, NULL);
		__this->____rightStartLocalPosition_45 = L_3;
		// }
		return;
	}
}
// System.Void UltimateXR.Examples.FullScene.Doors.AutomaticDoor::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AutomaticDoor_Update_mC8DAC12A595D3BEA6D1275DA07096C56166F4998 (AutomaticDoor_t1300394E882F63AD7DCD712530F55D334F86B1FC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float G_B12_0 = 0.0f;
	float G_B12_1 = 0.0f;
	AutomaticDoor_t1300394E882F63AD7DCD712530F55D334F86B1FC* G_B12_2 = NULL;
	float G_B11_0 = 0.0f;
	float G_B11_1 = 0.0f;
	AutomaticDoor_t1300394E882F63AD7DCD712530F55D334F86B1FC* G_B11_2 = NULL;
	float G_B13_0 = 0.0f;
	float G_B13_1 = 0.0f;
	float G_B13_2 = 0.0f;
	AutomaticDoor_t1300394E882F63AD7DCD712530F55D334F86B1FC* G_B13_3 = NULL;
	float G_B15_0 = 0.0f;
	float G_B14_0 = 0.0f;
	int32_t G_B16_0 = 0;
	float G_B16_1 = 0.0f;
	{
		// if (UxrAvatar.LocalAvatar == null)
		UxrAvatar_t880FC3AD5A9A30338CFDF4653C86343B16ACDE79* L_0;
		L_0 = UxrAvatar_get_LocalAvatar_m57231BC6DC4B6F43EC6BB81C005CA50265112F80(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		// return;
		return;
	}

IL_000e:
	{
		// float distance = Vector3.Distance(UxrAvatar.LocalAvatar.CameraFloorPosition, FloorCenter.position);
		UxrAvatar_t880FC3AD5A9A30338CFDF4653C86343B16ACDE79* L_2;
		L_2 = UxrAvatar_get_LocalAvatar_m57231BC6DC4B6F43EC6BB81C005CA50265112F80(NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = UxrAvatar_get_CameraFloorPosition_m265C0627D9ED6DE838C832015153149B7E515D9A(L_2, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = AutomaticDoor_get_FloorCenter_m8489CB0A8F41BFCE580B7D670ED420A4360BB4A5(__this, NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		float L_6;
		L_6 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_3, L_5, NULL);
		V_0 = L_6;
		// if (distance < _openDistance && Mathf.Approximately(OpenValue, 0.0f))
		float L_7 = V_0;
		float L_8 = __this->____openDistance_35;
		if ((!(((float)L_7) < ((float)L_8))))
		{
			goto IL_008b;
		}
	}
	{
		float L_9;
		L_9 = AutomaticDoor_get_OpenValue_mDB196EDB79C51FC9E86AA0F578C02D3DA5639B43_inline(__this, NULL);
		bool L_10;
		L_10 = Mathf_Approximately_m1DADD012A8FC82E11FB282501AE2EBBF9A77150B_inline(L_9, (0.0f), NULL);
		if (!L_10)
		{
			goto IL_008b;
		}
	}
	{
		// _openDelayTimer += Time.deltaTime;
		float L_11 = __this->____openDelayTimer_43;
		float L_12;
		L_12 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->____openDelayTimer_43 = ((float)il2cpp_codegen_add(L_11, L_12));
		// if (_openDelayTimer > _openDelaySeconds && IsOpeningAllowed)
		float L_13 = __this->____openDelayTimer_43;
		float L_14 = __this->____openDelaySeconds_33;
		if ((!(((float)L_13) > ((float)L_14))))
		{
			goto IL_00ce;
		}
	}
	{
		bool L_15;
		L_15 = VirtualFuncInvoker0< bool >::Invoke(12 /* System.Boolean UltimateXR.Examples.FullScene.Doors.AutomaticDoor::get_IsOpeningAllowed() */, __this);
		if (!L_15)
		{
			goto IL_00ce;
		}
	}
	{
		// IsOpen = true;
		AutomaticDoor_set_IsOpen_m69E70E2C51265E1DFD6B2A0DB6804511D37AEEB7_inline(__this, (bool)1, NULL);
		// _audioOpen.Play(FloorCenter.position);
		UxrAudioSample_t01A5C41E145D2E83FE924FFFFBBC451376881ED9* L_16 = __this->____audioOpen_39;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = AutomaticDoor_get_FloorCenter_m8489CB0A8F41BFCE580B7D670ED420A4360BB4A5(__this, NULL);
		NullCheck(L_17);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_17, NULL);
		NullCheck(L_16);
		UxrAudioSample_Play_m9D583A9FB6C4D92C0DCA6B1DE3240456A41E81A7(L_16, L_18, NULL);
		goto IL_00ce;
	}

IL_008b:
	{
		// else if (distance > _closeDistance && Mathf.Approximately(OpenValue, 1.0f))
		float L_19 = V_0;
		float L_20 = __this->____closeDistance_36;
		if ((!(((float)L_19) > ((float)L_20))))
		{
			goto IL_00ce;
		}
	}
	{
		float L_21;
		L_21 = AutomaticDoor_get_OpenValue_mDB196EDB79C51FC9E86AA0F578C02D3DA5639B43_inline(__this, NULL);
		bool L_22;
		L_22 = Mathf_Approximately_m1DADD012A8FC82E11FB282501AE2EBBF9A77150B_inline(L_21, (1.0f), NULL);
		if (!L_22)
		{
			goto IL_00ce;
		}
	}
	{
		// IsOpen          = false;
		AutomaticDoor_set_IsOpen_m69E70E2C51265E1DFD6B2A0DB6804511D37AEEB7_inline(__this, (bool)0, NULL);
		// _openDelayTimer = 0.0f;
		__this->____openDelayTimer_43 = (0.0f);
		// _audioClose.Play(FloorCenter.position);
		UxrAudioSample_t01A5C41E145D2E83FE924FFFFBBC451376881ED9* L_23 = __this->____audioClose_40;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24;
		L_24 = AutomaticDoor_get_FloorCenter_m8489CB0A8F41BFCE580B7D670ED420A4360BB4A5(__this, NULL);
		NullCheck(L_24);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_24, NULL);
		NullCheck(L_23);
		UxrAudioSample_Play_m9D583A9FB6C4D92C0DCA6B1DE3240456A41E81A7(L_23, L_25, NULL);
	}

IL_00ce:
	{
		// OpenValue = Mathf.Clamp01(OpenValue + Time.deltaTime * (1.0f / _openDurationSeconds) * (IsOpen ? 1.0f : -1.0f));
		float L_26;
		L_26 = AutomaticDoor_get_OpenValue_mDB196EDB79C51FC9E86AA0F578C02D3DA5639B43_inline(__this, NULL);
		float L_27;
		L_27 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_28 = __this->____openDurationSeconds_34;
		bool L_29;
		L_29 = AutomaticDoor_get_IsOpen_m3A140D006C9B9218649846DAEE3AC5060CF4A43B_inline(__this, NULL);
		G_B11_0 = ((float)il2cpp_codegen_multiply(L_27, ((float)((1.0f)/L_28))));
		G_B11_1 = L_26;
		G_B11_2 = __this;
		if (L_29)
		{
			G_B12_0 = ((float)il2cpp_codegen_multiply(L_27, ((float)((1.0f)/L_28))));
			G_B12_1 = L_26;
			G_B12_2 = __this;
			goto IL_00f6;
		}
	}
	{
		G_B13_0 = (-1.0f);
		G_B13_1 = G_B11_0;
		G_B13_2 = G_B11_1;
		G_B13_3 = G_B11_2;
		goto IL_00fb;
	}

IL_00f6:
	{
		G_B13_0 = (1.0f);
		G_B13_1 = G_B12_0;
		G_B13_2 = G_B12_1;
		G_B13_3 = G_B12_2;
	}

IL_00fb:
	{
		float L_30;
		L_30 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(((float)il2cpp_codegen_add(G_B13_2, ((float)il2cpp_codegen_multiply(G_B13_1, G_B13_0)))), NULL);
		NullCheck(G_B13_3);
		AutomaticDoor_set_OpenValue_mEB76541384929F0497F01A49F6067009A611A0C2_inline(G_B13_3, L_30, NULL);
		// float t = UxrInterpolator.GetInterpolationFactor(OpenValue, IsOpen ? _openEasing : _closeEasing);
		float L_31;
		L_31 = AutomaticDoor_get_OpenValue_mDB196EDB79C51FC9E86AA0F578C02D3DA5639B43_inline(__this, NULL);
		bool L_32;
		L_32 = AutomaticDoor_get_IsOpen_m3A140D006C9B9218649846DAEE3AC5060CF4A43B_inline(__this, NULL);
		G_B14_0 = L_31;
		if (L_32)
		{
			G_B15_0 = L_31;
			goto IL_011d;
		}
	}
	{
		int32_t L_33 = __this->____closeEasing_38;
		G_B16_0 = L_33;
		G_B16_1 = G_B14_0;
		goto IL_0123;
	}

IL_011d:
	{
		int32_t L_34 = __this->____openEasing_37;
		G_B16_0 = L_34;
		G_B16_1 = G_B15_0;
	}

IL_0123:
	{
		float L_35;
		L_35 = UxrInterpolator_GetInterpolationFactor_m8825B361BACFF879FC0EE7578B911F4A695D6AAF(G_B16_1, G_B16_0, 0, (-1.0f), NULL);
		V_1 = L_35;
		// _leftDoor.transform.localPosition  = Vector3.Lerp(_leftStartLocalPosition,  _leftStartLocalPosition + _leftOpenLocalOffset,   t);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_36 = __this->____leftDoor_29;
		NullCheck(L_36);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_37;
		L_37 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_36, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38 = __this->____leftStartLocalPosition_44;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39 = __this->____leftStartLocalPosition_44;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40 = __this->____leftOpenLocalOffset_31;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41;
		L_41 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_39, L_40, NULL);
		float L_42 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43;
		L_43 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_38, L_41, L_42, NULL);
		NullCheck(L_37);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_37, L_43, NULL);
		// _rightDoor.transform.localPosition = Vector3.Lerp(_rightStartLocalPosition, _rightStartLocalPosition + _rightOpenLocalOffset, t);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_44 = __this->____rightDoor_30;
		NullCheck(L_44);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_45;
		L_45 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_44, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46 = __this->____rightStartLocalPosition_45;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47 = __this->____rightStartLocalPosition_45;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_48 = __this->____rightOpenLocalOffset_32;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49;
		L_49 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_47, L_48, NULL);
		float L_50 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_51;
		L_51 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_46, L_49, L_50, NULL);
		NullCheck(L_45);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_45, L_51, NULL);
		// }
		return;
	}
}
// System.Boolean UltimateXR.Examples.FullScene.Doors.AutomaticDoor::get_IsOpeningAllowed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AutomaticDoor_get_IsOpeningAllowed_mE5F7FC90997FE88E9EC3BC1CC52783AFBCB7EAD7 (AutomaticDoor_t1300394E882F63AD7DCD712530F55D334F86B1FC* __this, const RuntimeMethod* method) 
{
	{
		// protected virtual bool IsOpeningAllowed => true;
		return (bool)1;
	}
}
// UnityEngine.Transform UltimateXR.Examples.FullScene.Doors.AutomaticDoor::get_FloorCenter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* AutomaticDoor_get_FloorCenter_m8489CB0A8F41BFCE580B7D670ED420A4360BB4A5 (AutomaticDoor_t1300394E882F63AD7DCD712530F55D334F86B1FC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected Transform FloorCenter => _floorCenter != null ? _floorCenter : transform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->____floorCenter_28;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		return L_2;
	}

IL_0015:
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = __this->____floorCenter_28;
		return L_3;
	}
}
// System.Void UltimateXR.Examples.FullScene.Doors.AutomaticDoor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AutomaticDoor__ctor_m2745DB463053995F72FCABEA31A05E319C89BF79 (AutomaticDoor_t1300394E882F63AD7DCD712530F55D334F86B1FC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UxrComponent_tA6AC6651B5C934626995D87127173273775B1011_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] private float          _openDurationSeconds = 0.8f;
		__this->____openDurationSeconds_34 = (0.800000012f);
		// [SerializeField] private float          _openDistance        = 1.5f;
		__this->____openDistance_35 = (1.5f);
		// [SerializeField] private float          _closeDistance       = 2.0f;
		__this->____closeDistance_36 = (2.0f);
		// [SerializeField] private UxrEasing      _openEasing          = UxrEasing.EaseOutCubic;
		__this->____openEasing_37 = ((int32_t)10);
		// [SerializeField] private UxrEasing      _closeEasing         = UxrEasing.EaseInCubic;
		__this->____closeEasing_38 = ((int32_t)9);
		il2cpp_codegen_runtime_class_init_inline(UxrComponent_tA6AC6651B5C934626995D87127173273775B1011_il2cpp_TypeInfo_var);
		UxrComponent__ctor_mAE5417B1456451CA1927CE21DF3731194A1CA64A(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UltimateXR.Examples.FullScene.Doors.HandScanner::add_HandScanned(System.Action`3<UltimateXR.Avatar.UxrAvatar,UltimateXR.Core.UxrHandSide,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandScanner_add_HandScanned_m40FF14D021687AA16052E7B242434277EC215FE8 (HandScanner_t42A4D993924FECBCA1CFEA7D1E0335ADAB95D3D6* __this, Action_3_t5D0E6372A9C59C311A4BF2EE5AD6784EB7F2913C* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_3_t5D0E6372A9C59C311A4BF2EE5AD6784EB7F2913C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_3_t5D0E6372A9C59C311A4BF2EE5AD6784EB7F2913C* V_0 = NULL;
	Action_3_t5D0E6372A9C59C311A4BF2EE5AD6784EB7F2913C* V_1 = NULL;
	Action_3_t5D0E6372A9C59C311A4BF2EE5AD6784EB7F2913C* V_2 = NULL;
	{
		Action_3_t5D0E6372A9C59C311A4BF2EE5AD6784EB7F2913C* L_0 = __this->___HandScanned_47;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_3_t5D0E6372A9C59C311A4BF2EE5AD6784EB7F2913C* L_1 = V_0;
		V_1 = L_1;
		Action_3_t5D0E6372A9C59C311A4BF2EE5AD6784EB7F2913C* L_2 = V_1;
		Action_3_t5D0E6372A9C59C311A4BF2EE5AD6784EB7F2913C* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_3_t5D0E6372A9C59C311A4BF2EE5AD6784EB7F2913C*)Castclass((RuntimeObject*)L_4, Action_3_t5D0E6372A9C59C311A4BF2EE5AD6784EB7F2913C_il2cpp_TypeInfo_var));
		Action_3_t5D0E6372A9C59C311A4BF2EE5AD6784EB7F2913C** L_5 = (&__this->___HandScanned_47);
		Action_3_t5D0E6372A9C59C311A4BF2EE5AD6784EB7F2913C* L_6 = V_2;
		Action_3_t5D0E6372A9C59C311A4BF2EE5AD6784EB7F2913C* L_7 = V_1;
		Action_3_t5D0E6372A9C59C311A4BF2EE5AD6784EB7F2913C* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_3_t5D0E6372A9C59C311A4BF2EE5AD6784EB7F2913C*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_3_t5D0E6372A9C59C311A4BF2EE5AD6784EB7F2913C* L_9 = V_0;
		Action_3_t5D0E6372A9C59C311A4BF2EE5AD6784EB7F2913C* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_3_t5D0E6372A9C59C311A4BF2EE5AD6784EB7F2913C*)L_9) == ((RuntimeObject*)(Action_3_t5D0E6372A9C59C311A4BF2EE5AD6784EB7F2913C*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UltimateXR.Examples.FullScene.Doors.HandScanner::remove_HandScanned(System.Action`3<UltimateXR.Avatar.UxrAvatar,UltimateXR.Core.UxrHandSide,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandScanner_remove_HandScanned_mD6DE066A896297B45C987692251AC5F3BF0EE122 (HandScanner_t42A4D993924FECBCA1CFEA7D1E0335ADAB95D3D6* __this, Action_3_t5D0E6372A9C59C311A4BF2EE5AD6784EB7F2913C* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_3_t5D0E6372A9C59C311A4BF2EE5AD6784EB7F2913C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_3_t5D0E6372A9C59C311A4BF2EE5AD6784EB7F2913C* V_0 = NULL;
	Action_3_t5D0E6372A9C59C311A4BF2EE5AD6784EB7F2913C* V_1 = NULL;
	Action_3_t5D0E6372A9C59C311A4BF2EE5AD6784EB7F2913C* V_2 = NULL;
	{
		Action_3_t5D0E6372A9C59C311A4BF2EE5AD6784EB7F2913C* L_0 = __this->___HandScanned_47;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_3_t5D0E6372A9C59C311A4BF2EE5AD6784EB7F2913C* L_1 = V_0;
		V_1 = L_1;
		Action_3_t5D0E6372A9C59C311A4BF2EE5AD6784EB7F2913C* L_2 = V_1;
		Action_3_t5D0E6372A9C59C311A4BF2EE5AD6784EB7F2913C* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_3_t5D0E6372A9C59C311A4BF2EE5AD6784EB7F2913C*)Castclass((RuntimeObject*)L_4, Action_3_t5D0E6372A9C59C311A4BF2EE5AD6784EB7F2913C_il2cpp_TypeInfo_var));
		Action_3_t5D0E6372A9C59C311A4BF2EE5AD6784EB7F2913C** L_5 = (&__this->___HandScanned_47);
		Action_3_t5D0E6372A9C59C311A4BF2EE5AD6784EB7F2913C* L_6 = V_2;
		Action_3_t5D0E6372A9C59C311A4BF2EE5AD6784EB7F2913C* L_7 = V_1;
		Action_3_t5D0E6372A9C59C311A4BF2EE5AD6784EB7F2913C* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_3_t5D0E6372A9C59C311A4BF2EE5AD6784EB7F2913C*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_3_t5D0E6372A9C59C311A4BF2EE5AD6784EB7F2913C* L_9 = V_0;
		Action_3_t5D0E6372A9C59C311A4BF2EE5AD6784EB7F2913C* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_3_t5D0E6372A9C59C311A4BF2EE5AD6784EB7F2913C*)L_9) == ((RuntimeObject*)(Action_3_t5D0E6372A9C59C311A4BF2EE5AD6784EB7F2913C*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UltimateXR.Examples.FullScene.Doors.HandScanner::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandScanner_Awake_m758A9378821F1DB715E1447A6013377CF2223D94 (HandScanner_t42A4D993924FECBCA1CFEA7D1E0335ADAB95D3D6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mB608316C3D0F44AB60BB05CC6676E509D51F7AC2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mD136E37F696C00A3A1D4F65724ACAE903E385181_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// base.Awake();
		UxrComponent_Awake_m99D44E2A1351BB489585DBBD619F82CCAE366C24(__this, NULL);
		// _colorValid   = _validLight.sharedMaterial.GetColor(UxrConstants.Shaders.StandardColorVarName);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_0 = __this->____validLight_29;
		NullCheck(L_0);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_1;
		L_1 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_0, NULL);
		NullCheck(L_1);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2;
		L_2 = Material_GetColor_mAC702C70081A597DD2AA2F4627B1A1C65DDF6609(L_1, _stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE, NULL);
		__this->____colorValid_54 = L_2;
		// _colorInvalid = _invalidLight.sharedMaterial.GetColor(UxrConstants.Shaders.StandardColorVarName);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_3 = __this->____invalidLight_30;
		NullCheck(L_3);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4;
		L_4 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_3, NULL);
		NullCheck(L_4);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5;
		L_5 = Material_GetColor_mAC702C70081A597DD2AA2F4627B1A1C65DDF6609(L_4, _stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE, NULL);
		__this->____colorInvalid_55 = L_5;
		// _handSide     = _defaultHandSide;
		int32_t L_6 = __this->____defaultHandSide_40;
		__this->____handSide_53 = L_6;
		// _beamScale    = _scannerBeam.transform.localScale;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_7 = __this->____scannerBeam_31;
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_7, NULL);
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_8, NULL);
		__this->____beamScale_52 = L_9;
		// _beams.Add(_scannerBeam);
		List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93* L_10 = __this->____beams_49;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_11 = __this->____scannerBeam_31;
		NullCheck(L_10);
		List_1_Add_mB608316C3D0F44AB60BB05CC6676E509D51F7AC2_inline(L_10, L_11, List_1_Add_mB608316C3D0F44AB60BB05CC6676E509D51F7AC2_RuntimeMethod_var);
		// for (int i = 0; i < _beamCount - 1; ++i)
		V_0 = 0;
		goto IL_00c7;
	}

IL_0073:
	{
		// _beams.Add(Instantiate(_scannerBeam.gameObject, _scannerBeam.transform.position, _scannerBeam.transform.rotation, _scannerBeam.transform.parent).GetComponent<Renderer>());
		List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93* L_12 = __this->____beams_49;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_13 = __this->____scannerBeam_31;
		NullCheck(L_13);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14;
		L_14 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_13, NULL);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_15 = __this->____scannerBeam_31;
		NullCheck(L_15);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_15, NULL);
		NullCheck(L_16);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_16, NULL);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_18 = __this->____scannerBeam_31;
		NullCheck(L_18);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_18, NULL);
		NullCheck(L_19);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20;
		L_20 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_19, NULL);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_21 = __this->____scannerBeam_31;
		NullCheck(L_21);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_21, NULL);
		NullCheck(L_22);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23;
		L_23 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_22, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24;
		L_24 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mD136E37F696C00A3A1D4F65724ACAE903E385181(L_14, L_17, L_20, L_23, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mD136E37F696C00A3A1D4F65724ACAE903E385181_RuntimeMethod_var);
		NullCheck(L_24);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_25;
		L_25 = GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A(L_24, GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var);
		NullCheck(L_12);
		List_1_Add_mB608316C3D0F44AB60BB05CC6676E509D51F7AC2_inline(L_12, L_25, List_1_Add_mB608316C3D0F44AB60BB05CC6676E509D51F7AC2_RuntimeMethod_var);
		// for (int i = 0; i < _beamCount - 1; ++i)
		int32_t L_26 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_26, 1));
	}

IL_00c7:
	{
		// for (int i = 0; i < _beamCount - 1; ++i)
		int32_t L_27 = V_0;
		int32_t L_28 = __this->____beamCount_34;
		if ((((int32_t)L_27) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_28, 1)))))
		{
			goto IL_0073;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UltimateXR.Examples.FullScene.Doors.HandScanner::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandScanner_OnEnable_mAE7BF33F9824B287AC8EF6A85BE4C9731507094F (HandScanner_t42A4D993924FECBCA1CFEA7D1E0335ADAB95D3D6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorExt_t75FA157B9D554C8C009E7747FB73C6CA15BAC902_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* G_B2_0 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B2_1 = NULL;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* G_B1_0 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B1_1 = NULL;
	float G_B3_0 = 0.0f;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* G_B3_1 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B3_2 = NULL;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* G_B5_0 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B5_1 = NULL;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* G_B4_0 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B4_1 = NULL;
	float G_B6_0 = 0.0f;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* G_B6_1 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B6_2 = NULL;
	{
		// base.OnEnable();
		UxrComponent_OnEnable_mB30EBD913BFCBA1B1B248C0C4E93F3E63136DFF6(__this, NULL);
		// _scanReady            = true;
		__this->____scanReady_50 = (bool)1;
		// _validLight.enabled   = false;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_0 = __this->____validLight_29;
		NullCheck(L_0);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_0, (bool)0, NULL);
		// _invalidLight.enabled = false;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_1 = __this->____invalidLight_30;
		NullCheck(L_1);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_1, (bool)0, NULL);
		// _handRendererLeft.enabled         = _defaultHandSide == UxrHandSide.Left;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_2 = __this->____handRendererLeft_38;
		int32_t L_3 = __this->____defaultHandSide_40;
		NullCheck(L_2);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_2, (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0), NULL);
		// _handRendererRight.enabled        = _defaultHandSide == UxrHandSide.Right;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_4 = __this->____handRendererRight_39;
		int32_t L_5 = __this->____defaultHandSide_40;
		NullCheck(L_4);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_4, (bool)((((int32_t)L_5) == ((int32_t)1))? 1 : 0), NULL);
		// _handRendererLeft.material.color  = ColorExt.ColorAlpha(_handRendererLeft.material.color,  _defaultHandSide == UxrHandSide.Left ? 1.0f : 0.0f);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_6 = __this->____handRendererLeft_38;
		NullCheck(L_6);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_7;
		L_7 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_6, NULL);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_8 = __this->____handRendererLeft_38;
		NullCheck(L_8);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_9;
		L_9 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_8, NULL);
		NullCheck(L_9);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_10;
		L_10 = Material_get_color_mA4B7D4B96200D9D8B4F36BF19957E9DA81071DBB(L_9, NULL);
		V_0 = L_10;
		int32_t L_11 = __this->____defaultHandSide_40;
		G_B1_0 = (&V_0);
		G_B1_1 = L_7;
		if (!L_11)
		{
			G_B2_0 = (&V_0);
			G_B2_1 = L_7;
			goto IL_007a;
		}
	}
	{
		G_B3_0 = (0.0f);
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_007f;
	}

IL_007a:
	{
		G_B3_0 = (1.0f);
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_007f:
	{
		il2cpp_codegen_runtime_class_init_inline(ColorExt_t75FA157B9D554C8C009E7747FB73C6CA15BAC902_il2cpp_TypeInfo_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12;
		L_12 = ColorExt_ColorAlpha_m44D92977457C75B3453FF37F47B10952C5F347D6(G_B3_1, G_B3_0, NULL);
		NullCheck(G_B3_2);
		Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D(G_B3_2, L_12, NULL);
		// _handRendererRight.material.color = ColorExt.ColorAlpha(_handRendererRight.material.color, _defaultHandSide == UxrHandSide.Right ? 1.0f : 0.0f);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_13 = __this->____handRendererRight_39;
		NullCheck(L_13);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_14;
		L_14 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_13, NULL);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_15 = __this->____handRendererRight_39;
		NullCheck(L_15);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_16;
		L_16 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_15, NULL);
		NullCheck(L_16);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_17;
		L_17 = Material_get_color_mA4B7D4B96200D9D8B4F36BF19957E9DA81071DBB(L_16, NULL);
		V_0 = L_17;
		int32_t L_18 = __this->____defaultHandSide_40;
		G_B4_0 = (&V_0);
		G_B4_1 = L_14;
		if ((((int32_t)L_18) == ((int32_t)1)))
		{
			G_B5_0 = (&V_0);
			G_B5_1 = L_14;
			goto IL_00b7;
		}
	}
	{
		G_B6_0 = (0.0f);
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		goto IL_00bc;
	}

IL_00b7:
	{
		G_B6_0 = (1.0f);
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
	}

IL_00bc:
	{
		il2cpp_codegen_runtime_class_init_inline(ColorExt_t75FA157B9D554C8C009E7747FB73C6CA15BAC902_il2cpp_TypeInfo_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_19;
		L_19 = ColorExt_ColorAlpha_m44D92977457C75B3453FF37F47B10952C5F347D6(G_B6_1, G_B6_0, NULL);
		NullCheck(G_B6_2);
		Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D(G_B6_2, L_19, NULL);
		// EnableBeams(false);
		HandScanner_EnableBeams_m6687395CE93F716625110AADC3A08FC11F0AA4F2(__this, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void UltimateXR.Examples.FullScene.Doors.HandScanner::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandScanner_OnDisable_m242A4280767365CEE04D7DE37D678112808FDC5A (HandScanner_t42A4D993924FECBCA1CFEA7D1E0335ADAB95D3D6* __this, const RuntimeMethod* method) 
{
	{
		// base.OnEnable();
		UxrComponent_OnEnable_mB30EBD913BFCBA1B1B248C0C4E93F3E63136DFF6(__this, NULL);
		// _scanReady            = true;
		__this->____scanReady_50 = (bool)1;
		// _validLight.enabled   = false;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_0 = __this->____validLight_29;
		NullCheck(L_0);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_0, (bool)0, NULL);
		// _invalidLight.enabled = false;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_1 = __this->____invalidLight_30;
		NullCheck(L_1);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_1, (bool)0, NULL);
		// EnableBeams(false);
		HandScanner_EnableBeams_m6687395CE93F716625110AADC3A08FC11F0AA4F2(__this, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void UltimateXR.Examples.FullScene.Doors.HandScanner::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandScanner_Update_mE948969E8BE1D2A775EB5ACD9107ED9011C18099 (HandScanner_t42A4D993924FECBCA1CFEA7D1E0335ADAB95D3D6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorExt_t75FA157B9D554C8C009E7747FB73C6CA15BAC902_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mEDD6D3CBA7B18AB7F0E8E301BF83BF3C114E5C70_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m2A866E5FF9CD642C76D27133D3FCEC2F15033DA2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3Ext_tE79960C7FB3A6DFB9D509BE3E9DBF1A9A6F2D52D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_7;
	memset((&V_7), 0, sizeof(V_7));
	float V_8 = 0.0f;
	float G_B15_0 = 0.0f;
	float G_B14_0 = 0.0f;
	float G_B16_0 = 0.0f;
	float G_B16_1 = 0.0f;
	{
		// if (UxrAvatar.LocalAvatar == null || !_scanReady)
		UxrAvatar_t880FC3AD5A9A30338CFDF4653C86343B16ACDE79* L_0;
		L_0 = UxrAvatar_get_LocalAvatar_m57231BC6DC4B6F43EC6BB81C005CA50265112F80(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		bool L_2 = __this->____scanReady_50;
		if (L_2)
		{
			goto IL_0016;
		}
	}

IL_0015:
	{
		// return;
		return;
	}

IL_0016:
	{
		// if (_scanTimer < 0.0f)
		float L_3 = __this->____scanTimer_51;
		if ((!(((float)L_3) < ((float)(0.0f)))))
		{
			goto IL_00ef;
		}
	}
	{
		// if (_armoredDoor != null && _armoredDoor.IsOpen)
		ArmoredDoor_t8B70669952214138BE0A4C9684AFA4A01E27E439* L_4 = __this->____armoredDoor_28;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_0044;
		}
	}
	{
		ArmoredDoor_t8B70669952214138BE0A4C9684AFA4A01E27E439* L_6 = __this->____armoredDoor_28;
		NullCheck(L_6);
		bool L_7;
		L_7 = AutomaticDoor_get_IsOpen_m3A140D006C9B9218649846DAEE3AC5060CF4A43B_inline(L_6, NULL);
		if (L_7)
		{
			goto IL_02c8;
		}
	}

IL_0044:
	{
		// if (UxrAvatar.LocalAvatar.GetHandBone(UxrHandSide.Left).position.IsInsideBox(_handBoxValidPos))
		UxrAvatar_t880FC3AD5A9A30338CFDF4653C86343B16ACDE79* L_8;
		L_8 = UxrAvatar_get_LocalAvatar_m57231BC6DC4B6F43EC6BB81C005CA50265112F80(NULL);
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = UxrAvatar_GetHandBone_m16098C4C14A7BCCC7823F3F0B71F703C4249A7EE(L_8, 0, NULL);
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_9, NULL);
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_11 = __this->____handBoxValidPos_41;
		il2cpp_codegen_initobj((&V_0), sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Vector3Ext_tE79960C7FB3A6DFB9D509BE3E9DBF1A9A6F2D52D_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = Vector3Ext_IsInsideBox_m7E8797A0592E772EDC8A64677F56CEE4E82F4B8E(L_10, L_11, L_12, (bool)1, NULL);
		if (!L_13)
		{
			goto IL_0098;
		}
	}
	{
		// _scanTimer = 0.0f;
		__this->____scanTimer_51 = (0.0f);
		// _handSide  = UxrHandSide.Left;
		__this->____handSide_53 = 0;
		// _audioScan.Play(transform.position);
		UxrAudioSample_t01A5C41E145D2E83FE924FFFFBBC451376881ED9* L_14 = __this->____audioScan_44;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_15);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_15, NULL);
		NullCheck(L_14);
		UxrAudioSample_Play_m9D583A9FB6C4D92C0DCA6B1DE3240456A41E81A7(L_14, L_16, NULL);
		goto IL_02c8;
	}

IL_0098:
	{
		// else if (UxrAvatar.LocalAvatar.GetHandBone(UxrHandSide.Right).position.IsInsideBox(_handBoxValidPos))
		UxrAvatar_t880FC3AD5A9A30338CFDF4653C86343B16ACDE79* L_17;
		L_17 = UxrAvatar_get_LocalAvatar_m57231BC6DC4B6F43EC6BB81C005CA50265112F80(NULL);
		NullCheck(L_17);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = UxrAvatar_GetHandBone_m16098C4C14A7BCCC7823F3F0B71F703C4249A7EE(L_17, 1, NULL);
		NullCheck(L_18);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_18, NULL);
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_20 = __this->____handBoxValidPos_41;
		il2cpp_codegen_initobj((&V_0), sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Vector3Ext_tE79960C7FB3A6DFB9D509BE3E9DBF1A9A6F2D52D_il2cpp_TypeInfo_var);
		bool L_22;
		L_22 = Vector3Ext_IsInsideBox_m7E8797A0592E772EDC8A64677F56CEE4E82F4B8E(L_19, L_20, L_21, (bool)1, NULL);
		if (!L_22)
		{
			goto IL_02c8;
		}
	}
	{
		// _scanTimer = 0.0f;
		__this->____scanTimer_51 = (0.0f);
		// _handSide  = UxrHandSide.Right;
		__this->____handSide_53 = 1;
		// _audioScan.Play(transform.position);
		UxrAudioSample_t01A5C41E145D2E83FE924FFFFBBC451376881ED9* L_23 = __this->____audioScan_44;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24;
		L_24 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_24);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_24, NULL);
		NullCheck(L_23);
		UxrAudioSample_Play_m9D583A9FB6C4D92C0DCA6B1DE3240456A41E81A7(L_23, L_25, NULL);
		goto IL_02c8;
	}

IL_00ef:
	{
		// if (UxrAvatar.LocalAvatar.GetHandBone(_handSide).position.IsInsideBox(_handBoxValidPos))
		UxrAvatar_t880FC3AD5A9A30338CFDF4653C86343B16ACDE79* L_26;
		L_26 = UxrAvatar_get_LocalAvatar_m57231BC6DC4B6F43EC6BB81C005CA50265112F80(NULL);
		int32_t L_27 = __this->____handSide_53;
		NullCheck(L_26);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_28;
		L_28 = UxrAvatar_GetHandBone_m16098C4C14A7BCCC7823F3F0B71F703C4249A7EE(L_26, L_27, NULL);
		NullCheck(L_28);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_28, NULL);
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_30 = __this->____handBoxValidPos_41;
		il2cpp_codegen_initobj((&V_0), sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Vector3Ext_tE79960C7FB3A6DFB9D509BE3E9DBF1A9A6F2D52D_il2cpp_TypeInfo_var);
		bool L_32;
		L_32 = Vector3Ext_IsInsideBox_m7E8797A0592E772EDC8A64677F56CEE4E82F4B8E(L_29, L_30, L_31, (bool)1, NULL);
		if (!L_32)
		{
			goto IL_02b6;
		}
	}
	{
		// if (!UxrAvatar.LocalAvatar.GetHandBone(UxrUtils.GetOppositeSide(_handSide)).position.IsInsideBox(_handBoxValidPos))
		UxrAvatar_t880FC3AD5A9A30338CFDF4653C86343B16ACDE79* L_33;
		L_33 = UxrAvatar_get_LocalAvatar_m57231BC6DC4B6F43EC6BB81C005CA50265112F80(NULL);
		int32_t L_34 = __this->____handSide_53;
		int32_t L_35;
		L_35 = UxrUtils_GetOppositeSide_m6D94F1B84A2E1DD36FD24C7AF06218532D521FEC(L_34, NULL);
		NullCheck(L_33);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_36;
		L_36 = UxrAvatar_GetHandBone_m16098C4C14A7BCCC7823F3F0B71F703C4249A7EE(L_33, L_35, NULL);
		NullCheck(L_36);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		L_37 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_36, NULL);
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_38 = __this->____handBoxValidPos_41;
		il2cpp_codegen_initobj((&V_0), sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Vector3Ext_tE79960C7FB3A6DFB9D509BE3E9DBF1A9A6F2D52D_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Vector3Ext_IsInsideBox_m7E8797A0592E772EDC8A64677F56CEE4E82F4B8E(L_37, L_38, L_39, (bool)1, NULL);
		if (L_40)
		{
			goto IL_02a2;
		}
	}
	{
		// _scanTimer += Time.deltaTime;
		float L_41 = __this->____scanTimer_51;
		float L_42;
		L_42 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->____scanTimer_51 = ((float)il2cpp_codegen_add(L_41, L_42));
		// EnableBeams(true);
		HandScanner_EnableBeams_m6687395CE93F716625110AADC3A08FC11F0AA4F2(__this, (bool)1, NULL);
		// for (int i = 0; i < _beams.Count; ++i)
		V_1 = 0;
		goto IL_0256;
	}

IL_0172:
	{
		// float beamStartTime = i / (_beams.Count == 1 ? 1.0f : _beams.Count - 1.0f) * _beamTrailDelay * _scanSeconds;
		int32_t L_43 = V_1;
		List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93* L_44 = __this->____beams_49;
		NullCheck(L_44);
		int32_t L_45;
		L_45 = List_1_get_Count_mEDD6D3CBA7B18AB7F0E8E301BF83BF3C114E5C70_inline(L_44, List_1_get_Count_mEDD6D3CBA7B18AB7F0E8E301BF83BF3C114E5C70_RuntimeMethod_var);
		G_B14_0 = ((float)L_43);
		if ((((int32_t)L_45) == ((int32_t)1)))
		{
			G_B15_0 = ((float)L_43);
			goto IL_0196;
		}
	}
	{
		List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93* L_46 = __this->____beams_49;
		NullCheck(L_46);
		int32_t L_47;
		L_47 = List_1_get_Count_mEDD6D3CBA7B18AB7F0E8E301BF83BF3C114E5C70_inline(L_46, List_1_get_Count_mEDD6D3CBA7B18AB7F0E8E301BF83BF3C114E5C70_RuntimeMethod_var);
		G_B16_0 = ((float)il2cpp_codegen_subtract(((float)L_47), (1.0f)));
		G_B16_1 = G_B14_0;
		goto IL_019b;
	}

IL_0196:
	{
		G_B16_0 = (1.0f);
		G_B16_1 = G_B15_0;
	}

IL_019b:
	{
		float L_48 = __this->____beamTrailDelay_35;
		float L_49 = __this->____scanSeconds_42;
		V_2 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)(G_B16_1/G_B16_0)), L_48)), L_49));
		// float beamDuration  = _scanSeconds - _beamTrailDelay;
		float L_50 = __this->____scanSeconds_42;
		float L_51 = __this->____beamTrailDelay_35;
		V_3 = ((float)il2cpp_codegen_subtract(L_50, L_51));
		// float t             = Mathf.Clamp01((_scanTimer - beamStartTime) / beamDuration);
		float L_52 = __this->____scanTimer_51;
		float L_53 = V_2;
		float L_54 = V_3;
		float L_55;
		L_55 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(((float)(((float)il2cpp_codegen_subtract(L_52, L_53))/L_54)), NULL);
		V_4 = L_55;
		// float tScale        = 1.0f - Mathf.Abs(t - 0.5f) * 2.0f;
		float L_56 = V_4;
		float L_57;
		L_57 = fabsf(((float)il2cpp_codegen_subtract(L_56, (0.5f))));
		V_5 = ((float)il2cpp_codegen_subtract((1.0f), ((float)il2cpp_codegen_multiply(L_57, (2.0f)))));
		// _beams[i].transform.localPosition = Vector3.Lerp(_scannerBeamTopLocalPos, _scannerBeamBottomLocalPos, UxrInterpolator.GetInterpolationFactor(t, _beamEeasing));
		List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93* L_58 = __this->____beams_49;
		int32_t L_59 = V_1;
		NullCheck(L_58);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_60;
		L_60 = List_1_get_Item_m2A866E5FF9CD642C76D27133D3FCEC2F15033DA2(L_58, L_59, List_1_get_Item_m2A866E5FF9CD642C76D27133D3FCEC2F15033DA2_RuntimeMethod_var);
		NullCheck(L_60);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_61;
		L_61 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_60, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_62 = __this->____scannerBeamTopLocalPos_32;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_63 = __this->____scannerBeamBottomLocalPos_33;
		float L_64 = V_4;
		int32_t L_65 = __this->____beamEeasing_36;
		float L_66;
		L_66 = UxrInterpolator_GetInterpolationFactor_m8825B361BACFF879FC0EE7578B911F4A695D6AAF(L_64, L_65, 0, (-1.0f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_67;
		L_67 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_62, L_63, L_66, NULL);
		NullCheck(L_61);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_61, L_67, NULL);
		// _beams[i].transform.localScale    = Vector3.Lerp(_beamScale,              _beamMaxScale,              Mathf.Pow(tScale, 8.0f));
		List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93* L_68 = __this->____beams_49;
		int32_t L_69 = V_1;
		NullCheck(L_68);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_70;
		L_70 = List_1_get_Item_m2A866E5FF9CD642C76D27133D3FCEC2F15033DA2(L_68, L_69, List_1_get_Item_m2A866E5FF9CD642C76D27133D3FCEC2F15033DA2_RuntimeMethod_var);
		NullCheck(L_70);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_71;
		L_71 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_70, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_72 = __this->____beamScale_52;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_73 = __this->____beamMaxScale_37;
		float L_74 = V_5;
		float L_75;
		L_75 = powf(L_74, (8.0f));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_76;
		L_76 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_72, L_73, L_75, NULL);
		NullCheck(L_71);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_71, L_76, NULL);
		// for (int i = 0; i < _beams.Count; ++i)
		int32_t L_77 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_77, 1));
	}

IL_0256:
	{
		// for (int i = 0; i < _beams.Count; ++i)
		int32_t L_78 = V_1;
		List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93* L_79 = __this->____beams_49;
		NullCheck(L_79);
		int32_t L_80;
		L_80 = List_1_get_Count_mEDD6D3CBA7B18AB7F0E8E301BF83BF3C114E5C70_inline(L_79, List_1_get_Count_mEDD6D3CBA7B18AB7F0E8E301BF83BF3C114E5C70_RuntimeMethod_var);
		if ((((int32_t)L_78) < ((int32_t)L_80)))
		{
			goto IL_0172;
		}
	}
	{
		// if (_scanTimer > _scanSeconds)
		float L_81 = __this->____scanTimer_51;
		float L_82 = __this->____scanSeconds_42;
		if ((!(((float)L_81) > ((float)L_82))))
		{
			goto IL_02c8;
		}
	}
	{
		// ProcessScanResult(UxrAvatar.LocalAvatar, _handSide, true);
		UxrAvatar_t880FC3AD5A9A30338CFDF4653C86343B16ACDE79* L_83;
		L_83 = UxrAvatar_get_LocalAvatar_m57231BC6DC4B6F43EC6BB81C005CA50265112F80(NULL);
		int32_t L_84 = __this->____handSide_53;
		HandScanner_ProcessScanResult_m062A2D62650EFB3B4DAFD9C073664FEB4B5A84CF(__this, L_83, L_84, (bool)1, NULL);
		// if (_armoredDoor != null)
		ArmoredDoor_t8B70669952214138BE0A4C9684AFA4A01E27E439* L_85 = __this->____armoredDoor_28;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_86;
		L_86 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_85, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_86)
		{
			goto IL_02c8;
		}
	}
	{
		// _armoredDoor.OpenDoor();
		ArmoredDoor_t8B70669952214138BE0A4C9684AFA4A01E27E439* L_87 = __this->____armoredDoor_28;
		NullCheck(L_87);
		AutomaticDoor_OpenDoor_m08C61FCE0D97C1425EC43536611FD2C0E9D32915(L_87, NULL);
		goto IL_02c8;
	}

IL_02a2:
	{
		// ProcessScanResult(UxrAvatar.LocalAvatar, _handSide, false);
		UxrAvatar_t880FC3AD5A9A30338CFDF4653C86343B16ACDE79* L_88;
		L_88 = UxrAvatar_get_LocalAvatar_m57231BC6DC4B6F43EC6BB81C005CA50265112F80(NULL);
		int32_t L_89 = __this->____handSide_53;
		HandScanner_ProcessScanResult_m062A2D62650EFB3B4DAFD9C073664FEB4B5A84CF(__this, L_88, L_89, (bool)0, NULL);
		goto IL_02c8;
	}

IL_02b6:
	{
		// ProcessScanResult(UxrAvatar.LocalAvatar, _handSide, false);
		UxrAvatar_t880FC3AD5A9A30338CFDF4653C86343B16ACDE79* L_90;
		L_90 = UxrAvatar_get_LocalAvatar_m57231BC6DC4B6F43EC6BB81C005CA50265112F80(NULL);
		int32_t L_91 = __this->____handSide_53;
		HandScanner_ProcessScanResult_m062A2D62650EFB3B4DAFD9C073664FEB4B5A84CF(__this, L_90, L_91, (bool)0, NULL);
	}

IL_02c8:
	{
		// if (_handSide == UxrHandSide.Left)
		int32_t L_92 = __this->____handSide_53;
		if (L_92)
		{
			goto IL_03b1;
		}
	}
	{
		// if (_handRendererRight.enabled)
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_93 = __this->____handRendererRight_39;
		NullCheck(L_93);
		bool L_94;
		L_94 = Renderer_get_enabled_mFDDF363859AEC88105A925FA7EA341C077B09B54(L_93, NULL);
		if (!L_94)
		{
			goto IL_0348;
		}
	}
	{
		// float rightAlpha = _handRendererRight.material.color.a - Time.deltaTime * HandAlphaSwitchSpeed;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_95 = __this->____handRendererRight_39;
		NullCheck(L_95);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_96;
		L_96 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_95, NULL);
		NullCheck(L_96);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_97;
		L_97 = Material_get_color_mA4B7D4B96200D9D8B4F36BF19957E9DA81071DBB(L_96, NULL);
		float L_98 = L_97.___a_3;
		float L_99;
		L_99 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		V_6 = ((float)il2cpp_codegen_subtract(L_98, ((float)il2cpp_codegen_multiply(L_99, (4.0f)))));
		// _handRendererRight.material.color = ColorExt.ColorAlpha(_handRendererRight.material.color, Mathf.Clamp01(rightAlpha));
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_100 = __this->____handRendererRight_39;
		NullCheck(L_100);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_101;
		L_101 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_100, NULL);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_102 = __this->____handRendererRight_39;
		NullCheck(L_102);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_103;
		L_103 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_102, NULL);
		NullCheck(L_103);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_104;
		L_104 = Material_get_color_mA4B7D4B96200D9D8B4F36BF19957E9DA81071DBB(L_103, NULL);
		V_7 = L_104;
		float L_105 = V_6;
		float L_106;
		L_106 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_105, NULL);
		il2cpp_codegen_runtime_class_init_inline(ColorExt_t75FA157B9D554C8C009E7747FB73C6CA15BAC902_il2cpp_TypeInfo_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_107;
		L_107 = ColorExt_ColorAlpha_m44D92977457C75B3453FF37F47B10952C5F347D6((&V_7), L_106, NULL);
		NullCheck(L_101);
		Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D(L_101, L_107, NULL);
		// if (rightAlpha < 0.0f)
		float L_108 = V_6;
		if ((!(((float)L_108) < ((float)(0.0f)))))
		{
			goto IL_0348;
		}
	}
	{
		// _handRendererRight.enabled = false;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_109 = __this->____handRendererRight_39;
		NullCheck(L_109);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_109, (bool)0, NULL);
	}

IL_0348:
	{
		// if (!_handRendererLeft.enabled)
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_110 = __this->____handRendererLeft_38;
		NullCheck(L_110);
		bool L_111;
		L_111 = Renderer_get_enabled_mFDDF363859AEC88105A925FA7EA341C077B09B54(L_110, NULL);
		if (L_111)
		{
			goto IL_0361;
		}
	}
	{
		// _handRendererLeft.enabled = true;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_112 = __this->____handRendererLeft_38;
		NullCheck(L_112);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_112, (bool)1, NULL);
	}

IL_0361:
	{
		// _handRendererLeft.material.color = ColorExt.ColorAlpha(_handRendererLeft.material.color, Mathf.Clamp01(_handRendererLeft.material.color.a + Time.deltaTime * HandAlphaSwitchSpeed));
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_113 = __this->____handRendererLeft_38;
		NullCheck(L_113);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_114;
		L_114 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_113, NULL);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_115 = __this->____handRendererLeft_38;
		NullCheck(L_115);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_116;
		L_116 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_115, NULL);
		NullCheck(L_116);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_117;
		L_117 = Material_get_color_mA4B7D4B96200D9D8B4F36BF19957E9DA81071DBB(L_116, NULL);
		V_7 = L_117;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_118 = __this->____handRendererLeft_38;
		NullCheck(L_118);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_119;
		L_119 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_118, NULL);
		NullCheck(L_119);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_120;
		L_120 = Material_get_color_mA4B7D4B96200D9D8B4F36BF19957E9DA81071DBB(L_119, NULL);
		float L_121 = L_120.___a_3;
		float L_122;
		L_122 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_123;
		L_123 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(((float)il2cpp_codegen_add(L_121, ((float)il2cpp_codegen_multiply(L_122, (4.0f))))), NULL);
		il2cpp_codegen_runtime_class_init_inline(ColorExt_t75FA157B9D554C8C009E7747FB73C6CA15BAC902_il2cpp_TypeInfo_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_124;
		L_124 = ColorExt_ColorAlpha_m44D92977457C75B3453FF37F47B10952C5F347D6((&V_7), L_123, NULL);
		NullCheck(L_114);
		Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D(L_114, L_124, NULL);
		return;
	}

IL_03b1:
	{
		// if (_handRendererLeft.enabled)
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_125 = __this->____handRendererLeft_38;
		NullCheck(L_125);
		bool L_126;
		L_126 = Renderer_get_enabled_mFDDF363859AEC88105A925FA7EA341C077B09B54(L_125, NULL);
		if (!L_126)
		{
			goto IL_0426;
		}
	}
	{
		// float leftAlpha = _handRendererLeft.material.color.a - Time.deltaTime * HandAlphaSwitchSpeed;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_127 = __this->____handRendererLeft_38;
		NullCheck(L_127);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_128;
		L_128 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_127, NULL);
		NullCheck(L_128);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_129;
		L_129 = Material_get_color_mA4B7D4B96200D9D8B4F36BF19957E9DA81071DBB(L_128, NULL);
		float L_130 = L_129.___a_3;
		float L_131;
		L_131 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		V_8 = ((float)il2cpp_codegen_subtract(L_130, ((float)il2cpp_codegen_multiply(L_131, (4.0f)))));
		// _handRendererLeft.material.color = ColorExt.ColorAlpha(_handRendererLeft.material.color, Mathf.Clamp01(leftAlpha));
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_132 = __this->____handRendererLeft_38;
		NullCheck(L_132);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_133;
		L_133 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_132, NULL);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_134 = __this->____handRendererLeft_38;
		NullCheck(L_134);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_135;
		L_135 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_134, NULL);
		NullCheck(L_135);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_136;
		L_136 = Material_get_color_mA4B7D4B96200D9D8B4F36BF19957E9DA81071DBB(L_135, NULL);
		V_7 = L_136;
		float L_137 = V_8;
		float L_138;
		L_138 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_137, NULL);
		il2cpp_codegen_runtime_class_init_inline(ColorExt_t75FA157B9D554C8C009E7747FB73C6CA15BAC902_il2cpp_TypeInfo_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_139;
		L_139 = ColorExt_ColorAlpha_m44D92977457C75B3453FF37F47B10952C5F347D6((&V_7), L_138, NULL);
		NullCheck(L_133);
		Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D(L_133, L_139, NULL);
		// if (leftAlpha < 0.0f)
		float L_140 = V_8;
		if ((!(((float)L_140) < ((float)(0.0f)))))
		{
			goto IL_0426;
		}
	}
	{
		// _handRendererLeft.enabled = false;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_141 = __this->____handRendererLeft_38;
		NullCheck(L_141);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_141, (bool)0, NULL);
	}

IL_0426:
	{
		// if (!_handRendererRight.enabled)
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_142 = __this->____handRendererRight_39;
		NullCheck(L_142);
		bool L_143;
		L_143 = Renderer_get_enabled_mFDDF363859AEC88105A925FA7EA341C077B09B54(L_142, NULL);
		if (L_143)
		{
			goto IL_043f;
		}
	}
	{
		// _handRendererRight.enabled = true;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_144 = __this->____handRendererRight_39;
		NullCheck(L_144);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_144, (bool)1, NULL);
	}

IL_043f:
	{
		// _handRendererRight.material.color = ColorExt.ColorAlpha(_handRendererRight.material.color, Mathf.Clamp01(_handRendererRight.material.color.a + Time.deltaTime * HandAlphaSwitchSpeed));
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_145 = __this->____handRendererRight_39;
		NullCheck(L_145);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_146;
		L_146 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_145, NULL);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_147 = __this->____handRendererRight_39;
		NullCheck(L_147);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_148;
		L_148 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_147, NULL);
		NullCheck(L_148);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_149;
		L_149 = Material_get_color_mA4B7D4B96200D9D8B4F36BF19957E9DA81071DBB(L_148, NULL);
		V_7 = L_149;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_150 = __this->____handRendererRight_39;
		NullCheck(L_150);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_151;
		L_151 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_150, NULL);
		NullCheck(L_151);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_152;
		L_152 = Material_get_color_mA4B7D4B96200D9D8B4F36BF19957E9DA81071DBB(L_151, NULL);
		float L_153 = L_152.___a_3;
		float L_154;
		L_154 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_155;
		L_155 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(((float)il2cpp_codegen_add(L_153, ((float)il2cpp_codegen_multiply(L_154, (4.0f))))), NULL);
		il2cpp_codegen_runtime_class_init_inline(ColorExt_t75FA157B9D554C8C009E7747FB73C6CA15BAC902_il2cpp_TypeInfo_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_156;
		L_156 = ColorExt_ColorAlpha_m44D92977457C75B3453FF37F47B10952C5F347D6((&V_7), L_155, NULL);
		NullCheck(L_146);
		Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D(L_146, L_156, NULL);
		// }
		return;
	}
}
// System.Void UltimateXR.Examples.FullScene.Doors.HandScanner::EnableBeams(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandScanner_EnableBeams_m6687395CE93F716625110AADC3A08FC11F0AA4F2 (HandScanner_t42A4D993924FECBCA1CFEA7D1E0335ADAB95D3D6* __this, bool ___enable0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tC44940B0562C5ADFA6C6CD80984D4A4CFBA1E7A0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ForEach_mABFCEE200DFAA5E585E78E56EE1CC46304C03F11_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass26_0_U3CEnableBeamsU3Eb__0_m05F9A28A447A81C48D960B7C5408E92CB0EF60C0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass26_0_tE467941C5965810C7B12382E4B6493C6DBEB7436_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass26_0_tE467941C5965810C7B12382E4B6493C6DBEB7436* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass26_0_tE467941C5965810C7B12382E4B6493C6DBEB7436* L_0 = (U3CU3Ec__DisplayClass26_0_tE467941C5965810C7B12382E4B6493C6DBEB7436*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass26_0_tE467941C5965810C7B12382E4B6493C6DBEB7436_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass26_0__ctor_m213F5EAEA005EE01568A4C81D3FA7215973B70BA(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass26_0_tE467941C5965810C7B12382E4B6493C6DBEB7436* L_1 = V_0;
		bool L_2 = ___enable0;
		NullCheck(L_1);
		L_1->___enable_0 = L_2;
		// _beams.ForEach(r => r.enabled = enable);
		List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93* L_3 = __this->____beams_49;
		U3CU3Ec__DisplayClass26_0_tE467941C5965810C7B12382E4B6493C6DBEB7436* L_4 = V_0;
		Action_1_tC44940B0562C5ADFA6C6CD80984D4A4CFBA1E7A0* L_5 = (Action_1_tC44940B0562C5ADFA6C6CD80984D4A4CFBA1E7A0*)il2cpp_codegen_object_new(Action_1_tC44940B0562C5ADFA6C6CD80984D4A4CFBA1E7A0_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Action_1__ctor_m4FA40673099C2B0B6B60E3DBD2671AEDEC2A7E24(L_5, L_4, (intptr_t)((void*)U3CU3Ec__DisplayClass26_0_U3CEnableBeamsU3Eb__0_m05F9A28A447A81C48D960B7C5408E92CB0EF60C0_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		List_1_ForEach_mABFCEE200DFAA5E585E78E56EE1CC46304C03F11(L_3, L_5, List_1_ForEach_mABFCEE200DFAA5E585E78E56EE1CC46304C03F11_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UltimateXR.Examples.FullScene.Doors.HandScanner::ProcessScanResult(UltimateXR.Avatar.UxrAvatar,UltimateXR.Core.UxrHandSide,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandScanner_ProcessScanResult_m062A2D62650EFB3B4DAFD9C073664FEB4B5A84CF (HandScanner_t42A4D993924FECBCA1CFEA7D1E0335ADAB95D3D6* __this, UxrAvatar_t880FC3AD5A9A30338CFDF4653C86343B16ACDE79* ___avatar0, int32_t ___handSide1, bool ___isValid2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorExt_t75FA157B9D554C8C009E7747FB73C6CA15BAC902_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandScanner_U3CProcessScanResultU3Eb__27_0_m8A557D889478153CC4EF40C05B2C41BD4F4E1963_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandScanner_U3CProcessScanResultU3Eb__27_1_m6FACEA89C8AEABE7A1EFEBB37D9DD0B167FF2DC4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE);
		s_Il2CppMethodInitialized = true;
	}
	Action_3_t5D0E6372A9C59C311A4BF2EE5AD6784EB7F2913C* G_B5_0 = NULL;
	Action_3_t5D0E6372A9C59C311A4BF2EE5AD6784EB7F2913C* G_B4_0 = NULL;
	{
		// EnableBeams(false);
		HandScanner_EnableBeams_m6687395CE93F716625110AADC3A08FC11F0AA4F2(__this, (bool)0, NULL);
		// _scanReady = false;
		__this->____scanReady_50 = (bool)0;
		// _scanTimer = -1.0f;
		__this->____scanTimer_51 = (-1.0f);
		// if (isValid)
		bool L_0 = ___isValid2;
		if (!L_0)
		{
			goto IL_0084;
		}
	}
	{
		// _audioOk.Play(transform.position);
		UxrAudioSample_t01A5C41E145D2E83FE924FFFFBBC451376881ED9* L_1 = __this->____audioOk_46;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		NullCheck(L_1);
		UxrAudioSample_Play_m9D583A9FB6C4D92C0DCA6B1DE3240456A41E81A7(L_1, L_3, NULL);
		// _validLight.enabled = true;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_4 = __this->____validLight_29;
		NullCheck(L_4);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_4, (bool)1, NULL);
		// UxrAnimatedMaterial.AnimateBlinkColor(_validLight.gameObject,
		//                                       UxrConstants.Shaders.StandardColorVarName,
		//                                       _colorValid.WithAlpha(0.0f),
		//                                       _colorValid,
		//                                       UxrAnimatedMaterial.DefaultBlinkFrequency,
		//                                       _resultSeconds,
		//                                       UxrMaterialMode.InstanceOnly,
		//                                       () =>
		//                                       {
		//                                           _scanReady          = true;
		//                                           _validLight.enabled = false;
		//                                       });
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_5 = __this->____validLight_29;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_5, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_7 = (&__this->____colorValid_54);
		il2cpp_codegen_runtime_class_init_inline(ColorExt_t75FA157B9D554C8C009E7747FB73C6CA15BAC902_il2cpp_TypeInfo_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8;
		L_8 = ColorExt_WithAlpha_m7A14319C675C3759B032044A9916A92BEE313BA9(L_7, (0.0f), NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9 = __this->____colorValid_54;
		float L_10 = __this->____resultSeconds_43;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_11 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_11, __this, (intptr_t)((void*)HandScanner_U3CProcessScanResultU3Eb__27_0_m8A557D889478153CC4EF40C05B2C41BD4F4E1963_RuntimeMethod_var), NULL);
		UxrAnimatedMaterial_t6AA0B6F355D7F547152A8A3BA66E81808300FDB0* L_12;
		L_12 = UxrAnimatedMaterial_AnimateBlinkColor_m78A2BD08D45093A282EDB8F3040C922834E47246(L_6, _stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE, L_8, L_9, (3.0f), L_10, 0, L_11, NULL);
		goto IL_00ea;
	}

IL_0084:
	{
		// _audioError.Play(transform.position);
		UxrAudioSample_t01A5C41E145D2E83FE924FFFFBBC451376881ED9* L_13 = __this->____audioError_45;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_14, NULL);
		NullCheck(L_13);
		UxrAudioSample_Play_m9D583A9FB6C4D92C0DCA6B1DE3240456A41E81A7(L_13, L_15, NULL);
		// _invalidLight.enabled = true;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_16 = __this->____invalidLight_30;
		NullCheck(L_16);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_16, (bool)1, NULL);
		// UxrAnimatedMaterial.AnimateBlinkColor(_invalidLight.gameObject,
		//                                       UxrConstants.Shaders.StandardColorVarName,
		//                                       _colorInvalid.WithAlpha(0.0f),
		//                                       _colorInvalid,
		//                                       UxrAnimatedMaterial.DefaultBlinkFrequency,
		//                                       _resultSeconds,
		//                                       UxrMaterialMode.InstanceOnly,
		//                                       () =>
		//                                       {
		//                                           _scanReady            = true;
		//                                           _invalidLight.enabled = false;
		//                                       });
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_17 = __this->____invalidLight_30;
		NullCheck(L_17);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18;
		L_18 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_17, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_19 = (&__this->____colorInvalid_55);
		il2cpp_codegen_runtime_class_init_inline(ColorExt_t75FA157B9D554C8C009E7747FB73C6CA15BAC902_il2cpp_TypeInfo_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_20;
		L_20 = ColorExt_WithAlpha_m7A14319C675C3759B032044A9916A92BEE313BA9(L_19, (0.0f), NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_21 = __this->____colorInvalid_55;
		float L_22 = __this->____resultSeconds_43;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_23 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_23);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_23, __this, (intptr_t)((void*)HandScanner_U3CProcessScanResultU3Eb__27_1_m6FACEA89C8AEABE7A1EFEBB37D9DD0B167FF2DC4_RuntimeMethod_var), NULL);
		UxrAnimatedMaterial_t6AA0B6F355D7F547152A8A3BA66E81808300FDB0* L_24;
		L_24 = UxrAnimatedMaterial_AnimateBlinkColor_m78A2BD08D45093A282EDB8F3040C922834E47246(L_18, _stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE, L_20, L_21, (3.0f), L_22, 0, L_23, NULL);
	}

IL_00ea:
	{
		// HandScanned?.Invoke(avatar, handSide, isValid);
		Action_3_t5D0E6372A9C59C311A4BF2EE5AD6784EB7F2913C* L_25 = __this->___HandScanned_47;
		Action_3_t5D0E6372A9C59C311A4BF2EE5AD6784EB7F2913C* L_26 = L_25;
		G_B4_0 = L_26;
		if (L_26)
		{
			G_B5_0 = L_26;
			goto IL_00f5;
		}
	}
	{
		return;
	}

IL_00f5:
	{
		UxrAvatar_t880FC3AD5A9A30338CFDF4653C86343B16ACDE79* L_27 = ___avatar0;
		int32_t L_28 = ___handSide1;
		bool L_29 = ___isValid2;
		NullCheck(G_B5_0);
		Action_3_Invoke_mCD6B59F11A789AD5737BB3D4D17A2773B12B6C12_inline(G_B5_0, L_27, L_28, L_29, NULL);
		// }
		return;
	}
}
// System.Void UltimateXR.Examples.FullScene.Doors.HandScanner::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandScanner__ctor_mBBA3DC3742B7B422058771845B23935E860C39BD (HandScanner_t42A4D993924FECBCA1CFEA7D1E0335ADAB95D3D6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m803E10F7A50EB22BF82C0C1AB251D5407B4496DE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UxrComponent_tA6AC6651B5C934626995D87127173273775B1011_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField]                     private int            _beamCount      = 5;
		__this->____beamCount_34 = 5;
		// [SerializeField] [Range(0.0f, 1.0f)] private float          _beamTrailDelay = 0.1f;
		__this->____beamTrailDelay_35 = (0.100000001f);
		// [SerializeField]                     private UxrEasing      _beamEeasing    = UxrEasing.EaseInOutQuint;
		__this->____beamEeasing_36 = ((int32_t)19);
		// [SerializeField]                     private Vector3        _beamMaxScale   = Vector3.one;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		__this->____beamMaxScale_37 = L_0;
		// [SerializeField]                     private UxrHandSide    _defaultHandSide = UxrHandSide.Right;
		__this->____defaultHandSide_40 = 1;
		// [SerializeField]                     private float          _scanSeconds   = 1.5f;
		__this->____scanSeconds_42 = (1.5f);
		// [SerializeField]                     private float          _resultSeconds = 2.0f;
		__this->____resultSeconds_43 = (2.0f);
		// private readonly List<Renderer> _beams = new List<Renderer>();
		List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93* L_1 = (List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93*)il2cpp_codegen_object_new(List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m803E10F7A50EB22BF82C0C1AB251D5407B4496DE(L_1, List_1__ctor_m803E10F7A50EB22BF82C0C1AB251D5407B4496DE_RuntimeMethod_var);
		__this->____beams_49 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____beams_49), (void*)L_1);
		// private bool        _scanReady = true;
		__this->____scanReady_50 = (bool)1;
		// private float       _scanTimer = -1.0f;
		__this->____scanTimer_51 = (-1.0f);
		il2cpp_codegen_runtime_class_init_inline(UxrComponent_tA6AC6651B5C934626995D87127173273775B1011_il2cpp_TypeInfo_var);
		UxrComponent__ctor_mAE5417B1456451CA1927CE21DF3731194A1CA64A(__this, NULL);
		return;
	}
}
// System.Void UltimateXR.Examples.FullScene.Doors.HandScanner::<ProcessScanResult>b__27_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandScanner_U3CProcessScanResultU3Eb__27_0_m8A557D889478153CC4EF40C05B2C41BD4F4E1963 (HandScanner_t42A4D993924FECBCA1CFEA7D1E0335ADAB95D3D6* __this, const RuntimeMethod* method) 
{
	{
		// _scanReady          = true;
		__this->____scanReady_50 = (bool)1;
		// _validLight.enabled = false;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_0 = __this->____validLight_29;
		NullCheck(L_0);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_0, (bool)0, NULL);
		// });
		return;
	}
}
// System.Void UltimateXR.Examples.FullScene.Doors.HandScanner::<ProcessScanResult>b__27_1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandScanner_U3CProcessScanResultU3Eb__27_1_m6FACEA89C8AEABE7A1EFEBB37D9DD0B167FF2DC4 (HandScanner_t42A4D993924FECBCA1CFEA7D1E0335ADAB95D3D6* __this, const RuntimeMethod* method) 
{
	{
		// _scanReady            = true;
		__this->____scanReady_50 = (bool)1;
		// _invalidLight.enabled = false;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_0 = __this->____invalidLight_30;
		NullCheck(L_0);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_0, (bool)0, NULL);
		// });
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UltimateXR.Examples.FullScene.Doors.HandScanner/<>c__DisplayClass26_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass26_0__ctor_m213F5EAEA005EE01568A4C81D3FA7215973B70BA (U3CU3Ec__DisplayClass26_0_tE467941C5965810C7B12382E4B6493C6DBEB7436* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void UltimateXR.Examples.FullScene.Doors.HandScanner/<>c__DisplayClass26_0::<EnableBeams>b__0(UnityEngine.Renderer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass26_0_U3CEnableBeamsU3Eb__0_m05F9A28A447A81C48D960B7C5408E92CB0EF60C0 (U3CU3Ec__DisplayClass26_0_tE467941C5965810C7B12382E4B6493C6DBEB7436* __this, Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ___r0, const RuntimeMethod* method) 
{
	{
		// _beams.ForEach(r => r.enabled = enable);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_0 = ___r0;
		bool L_1 = __this->___enable_0;
		NullCheck(L_0);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_0, L_1, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float AutomaticDoor_get_OpenValue_mDB196EDB79C51FC9E86AA0F578C02D3DA5639B43_inline (AutomaticDoor_t1300394E882F63AD7DCD712530F55D334F86B1FC* __this, const RuntimeMethod* method) 
{
	{
		// public float OpenValue { get; private set; }
		float L_0 = __this->___U3COpenValueU3Ek__BackingField_41;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UxrFirearmMag_get_Capacity_m0D6296E2BF4F0631583AA398AF15FE89E489AB32_inline (UxrFirearmMag_tBEA739C8C38E1746316937E4BCBC7471EA02EC5C* __this, const RuntimeMethod* method) 
{
	{
		// public int Capacity => _capacity;
		int32_t L_0 = __this->____capacity_29;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UxrGrabbableObjectAnchor_tE7110AF7891C09542149FC793D1C0C9A9D95F66A* UxrGrabbableObject_get_CurrentAnchor_mFAF2BAAB5BC5FEE894E0EB4874ECD590CD0284BD_inline (UxrGrabbableObject_tCA9C5B90AC9CB9830D3D50AE51F7FF342511E3BC* __this, const RuntimeMethod* method) 
{
	{
		// public UxrGrabbableObjectAnchor CurrentAnchor { get; internal set; }
		UxrGrabbableObjectAnchor_tE7110AF7891C09542149FC793D1C0C9A9D95F66A* L_0 = __this->___U3CCurrentAnchorU3Ek__BackingField_84;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 UxrGrabbableObject_get_TranslationLimitsMax_m3A01D28CEC970FD9FB1F7D04A9CE4ACB2266F584_inline (UxrGrabbableObject_tCA9C5B90AC9CB9830D3D50AE51F7FF342511E3BC* __this, const RuntimeMethod* method) 
{
	{
		// get => _translationLimitsMax;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->____translationLimitsMax_43;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UxrGrabbableObjectAnchor_tE7110AF7891C09542149FC793D1C0C9A9D95F66A* BatteryAnchor_get_Anchor_mAE18114D9A38411ECAC1A1E47C8A249124F3F719_inline (BatteryAnchor_t01234E44479A11E2168D9712174DA3B7B28ED114* __this, const RuntimeMethod* method) 
{
	{
		// public UxrGrabbableObjectAnchor Anchor => _batteryAnchor;
		UxrGrabbableObjectAnchor_tE7110AF7891C09542149FC793D1C0C9A9D95F66A* L_0 = __this->____batteryAnchor_35;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UxrGrabbableObject_tCA9C5B90AC9CB9830D3D50AE51F7FF342511E3BC* UxrGrabbableObjectAnchor_get_CurrentPlacedObject_m0988C02C0982FDEA3373963A7E310E149AC522B5_inline (UxrGrabbableObjectAnchor_tE7110AF7891C09542149FC793D1C0C9A9D95F66A* __this, const RuntimeMethod* method) 
{
	{
		// public UxrGrabbableObject CurrentPlacedObject { get; internal set; }
		UxrGrabbableObject_tCA9C5B90AC9CB9830D3D50AE51F7FF342511E3BC* L_0 = __this->___U3CCurrentPlacedObjectU3Ek__BackingField_51;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UxrGrabbableObject_set_TranslationConstraint_m87F0647E2F082718C13CEB93B96360EBC32ECB7E_inline (UxrGrabbableObject_tCA9C5B90AC9CB9830D3D50AE51F7FF342511E3BC* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// set => _translationConstraintMode = value;
		int32_t L_0 = ___value0;
		__this->____translationConstraintMode_39 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UxrGrabbableObject_set_RotationConstraint_m6236C3CB606BEA6D244AE74FA810016FD1A27B4A_inline (UxrGrabbableObject_tCA9C5B90AC9CB9830D3D50AE51F7FF342511E3BC* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// set => _rotationConstraintMode = value;
		int32_t L_0 = ___value0;
		__this->____rotationConstraintMode_44 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UxrManipulationHapticFeedback_set_MinAmplitude_m34FD38C4DD993091D1A06BB890FA12394A7EAB3C_inline (UxrManipulationHapticFeedback_t6DA4A9477852BE09667C082006431E86BC9271D3* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// set => _minAmplitude = value;
		float L_0 = ___value0;
		__this->____minAmplitude_38 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UxrManipulationHapticFeedback_set_MaxAmplitude_mD29EF350C59E3905439A7176F2D0401F1231989F_inline (UxrManipulationHapticFeedback_t6DA4A9477852BE09667C082006431E86BC9271D3* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// set => _maxAmplitude = value;
		float L_0 = ___value0;
		__this->____maxAmplitude_39 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UxrGrabbableObject_set_TranslationLimitsMax_mE36CDD587F8B7EC09466939280A4FF91B17FD113_inline (UxrGrabbableObject_tCA9C5B90AC9CB9830D3D50AE51F7FF342511E3BC* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	{
		// set => _translationLimitsMax = value;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		__this->____translationLimitsMax_43 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float UxrManipulationHapticFeedback_get_MinAmplitude_m816282408BAFD981909F3A3B82C16D718D232210_inline (UxrManipulationHapticFeedback_t6DA4A9477852BE09667C082006431E86BC9271D3* __this, const RuntimeMethod* method) 
{
	{
		// get => _minAmplitude;
		float L_0 = __this->____minAmplitude_38;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float UxrManipulationHapticFeedback_get_MaxAmplitude_m685EF33F3045E85DADE7A061146BCA789C1C21E0_inline (UxrManipulationHapticFeedback_t6DA4A9477852BE09667C082006431E86BC9271D3* __this, const RuntimeMethod* method) 
{
	{
		// get => _maxAmplitude;
		float L_0 = __this->____maxAmplitude_39;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GeneratorDoor_set_IsBatteryInContact_mFF2AED00F8E373F46A1D6C63150254B7C29331E4_inline (GeneratorDoor_t33EB8ADB2139695767CD1080E775EA94B6DD3037* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool IsBatteryInContact { get; set; }
		bool L_0 = ___value0;
		__this->___U3CIsBatteryInContactU3Ek__BackingField_41 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UxrGrabbableObject_tCA9C5B90AC9CB9830D3D50AE51F7FF342511E3BC* UxrManipulationEventArgs_get_GrabbableObject_m94A2B77251CC7B8B2B0B5620252EA79EBC52C9BC_inline (UxrManipulationEventArgs_tD33E70382345A37F8AE2C8B4A533810FB76EDA78* __this, const RuntimeMethod* method) 
{
	{
		// public UxrGrabbableObject GrabbableObject { get; }
		UxrGrabbableObject_tCA9C5B90AC9CB9830D3D50AE51F7FF342511E3BC* L_0 = __this->___U3CGrabbableObjectU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Inequality_m9F170CDFBF1E490E559DA5D06D6547501A402BBF_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___lhs0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___rhs1;
		bool L_2;
		L_2 = Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline(L_0, L_1, NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_000e;
	}

IL_000e:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* UxrGrabbableObject_get_RigidBodySource_m6758B00D10ECE61793CC17AE2F9CCC4D8E9375D0_inline (UxrGrabbableObject_tCA9C5B90AC9CB9830D3D50AE51F7FF342511E3BC* __this, const RuntimeMethod* method) 
{
	{
		// get => _rigidBodySource;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0 = __this->____rigidBodySource_54;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___rightVector_10;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___lhs0;
		float L_1 = L_0.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___rhs1;
		float L_3 = L_2.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = ___lhs0;
		float L_5 = L_4.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = ___rhs1;
		float L_7 = L_6.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = ___lhs0;
		float L_9 = L_8.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10 = ___rhs1;
		float L_11 = L_10.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = ___lhs0;
		float L_13 = L_12.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = ___rhs1;
		float L_15 = L_14.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16 = ___lhs0;
		float L_17 = L_16.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18 = ___rhs1;
		float L_19 = L_18.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20 = ___lhs0;
		float L_21 = L_20.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22 = ___rhs1;
		float L_23 = L_22.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24 = ___lhs0;
		float L_25 = L_24.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_26 = ___rhs1;
		float L_27 = L_26.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_28 = ___lhs0;
		float L_29 = L_28.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_30 = ___rhs1;
		float L_31 = L_30.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_32 = ___lhs0;
		float L_33 = L_32.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_34 = ___rhs1;
		float L_35 = L_34.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_36 = ___lhs0;
		float L_37 = L_36.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_38 = ___rhs1;
		float L_39 = L_38.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_40 = ___lhs0;
		float L_41 = L_40.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_42 = ___rhs1;
		float L_43 = L_42.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_44 = ___lhs0;
		float L_45 = L_44.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_46 = ___rhs1;
		float L_47 = L_46.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_48 = ___lhs0;
		float L_49 = L_48.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_50 = ___rhs1;
		float L_51 = L_50.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_52 = ___lhs0;
		float L_53 = L_52.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_54 = ___rhs1;
		float L_55 = L_54.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_56 = ___lhs0;
		float L_57 = L_56.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_58 = ___rhs1;
		float L_59 = L_58.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_60 = ___lhs0;
		float L_61 = L_60.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_62 = ___rhs1;
		float L_63 = L_62.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_64;
		memset((&L_64), 0, sizeof(L_64));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_64), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11)))), ((float)il2cpp_codegen_multiply(L_13, L_15)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_17, L_19)), ((float)il2cpp_codegen_multiply(L_21, L_23)))), ((float)il2cpp_codegen_multiply(L_25, L_27)))), ((float)il2cpp_codegen_multiply(L_29, L_31)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_33, L_35)), ((float)il2cpp_codegen_multiply(L_37, L_39)))), ((float)il2cpp_codegen_multiply(L_41, L_43)))), ((float)il2cpp_codegen_multiply(L_45, L_47)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_49, L_51)), ((float)il2cpp_codegen_multiply(L_53, L_55)))), ((float)il2cpp_codegen_multiply(L_57, L_59)))), ((float)il2cpp_codegen_multiply(L_61, L_63)))), /*hidden argument*/NULL);
		V_0 = L_64;
		goto IL_00e5;
	}

IL_00e5:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_65 = V_0;
		return L_65;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = (*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Quaternion_Internal_ToEulerRad_m5BD0EEC543120C320DC77FCCDFD2CE2E6BD3F1A8(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_1, (57.2957802f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Quaternion_Internal_MakePositive_m73E2D01920CB0DFE661A55022C129E8617F0C9A8(L_2, NULL);
		V_0 = L_3;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___value0;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___value0;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___value0;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UxrGripPoseInfo_set_PoseBlendValue_m87BA55ED7AD988EBE7AA628A4C264ADB50C18053_inline (UxrGripPoseInfo_t35D8985EE8490D4E4617C24300EC9A18363D01FC* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// set => _poseBlendValue = value;
		float L_0 = ___value0;
		__this->____poseBlendValue_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* LaserBurn_get_Collider_m2F511D05F4090A86846ABF9000FF39BA3ADBF173_inline (LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557* __this, const RuntimeMethod* method) 
{
	{
		// public Collider Collider { get; set; }
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = __this->___U3CColliderU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_18;
		L_18 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))))));
		V_3 = ((float)L_18);
		goto IL_0040;
	}

IL_0040:
	{
		float L_19 = V_3;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___upVector_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Reflect_mE584AF88A0C648C9559633260F24DB697AB176CF_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___inDirection0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___inNormal1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___inNormal1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___inDirection0;
		float L_2;
		L_2 = Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline(L_0, L_1, NULL);
		V_0 = ((float)il2cpp_codegen_multiply((-2.0f), L_2));
		float L_3 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___inNormal1;
		float L_5 = L_4.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___inDirection0;
		float L_7 = L_6.___x_2;
		float L_8 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___inNormal1;
		float L_10 = L_9.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ___inDirection0;
		float L_12 = L_11.___y_3;
		float L_13 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = ___inNormal1;
		float L_15 = L_14.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___inDirection0;
		float L_17 = L_16.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		memset((&L_18), 0, sizeof(L_18));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_18), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_3, L_5)), L_7)), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_8, L_10)), L_12)), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_13, L_15)), L_17)), /*hidden argument*/NULL);
		V_1 = L_18;
		goto IL_0044;
	}

IL_0044:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = V_1;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* LaserBurn_get_PathPositions_m7F8D39BA85C9F72D4D99A56A5A7716E200556734_inline (LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557* __this, const RuntimeMethod* method) 
{
	{
		// public List<Vector3> PathPositions { get; set; }
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_0 = __this->___U3CPathPositionsU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Cross_mF93A280558BCE756D13B6CC5DCD7DE8A43148987_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___lhs0;
		float L_1 = L_0.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___rhs1;
		float L_3 = L_2.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___lhs0;
		float L_5 = L_4.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___rhs1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___lhs0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___rhs1;
		float L_11 = L_10.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = ___lhs0;
		float L_13 = L_12.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = ___rhs1;
		float L_15 = L_14.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___lhs0;
		float L_17 = L_16.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___rhs1;
		float L_19 = L_18.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = ___lhs0;
		float L_21 = L_20.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = ___rhs1;
		float L_23 = L_22.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		memset((&L_24), 0, sizeof(L_24));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_24), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_9, L_11)), ((float)il2cpp_codegen_multiply(L_13, L_15)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_17, L_19)), ((float)il2cpp_codegen_multiply(L_21, L_23)))), /*hidden argument*/NULL);
		V_0 = L_24;
		goto IL_005a;
	}

IL_005a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = V_0;
		return L_25;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* LaserBurn_get_PathCreationTimes_mA4484DEB4636DA4F6F81B5B441B9A5C5E7BC3388_inline (LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557* __this, const RuntimeMethod* method) 
{
	{
		// public List<float> PathCreationTimes { get; set; }
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_0 = __this->___U3CPathCreationTimesU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LaserBurn_set_LastNormal_mBCF9EDF824414D2F0410E06E1B75B411D3F2A78D_inline (LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	{
		// public Vector3 LastNormal { get; set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		__this->___U3CLastNormalU3Ek__BackingField_7 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UxrFixedHapticFeedback_set_HandSide_m0CF10CB54F226DF68E7DFD692F6D0493AF5CCD98_inline (UxrFixedHapticFeedback_tB4275F8F9577DB366B776F01947C53E48F015FEE* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// set => _handSide = value;
		int32_t L_0 = ___value0;
		__this->____handSide_28 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LaserBurn_set_Collider_m52437E78A89360AA30F49774BA130F5E59339C1F_inline (LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___value0, const RuntimeMethod* method) 
{
	{
		// public Collider Collider { get; set; }
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___value0;
		__this->___U3CColliderU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CColliderU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LaserBurn_set_GameObject_m2A9521CC8C09437B10B05AF981CA664EDF7B7EB5_inline (LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___value0, const RuntimeMethod* method) 
{
	{
		// public GameObject GameObject { get; set; }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___value0;
		__this->___U3CGameObjectU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CGameObjectU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* LaserBurn_get_GameObject_mA4967FE6AC9A28115D93252D72C6CC8061118271_inline (LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557* __this, const RuntimeMethod* method) 
{
	{
		// public GameObject GameObject { get; set; }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___U3CGameObjectU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LaserBurn_set_LineRenderer_m8E0CC57FEF6467C9926E4B75F1B9AED21AD663DB_inline (LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557* __this, LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* ___value0, const RuntimeMethod* method) 
{
	{
		// public LineRenderer LineRenderer { get; set; }
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_0 = ___value0;
		__this->___U3CLineRendererU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CLineRendererU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* LaserBurn_get_LineRenderer_m0C54B788116EE4B86B0409086E8B6C2E2D93773F_inline (LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557* __this, const RuntimeMethod* method) 
{
	{
		// public LineRenderer LineRenderer { get; set; }
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_0 = __this->___U3CLineRendererU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LaserBurn_set_GameObjectIncandescent_mDE15F0CD6FB664165D814431C5BEE1E5F4F0FE2C_inline (LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___value0, const RuntimeMethod* method) 
{
	{
		// public GameObject GameObjectIncandescent { get; set; }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___value0;
		__this->___U3CGameObjectIncandescentU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CGameObjectIncandescentU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* LaserBurn_get_GameObjectIncandescent_m4728BFBD17952FED2E5DFB68F09A8B7B7BBC6C09_inline (LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557* __this, const RuntimeMethod* method) 
{
	{
		// public GameObject GameObjectIncandescent { get; set; }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___U3CGameObjectIncandescentU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LaserBurn_set_IncandescentLineRenderer_m5AF7A2EB97F440559412AF90D2286B3CB3F6D804_inline (LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557* __this, LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* ___value0, const RuntimeMethod* method) 
{
	{
		// public LineRenderer IncandescentLineRenderer { get; set; }
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_0 = ___value0;
		__this->___U3CIncandescentLineRendererU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CIncandescentLineRendererU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* LaserBurn_get_IncandescentLineRenderer_m30C81AAE9780422CAC0C96D79D0E113A6F0B7023_inline (LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557* __this, const RuntimeMethod* method) 
{
	{
		// public LineRenderer IncandescentLineRenderer { get; set; }
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_0 = __this->___U3CIncandescentLineRendererU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LaserBurn_set_PathPositions_m568735D653C1113A82F229D5BF8E6E5C3FA3BE28_inline (LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557* __this, List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___value0, const RuntimeMethod* method) 
{
	{
		// public List<Vector3> PathPositions { get; set; }
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_0 = ___value0;
		__this->___U3CPathPositionsU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPathPositionsU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LaserBurn_set_PathCreationTimes_m78F2EC1D5F07BA0DC59B9320251D3F362F53085C_inline (LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557* __this, List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* ___value0, const RuntimeMethod* method) 
{
	{
		// public List<float> PathCreationTimes { get; set; }
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_0 = ___value0;
		__this->___U3CPathCreationTimesU3Ek__BackingField_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPathCreationTimesU3Ek__BackingField_6), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline (float ___f0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		float L_0 = ___f0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = bankers_round(((double)L_0));
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(L_1);
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline (int32_t ___value0, int32_t ___min1, int32_t ___max2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___value0;
		int32_t L_1 = ___min1;
		V_0 = (bool)((((int32_t)L_0) < ((int32_t)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_3 = ___min1;
		___value0 = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		int32_t L_4 = ___value0;
		int32_t L_5 = ___max2;
		V_1 = (bool)((((int32_t)L_4) > ((int32_t)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_7 = ___max2;
		___value0 = L_7;
	}

IL_0019:
	{
		int32_t L_8 = ___value0;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		int32_t L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		float L_3 = ___a3;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 LaserBurn_get_LastNormal_m2A525EA2FA754C2DBD6F91792ECD6F4229410DBB_inline (LaserBurn_tB58C9392E8116514CE363B5689AC5D9FFA22F557* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 LastNormal { get; set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___U3CLastNormalU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_Lerp_mE79F87889843ECDC188E4CB5B5E1F1B2256E5EBE_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___a0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___b1, float ___t2, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_0, NULL);
		___t2 = L_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ___a0;
		float L_3 = L_2.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___b1;
		float L_5 = L_4.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = ___a0;
		float L_7 = L_6.___r_0;
		float L_8 = ___t2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9 = ___a0;
		float L_10 = L_9.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_11 = ___b1;
		float L_12 = L_11.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13 = ___a0;
		float L_14 = L_13.___g_1;
		float L_15 = ___t2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_16 = ___a0;
		float L_17 = L_16.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_18 = ___b1;
		float L_19 = L_18.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_20 = ___a0;
		float L_21 = L_20.___b_2;
		float L_22 = ___t2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_23 = ___a0;
		float L_24 = L_23.___a_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_25 = ___b1;
		float L_26 = L_25.___a_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_27 = ___a0;
		float L_28 = L_27.___a_3;
		float L_29 = ___t2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_30;
		memset((&L_30), 0, sizeof(L_30));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_30), ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_5, L_7)), L_8)))), ((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_12, L_14)), L_15)))), ((float)il2cpp_codegen_add(L_17, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_19, L_21)), L_22)))), ((float)il2cpp_codegen_add(L_24, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_26, L_28)), L_29)))), /*hidden argument*/NULL);
		V_0 = L_30;
		goto IL_0069;
	}

IL_0069:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_31 = V_0;
		return L_31;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 UxrManipulationEventArgs_get_ReleaseVelocity_mF4B983EC1189963B18CBAB47EBEB2A362BE40A4B_inline (UxrManipulationEventArgs_tD33E70382345A37F8AE2C8B4A533810FB76EDA78* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 ReleaseVelocity { get; internal set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___U3CReleaseVelocityU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 UxrManipulationEventArgs_get_ReleaseAngularVelocity_m21F3AAF359AC33913EDCEF2E1A9D0EAC863FA286_inline (UxrManipulationEventArgs_tD33E70382345A37F8AE2C8B4A533810FB76EDA78* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 ReleaseAngularVelocity { get; internal set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___U3CReleaseAngularVelocityU3Ek__BackingField_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))))));
		V_0 = ((float)L_6);
		goto IL_0034;
	}

IL_0034:
	{
		float L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutomaticDoor_set_IsOpen_m69E70E2C51265E1DFD6B2A0DB6804511D37AEEB7_inline (AutomaticDoor_t1300394E882F63AD7DCD712530F55D334F86B1FC* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool IsOpen { get; private set; }
		bool L_0 = ___value0;
		__this->___U3CIsOpenU3Ek__BackingField_42 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Mathf_Approximately_m1DADD012A8FC82E11FB282501AE2EBBF9A77150B_inline (float ___a0, float ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		float L_0 = ___b1;
		float L_1 = ___a0;
		float L_2;
		L_2 = fabsf(((float)il2cpp_codegen_subtract(L_0, L_1)));
		float L_3 = ___a0;
		float L_4;
		L_4 = fabsf(L_3);
		float L_5 = ___b1;
		float L_6;
		L_6 = fabsf(L_5);
		float L_7;
		L_7 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(L_4, L_6, NULL);
		float L_8 = ((Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_StaticFields*)il2cpp_codegen_static_fields_for(Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var))->___Epsilon_0;
		float L_9;
		L_9 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(((float)il2cpp_codegen_multiply((9.99999997E-07f), L_7)), ((float)il2cpp_codegen_multiply(L_8, (8.0f))), NULL);
		V_0 = (bool)((((float)L_2) < ((float)L_9))? 1 : 0);
		goto IL_0035;
	}

IL_0035:
	{
		bool L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AutomaticDoor_get_IsOpen_m3A140D006C9B9218649846DAEE3AC5060CF4A43B_inline (AutomaticDoor_t1300394E882F63AD7DCD712530F55D334F86B1FC* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsOpen { get; private set; }
		bool L_0 = __this->___U3CIsOpenU3Ek__BackingField_42;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutomaticDoor_set_OpenValue_mEB76541384929F0497F01A49F6067009A611A0C2_inline (AutomaticDoor_t1300394E882F63AD7DCD712530F55D334F86B1FC* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float OpenValue { get; private set; }
		float L_0 = ___value0;
		__this->___U3COpenValueU3Ek__BackingField_41 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, float ___t2, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_0, NULL);
		___t2 = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___a0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___b1;
		float L_5 = L_4.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___x_2;
		float L_8 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___a0;
		float L_10 = L_9.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ___b1;
		float L_12 = L_11.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___a0;
		float L_14 = L_13.___y_3;
		float L_15 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___a0;
		float L_17 = L_16.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___b1;
		float L_19 = L_18.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = ___a0;
		float L_21 = L_20.___z_4;
		float L_22 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_23), ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_5, L_7)), L_8)))), ((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_12, L_14)), L_15)))), ((float)il2cpp_codegen_add(L_17, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_19, L_21)), L_22)))), /*hidden argument*/NULL);
		V_0 = L_23;
		goto IL_0053;
	}

IL_0053:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_0;
		return L_24;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___oneVector_6;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___item0, const RuntimeMethod* method) 
{
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_1 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_6 = V_0;
		int32_t L_7 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_8);
		return;
	}

IL_0034:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___item0;
		List_1_AddWithResize_mCDB189127FC2EE67B5EED9DE34F837DFC6EDC212(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m2F86E252D086E288E02FA1C830B7E86C0A431E51_gshared_inline (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, float ___item0, const RuntimeMethod* method) 
{
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_6 = V_0;
		int32_t L_7 = V_1;
		float L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (float)L_8);
		return;
	}

IL_0034:
	{
		float L_9 = ___item0;
		List_1_AddWithResize_m446487BF7F55E757E7D552B2436AD74AC354EA99(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m545762F67009314D9C63DD209B42FFF950569B05_gshared_inline (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_3_Invoke_m74553696A7925B7173D6F62C410A7FF17E8E599B_gshared_inline (Action_3_t046F7B128A04A958DF7153022D4E3D856249A3B5* __this, RuntimeObject* ___arg10, int32_t ___arg21, bool ___arg32, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, int32_t, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg10, ___arg21, ___arg32, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	bool V_4 = false;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___lhs0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___rhs1;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___lhs0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___rhs1;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___lhs0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___rhs1;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		V_3 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))));
		float L_18 = V_3;
		V_4 = (bool)((((float)L_18) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_0043;
	}

IL_0043:
	{
		bool L_19 = V_4;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		float L_2 = ___z2;
		__this->___z_2 = L_2;
		float L_3 = ___w3;
		__this->___w_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___lhs0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___rhs1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___lhs0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___rhs1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___lhs0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___rhs1;
		float L_11 = L_10.___z_4;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))));
		goto IL_002d;
	}

IL_002d:
	{
		float L_12 = V_0;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		float L_1;
		L_1 = Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline(L_0, NULL);
		V_0 = L_1;
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___value0;
		float L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_4, L_5, NULL);
		V_2 = L_6;
		goto IL_0026;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_2 = L_7;
		goto IL_0026;
	}

IL_0026:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_2;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___a0, float ___b1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		if ((((float)L_0) > ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___b1;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___a0;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___vector0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___vector0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___vector0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___vector0;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___vector0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___vector0;
		float L_11 = L_10.___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))))));
		V_0 = ((float)L_12);
		goto IL_0034;
	}

IL_0034:
	{
		float L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
