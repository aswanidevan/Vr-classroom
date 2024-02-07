using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class libraryobjcreator : MonoBehaviour
{   public Transform box1;
    public Transform cube;
    bool allOptions=true;
    
    public Texture btnTexture;
    // Start is called before the first frame update
    void Start()
    {
                string modelrec=librarylist.Loader;
                string modelpath="modellib/"+modelrec;
                GameObject modelshape = Resources.Load(modelpath) as GameObject;
                GameObject obj=Instantiate(modelshape);
                obj.transform.SetParent(box1,false);
                
    }
    
 
    void Update()
    {
        if (Input.touchCount == 1)
        {
            // GET TOUCH 0
            Touch touch0 = Input.GetTouch(0);
 
            // APPLY ROTATION
            if (touch0.phase == TouchPhase.Moved)
            {
                cube.transform.Rotate(touch0.deltaPosition.y*-0.2f, touch0.deltaPosition.x*0.2f, 0f);
            }
 
        }
    }
    private void OnGUI(){
        
            float scalex = (float)(Screen.width) / 1280.0f;
   float scaley = (float)(Screen.height) / 720.0f;
   GUI.matrix = Matrix4x4.TRS(new Vector3(0, 0, 0), Quaternion.identity, new Vector3(scalex, scaley, 1));
   GUI.enabled = allOptions;
   if (allOptions){
        if (GUI.Button(new Rect(10, 10, 50, 50), btnTexture))
            backtclicked();
   }
    }
    public void backtclicked(){
        allOptions=false;
        
        SceneManager.LoadScene("library");

       
   }
}
