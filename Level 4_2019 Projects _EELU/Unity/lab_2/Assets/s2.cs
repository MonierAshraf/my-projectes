using UnityEngine;
using System.Collections;

public class s2 : MonoBehaviour {
    public GameObject sphere;
	// Use this for initialization
	void Start () {

        StartCoroutine (Genrate_sphere());

    }
    IEnumerator Genrate_sphere()
    {
        for (int i = 0; i < 20; i++)
        {

        Instantiate(sphere);

        yield return new WaitForSeconds(1.0f);
        }

    }
	
	
}
