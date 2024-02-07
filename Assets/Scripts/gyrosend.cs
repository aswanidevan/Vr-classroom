using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Unity.Netcode;
using UnityEngine.SceneManagement;
using UnityEngine.UI;


public class gyrosend : MonoBehaviour
{   public static string ipaddress="";
    public static string netstatv="NOT";
    public Text ipfield;
    public void backclicked(){
       Debug.Log("back load");
       SceneManager.LoadScene("mainmenu");
       Debug.Log("back load");
   }
   public void joinclicked(){
    ipaddress = ipfield.text.ToString();
    if(ipaddress!=""){
    netstatv="Gyro";
    SceneManager.LoadScene("HelloCardboard");
    }
    
       
   }

}
