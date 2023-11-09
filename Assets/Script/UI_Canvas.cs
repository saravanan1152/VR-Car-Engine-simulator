using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UltimateXR.Manipulation;
using UltimateXR.Extensions.Unity;
using UltimateXR.Extensions.Unity.Math;
public class UI_Canvas : MonoBehaviour
{
    public Vector3 oldposition;
    public GameObject curruntPos;
    public GameObject ui;
    // Start is called before the first frame update
    void Start()
    {
        oldposition = transform.position;
        
    }

    // Update is called once per frame
    void Update()
    {
        
        if(transform.position!=oldposition)
        {
            Debug.Log("position");
        }
    }
}
