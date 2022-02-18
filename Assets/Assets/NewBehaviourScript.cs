using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class NewBehaviourScript : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        Vector3 a = new Vector3(20f*Time.deltaTime,10f * Time.deltaTime, 0 * Time.deltaTime);
        this.gameObject.transform.Rotate(a);
    }
}
