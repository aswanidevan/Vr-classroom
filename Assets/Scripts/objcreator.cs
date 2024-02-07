using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Unity.Netcode;
using UnityEngine.UI;


public class objcreator : NetworkBehaviour
{
    public NetworkVariable<int> modelno = new NetworkVariable<int>();
    public NetworkVariable<Quaternion> networkObjRotate= new NetworkVariable<Quaternion>();
    public NetworkVariable<bool> gyroglobal=new NetworkVariable<bool>(true);
    
    
     


    [SerializeField]
    private Transform box1;

    [SerializeField]
    public Quaternion baserotation= new Quaternion(0,1,0,0);

    public int firstupdate=0;

    public Gyroscope m_Gyro;
     
    bool phonegyro=true;
    bool objrotate=true;

    public override void OnNetworkSpawn(){
            if (IsOwner)
            {
                Spwanshape();
            }

    }


    public void Spwanshape(){
            if (NetworkManager.Singleton.IsServer)
            {
                string modelrec=listgen.Loader;
                modelno.Value=listgen.Loaderno;
                Debug.Log(modelno.Value);
                string modelpath="modellib/"+modelrec;
                GameObject modelshape = Resources.Load(modelpath) as GameObject;
                GameObject obj=Instantiate(modelshape);
                obj.transform.SetParent(box1,false);
                
            }
            else{
               string modelrec=listgen.Loader;
                modelno.Value=listgen.Loaderno;
                Debug.Log(modelno.Value);
                string modelpath="modellib/"+modelrec;
               // GameObject modelshape = Resources.Load(modelpath) as GameObject;
               // GameObject obj=Instantiate(modelshape);
               // obj.transform.SetParent(box1,false);
                
            }         
    }


   


    public void Clientspawnobj(){
                
                    Debug.Log($"{modelno.Value} spawn");
                    Debug.Log("Client rpc");
                    string modelrec=listgen.tempName[modelno.Value];
                    Debug.Log(modelrec);
                    string modelpath="modellib/"+modelrec;
                    if(modelno.Value!=0){
                        GameObject modelshape = Resources.Load(modelpath) as GameObject;
                        GameObject obj=Instantiate(modelshape);
                        obj.transform.SetParent(box1,false);
                    }
                
    }

  

public void startgyro(Quaternion phoneRotation){
                if(IsServer){networkObjRotate.Value=phoneRotation;
            


                }
             

}


    void Update(){
        

  if(firstupdate==10){
      Clientspawnobj();
  }


        if(firstupdate<30)
            firstupdate++;  
        

        
            
         transform.localRotation =networkObjRotate.Value*baserotation;   
    }   
    

}
