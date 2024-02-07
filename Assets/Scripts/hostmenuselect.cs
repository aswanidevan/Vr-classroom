using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System.Net.NetworkInformation;
using System.Net.Sockets;
using System.Net;

using UnityEngine.SceneManagement;

public class hostmenuselect : MonoBehaviour
{
    [SerializeField]
    private Text iptext;

   public void presentclicked(){
       SceneManager.LoadScene("presentlist");
       
   }
   public void backclicked(){
       SceneManager.LoadScene("mainmenu");
       
   }
   private void Start() {
        string ipadd=GetLocalIPAddress();
        
   }

    public string GetLocalIPAddress()
     {
         var host = Dns.GetHostEntry(Dns.GetHostName());
         foreach (var ip in host.AddressList)
         {
             if (ip.AddressFamily == AddressFamily.InterNetwork)
             {
                 iptext.text = ip.ToString();
                 return ip.ToString();
             }
         }
         throw new System.Exception("No network adapters with an IPv4 address in the system!");
     }
}