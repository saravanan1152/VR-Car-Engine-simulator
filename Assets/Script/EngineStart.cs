using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EngineStart : MonoBehaviour
{
    public GameObject player;
   public Enginei4 engine;
    public GameObject startbutton;
    public GameObject stopbutton;

    // Start is called before the first frame update
    void Start()
    {
        
        engine = GetComponent<Enginei4>();
        engine.enabled = false;
        stopbutton.SetActive(false);
    }

    // Update is called once per frame
    void Update()
    {
       
       
    }
    public void engineStart()
    {
        engine.enabled = true;
        stopbutton.SetActive(true);
        startbutton.SetActive(false);
    }
    public void enginetop()
    {
        engine.enabled = false;
        stopbutton.SetActive(false);
        startbutton.SetActive(true);
    }
}
