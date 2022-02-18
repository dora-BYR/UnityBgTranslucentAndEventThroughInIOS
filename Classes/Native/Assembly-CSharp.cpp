#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2)
	{
		R ret;
		void* params[2] = { &p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3;
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3<R, T1*, T2, T3>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3)
	{
		R ret;
		void* params[3] = { p1, &p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.Transform[]
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// CallXScript
struct CallXScript_tA56750CCE6BE05F38AA066A7DE388FBEC3DC3F82;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// MoveFollowTouchBehaviourScript
struct MoveFollowTouchBehaviourScript_t682ECA9BB85A5C0E8294469301C6F48098779AEC;
// NewBehaviourScript
struct NewBehaviourScript_t89363A736D121ACCCE70DC36A66775D2F1D42CF7;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// CallXScript/Delegate_GetIsUnityViewNeedSwallowEvent
struct Delegate_GetIsUnityViewNeedSwallowEvent_t72E3D5D38100C32E6655397677E63C9D39473D8B;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;

IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Delegate_GetIsUnityViewNeedSwallowEvent_t72E3D5D38100C32E6655397677E63C9D39473D8B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral09E25036810171F457F442B0DC907D92439168B5;
IL2CPP_EXTERN_C String_t* _stringLiteral16E7D0388C6ACBCC10AC76850103DA773592D32B;
IL2CPP_EXTERN_C String_t* _stringLiteral175C671D376749548EAF6224491DBD93984D6143;
IL2CPP_EXTERN_C String_t* _stringLiteral178C5F09087B25794915BF27714F09628E568D25;
IL2CPP_EXTERN_C String_t* _stringLiteral29602A6889993714C00B833AADCF0F6CD384B745;
IL2CPP_EXTERN_C String_t* _stringLiteral29E1CA3DF7F09DD4D53A7A659D036AEB488E1260;
IL2CPP_EXTERN_C String_t* _stringLiteral2EEEDD97AC58DFFC5FF946F2152EB69FF67FEC6A;
IL2CPP_EXTERN_C String_t* _stringLiteral3102EA2AFB456AB9F3221F8E64EB606ACD5A5EEA;
IL2CPP_EXTERN_C String_t* _stringLiteral339E2170AFAE5B5443C2D7813A1ED6CA190DEDF1;
IL2CPP_EXTERN_C String_t* _stringLiteral35D0904B121F1E883A563801EC47C2BCD877843B;
IL2CPP_EXTERN_C String_t* _stringLiteral5CA9CB7E98DFADD3CE6A97A916AEFB719F1DB635;
IL2CPP_EXTERN_C String_t* _stringLiteral74071DDD5B8F43D20E48324AEED495905B319CC3;
IL2CPP_EXTERN_C String_t* _stringLiteral75E1300B36B8E8CD6CF5B9BF9CD013BCFAB35F15;
IL2CPP_EXTERN_C String_t* _stringLiteral7FAF969F0FB7DFB3D5C01FC5D308AFCCD5AB7171;
IL2CPP_EXTERN_C String_t* _stringLiteral8BC89650A01BBD51346A3F59656397B3A5902292;
IL2CPP_EXTERN_C String_t* _stringLiteral8F0BCCB1DC5FBFDF0502DFC72A6DAA4C34850828;
IL2CPP_EXTERN_C String_t* _stringLiteralCA44D35E166C02F9CF2C4237FE0E64ABC4A19263;
IL2CPP_EXTERN_C String_t* _stringLiteralF90E9FCBAD3C6CE8E0D3D8E92B8A65B954F52A2B;
IL2CPP_EXTERN_C const RuntimeMethod* CallXScript_GetIsUnityViewNeedSwallowEvent_mEDEEEC00269C848EE5F8AD3FAE97C062F9BA53D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Marshal_GetFunctionPointerForDelegate_TisDelegate_GetIsUnityViewNeedSwallowEvent_t72E3D5D38100C32E6655397677E63C9D39473D8B_m666B871A70E07DB31941832FB1FAAEFFA94ECA4B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectsOfType_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_mE7968B42F57EC1546BEFE273E6C9B388225606DB_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};
struct Il2CppArrayBounds;

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};

struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Ray
struct Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 
{
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Direction_1;
};

// UnityEngine.RaycastHit
struct RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 
{
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;
};

// UnityEngine.Space
struct Space_tF043E93E06B702DD05199C28C6F779049B38A969 
{
	// System.Int32 UnityEngine.Space::value__
	int32_t ___value___2;
};

// UnityEngine.TouchPhase
struct TouchPhase_t54E0A1AF80465997849420A72317B733E1D49A9E 
{
	// System.Int32 UnityEngine.TouchPhase::value__
	int32_t ___value___2;
};

// UnityEngine.TouchType
struct TouchType_t84F82C73BC1A6012141735AD84DA67AA7F7AB43F 
{
	// System.Int32 UnityEngine.TouchType::value__
	int32_t ___value___2;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// UnityEngine.Touch
struct Touch_t03E51455ED508492B3F278903A0114FA0E87B417 
{
	// System.Int32 UnityEngine.Touch::m_FingerId
	int32_t ___m_FingerId_0;
	// UnityEngine.Vector2 UnityEngine.Touch::m_Position
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Position_1;
	// UnityEngine.Vector2 UnityEngine.Touch::m_RawPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RawPosition_2;
	// UnityEngine.Vector2 UnityEngine.Touch::m_PositionDelta
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PositionDelta_3;
	// System.Single UnityEngine.Touch::m_TimeDelta
	float ___m_TimeDelta_4;
	// System.Int32 UnityEngine.Touch::m_TapCount
	int32_t ___m_TapCount_5;
	// UnityEngine.TouchPhase UnityEngine.Touch::m_Phase
	int32_t ___m_Phase_6;
	// UnityEngine.TouchType UnityEngine.Touch::m_Type
	int32_t ___m_Type_7;
	// System.Single UnityEngine.Touch::m_Pressure
	float ___m_Pressure_8;
	// System.Single UnityEngine.Touch::m_maximumPossiblePressure
	float ___m_maximumPossiblePressure_9;
	// System.Single UnityEngine.Touch::m_Radius
	float ___m_Radius_10;
	// System.Single UnityEngine.Touch::m_RadiusVariance
	float ___m_RadiusVariance_11;
	// System.Single UnityEngine.Touch::m_AltitudeAngle
	float ___m_AltitudeAngle_12;
	// System.Single UnityEngine.Touch::m_AzimuthAngle
	float ___m_AzimuthAngle_13;
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// CallXScript/Delegate_GetIsUnityViewNeedSwallowEvent
struct Delegate_GetIsUnityViewNeedSwallowEvent_t72E3D5D38100C32E6655397677E63C9D39473D8B  : public MulticastDelegate_t
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// CallXScript
struct CallXScript_tA56750CCE6BE05F38AA066A7DE388FBEC3DC3F82  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Camera CallXScript::mainCamera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___mainCamera_4;
};

// MoveFollowTouchBehaviourScript
struct MoveFollowTouchBehaviourScript_t682ECA9BB85A5C0E8294469301C6F48098779AEC  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Camera MoveFollowTouchBehaviourScript::mainCamera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___mainCamera_4;
	// UnityEngine.Transform MoveFollowTouchBehaviourScript::currTouchObj
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___currTouchObj_5;
	// System.Single MoveFollowTouchBehaviourScript::touchObjMoveSpeed
	float ___touchObjMoveSpeed_6;
	// UnityEngine.Vector3 MoveFollowTouchBehaviourScript::lastMousePos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lastMousePos_7;
};

// NewBehaviourScript
struct NewBehaviourScript_t89363A736D121ACCCE70DC36A66775D2F1D42CF7  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Transform[]
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24  : public RuntimeArray
{
	ALIGN_FIELD (8) Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* m_Items[1];

	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.IntPtr System.Runtime.InteropServices.Marshal::GetFunctionPointerForDelegate<System.Object>(TDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Marshal_GetFunctionPointerForDelegate_TisRuntimeObject_mB8EF9643D1C7B4742C62D318B23401AEA121371C_gshared (RuntimeObject* ___d0, const RuntimeMethod* method) ;
// T[] UnityEngine.Object::FindObjectsOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Object_FindObjectsOfType_TisRuntimeObject_m1E6D851F6A46D646E0554A94729E9AAE79B0E87A_gshared (const RuntimeMethod* method) ;

// System.Boolean CallXScript::GetIsUnityViewNeedSwallowEvent(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CallXScript_GetIsUnityViewNeedSwallowEvent_mEDEEEC00269C848EE5F8AD3FAE97C062F9BA53D4 (int32_t ___touchX0, int32_t ___touchY1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogFormat(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogFormat_m31E062CF69D0196C076CAC90DB268291B012E93B (String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Boolean CallXScript::isNeedUnityViewSwallowEvent(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CallXScript_isNeedUnityViewSwallowEvent_m7A0F63B3DEE175DEBD6F14AF9ADFA484CD935B88 (int32_t ___touchX0, int32_t ___touchY1, const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void CallXScript::TestUnitCallOC(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallXScript_TestUnitCallOC_m14123C6F3FD58497A1BA74AFA37BA1B97BC87CC6 (String_t* ___data0, const RuntimeMethod* method) ;
// System.Void CallXScript/Delegate_GetIsUnityViewNeedSwallowEvent::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Delegate_GetIsUnityViewNeedSwallowEvent__ctor_m13AB759AED5D673D11DCB88BB986ABC67F1AE453 (Delegate_GetIsUnityViewNeedSwallowEvent_t72E3D5D38100C32E6655397677E63C9D39473D8B* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.IntPtr System.Runtime.InteropServices.Marshal::GetFunctionPointerForDelegate<CallXScript/Delegate_GetIsUnityViewNeedSwallowEvent>(TDelegate)
inline intptr_t Marshal_GetFunctionPointerForDelegate_TisDelegate_GetIsUnityViewNeedSwallowEvent_t72E3D5D38100C32E6655397677E63C9D39473D8B_m666B871A70E07DB31941832FB1FAAEFFA94ECA4B (Delegate_GetIsUnityViewNeedSwallowEvent_t72E3D5D38100C32E6655397677E63C9D39473D8B* ___d0, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (Delegate_GetIsUnityViewNeedSwallowEvent_t72E3D5D38100C32E6655397677E63C9D39473D8B*, const RuntimeMethod*))Marshal_GetFunctionPointerForDelegate_TisRuntimeObject_mB8EF9643D1C7B4742C62D318B23401AEA121371C_gshared)(___d0, method);
}
// System.Void CallXScript::SetOC_CallFunc_Pointor_GetIsUnityViewNeedSwallowEvent(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallXScript_SetOC_CallFunc_Pointor_GetIsUnityViewNeedSwallowEvent_mF08A6BC7B6C6C425A8BC1C93A0428549C028C21C (intptr_t ___callFuncPointor0, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Boolean CallXScript::isTouchAnyGameObject(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CallXScript_isTouchAnyGameObject_mB7AE9C86ED40503CA0CC6EACF5B9ECCB2A78C31D (int32_t ___touchX0, int32_t ___touchY1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Ray UnityEngine.Camera::ScreenPointToRay(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, const RuntimeMethod* method) ;
// T[] UnityEngine.Object::FindObjectsOfType<UnityEngine.Transform>()
inline TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* Object_FindObjectsOfType_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_mE7968B42F57EC1546BEFE273E6C9B388225606DB (const RuntimeMethod* method)
{
	return ((  TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* (*) (const RuntimeMethod*))Object_FindObjectsOfType_TisRuntimeObject_m1E6D851F6A46D646E0554A94729E9AAE79B0E87A_gshared)(method);
}
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_m07803863BB5A3896FA01061562532B21E1ED6D4A (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___ray0, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___hitInfo1, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void MoveFollowTouchBehaviourScript::onMoveFollowMouse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveFollowTouchBehaviourScript_onMoveFollowMouse_m9B903D246579FFD7F9139F090A0C8BC1F49FE808 (MoveFollowTouchBehaviourScript_t682ECA9BB85A5C0E8294469301C6F48098779AEC* __this, const RuntimeMethod* method) ;
// System.Void MoveFollowTouchBehaviourScript::onMoveFollowTouch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveFollowTouchBehaviourScript_onMoveFollowTouch_mEF7E997B2BAF6E8F0B866201C4EA85C24D1DB861 (MoveFollowTouchBehaviourScript_t682ECA9BB85A5C0E8294469301C6F48098779AEC* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetMouseButton(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButton_mE545CF4B790C6E202808B827E3141BEC3330DB70 (int32_t ___button0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Input_get_mousePosition_m2414B43222ED0C5FAB960D393964189AFD21EEAD (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// UnityEngine.Collider UnityEngine.RaycastHit::get_collider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Camera::WorldToScreenPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Camera_WorldToScreenPoint_m26B4C8945C3B5731F1CC5944CFD96BF17126BAA3 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector3::Equals(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_Equals_mEDEAF86793D229455BBF9BA5B30DDF438D6CABC1_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___other0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Camera::ScreenToWorldPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Camera_ScreenToWorldPoint_m5EA3148F070985EC72127AAC3448D8D6ABE6E7E5 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Translate(System.Single,System.Single,System.Single,UnityEngine.Space)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Translate_m8FF175E92671A19466A7728FEB92EFB4E999EB56 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, float ___x0, float ___y1, float ___z2, int32_t ___relativeTo3, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Input::get_touchCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Input_get_touchCount_m7B8EAAB3449A6DC2D90AF3BA36AF226D97C020CF (const RuntimeMethod* method) ;
// UnityEngine.Touch UnityEngine.Input::GetTouch(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Touch_t03E51455ED508492B3F278903A0114FA0E87B417 Input_GetTouch_m37572A728DAE284D3ED1272690E635A61D167AD4 (int32_t ___index0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Touch::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A (Touch_t03E51455ED508492B3F278903A0114FA0E87B417* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) ;
// UnityEngine.TouchPhase UnityEngine.Touch::get_phase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0 (Touch_t03E51455ED508492B3F278903A0114FA0E87B417* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D (const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m2A308205498AFEEA3DF784B1C86E4F7C126CA2EE (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___eulers0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C void DEFAULT_CALL TestUnitCallOC(char*);
IL2CPP_EXTERN_C void DEFAULT_CALL SetOC_CallFunc_Pointor_GetIsUnityViewNeedSwallowEvent(intptr_t);
IL2CPP_EXTERN_C void DEFAULT_CALL CallOC_SetIsUnityViewNeedSwallowEvent(int32_t);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C" int32_t CDECL ReversePInvokeWrapper_CallXScript_GetIsUnityViewNeedSwallowEvent_mEDEEEC00269C848EE5F8AD3FAE97C062F9BA53D4(int32_t ___touchX0, int32_t ___touchY1)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	bool returnValue;
	returnValue = CallXScript_GetIsUnityViewNeedSwallowEvent_mEDEEEC00269C848EE5F8AD3FAE97C062F9BA53D4(___touchX0, ___touchY1, NULL);

	return static_cast<int32_t>(returnValue);
}
// System.Void CallXScript::TestUnitCallOC(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallXScript_TestUnitCallOC_m14123C6F3FD58497A1BA74AFA37BA1B97BC87CC6 (String_t* ___data0, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___data0' to native representation
	char* ____data0_marshaled = NULL;
	____data0_marshaled = il2cpp_codegen_marshal_string(___data0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(TestUnitCallOC)(____data0_marshaled);

	// Marshaling cleanup of parameter '___data0' native representation
	il2cpp_codegen_marshal_free(____data0_marshaled);
	____data0_marshaled = NULL;

}
// System.Void CallXScript::SetOC_CallFunc_Pointor_GetIsUnityViewNeedSwallowEvent(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallXScript_SetOC_CallFunc_Pointor_GetIsUnityViewNeedSwallowEvent_mF08A6BC7B6C6C425A8BC1C93A0428549C028C21C (intptr_t ___callFuncPointor0, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(SetOC_CallFunc_Pointor_GetIsUnityViewNeedSwallowEvent)(___callFuncPointor0);

}
// System.Void CallXScript::CallOC_SetIsUnityViewNeedSwallowEvent(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallXScript_CallOC_SetIsUnityViewNeedSwallowEvent_m8340204D761421C49FCC8A90C24CA4007AABC178 (bool ___isNeed0, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(CallOC_SetIsUnityViewNeedSwallowEvent)(static_cast<int32_t>(___isNeed0));

}
// System.Boolean CallXScript::GetIsUnityViewNeedSwallowEvent(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CallXScript_GetIsUnityViewNeedSwallowEvent_mEDEEEC00269C848EE5F8AD3FAE97C062F9BA53D4 (int32_t ___touchX0, int32_t ___touchY1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral35D0904B121F1E883A563801EC47C2BCD877843B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogFormat("Unity????oc???:GetIsUnityViewNeedSwallowEvent:touchX={0}, touchY={1}", touchX, touchY);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		int32_t L_2 = ___touchX0;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_1;
		int32_t L_6 = ___touchY1;
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_8);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogFormat_m31E062CF69D0196C076CAC90DB268291B012E93B(_stringLiteral35D0904B121F1E883A563801EC47C2BCD877843B, L_5, NULL);
		// bool isNeed = isNeedUnityViewSwallowEvent(touchX, touchY);
		int32_t L_9 = ___touchX0;
		int32_t L_10 = ___touchY1;
		bool L_11;
		L_11 = CallXScript_isNeedUnityViewSwallowEvent_m7A0F63B3DEE175DEBD6F14AF9ADFA484CD935B88(L_9, L_10, NULL);
		// return isNeed;
		return L_11;
	}
}
// System.Void CallXScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallXScript_Start_mC9CBD6F2194F3DBE97B52B9F844308AB958CACDC (CallXScript_tA56750CCE6BE05F38AA066A7DE388FBEC3DC3F82* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CallXScript_GetIsUnityViewNeedSwallowEvent_mEDEEEC00269C848EE5F8AD3FAE97C062F9BA53D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Delegate_GetIsUnityViewNeedSwallowEvent_t72E3D5D38100C32E6655397677E63C9D39473D8B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_GetFunctionPointerForDelegate_TisDelegate_GetIsUnityViewNeedSwallowEvent_t72E3D5D38100C32E6655397677E63C9D39473D8B_m666B871A70E07DB31941832FB1FAAEFFA94ECA4B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral29602A6889993714C00B833AADCF0F6CD384B745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral29E1CA3DF7F09DD4D53A7A659D036AEB488E1260);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.mainCamera = Camera.main;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		__this->___mainCamera_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mainCamera_4), (void*)L_0);
		// Debug.Log("??????CallXScript");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral29E1CA3DF7F09DD4D53A7A659D036AEB488E1260, NULL);
		// TestUnitCallOC("??unity??OC");
		CallXScript_TestUnitCallOC_m14123C6F3FD58497A1BA74AFA37BA1B97BC87CC6(_stringLiteral29602A6889993714C00B833AADCF0F6CD384B745, NULL);
		// Delegate_GetIsUnityViewNeedSwallowEvent handler_GetIsUnityViewNeedSwallowEvent = new Delegate_GetIsUnityViewNeedSwallowEvent(GetIsUnityViewNeedSwallowEvent);
		Delegate_GetIsUnityViewNeedSwallowEvent_t72E3D5D38100C32E6655397677E63C9D39473D8B* L_1 = (Delegate_GetIsUnityViewNeedSwallowEvent_t72E3D5D38100C32E6655397677E63C9D39473D8B*)il2cpp_codegen_object_new(Delegate_GetIsUnityViewNeedSwallowEvent_t72E3D5D38100C32E6655397677E63C9D39473D8B_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Delegate_GetIsUnityViewNeedSwallowEvent__ctor_m13AB759AED5D673D11DCB88BB986ABC67F1AE453(L_1, NULL, (intptr_t)((void*)CallXScript_GetIsUnityViewNeedSwallowEvent_mEDEEEC00269C848EE5F8AD3FAE97C062F9BA53D4_RuntimeMethod_var), NULL);
		// IntPtr pointer_GetIsUnityViewNeedSwallowEvent = Marshal.GetFunctionPointerForDelegate(handler_GetIsUnityViewNeedSwallowEvent);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		intptr_t L_2;
		L_2 = Marshal_GetFunctionPointerForDelegate_TisDelegate_GetIsUnityViewNeedSwallowEvent_t72E3D5D38100C32E6655397677E63C9D39473D8B_m666B871A70E07DB31941832FB1FAAEFFA94ECA4B(L_1, Marshal_GetFunctionPointerForDelegate_TisDelegate_GetIsUnityViewNeedSwallowEvent_t72E3D5D38100C32E6655397677E63C9D39473D8B_m666B871A70E07DB31941832FB1FAAEFFA94ECA4B_RuntimeMethod_var);
		// SetOC_CallFunc_Pointor_GetIsUnityViewNeedSwallowEvent(pointer_GetIsUnityViewNeedSwallowEvent);
		CallXScript_SetOC_CallFunc_Pointor_GetIsUnityViewNeedSwallowEvent_mF08A6BC7B6C6C425A8BC1C93A0428549C028C21C(L_2, NULL);
		// }
		return;
	}
}
// System.Void CallXScript::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallXScript_Update_mF2E7C4F531DCA794FAD8D48DE7E7881A098D2226 (CallXScript_tA56750CCE6BE05F38AA066A7DE388FBEC3DC3F82* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void CallXScript::onClick(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallXScript_onClick_mC06A955BE546884D1B07A26B2A15C2CDC8CF17F7 (CallXScript_tA56750CCE6BE05F38AA066A7DE388FBEC3DC3F82* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral09E25036810171F457F442B0DC907D92439168B5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log ("click: " + obj.name);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___obj0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_0, NULL);
		String_t* L_2;
		L_2 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral09E25036810171F457F442B0DC907D92439168B5, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_2, NULL);
		// }
		return;
	}
}
// System.Boolean CallXScript::isNeedUnityViewSwallowEvent(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CallXScript_isNeedUnityViewSwallowEvent_m7A0F63B3DEE175DEBD6F14AF9ADFA484CD935B88 (int32_t ___touchX0, int32_t ___touchY1, const RuntimeMethod* method) 
{
	{
		// return isTouchAnyGameObject(touchX, touchY);
		int32_t L_0 = ___touchX0;
		int32_t L_1 = ___touchY1;
		bool L_2;
		L_2 = CallXScript_isTouchAnyGameObject_mB7AE9C86ED40503CA0CC6EACF5B9ECCB2A78C31D(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Boolean CallXScript::isTouchAnyGameObject(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CallXScript_isTouchAnyGameObject_mB7AE9C86ED40503CA0CC6EACF5B9ECCB2A78C31D (int32_t ___touchX0, int32_t ___touchY1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectsOfType_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_mE7968B42F57EC1546BEFE273E6C9B388225606DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16E7D0388C6ACBCC10AC76850103DA773592D32B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral339E2170AFAE5B5443C2D7813A1ED6CA190DEDF1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7FAF969F0FB7DFB3D5C01FC5D308AFCCD5AB7171);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF90E9FCBAD3C6CE8E0D3D8E92B8A65B954F52A2B);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 V_1;
	memset((&V_1), 0, sizeof(V_1));
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_2;
	memset((&V_2), 0, sizeof(V_2));
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* V_3 = NULL;
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* V_4 = NULL;
	int32_t V_5 = 0;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_6 = NULL;
	{
		// Debug.LogFormat("????: {0}, {1}", touchX, touchY);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		int32_t L_2 = ___touchX0;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_1;
		int32_t L_6 = ___touchY1;
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_8);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogFormat_m31E062CF69D0196C076CAC90DB268291B012E93B(_stringLiteral339E2170AFAE5B5443C2D7813A1ED6CA190DEDF1, L_5, NULL);
		// Vector3 p = new Vector3(touchX, touchY, 0);
		int32_t L_9 = ___touchX0;
		int32_t L_10 = ___touchY1;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_0), ((float)L_9), ((float)L_10), (0.0f), NULL);
		// Ray ray = Camera.main.ScreenPointToRay(p);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_11;
		L_11 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = V_0;
		NullCheck(L_11);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_13;
		L_13 = Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315(L_11, L_12, NULL);
		V_1 = L_13;
		// Transform[] objects = GameObject.FindObjectsOfType<Transform>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_14;
		L_14 = Object_FindObjectsOfType_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_mE7968B42F57EC1546BEFE273E6C9B388225606DB(Object_FindObjectsOfType_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_mE7968B42F57EC1546BEFE273E6C9B388225606DB_RuntimeMethod_var);
		V_3 = L_14;
		// Debug.LogFormat("??????: {0}, {1}", objects.Length, objects);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_16 = L_15;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_17 = V_3;
		NullCheck(L_17);
		int32_t L_18 = ((int32_t)(((RuntimeArray*)L_17)->max_length));
		RuntimeObject* L_19 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_18);
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_19);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_19);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_20 = L_16;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_21 = V_3;
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_21);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_21);
		Debug_LogFormat_m31E062CF69D0196C076CAC90DB268291B012E93B(_stringLiteral7FAF969F0FB7DFB3D5C01FC5D308AFCCD5AB7171, L_20, NULL);
		// foreach (Transform obj in objects)
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_22 = V_3;
		V_4 = L_22;
		V_5 = 0;
		goto IL_009a;
	}

IL_006b:
	{
		// foreach (Transform obj in objects)
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_23 = V_4;
		int32_t L_24 = V_5;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		V_6 = L_26;
		// if (Physics.Raycast(ray, out hit))
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_27 = V_1;
		bool L_28;
		L_28 = Physics_Raycast_m07803863BB5A3896FA01061562532B21E1ED6D4A(L_27, (&V_2), NULL);
		if (!L_28)
		{
			goto IL_0094;
		}
	}
	{
		// Debug.Log("????????: " + obj.name);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29 = V_6;
		NullCheck(L_29);
		String_t* L_30;
		L_30 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_29, NULL);
		String_t* L_31;
		L_31 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral16E7D0388C6ACBCC10AC76850103DA773592D32B, L_30, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_31, NULL);
		// return true;
		return (bool)1;
	}

IL_0094:
	{
		int32_t L_32 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_32, 1));
	}

IL_009a:
	{
		// foreach (Transform obj in objects)
		int32_t L_33 = V_5;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_34 = V_4;
		NullCheck(L_34);
		if ((((int32_t)L_33) < ((int32_t)((int32_t)(((RuntimeArray*)L_34)->max_length)))))
		{
			goto IL_006b;
		}
	}
	{
		// Debug.Log("?????????");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteralF90E9FCBAD3C6CE8E0D3D8E92B8A65B954F52A2B, NULL);
		// return false;
		return (bool)0;
	}
}
// System.Void CallXScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallXScript__ctor_m2444EE365DF588CF9244461EFFADE300C9280937 (CallXScript_tA56750CCE6BE05F38AA066A7DE388FBEC3DC3F82* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
bool Delegate_GetIsUnityViewNeedSwallowEvent_Invoke_m956810559F25BC6974F805C585CACA928FFFAA33_Multicast(Delegate_GetIsUnityViewNeedSwallowEvent_t72E3D5D38100C32E6655397677E63C9D39473D8B* __this, int32_t ___touchX0, int32_t ___touchY1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	bool retVal = false;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_GetIsUnityViewNeedSwallowEvent_t72E3D5D38100C32E6655397677E63C9D39473D8B* currentDelegate = reinterpret_cast<Delegate_GetIsUnityViewNeedSwallowEvent_t72E3D5D38100C32E6655397677E63C9D39473D8B*>(delegatesToInvoke[i]);
		typedef bool (*FunctionPointerType) (RuntimeObject*, int32_t, int32_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___touchX0, ___touchY1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
bool Delegate_GetIsUnityViewNeedSwallowEvent_Invoke_m956810559F25BC6974F805C585CACA928FFFAA33_Open(Delegate_GetIsUnityViewNeedSwallowEvent_t72E3D5D38100C32E6655397677E63C9D39473D8B* __this, int32_t ___touchX0, int32_t ___touchY1, const RuntimeMethod* method)
{
	typedef bool (*FunctionPointerType) (int32_t, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___touchX0, ___touchY1, method);
}
bool Delegate_GetIsUnityViewNeedSwallowEvent_Invoke_m956810559F25BC6974F805C585CACA928FFFAA33_OpenStaticInvoker(Delegate_GetIsUnityViewNeedSwallowEvent_t72E3D5D38100C32E6655397677E63C9D39473D8B* __this, int32_t ___touchX0, int32_t ___touchY1, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< bool, int32_t, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, ___touchX0, ___touchY1);
}
bool Delegate_GetIsUnityViewNeedSwallowEvent_Invoke_m956810559F25BC6974F805C585CACA928FFFAA33_ClosedStaticInvoker(Delegate_GetIsUnityViewNeedSwallowEvent_t72E3D5D38100C32E6655397677E63C9D39473D8B* __this, int32_t ___touchX0, int32_t ___touchY1, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< bool, RuntimeObject*, int32_t, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___touchX0, ___touchY1);
}
IL2CPP_EXTERN_C  bool DelegatePInvokeWrapper_Delegate_GetIsUnityViewNeedSwallowEvent_t72E3D5D38100C32E6655397677E63C9D39473D8B (Delegate_GetIsUnityViewNeedSwallowEvent_t72E3D5D38100C32E6655397677E63C9D39473D8B* __this, int32_t ___touchX0, int32_t ___touchY1, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc)(int32_t, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___touchX0, ___touchY1);

	return static_cast<bool>(returnValue);
}
// System.Void CallXScript/Delegate_GetIsUnityViewNeedSwallowEvent::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Delegate_GetIsUnityViewNeedSwallowEvent__ctor_m13AB759AED5D673D11DCB88BB986ABC67F1AE453 (Delegate_GetIsUnityViewNeedSwallowEvent_t72E3D5D38100C32E6655397677E63C9D39473D8B* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&Delegate_GetIsUnityViewNeedSwallowEvent_Invoke_m956810559F25BC6974F805C585CACA928FFFAA33_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&Delegate_GetIsUnityViewNeedSwallowEvent_Invoke_m956810559F25BC6974F805C585CACA928FFFAA33_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&Delegate_GetIsUnityViewNeedSwallowEvent_Invoke_m956810559F25BC6974F805C585CACA928FFFAA33_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&Delegate_GetIsUnityViewNeedSwallowEvent_Invoke_m956810559F25BC6974F805C585CACA928FFFAA33_Multicast;
}
// System.Boolean CallXScript/Delegate_GetIsUnityViewNeedSwallowEvent::Invoke(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Delegate_GetIsUnityViewNeedSwallowEvent_Invoke_m956810559F25BC6974F805C585CACA928FFFAA33 (Delegate_GetIsUnityViewNeedSwallowEvent_t72E3D5D38100C32E6655397677E63C9D39473D8B* __this, int32_t ___touchX0, int32_t ___touchY1, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, int32_t, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___touchX0, ___touchY1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult CallXScript/Delegate_GetIsUnityViewNeedSwallowEvent::BeginInvoke(System.Int32,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Delegate_GetIsUnityViewNeedSwallowEvent_BeginInvoke_m83697C00DFC32437B9C47B5B96197CF0F36403C9 (Delegate_GetIsUnityViewNeedSwallowEvent_t72E3D5D38100C32E6655397677E63C9D39473D8B* __this, int32_t ___touchX0, int32_t ___touchY1, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback2, RuntimeObject* ___object3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___touchX0);
	__d_args[1] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___touchY1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Boolean CallXScript/Delegate_GetIsUnityViewNeedSwallowEvent::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Delegate_GetIsUnityViewNeedSwallowEvent_EndInvoke_m552367030E0ACD6F4B97784FC1B2F03AC6907B85 (Delegate_GetIsUnityViewNeedSwallowEvent_t72E3D5D38100C32E6655397677E63C9D39473D8B* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(bool*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MoveFollowTouchBehaviourScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveFollowTouchBehaviourScript_Start_m84EDDFE852BA90AA38C702A6BCD03F6C8748F4BA (MoveFollowTouchBehaviourScript_t682ECA9BB85A5C0E8294469301C6F48098779AEC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral75E1300B36B8E8CD6CF5B9BF9CD013BCFAB35F15);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.mainCamera = Camera.main;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		__this->___mainCamera_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mainCamera_4), (void*)L_0);
		// Debug.Log("??????MoveFollowTouchBehaviourScript");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral75E1300B36B8E8CD6CF5B9BF9CD013BCFAB35F15, NULL);
		// }
		return;
	}
}
// System.Void MoveFollowTouchBehaviourScript::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveFollowTouchBehaviourScript_Update_mA93159D77ECFE651CC5E77322A7FDFE87994F80B (MoveFollowTouchBehaviourScript_t682ECA9BB85A5C0E8294469301C6F48098779AEC* __this, const RuntimeMethod* method) 
{
	{
		// this.onMoveFollowMouse();
		MoveFollowTouchBehaviourScript_onMoveFollowMouse_m9B903D246579FFD7F9139F090A0C8BC1F49FE808(__this, NULL);
		// this.onMoveFollowTouch();
		MoveFollowTouchBehaviourScript_onMoveFollowTouch_mEF7E997B2BAF6E8F0B866201C4EA85C24D1DB861(__this, NULL);
		// }
		return;
	}
}
// System.Void MoveFollowTouchBehaviourScript::onMoveFollowMouse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveFollowTouchBehaviourScript_onMoveFollowMouse_m9B903D246579FFD7F9139F090A0C8BC1F49FE808 (MoveFollowTouchBehaviourScript_t682ECA9BB85A5C0E8294469301C6F48098779AEC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral175C671D376749548EAF6224491DBD93984D6143);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2EEEDD97AC58DFFC5FF946F2152EB69FF67FEC6A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3102EA2AFB456AB9F3221F8E64EB606ACD5A5EEA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5CA9CB7E98DFADD3CE6A97A916AEFB719F1DB635);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral74071DDD5B8F43D20E48324AEED495905B319CC3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8F0BCCB1DC5FBFDF0502DFC72A6DAA4C34850828);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCA44D35E166C02F9CF2C4237FE0E64ABC4A19263);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B6_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B6_3 = NULL;
	String_t* G_B6_4 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B5_0 = NULL;
	int32_t G_B5_1 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B5_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B5_3 = NULL;
	String_t* G_B5_4 = NULL;
	String_t* G_B7_0 = NULL;
	int32_t G_B7_1 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B7_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B7_3 = NULL;
	String_t* G_B7_4 = NULL;
	{
		// if (Input.GetMouseButton(0))
		bool L_0;
		L_0 = Input_GetMouseButton_mE545CF4B790C6E202808B827E3141BEC3330DB70(0, NULL);
		if (!L_0)
		{
			goto IL_02a0;
		}
	}
	{
		// Debug.Log("???????:????");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral3102EA2AFB456AB9F3221F8E64EB606ACD5A5EEA, NULL);
		// Vector3 p = Input.mousePosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Input_get_mousePosition_m2414B43222ED0C5FAB960D393964189AFD21EEAD(NULL);
		V_0 = L_1;
		// if (this.currTouchObj == null) {
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___currTouchObj_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0075;
		}
	}
	{
		// Ray ray = mainCamera.ScreenPointToRay(p);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_4 = __this->___mainCamera_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		NullCheck(L_4);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_6;
		L_6 = Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315(L_4, L_5, NULL);
		// if (Physics.Raycast(ray, out hit))
		bool L_7;
		L_7 = Physics_Raycast_m07803863BB5A3896FA01061562532B21E1ED6D4A(L_6, (&V_1), NULL);
		if (!L_7)
		{
			goto IL_0050;
		}
	}
	{
		// this.currTouchObj = hit.collider.transform;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_8;
		L_8 = RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D((&V_1), NULL);
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_8, NULL);
		__this->___currTouchObj_5 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currTouchObj_5), (void*)L_9);
	}

IL_0050:
	{
		// Debug.LogFormat("?????: {0}", this.currTouchObj?.name);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_10;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12 = __this->___currTouchObj_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13 = L_12;
		G_B5_0 = L_13;
		G_B5_1 = 0;
		G_B5_2 = L_11;
		G_B5_3 = L_11;
		G_B5_4 = _stringLiteral2EEEDD97AC58DFFC5FF946F2152EB69FF67FEC6A;
		if (L_13)
		{
			G_B6_0 = L_13;
			G_B6_1 = 0;
			G_B6_2 = L_11;
			G_B6_3 = L_11;
			G_B6_4 = _stringLiteral2EEEDD97AC58DFFC5FF946F2152EB69FF67FEC6A;
			goto IL_006a;
		}
	}
	{
		G_B7_0 = ((String_t*)(NULL));
		G_B7_1 = G_B5_1;
		G_B7_2 = G_B5_2;
		G_B7_3 = G_B5_3;
		G_B7_4 = G_B5_4;
		goto IL_006f;
	}

IL_006a:
	{
		NullCheck(G_B6_0);
		String_t* L_14;
		L_14 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(G_B6_0, NULL);
		G_B7_0 = L_14;
		G_B7_1 = G_B6_1;
		G_B7_2 = G_B6_2;
		G_B7_3 = G_B6_3;
		G_B7_4 = G_B6_4;
	}

IL_006f:
	{
		NullCheck(G_B7_2);
		ArrayElementTypeCheck (G_B7_2, G_B7_0);
		(G_B7_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B7_1), (RuntimeObject*)G_B7_0);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogFormat_m31E062CF69D0196C076CAC90DB268291B012E93B(G_B7_4, G_B7_3, NULL);
	}

IL_0075:
	{
		// if (this.currTouchObj != null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15 = __this->___currTouchObj_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_15, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_16)
		{
			goto IL_02a7;
		}
	}
	{
		// Vector3 objToMousePos = Camera.main.WorldToScreenPoint(currTouchObj.position);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_17;
		L_17 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18 = __this->___currTouchObj_5;
		NullCheck(L_18);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_18, NULL);
		NullCheck(L_17);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Camera_WorldToScreenPoint_m26B4C8945C3B5731F1CC5944CFD96BF17126BAA3(L_17, L_19, NULL);
		V_2 = L_20;
		// Vector3 mousePos = new Vector3(p.x, p.y, objToMousePos.z);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = V_0;
		float L_22 = L_21.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = V_0;
		float L_24 = L_23.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = V_2;
		float L_26 = L_25.___z_4;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_3), L_22, L_24, L_26, NULL);
		// Debug.LogFormat("??????: {0}, {1}, {2}", this.lastMousePos.x, this.lastMousePos.y, this.lastMousePos.z);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_28 = L_27;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_29 = (&__this->___lastMousePos_7);
		float L_30 = L_29->___x_2;
		float L_31 = L_30;
		RuntimeObject* L_32 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_31);
		NullCheck(L_28);
		ArrayElementTypeCheck (L_28, L_32);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_32);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_33 = L_28;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_34 = (&__this->___lastMousePos_7);
		float L_35 = L_34->___y_3;
		float L_36 = L_35;
		RuntimeObject* L_37 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_36);
		NullCheck(L_33);
		ArrayElementTypeCheck (L_33, L_37);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_37);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_38 = L_33;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_39 = (&__this->___lastMousePos_7);
		float L_40 = L_39->___z_4;
		float L_41 = L_40;
		RuntimeObject* L_42 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_41);
		NullCheck(L_38);
		ArrayElementTypeCheck (L_38, L_42);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_42);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogFormat_m31E062CF69D0196C076CAC90DB268291B012E93B(_stringLiteral175C671D376749548EAF6224491DBD93984D6143, L_38, NULL);
		// Debug.LogFormat("??????: {0}, {1}, {2}", mousePos.x, mousePos.y, objToMousePos.z);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_43 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_44 = L_43;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45 = V_3;
		float L_46 = L_45.___x_2;
		float L_47 = L_46;
		RuntimeObject* L_48 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_47);
		NullCheck(L_44);
		ArrayElementTypeCheck (L_44, L_48);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_48);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_49 = L_44;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_50 = V_3;
		float L_51 = L_50.___y_3;
		float L_52 = L_51;
		RuntimeObject* L_53 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_52);
		NullCheck(L_49);
		ArrayElementTypeCheck (L_49, L_53);
		(L_49)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_53);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_54 = L_49;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_55 = V_2;
		float L_56 = L_55.___z_4;
		float L_57 = L_56;
		RuntimeObject* L_58 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_57);
		NullCheck(L_54);
		ArrayElementTypeCheck (L_54, L_58);
		(L_54)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_58);
		Debug_LogFormat_m31E062CF69D0196C076CAC90DB268291B012E93B(_stringLiteral74071DDD5B8F43D20E48324AEED495905B319CC3, L_54, NULL);
		// if (!this.lastMousePos.Equals(Vector3.zero) && !this.lastMousePos.Equals(mousePos)) {
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_59 = (&__this->___lastMousePos_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_60;
		L_60 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		bool L_61;
		L_61 = Vector3_Equals_mEDEAF86793D229455BBF9BA5B30DDF438D6CABC1_inline(L_59, L_60, NULL);
		if (L_61)
		{
			goto IL_026c;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_62 = (&__this->___lastMousePos_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_63 = V_3;
		bool L_64;
		L_64 = Vector3_Equals_mEDEAF86793D229455BBF9BA5B30DDF438D6CABC1_inline(L_62, L_63, NULL);
		if (L_64)
		{
			goto IL_026c;
		}
	}
	{
		// Vector3 lastMouseWPos = Camera.main.ScreenToWorldPoint(this.lastMousePos);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_65;
		L_65 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_66 = __this->___lastMousePos_7;
		NullCheck(L_65);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_67;
		L_67 = Camera_ScreenToWorldPoint_m5EA3148F070985EC72127AAC3448D8D6ABE6E7E5(L_65, L_66, NULL);
		V_4 = L_67;
		// Vector3 curMouseWPos = Camera.main.ScreenToWorldPoint(mousePos);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_68;
		L_68 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_69 = V_3;
		NullCheck(L_68);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_70;
		L_70 = Camera_ScreenToWorldPoint_m5EA3148F070985EC72127AAC3448D8D6ABE6E7E5(L_68, L_69, NULL);
		V_5 = L_70;
		// Debug.LogFormat("????????: {0}, {1}, {2}", lastMouseWPos.x, lastMouseWPos.y, lastMouseWPos.z);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_71 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_72 = L_71;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_73 = V_4;
		float L_74 = L_73.___x_2;
		float L_75 = L_74;
		RuntimeObject* L_76 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_75);
		NullCheck(L_72);
		ArrayElementTypeCheck (L_72, L_76);
		(L_72)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_76);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_77 = L_72;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_78 = V_4;
		float L_79 = L_78.___y_3;
		float L_80 = L_79;
		RuntimeObject* L_81 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_80);
		NullCheck(L_77);
		ArrayElementTypeCheck (L_77, L_81);
		(L_77)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_81);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_82 = L_77;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_83 = V_4;
		float L_84 = L_83.___z_4;
		float L_85 = L_84;
		RuntimeObject* L_86 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_85);
		NullCheck(L_82);
		ArrayElementTypeCheck (L_82, L_86);
		(L_82)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_86);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogFormat_m31E062CF69D0196C076CAC90DB268291B012E93B(_stringLiteralCA44D35E166C02F9CF2C4237FE0E64ABC4A19263, L_82, NULL);
		// Debug.LogFormat("????????: {0}, {1}, {2}", curMouseWPos.x, curMouseWPos.y, curMouseWPos.z);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_87 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_88 = L_87;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_89 = V_5;
		float L_90 = L_89.___x_2;
		float L_91 = L_90;
		RuntimeObject* L_92 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_91);
		NullCheck(L_88);
		ArrayElementTypeCheck (L_88, L_92);
		(L_88)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_92);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_93 = L_88;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_94 = V_5;
		float L_95 = L_94.___y_3;
		float L_96 = L_95;
		RuntimeObject* L_97 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_96);
		NullCheck(L_93);
		ArrayElementTypeCheck (L_93, L_97);
		(L_93)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_97);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_98 = L_93;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_99 = V_5;
		float L_100 = L_99.___z_4;
		float L_101 = L_100;
		RuntimeObject* L_102 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_101);
		NullCheck(L_98);
		ArrayElementTypeCheck (L_98, L_102);
		(L_98)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_102);
		Debug_LogFormat_m31E062CF69D0196C076CAC90DB268291B012E93B(_stringLiteral8F0BCCB1DC5FBFDF0502DFC72A6DAA4C34850828, L_98, NULL);
		// Vector3 deltaWPos = curMouseWPos - lastMouseWPos;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_103 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_104 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_105;
		L_105 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_103, L_104, NULL);
		V_6 = L_105;
		// Debug.LogFormat("????: x={0}, y={1}, z={2}", deltaWPos.x, deltaWPos.y, deltaWPos.z);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_106 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_107 = L_106;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_108 = V_6;
		float L_109 = L_108.___x_2;
		float L_110 = L_109;
		RuntimeObject* L_111 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_110);
		NullCheck(L_107);
		ArrayElementTypeCheck (L_107, L_111);
		(L_107)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_111);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_112 = L_107;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_113 = V_6;
		float L_114 = L_113.___y_3;
		float L_115 = L_114;
		RuntimeObject* L_116 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_115);
		NullCheck(L_112);
		ArrayElementTypeCheck (L_112, L_116);
		(L_112)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_116);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_117 = L_112;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_118 = V_6;
		float L_119 = L_118.___z_4;
		float L_120 = L_119;
		RuntimeObject* L_121 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_120);
		NullCheck(L_117);
		ArrayElementTypeCheck (L_117, L_121);
		(L_117)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_121);
		Debug_LogFormat_m31E062CF69D0196C076CAC90DB268291B012E93B(_stringLiteral5CA9CB7E98DFADD3CE6A97A916AEFB719F1DB635, L_117, NULL);
		// this.currTouchObj.Translate(deltaWPos.x * touchObjMoveSpeed, deltaWPos.y * touchObjMoveSpeed, 0, Space.World);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_122 = __this->___currTouchObj_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_123 = V_6;
		float L_124 = L_123.___x_2;
		float L_125 = __this->___touchObjMoveSpeed_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_126 = V_6;
		float L_127 = L_126.___y_3;
		float L_128 = __this->___touchObjMoveSpeed_6;
		NullCheck(L_122);
		Transform_Translate_m8FF175E92671A19466A7728FEB92EFB4E999EB56(L_122, ((float)il2cpp_codegen_multiply(L_124, L_125)), ((float)il2cpp_codegen_multiply(L_127, L_128)), (0.0f), 0, NULL);
	}

IL_026c:
	{
		// this.lastMousePos.x = mousePos.x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_129 = (&__this->___lastMousePos_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_130 = V_3;
		float L_131 = L_130.___x_2;
		L_129->___x_2 = L_131;
		// this.lastMousePos.y = mousePos.y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_132 = (&__this->___lastMousePos_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_133 = V_3;
		float L_134 = L_133.___y_3;
		L_132->___y_3 = L_134;
		// this.lastMousePos.z = objToMousePos.z;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_135 = (&__this->___lastMousePos_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_136 = V_2;
		float L_137 = L_136.___z_4;
		L_135->___z_4 = L_137;
		return;
	}

IL_02a0:
	{
		// currTouchObj = null;
		__this->___currTouchObj_5 = (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currTouchObj_5), (void*)(Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL);
	}

IL_02a7:
	{
		// }
		return;
	}
}
// System.Void MoveFollowTouchBehaviourScript::onMoveFollowTouch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveFollowTouchBehaviourScript_onMoveFollowTouch_mEF7E997B2BAF6E8F0B866201C4EA85C24D1DB861 (MoveFollowTouchBehaviourScript_t682ECA9BB85A5C0E8294469301C6F48098779AEC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral175C671D376749548EAF6224491DBD93984D6143);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral178C5F09087B25794915BF27714F09628E568D25);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5CA9CB7E98DFADD3CE6A97A916AEFB719F1DB635);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral74071DDD5B8F43D20E48324AEED495905B319CC3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8BC89650A01BBD51346A3F59656397B3A5902292);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8F0BCCB1DC5FBFDF0502DFC72A6DAA4C34850828);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCA44D35E166C02F9CF2C4237FE0E64ABC4A19263);
		s_Il2CppMethodInitialized = true;
	}
	Touch_t03E51455ED508492B3F278903A0114FA0E87B417 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_7;
	memset((&V_7), 0, sizeof(V_7));
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B5_0 = NULL;
	int32_t G_B5_1 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B5_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B5_3 = NULL;
	String_t* G_B5_4 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B4_0 = NULL;
	int32_t G_B4_1 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B4_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B4_3 = NULL;
	String_t* G_B4_4 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B6_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B6_3 = NULL;
	String_t* G_B6_4 = NULL;
	{
		// if (Input.touchCount == 1) {
		int32_t L_0;
		L_0 = Input_get_touchCount_m7B8EAAB3449A6DC2D90AF3BA36AF226D97C020CF(NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_02d1;
		}
	}
	{
		// Touch firstTouch = Input.GetTouch(0);
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_1;
		L_1 = Input_GetTouch_m37572A728DAE284D3ED1272690E635A61D167AD4(0, NULL);
		V_0 = L_1;
		// Vector3 p = firstTouch.position;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A((&V_0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_2, NULL);
		V_1 = L_3;
		// if (firstTouch.phase == TouchPhase.Began) {
		int32_t L_4;
		L_4 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0((&V_0), NULL);
		if (L_4)
		{
			goto IL_0082;
		}
	}
	{
		// Debug.Log("???????:????");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral8BC89650A01BBD51346A3F59656397B3A5902292, NULL);
		// Ray ray = mainCamera.ScreenPointToRay(p);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_5 = __this->___mainCamera_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = V_1;
		NullCheck(L_5);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_7;
		L_7 = Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315(L_5, L_6, NULL);
		// if (Physics.Raycast(ray, out hit)) {
		bool L_8;
		L_8 = Physics_Raycast_m07803863BB5A3896FA01061562532B21E1ED6D4A(L_7, (&V_2), NULL);
		if (!L_8)
		{
			goto IL_02d8;
		}
	}
	{
		// this.currTouchObj = hit.collider.transform;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_9;
		L_9 = RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D((&V_2), NULL);
		NullCheck(L_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_9, NULL);
		__this->___currTouchObj_5 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currTouchObj_5), (void*)L_10);
		// Debug.LogFormat("??????: {0}", this.currTouchObj?.name);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = L_11;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13 = __this->___currTouchObj_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14 = L_13;
		G_B4_0 = L_14;
		G_B4_1 = 0;
		G_B4_2 = L_12;
		G_B4_3 = L_12;
		G_B4_4 = _stringLiteral178C5F09087B25794915BF27714F09628E568D25;
		if (L_14)
		{
			G_B5_0 = L_14;
			G_B5_1 = 0;
			G_B5_2 = L_12;
			G_B5_3 = L_12;
			G_B5_4 = _stringLiteral178C5F09087B25794915BF27714F09628E568D25;
			goto IL_0076;
		}
	}
	{
		G_B6_0 = ((String_t*)(NULL));
		G_B6_1 = G_B4_1;
		G_B6_2 = G_B4_2;
		G_B6_3 = G_B4_3;
		G_B6_4 = G_B4_4;
		goto IL_007b;
	}

IL_0076:
	{
		NullCheck(G_B5_0);
		String_t* L_15;
		L_15 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(G_B5_0, NULL);
		G_B6_0 = L_15;
		G_B6_1 = G_B5_1;
		G_B6_2 = G_B5_2;
		G_B6_3 = G_B5_3;
		G_B6_4 = G_B5_4;
	}

IL_007b:
	{
		NullCheck(G_B6_2);
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		(G_B6_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B6_1), (RuntimeObject*)G_B6_0);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogFormat_m31E062CF69D0196C076CAC90DB268291B012E93B(G_B6_4, G_B6_3, NULL);
		return;
	}

IL_0082:
	{
		// }else if (firstTouch.phase == TouchPhase.Moved) {
		int32_t L_16;
		L_16 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0((&V_0), NULL);
		if ((!(((uint32_t)L_16) == ((uint32_t)1))))
		{
			goto IL_02c9;
		}
	}
	{
		// if (this.currTouchObj != null) {
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17 = __this->___currTouchObj_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_18;
		L_18 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_17, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_18)
		{
			goto IL_02c0;
		}
	}
	{
		// Vector3 objToMousePos = Camera.main.WorldToScreenPoint(this.currTouchObj.position);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_19;
		L_19 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20 = __this->___currTouchObj_5;
		NullCheck(L_20);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_20, NULL);
		NullCheck(L_19);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Camera_WorldToScreenPoint_m26B4C8945C3B5731F1CC5944CFD96BF17126BAA3(L_19, L_21, NULL);
		V_3 = L_22;
		// Vector3 mousePos = new Vector3(p.x, p.y, objToMousePos.z);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = V_1;
		float L_24 = L_23.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = V_1;
		float L_26 = L_25.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = V_3;
		float L_28 = L_27.___z_4;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_4), L_24, L_26, L_28, NULL);
		// Debug.LogFormat("??????: {0}, {1}, {2}", this.lastMousePos.x, this.lastMousePos.y, this.lastMousePos.z);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_29 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = L_29;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_31 = (&__this->___lastMousePos_7);
		float L_32 = L_31->___x_2;
		float L_33 = L_32;
		RuntimeObject* L_34 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_33);
		NullCheck(L_30);
		ArrayElementTypeCheck (L_30, L_34);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_34);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_35 = L_30;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_36 = (&__this->___lastMousePos_7);
		float L_37 = L_36->___y_3;
		float L_38 = L_37;
		RuntimeObject* L_39 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_38);
		NullCheck(L_35);
		ArrayElementTypeCheck (L_35, L_39);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_39);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_40 = L_35;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_41 = (&__this->___lastMousePos_7);
		float L_42 = L_41->___z_4;
		float L_43 = L_42;
		RuntimeObject* L_44 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_43);
		NullCheck(L_40);
		ArrayElementTypeCheck (L_40, L_44);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_44);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogFormat_m31E062CF69D0196C076CAC90DB268291B012E93B(_stringLiteral175C671D376749548EAF6224491DBD93984D6143, L_40, NULL);
		// Debug.LogFormat("??????: {0}, {1}, {2}", mousePos.x, mousePos.y, objToMousePos.z);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_45 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_46 = L_45;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47 = V_4;
		float L_48 = L_47.___x_2;
		float L_49 = L_48;
		RuntimeObject* L_50 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_49);
		NullCheck(L_46);
		ArrayElementTypeCheck (L_46, L_50);
		(L_46)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_50);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_51 = L_46;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_52 = V_4;
		float L_53 = L_52.___y_3;
		float L_54 = L_53;
		RuntimeObject* L_55 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_54);
		NullCheck(L_51);
		ArrayElementTypeCheck (L_51, L_55);
		(L_51)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_55);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_56 = L_51;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_57 = V_3;
		float L_58 = L_57.___z_4;
		float L_59 = L_58;
		RuntimeObject* L_60 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_59);
		NullCheck(L_56);
		ArrayElementTypeCheck (L_56, L_60);
		(L_56)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_60);
		Debug_LogFormat_m31E062CF69D0196C076CAC90DB268291B012E93B(_stringLiteral74071DDD5B8F43D20E48324AEED495905B319CC3, L_56, NULL);
		// if (!this.lastMousePos.Equals(Vector3.zero) && !this.lastMousePos.Equals(mousePos)) {
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_61 = (&__this->___lastMousePos_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_62;
		L_62 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		bool L_63;
		L_63 = Vector3_Equals_mEDEAF86793D229455BBF9BA5B30DDF438D6CABC1_inline(L_61, L_62, NULL);
		if (L_63)
		{
			goto IL_028a;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_64 = (&__this->___lastMousePos_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_65 = V_4;
		bool L_66;
		L_66 = Vector3_Equals_mEDEAF86793D229455BBF9BA5B30DDF438D6CABC1_inline(L_64, L_65, NULL);
		if (L_66)
		{
			goto IL_028a;
		}
	}
	{
		// Vector3 lastMouseWPos = Camera.main.ScreenToWorldPoint(this.lastMousePos);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_67;
		L_67 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_68 = __this->___lastMousePos_7;
		NullCheck(L_67);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_69;
		L_69 = Camera_ScreenToWorldPoint_m5EA3148F070985EC72127AAC3448D8D6ABE6E7E5(L_67, L_68, NULL);
		V_5 = L_69;
		// Vector3 curMouseWPos = Camera.main.ScreenToWorldPoint(mousePos);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_70;
		L_70 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_71 = V_4;
		NullCheck(L_70);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_72;
		L_72 = Camera_ScreenToWorldPoint_m5EA3148F070985EC72127AAC3448D8D6ABE6E7E5(L_70, L_71, NULL);
		V_6 = L_72;
		// Debug.LogFormat("????????: {0}, {1}, {2}", lastMouseWPos.x, lastMouseWPos.y, lastMouseWPos.z);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_73 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_74 = L_73;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_75 = V_5;
		float L_76 = L_75.___x_2;
		float L_77 = L_76;
		RuntimeObject* L_78 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_77);
		NullCheck(L_74);
		ArrayElementTypeCheck (L_74, L_78);
		(L_74)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_78);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_79 = L_74;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_80 = V_5;
		float L_81 = L_80.___y_3;
		float L_82 = L_81;
		RuntimeObject* L_83 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_82);
		NullCheck(L_79);
		ArrayElementTypeCheck (L_79, L_83);
		(L_79)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_83);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_84 = L_79;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_85 = V_5;
		float L_86 = L_85.___z_4;
		float L_87 = L_86;
		RuntimeObject* L_88 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_87);
		NullCheck(L_84);
		ArrayElementTypeCheck (L_84, L_88);
		(L_84)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_88);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogFormat_m31E062CF69D0196C076CAC90DB268291B012E93B(_stringLiteralCA44D35E166C02F9CF2C4237FE0E64ABC4A19263, L_84, NULL);
		// Debug.LogFormat("????????: {0}, {1}, {2}", curMouseWPos.x, curMouseWPos.y, curMouseWPos.z);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_89 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_90 = L_89;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_91 = V_6;
		float L_92 = L_91.___x_2;
		float L_93 = L_92;
		RuntimeObject* L_94 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_93);
		NullCheck(L_90);
		ArrayElementTypeCheck (L_90, L_94);
		(L_90)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_94);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_95 = L_90;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_96 = V_6;
		float L_97 = L_96.___y_3;
		float L_98 = L_97;
		RuntimeObject* L_99 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_98);
		NullCheck(L_95);
		ArrayElementTypeCheck (L_95, L_99);
		(L_95)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_99);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_100 = L_95;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_101 = V_6;
		float L_102 = L_101.___z_4;
		float L_103 = L_102;
		RuntimeObject* L_104 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_103);
		NullCheck(L_100);
		ArrayElementTypeCheck (L_100, L_104);
		(L_100)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_104);
		Debug_LogFormat_m31E062CF69D0196C076CAC90DB268291B012E93B(_stringLiteral8F0BCCB1DC5FBFDF0502DFC72A6DAA4C34850828, L_100, NULL);
		// Vector3 deltaWPos = curMouseWPos - lastMouseWPos;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_105 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_106 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_107;
		L_107 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_105, L_106, NULL);
		V_7 = L_107;
		// Debug.LogFormat("????: x={0}, y={1}, z={2}", deltaWPos.x, deltaWPos.y, deltaWPos.z);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_108 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_109 = L_108;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_110 = V_7;
		float L_111 = L_110.___x_2;
		float L_112 = L_111;
		RuntimeObject* L_113 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_112);
		NullCheck(L_109);
		ArrayElementTypeCheck (L_109, L_113);
		(L_109)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_113);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_114 = L_109;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_115 = V_7;
		float L_116 = L_115.___y_3;
		float L_117 = L_116;
		RuntimeObject* L_118 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_117);
		NullCheck(L_114);
		ArrayElementTypeCheck (L_114, L_118);
		(L_114)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_118);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_119 = L_114;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_120 = V_7;
		float L_121 = L_120.___z_4;
		float L_122 = L_121;
		RuntimeObject* L_123 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_122);
		NullCheck(L_119);
		ArrayElementTypeCheck (L_119, L_123);
		(L_119)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_123);
		Debug_LogFormat_m31E062CF69D0196C076CAC90DB268291B012E93B(_stringLiteral5CA9CB7E98DFADD3CE6A97A916AEFB719F1DB635, L_119, NULL);
		// this.currTouchObj.Translate(deltaWPos.x * touchObjMoveSpeed, deltaWPos.y * touchObjMoveSpeed, 0, Space.World);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_124 = __this->___currTouchObj_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_125 = V_7;
		float L_126 = L_125.___x_2;
		float L_127 = __this->___touchObjMoveSpeed_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_128 = V_7;
		float L_129 = L_128.___y_3;
		float L_130 = __this->___touchObjMoveSpeed_6;
		NullCheck(L_124);
		Transform_Translate_m8FF175E92671A19466A7728FEB92EFB4E999EB56(L_124, ((float)il2cpp_codegen_multiply(L_126, L_127)), ((float)il2cpp_codegen_multiply(L_129, L_130)), (0.0f), 0, NULL);
	}

IL_028a:
	{
		// this.lastMousePos.x = mousePos.x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_131 = (&__this->___lastMousePos_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_132 = V_4;
		float L_133 = L_132.___x_2;
		L_131->___x_2 = L_133;
		// this.lastMousePos.y = mousePos.y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_134 = (&__this->___lastMousePos_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_135 = V_4;
		float L_136 = L_135.___y_3;
		L_134->___y_3 = L_136;
		// this.lastMousePos.z = objToMousePos.z;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_137 = (&__this->___lastMousePos_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_138 = V_3;
		float L_139 = L_138.___z_4;
		L_137->___z_4 = L_139;
		return;
	}

IL_02c0:
	{
		// }else if (firstTouch.phase == TouchPhase.Began) {
		int32_t L_140;
		L_140 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0((&V_0), NULL);
		return;
	}

IL_02c9:
	{
		// this.currTouchObj = null;
		__this->___currTouchObj_5 = (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currTouchObj_5), (void*)(Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL);
		return;
	}

IL_02d1:
	{
		// this.currTouchObj = null;
		__this->___currTouchObj_5 = (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currTouchObj_5), (void*)(Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL);
	}

IL_02d8:
	{
		// }
		return;
	}
}
// System.Void MoveFollowTouchBehaviourScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveFollowTouchBehaviourScript__ctor_m91766ACDF5DC033B31F6E980D21FEBD622A6CE89 (MoveFollowTouchBehaviourScript_t682ECA9BB85A5C0E8294469301C6F48098779AEC* __this, const RuntimeMethod* method) 
{
	{
		// private float touchObjMoveSpeed = 1.0F;
		__this->___touchObjMoveSpeed_6 = (1.0f);
		// private Vector3 lastMousePos = new Vector3(0, 0, 0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_0), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->___lastMousePos_7 = L_0;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void NewBehaviourScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NewBehaviourScript_Start_mDEAA416D3A6676A79851DDF6B62D676E53372A87 (NewBehaviourScript_t89363A736D121ACCCE70DC36A66775D2F1D42CF7* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void NewBehaviourScript::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NewBehaviourScript_Update_m68CAC9D7524B9FA1DFCA3F99BA694CD73147209B (NewBehaviourScript_t89363A736D121ACCCE70DC36A66775D2F1D42CF7* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 a = new Vector3(20f*Time.deltaTime,10f * Time.deltaTime, 0 * Time.deltaTime);
		float L_0;
		L_0 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		float L_1;
		L_1 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		float L_2;
		L_2 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_0), ((float)il2cpp_codegen_multiply((20.0f), L_0)), ((float)il2cpp_codegen_multiply((10.0f), L_1)), ((float)il2cpp_codegen_multiply((0.0f), L_2)), NULL);
		// this.gameObject.transform.Rotate(a);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		NullCheck(L_4);
		Transform_Rotate_m2A308205498AFEEA3DF784B1C86E4F7C126CA2EE(L_4, L_5, NULL);
		// }
		return;
	}
}
// System.Void NewBehaviourScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NewBehaviourScript__ctor_mD2E080DE77BCDB61B6D2EC8AD996FAE611B97F3C (NewBehaviourScript_t89363A736D121ACCCE70DC36A66775D2F1D42CF7* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_Equals_mEDEAF86793D229455BBF9BA5B30DDF438D6CABC1_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___other0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B4_0 = 0;
	{
		float L_0 = __this->___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___other0;
		float L_2 = L_1.___x_2;
		if ((!(((float)L_0) == ((float)L_2))))
		{
			goto IL_002d;
		}
	}
	{
		float L_3 = __this->___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___other0;
		float L_5 = L_4.___y_3;
		if ((!(((float)L_3) == ((float)L_5))))
		{
			goto IL_002d;
		}
	}
	{
		float L_6 = __this->___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___other0;
		float L_8 = L_7.___z_4;
		G_B4_0 = ((((float)L_6) == ((float)L_8))? 1 : 0);
		goto IL_002e;
	}

IL_002d:
	{
		G_B4_0 = 0;
	}

IL_002e:
	{
		V_0 = (bool)G_B4_0;
		goto IL_0031;
	}

IL_0031:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___v0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___v0;
		float L_3 = L_2.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		return L_5;
	}
}
