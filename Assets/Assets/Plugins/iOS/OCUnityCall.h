//
//  MyTempView.h
//  Unity-iPhone
//
//  Created by 123 on 2022/2/15.
//

#pragma once

typedef bool (* CallFunc_Pointor_GetIsUnityViewNeedSwallowEvent)(int x, int y);

extern CallFunc_Pointor_GetIsUnityViewNeedSwallowEvent g_getIsUnityViewNeedSwallowEvent;
extern bool g_isNeedUnityViewSwallowEvent;

extern "C" {
    // Unity调用OC测试
    void TestUnitCallOC(const char * data);
    // Unity调用OC 设置回调指针 UnityView是否需要吞噬事件
    void SetOC_CallFunc_Pointor_GetIsUnityViewNeedSwallowEvent(CallFunc_Pointor_GetIsUnityViewNeedSwallowEvent getIsUnityViewNeedSwallowEvent);
    // Unity调用OC 设置变量 UnityView是否需要吞噬事件
    void CallOC_SetIsUnityViewNeedSwallowEvent(bool isNeed);
}

