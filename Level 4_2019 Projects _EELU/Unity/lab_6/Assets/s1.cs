using UnityEngine;
using System.Collections;//new
using System;

public class s1 : MonoBehaviour {
    float hour_to_digit;
    float mintes_to_digit;
    float seconds_to_digit;

    public Transform hours, mintes, seconds;

    public bool Analog;

    // Use this for initialization
    void Start () {
        Analog = false;

        hour_to_digit = (360.0f / 12f);
        mintes_to_digit = (360.0f / 60f);
        seconds_to_digit = (360.0f / 60f);


    }
	
	// Update is called once per frame
	void Update () {
       
        if (Analog)
        {
          TimeSpan time=  DateTime.Now.TimeOfDay;
            hours.localRotation = (Quaternion.Euler(0f, 0f,(float) time.TotalHours * -hour_to_digit));
            mintes.localRotation = (Quaternion.Euler(0f, 0f, (float)time.TotalMinutes * -mintes_to_digit));
            seconds.localRotation = (Quaternion.Euler(0f, 0f, (float)time.TotalSeconds * -seconds_to_digit));


        }
        else
        {
            DateTime time = DateTime.Now;
            hours.localRotation = (Quaternion.Euler(0f, 0f, time.Hour * -hour_to_digit));
            mintes.localRotation = (Quaternion.Euler(0f, 0f, time.Minute * -mintes_to_digit));
            seconds.localRotation = (Quaternion.Euler(0f, 0f, time.Second * -seconds_to_digit));


        }

    }
}
