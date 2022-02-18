using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MoveFollowTouchBehaviourScript : MonoBehaviour
{
    private Camera mainCamera = null;
    private Transform currTouchObj = null;
    private float touchObjMoveSpeed = 1.0F;
    private Vector3 lastMousePos = new Vector3(0, 0, 0);

    // Start is called before the first frame update
    void Start()
    {
        this.mainCamera = Camera.main;
        Debug.Log("脚本启动了：MoveFollowTouchBehaviourScript");
    }

    // Update is called once per frame
    void Update()
    {
        this.onMoveFollowMouse();
        this.onMoveFollowTouch();
    }

    void onMoveFollowMouse() {
        if (Input.GetMouseButton(0))
        {
            Debug.Log("检测到鼠标点击:按下状态");
            Vector3 p = Input.mousePosition;
            if (this.currTouchObj == null) {
                Ray ray = mainCamera.ScreenPointToRay(p);
                RaycastHit hit;
                if (Physics.Raycast(ray, out hit))
                {
                    //获取当前触摸到的物体
                    this.currTouchObj = hit.collider.transform;
                }
                Debug.LogFormat("点到了模型: {0}", this.currTouchObj?.name);
            }
            if (this.currTouchObj != null)
            {
                Vector3 objToMousePos = Camera.main.WorldToScreenPoint(currTouchObj.position);
                Vector3 mousePos = new Vector3(p.x, p.y, objToMousePos.z);
                Debug.LogFormat("上次鼠标坐标: {0}, {1}, {2}", this.lastMousePos.x, this.lastMousePos.y, this.lastMousePos.z);
                Debug.LogFormat("当前鼠标坐标: {0}, {1}, {2}", mousePos.x, mousePos.y, objToMousePos.z);
                if (!this.lastMousePos.Equals(Vector3.zero) && !this.lastMousePos.Equals(mousePos)) {
                    Vector3 lastMouseWPos = Camera.main.ScreenToWorldPoint(this.lastMousePos);
                    Vector3 curMouseWPos = Camera.main.ScreenToWorldPoint(mousePos);
                    Debug.LogFormat("上次鼠标世界坐标: {0}, {1}, {2}", lastMouseWPos.x, lastMouseWPos.y, lastMouseWPos.z);
                    Debug.LogFormat("当前鼠标世界坐标: {0}, {1}, {2}", curMouseWPos.x, curMouseWPos.y, curMouseWPos.z);
                    Vector3 deltaWPos = curMouseWPos - lastMouseWPos;
                    Debug.LogFormat("偏移距离: x={0}, y={1}, z={2}", deltaWPos.x, deltaWPos.y, deltaWPos.z);
                    this.currTouchObj.Translate(deltaWPos.x * touchObjMoveSpeed, deltaWPos.y * touchObjMoveSpeed, 0, Space.World);

                }
                this.lastMousePos.x = mousePos.x;
                this.lastMousePos.y = mousePos.y;
                this.lastMousePos.z = objToMousePos.z;
            }
	    }else {
            currTouchObj = null;
        }
    }

    void onMoveFollowTouch() {
        // if (Input.touchCount == 1)
        // {
        //     Debug.Log("检测到单点触摸");
        //     Touch firstTouch = Input.GetTouch(0);
        //     if (firstTouch.phase == TouchPhase.Began)
        //     {
        //         Ray ray = mainCamera.ScreenPointToRay(firstTouch.position);
        //         RaycastHit hit;
        //         if (Physics.Raycast(ray, out hit))
        //         {
        //             //获取当前触摸到的物体
        //             currTouchObj = hit.collider.transform;
        //         }
        //     }

        //     if (Input.GetTouch(0).phase == TouchPhase.Moved)
        //     {     
        //         if (currTouchObj != null)
        //         {
        //             Vector3 touchDeltaPos = Input.GetTouch(0).deltaPosition;
        //             currTouchObj.Translate(touchDeltaPos.x * touchObjMoveSpeed, touchDeltaPos.y * touchObjMoveSpeed, 0, Space.World);
        //         }
        //     }
	    // }

        // 单点触摸和拖动状态
        if (Input.touchCount == 1) {
            Touch firstTouch = Input.GetTouch(0);
            Vector3 p = firstTouch.position;
            if (firstTouch.phase == TouchPhase.Began) {
                Debug.Log("检测到单点触摸:按下状态");
                Ray ray = mainCamera.ScreenPointToRay(p);
                RaycastHit hit;
                if (Physics.Raycast(ray, out hit)) {
                    //获取当前触摸到的物体
                    this.currTouchObj = hit.collider.transform;
                    Debug.LogFormat("触摸到了模型: {0}", this.currTouchObj?.name);
                }
            }else if (firstTouch.phase == TouchPhase.Moved) {
                if (this.currTouchObj != null) {
                    Vector3 objToMousePos = Camera.main.WorldToScreenPoint(this.currTouchObj.position);
                    Vector3 mousePos = new Vector3(p.x, p.y, objToMousePos.z);
                    Debug.LogFormat("上次鼠标坐标: {0}, {1}, {2}", this.lastMousePos.x, this.lastMousePos.y, this.lastMousePos.z);
                    Debug.LogFormat("当前鼠标坐标: {0}, {1}, {2}", mousePos.x, mousePos.y, objToMousePos.z);
                    if (!this.lastMousePos.Equals(Vector3.zero) && !this.lastMousePos.Equals(mousePos)) {
                        Vector3 lastMouseWPos = Camera.main.ScreenToWorldPoint(this.lastMousePos);
                        Vector3 curMouseWPos = Camera.main.ScreenToWorldPoint(mousePos);
                        Debug.LogFormat("上次鼠标世界坐标: {0}, {1}, {2}", lastMouseWPos.x, lastMouseWPos.y, lastMouseWPos.z);
                        Debug.LogFormat("当前鼠标世界坐标: {0}, {1}, {2}", curMouseWPos.x, curMouseWPos.y, curMouseWPos.z);
                        Vector3 deltaWPos = curMouseWPos - lastMouseWPos;
                        Debug.LogFormat("偏移距离: x={0}, y={1}, z={2}", deltaWPos.x, deltaWPos.y, deltaWPos.z);
                        this.currTouchObj.Translate(deltaWPos.x * touchObjMoveSpeed, deltaWPos.y * touchObjMoveSpeed, 0, Space.World);

                    }
                    this.lastMousePos.x = mousePos.x;
                    this.lastMousePos.y = mousePos.y;
                    this.lastMousePos.z = objToMousePos.z;
                }else if (firstTouch.phase == TouchPhase.Began) {

                }
            }else {
                this.currTouchObj = null;
            }
        }else {
            this.currTouchObj = null;
        }
    }
}
