using UnityEngine;
using System.Collections;

public class cm1 : MonoBehaviour
{
    public GameObject[] cameras;
    public string[] shortcuts;
    public bool changeAudioListener = true;
    // Use this for initialization
    void Start()
    {

    }

    // Update is called once per frame


    void Update()
    {
        int i = 0;
        for (i = 0; i < cameras.Length; i++)
        {
            if (Input.GetKeyUp(shortcuts[i]))
                SwitchCamera(i);


        }
    }
    void SwitchCamera(int index)
    {
        int i = 0;
        for (i = 0; i < cameras.Length; i++)
        {
            if (i != index)
            {
                if (changeAudioListener)
                {
                    cameras[i].GetComponent<AudioListener>().enabled = false;
                }
                cameras[i].GetComponent<Camera>().enabled = false;
            }
            else
            {
                if (changeAudioListener)
                {
                    cameras[i].GetComponent<AudioListener>().enabled = true;
                }
                cameras[i].GetComponent<Camera>().enabled = true;
            }
        }
    }

}

