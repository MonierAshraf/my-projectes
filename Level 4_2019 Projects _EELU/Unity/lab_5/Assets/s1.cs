using UnityEngine;
using System.Collections;

public class s1 : MonoBehaviour {
    public GameObject wall;

    Animator myanim;

	// Use this for initialization
	void Start () {
        myanim = wall.GetComponent<Animator>();
	
	}
	
	// Update is called once per frame
	void OnTriggerEnter(Collider other) {
        myanim.SetBool("open", true);
	
	}

    void OnTriggerExit(Collider other)
    {
        myanim.SetBool("open", false);

    }




}
