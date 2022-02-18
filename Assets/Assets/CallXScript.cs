using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Runtime.InteropServices;
using System;

/**
 * OC和Unity交互脚本
 * @author longhui
 * @date 20220217
 */

public class CallXScript : MonoBehaviour
{
    private Camera mainCamera = null;
    
#if UNITY_IOS
    //引入声明
    [DllImport("__Internal")]
    public static extern void TestUnitCallOC(string data);

    [DllImport("__Internal")]
    public static extern void SetOC_CallFunc_Pointor_GetIsUnityViewNeedSwallowEvent(IntPtr callFuncPointor);

    [DllImport("__Internal")]
    public static extern void CallOC_SetIsUnityViewNeedSwallowEvent(bool isNeed);
    
    //先声明方法、delegate修饰标记是回调方法
    [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
    public delegate bool Delegate_GetIsUnityViewNeedSwallowEvent(int touchX, int touchY);

    //实现回调方法 MonoPInvokeCallback修饰会让OC通过函数指针回调此方法
    [AOT.MonoPInvokeCallback(typeof(Delegate_GetIsUnityViewNeedSwallowEvent))]
    static bool GetIsUnityViewNeedSwallowEvent(int touchX, int touchY) {
        Debug.LogFormat("Unity收到来自oc的调用:GetIsUnityViewNeedSwallowEvent:touchX={0}, touchY={1}", touchX, touchY);
        bool isNeed = isNeedUnityViewSwallowEvent(touchX, touchY);
        // CallOC_SetIsUnityViewNeedSwallowEvent(isNeed);
        return isNeed;
    }
#endif

    // Start is called before the first frame update
    void Start()
    {
        this.mainCamera = Camera.main;
        Debug.Log("脚本启动了：CallXScript");

        #if UNITY_IOS
            TestUnitCallOC("这是unity调用OC");
            //设置回调托管函数指针
            Delegate_GetIsUnityViewNeedSwallowEvent handler_GetIsUnityViewNeedSwallowEvent = new Delegate_GetIsUnityViewNeedSwallowEvent(GetIsUnityViewNeedSwallowEvent);
            IntPtr pointer_GetIsUnityViewNeedSwallowEvent = Marshal.GetFunctionPointerForDelegate(handler_GetIsUnityViewNeedSwallowEvent);
            //调用OC的方法，将C#的回调方法函数指针传给OC
            SetOC_CallFunc_Pointor_GetIsUnityViewNeedSwallowEvent(pointer_GetIsUnityViewNeedSwallowEvent);
        #endif
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    void onClick(GameObject obj)
    {
        Debug.Log ("click: " + obj.name);
    }

    static bool isNeedUnityViewSwallowEvent(int touchX, int touchY) {
        return isTouchAnyGameObject(touchX, touchY);
    }

    static bool isTouchAnyGameObject(int touchX, int touchY) {
        Debug.LogFormat("触摸坐标: {0}, {1}", touchX, touchY);
        // if (Input.touchCount >= 1) {
        //     Touch oneTouch = Input.GetTouch(0); // 注：这里需要遍历每个触摸点。现在先用第一个触摸点做测试
            // Vector3 p = oneTouch.position;
            Vector3 p = new Vector3(touchX, touchY, 0);
            Ray ray = Camera.main.ScreenPointToRay(p);
            RaycastHit hit;
            // if (oneTouch.phase == TouchPhase.Began) {
                Transform[] objects = GameObject.FindObjectsOfType<Transform>();
                Debug.LogFormat("获取游戏对象: {0}, {1}", objects.Length, objects);
                foreach (Transform obj in objects)
                {
                    if (Physics.Raycast(ray, out hit))
                    {
                        Debug.Log("触摸到了游戏对象: " + obj.name);
                        return true;
                    }
                }
            // }
        // }
        Debug.Log("没有触摸到游戏对象");
        return false;
    }
}
