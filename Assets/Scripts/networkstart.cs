using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Unity.Netcode;
using Unity.Netcode.Transports.UNET;
using UnityEngine.UI;
using UnityEngine.SceneManagement;


public class networkstart : MonoBehaviour 
{   bool allOptions=true;
    int here=0;
    public Texture btnTexture;
    public static bool VRstate=true;
    
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
            VRstate=true;
       
            }
                 
        
        Debug.Log("AWAAKE END");
     
           
    }
    private void OnGUI(){
                  if(listgen.netstatv=="Server"){
            float scalex = (float)(Screen.width) / 1280.0f;
   float scaley = (float)(Screen.height) / 720.0f;
   GUI.matrix = Matrix4x4.TRS(new Vector3(0, 0, 0), Quaternion.identity, new Vector3(scalex, scaley, 1));
   GUI.enabled = allOptions;
   if (allOptions){
        if (GUI.Button(new Rect(10, 10, 50, 50), btnTexture))
            backtclicked();
   }}
   

        
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
    public void backtclicked(){
       
        
        if(listgen.netstatv=="Server"){
            allOptions=false;
        NetworkManager.Singleton.Shutdown();
        SceneManager.LoadScene("presentlist");


                      
            }
        
    
       
   }
}
