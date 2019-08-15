using UnityEngine;
using System.Collections;

public class shooter : MonoBehaviour {

    public Rigidbody sphere;//sphere

    public Transform shotpos; //postion strat of sphere

    float shotforce;
    float movespeed; 

	// Use this for initialization
	void Start () {
        movespeed = 10f;
                shotforce = 1000f;


    }
	
	// Update is called once per frame
	void Update () {

        float h = Input.GetAxis("Horizontal") * Time.deltaTime * movespeed;
        float v = Input.GetAxis("Vertical") * Time.deltaTime * movespeed;
        this.transform.Translate(new Vector3(h, v, 0f));

        if (Input.GetKey(KeyCode.Space))
        {


            Rigidbody shot = Instantiate(sphere, shotpos.position, shotpos.rotation) as Rigidbody;
            shot.AddForce(shotpos.forward * shotforce);

        }
    }
}
