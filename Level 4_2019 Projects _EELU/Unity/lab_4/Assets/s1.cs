using UnityEngine;
using System.Collections;
using UnityEngine.UI;//new
using System.Collections.Generic;//new
using System.Linq;//new

public class s1 : MonoBehaviour {

    public float fps;
    public Text fps_text;
   
    //Colors
    int number_frames;
    int Green_frames;
    int Yeloow_frames;

//List of Frame Store
    List<float> frame_list;

    // Use this for initialization
    void Start () {

        frame_list = new List<float>();
        number_frames = 30;
        Yeloow_frames = 40;
        Green_frames = 60;
        //else red
         

    }
	
	// Update is called once per frame
	void Update () {

        frame_list.Add(Time.deltaTime);//store every frame 

        if (frame_list.Count==number_frames-1)
        {//Avarege , change color , clear
            Avaerage_fps();

            change_color_fps();
            frame_list.Clear();
        }
	
	}

    void Avaerage_fps()
    {
        fps= ( 1 / frame_list.Average() );
        fps_text.text = fps.ToString();

    }
    void change_color_fps() {
        if (fps>Green_frames)
        {
            fps_text.color = Color.green;
        }
        else if (fps>=Yeloow_frames)
        {

            fps_text.color = Color.yellow;

        }
        else
        {
            fps_text.color = Color.red;
        }

    }






}
