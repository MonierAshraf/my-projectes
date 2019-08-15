using UnityEngine;
using System.Collections;

public class s1 : MonoBehaviour {

	// Use this for initialization
	void Start () {

        this.transform.position = Random.insideUnitSphere * 5;
        this.GetComponent<Renderer>().material.color=Randomcolor();

	}


    Color Randomcolor()
    {
        float r = Random.value;
        float b = Random.value;
        float g = Random.value;
        return new Color(r, g, b);
    }
	
	// Update is called once per frame
	void Update () {
	
	}
}
