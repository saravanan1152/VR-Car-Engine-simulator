using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CarFalse : MonoBehaviour
{
    public GameObject stand;
    public GameObject car;
    public GameObject ui;
    public GameObject returnCarUI;
    public GameObject EngineBlock;
    public GameObject engineUI;
   public AudioSource audiosource;
    public AudioClip clip;
   public bool au=false;
    void Start()
    {
      
    }

    // Update is called once per frame
    void Update()
    {
        if (!au)
        {
            audiosource = GetComponent<AudioSource>();
            audiosource.clip = clip;
            audiosource.Play();
        }
        
    }
    public void carInvasiple()
    {
        au = true;
        car.SetActive(false);
        ui.SetActive(false);
        stand.SetActive(true);
        returnCarUI.SetActive(true);
       

    }
    public void carVisiple()
    {
        car.SetActive(true);
        ui.SetActive(true);
        stand.SetActive(false);
        returnCarUI.SetActive(false);
    }
    public void EngineBlockInverse()
    {
        EngineBlock.SetActive(false);
        engineUI.SetActive(false);
    }
    public void EngineBlockVisiple()
    {
        EngineBlock.SetActive(true);

    }
}
