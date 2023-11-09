using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UltimateXR.Manipulation;
namespace UltimateXR.Haptics.Helpers
{
    /// <summary>
    ///     Component that, added to a grabbable object (<see cref="UxrGrabbableObject" />), sends haptic feedback to any
    ///     controller that manipulates it.
    /// </summary>
    [RequireComponent(typeof(UxrGrabbableObject))]
    public class NewBehaviourScript : MonoBehaviour
    {
        public TextMeshProUGUI ObjName;
        [SerializeField]
        private Transform target;

        [SerializeField]
        private Vector3 offsetPosition;

        [SerializeField]
        private Space offsetPositionSpace = Space.Self;

        [SerializeField]
        private bool lookAt = true;

        public UxrManipulationHapticFeedback manipulationFeedback;
        private void Update()
        {
            
            GameObject grabbedObject = GameObject.FindGameObjectWithTag("Grab");
            if (grabbedObject == null)
            {
                Debug.Log("None selected");
                return;
            }
            manipulationFeedback = grabbedObject.GetComponent<UxrManipulationHapticFeedback>();
            Debug.Log($"{grabbedObject.name} selected : N : {GameObject.FindGameObjectsWithTag("Grab").Length}");
            ObjName.text = manipulationFeedback.HapticClipOnGrab.name;
            Refresh();
        }

        public void Refresh()
        {
            if (target == null)
            {
                Debug.LogWarning("Missing target ref !", this);

                return;
            }

           
            if (offsetPositionSpace == Space.Self)
            {
                transform.position = target.TransformPoint(offsetPosition);
            }
            else
            {
                transform.position = target.position + offsetPosition;
            }

         
            if (lookAt)
            {
                transform.LookAt(target);
            }
            else
            {
                transform.rotation = target.rotation;
            }
        }
    }
}
