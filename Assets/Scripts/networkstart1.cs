/*using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Unity.Netcode;
using Unity.Netcode.Transports.UNET;
using UnityEngine.UI;

public class networkstart : MonoBehaviour 
{   
    int here=0;
    public Texture Gyrobuttontexture;
    
    public string netstatv="";

    string serverip;

       public Gyroscope m_Gyro;
        public Quaternion phoneRotation;
    
    public UNetTransport Transport=>(UNetTransport)NetworkManager.Singleton.NetworkConfig.NetworkTransport;
    
    
    void Start()
    {
        if(listgen.netstatv=="Server"){
            NetworkManager.Singleton.StartHost();
            netstatv="Server";
            Debug.Log("Server");



                      
            }
        
        else if(joinselect.netstatv=="Client"){ 
            serverip= joinselect.ipaddress; 
            Transport.ConnectAddress=serverip;          
            NetworkManager.Singleton.StartClient();  
            netstatv="Client";
            Debug.Log("CONNected");

       
            }
                 
        
        Debug.Log("AWAAKE END");
     
           
    }
    private void OnGUI(){
        if(listgen.netstatv=="Server"){
            GUILayout.BeginArea(new Rect(10, 10, 780, 1960));
            if(here>40)
            if (GUI.Button(new Rect(10, 10, 1000, 1000), Gyrobuttontexture))  daddd();
            GUILayout.EndArea();
            here++;
        }
    }
    public void daddd(){
       
    
    }

    public void EnableGyro(){
      
            {
                if (NetworkManager.Singleton.IsServer && !NetworkManager.Singleton.IsClient )
                {
                    foreach (ulong uid in NetworkManager.Singleton.ConnectedClientsIds)
                        NetworkManager.Singleton.SpawnManager.GetPlayerNetworkObject(uid).GetComponent<objcreator>().startgyro(phoneRotation);
                }
               
            }
            
 
    }
   
    private void Update() {
        if (NetworkManager.Singleton.IsServer){
            m_Gyro=Input.gyro;
            m_Gyro.enabled = true;
            
            phoneRotation=m_Gyro.attitude;         
                                           
            foreach (ulong uid in NetworkManager.Singleton.ConnectedClientsIds)
                NetworkManager.Singleton.SpawnManager.GetPlayerNetworkObject(uid).GetComponent<objcreator>().startgyro(phoneRotation);
                    
        }
    }
}
*/