using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class mainmenuselect : MonoBehaviour
{
   public void libraryclicked(){
       SceneManager.LoadScene("library");
       
   }
   public void hostclicked(){
       SceneManager.LoadScene("hostmenu");
       
   }
   public void joinclicked(){
       SceneManager.LoadScene("join");
       
   }
   public void backclicked(){
       Application.Quit();
       
   }
 
}
