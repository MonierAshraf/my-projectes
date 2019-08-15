using UnityEngine;
using System.Collections;
using UnityEngine.UI;//new
public class down : MonoBehaviour {

    public int counter;
    public Text counter_text;

	// Use this for initialization
	void Start () {
       counter = 20;
        counter_text.text = counter .ToString();
        StartCoroutine(down_timer());	
	}
	
IEnumerator down_timer()
    {
        while (counter>0)
        {
            yield return new WaitForSeconds(1.0f);
            counter --;
            counter_text.text = counter.ToString();

        }
        counter_text.text = " Time Fished ";


    }
}
