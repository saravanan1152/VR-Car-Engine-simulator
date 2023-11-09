using UnityEngine;

public class Voice : MonoBehaviour
{
    public GameObject player;

    public float Distance = 0.5f;   
    public AudioSource audiosource;
    public AudioClip audioClip;
   
    // Start is called before the first frame update
    void Start()
    {
        audiosource = GetComponent<AudioSource>();
    }

    // Update is called once per frame
    void Update()
    {
        if (Vector3.Distance(transform.position, player.transform.position) <Distance)

        {
            audiosource.clip = audioClip;
            audiosource.Play();
           // audiosource.PlayOneShot(uIClip,1f);
        }
       

    }
   
   
}
