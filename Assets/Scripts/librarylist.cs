using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO;
using UnityEngine.UI;
using TMPro;
using System;
using UnityEngine.SceneManagement;




public class librarylist : MonoBehaviour
{   [SerializeField]
    private Transform box1;
   private List<string> PlayersInFolder;
    public GameObject Cellprefab;
    public static string Loader ;
    public static int Loaderno ;
    public static string netstatv="NOT" ;
    TextMeshPro textmesh;
    public static string[] tempName={"Cube","Cube", "Sphere", "Capsule","diamond","RobotCat"};
    // Start is called before the first frame update
    void Start()
    {  
         
         int i=0 ;
         
     foreach (string f in tempName) {
            
            if(i!=0){
                GameObject obj=Instantiate(Cellprefab);
                obj.transform.SetParent(box1,false);
                obj.GetComponent<Button>().onClick.AddListener(() => { string tmp = f; VRScreenstarter(tmp); });
                obj.transform.GetChild(0).GetComponent<Text>().text=f;

            }
            
            
            
            i++;
            }
  
          
    }
public void VRScreenstarter(string tmp){
    Loader=tmp;
    Loaderno=Array.IndexOf(tempName, tmp);
    netstatv="Server";
    SceneManager.LoadScene("LibraryView");
    

}


    public void backtclicked(){
       SceneManager.LoadScene("mainmenu");

       
   }


}

