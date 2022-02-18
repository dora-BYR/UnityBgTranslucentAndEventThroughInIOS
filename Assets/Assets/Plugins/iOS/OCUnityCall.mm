//
//  MyTempView.m
//  Unity-iPhone
//
//  Created by 123 on 2022/2/15.
//  原生层view用于控制面板 by longhui
//

#import <Foundation/Foundation.h>
#import "OCUnityCall.h"

CallFunc_Pointor_GetIsUnityViewNeedSwallowEvent g_getIsUnityViewNeedSwallowEvent = nil;
bool g_isNeedUnityViewSwallowEvent = true;

#ifdef __cplusplus

extern "C" {
    void TestUnitCallOC(const char *data) {
        NSLog(@"OC收到来自unity的调用:TestUnitCallOC");
    }

    void SetOC_CallFunc_Pointor_GetIsUnityViewNeedSwallowEvent(CallFunc_Pointor_GetIsUnityViewNeedSwallowEvent getIsUnityViewNeedSwallowEvent) {
        g_getIsUnityViewNeedSwallowEvent = getIsUnityViewNeedSwallowEvent;
        NSLog(@"OC收到来自unity的调用:SetOC_CallFunc_Pointor_GetIsUnityViewNeedSwallowEvent");
        // 尝试调用该函数
        // if (g_getIsUnityViewNeedSwallowEvent) {
        //     g_getIsUnityViewNeedSwallowEvent(0, 0);
        //     NSLog(@"OC调用Unity: ok: ");
        // }else {
        //     NSLog(@"OC调用Unity: 函数是空的");
        // }
    }

    void CallOC_SetIsUnityViewNeedSwallowEvent(bool isNeed) {
        NSLog(@"OC收到来自unity的调用:CallOC_SetIsUnityViewNeedSwallowEvent:%i", isNeed);
        g_isNeedUnityViewSwallowEvent = isNeed;
    }
}

#endif
