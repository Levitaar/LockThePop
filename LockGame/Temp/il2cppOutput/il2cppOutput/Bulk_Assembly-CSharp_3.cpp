#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// LTDescr
struct LTDescr_t88934797D6A324735209180E7958727F7E3746A9;
// LTDescr/ActionMethodDelegate
struct ActionMethodDelegate_t9F3B058CF9E6481BF2E213F41E3853AA049B1570;
// LTDescr/EaseTypeDelegate
struct EaseTypeDelegate_tA9141EF100D02C74FCEC0F4AB8633E228020F1CD;
// LTDescrOptional
struct LTDescrOptional_t75D006D2B3DF2EEA936B01EFC08449BFC04F54B1;
// System.Action
struct Action_t591D2A86165F896B4B800BB5C25CE18672A55579;
// System.Action`1<System.Object>
struct Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0;
// System.Action`1<System.Single>
struct Action_1_t298B565CF49E0C72E4377AA3B30170F58D9F64FB;
// System.Action`1<UnityEngine.Vector3>
struct Action_1_tA44107B06FF0DB8292A09BDC892436393CD13E67;
// System.Action`2<System.Single,System.Object>
struct Action_2_t6614CB55E7CBF2119E4A6402E4E2A25EF45412E5;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Hashtable
struct Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9;
// System.Collections.Hashtable/bucket[]
struct bucketU5BU5D_t6FF2C2C4B21F2206885CD19A78F68B874C8DC84A;
// System.Collections.ICollection
struct ICollection_tA3BAB2482E28132A7CA9E0E21393027353C28B54;
// System.Collections.IEqualityComparer
struct IEqualityComparer_t3102D0F5BABD60224F6DFF4815BCA1045831FB7C;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// TestingZLegacy/<>c
struct U3CU3Ec_tD53C6FB932407C274F46AF5EB749ECB420822BC6;
// TestingZLegacy/NextFunc
struct NextFunc_t4537D46AA060532C51EF0B326FD5A93368D50E70;
// TestingZLegacyExt
struct TestingZLegacyExt_tA6E1C9426A6110E30EB957EC9EFCE02AE4DE0918;
// TestingZLegacyExt/<>c
struct U3CU3Ec_tCA0F01282E957E50CB00CDF0EDC006F5D2571D7D;
// TestingZLegacyExt/NextFunc
struct NextFunc_tB4F1FEFABAD83E05D2477DD91C7B0B0EF49B03AE;
// UnityEngine.AnimationCurve
struct AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C;
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429;
// UnityEngine.RectTransform
struct RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F;
// UnityEngine.Sprite[]
struct SpriteU5BU5D_tC248C30BCF0EAA6D8BD69A89AF1FC5BA002CA017;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;
// UnityEngine.UI.Image
struct Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E;
// UnityEngine.UI.RawImage
struct RawImage_t68991514DB8F48442D614E7904A298C936B3C7C8;
// UnityEngine.UI.Text
struct Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28;

extern RuntimeClass* Action_1_t298B565CF49E0C72E4377AA3B30170F58D9F64FB_il2cpp_TypeInfo_var;
extern RuntimeClass* Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0_il2cpp_TypeInfo_var;
extern RuntimeClass* Action_1_tA44107B06FF0DB8292A09BDC892436393CD13E67_il2cpp_TypeInfo_var;
extern RuntimeClass* Action_2_t6614CB55E7CBF2119E4A6402E4E2A25EF45412E5_il2cpp_TypeInfo_var;
extern RuntimeClass* Action_t591D2A86165F896B4B800BB5C25CE18672A55579_il2cpp_TypeInfo_var;
extern RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
extern RuntimeClass* Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_il2cpp_TypeInfo_var;
extern RuntimeClass* GUI_t3E5CBC6B113E392EBBE1453DEF2B7CD020F345AA_il2cpp_TypeInfo_var;
extern RuntimeClass* Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9_il2cpp_TypeInfo_var;
extern RuntimeClass* LeanTween_tC03B6F2C77CCD047964FC7337A56297E0AF9306B_il2cpp_TypeInfo_var;
extern RuntimeClass* ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var;
extern RuntimeClass* Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var;
extern RuntimeClass* StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CU3Ec_tCA0F01282E957E50CB00CDF0EDC006F5D2571D7D_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CU3Ec_tD53C6FB932407C274F46AF5EB749ECB420822BC6_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral0CEAEED5ABBC7BA9448493B26EAA6CF4D63FC023;
extern String_t* _stringLiteral0FD95B88AFC426838A5BA005BDC96FAEF2D73294;
extern String_t* _stringLiteral10FDBEEA3F541575C8115A8498195A793303ABC3;
extern String_t* _stringLiteral165C51332252444354AEE69E6135D8CC126AC576;
extern String_t* _stringLiteral1F557BEB12D39F4436DB51D18C8CC01CEB340F7B;
extern String_t* _stringLiteral1FD5A439E611D0FC93870DF70483B30FCB982424;
extern String_t* _stringLiteral3B27813D7D89DE3208E7CD3A6BFB572B99101107;
extern String_t* _stringLiteral4600F8B20C873DF798A5354E62D454D332AABD47;
extern String_t* _stringLiteral4703B6DD3BDBC68D750233F72EE7B18E3D7D86C4;
extern String_t* _stringLiteral4F67BCD2AD2BB56385211E4F78D5EE98880140E3;
extern String_t* _stringLiteral52B1E17E662E9E1AFBFE56EAE114CE1CD7D3A8BE;
extern String_t* _stringLiteral545AB219302B7A2029EFDC568F63AD886BAA7A71;
extern String_t* _stringLiteral5474CF25ACA3E5AC4FBB7E7873E611D0DE5C92F9;
extern String_t* _stringLiteral5D715D206B89402C18DB3F1F1C705CB33739879F;
extern String_t* _stringLiteral5F32623FB7268FDF2EB296D2D97883F47B50E34E;
extern String_t* _stringLiteral6425D031726BD87323ECF3E72F4F52F59E5C1480;
extern String_t* _stringLiteral6C4BE49CBAB568F44600FF9E83F692D8E1ADA985;
extern String_t* _stringLiteral6F9B9AF3CD6E8B8A73C2CDCED37FE9F59226E27D;
extern String_t* _stringLiteral77D45DD4FEED4D69F4EABD805C0C8E7398F9307F;
extern String_t* _stringLiteral7E01819E649C698F9904E7835EFEDB92ED9C474A;
extern String_t* _stringLiteral92F79EF56C5D5543B66F445BD90D8BE9A0EF7CEF;
extern String_t* _stringLiteral93C36D6626D4A3DEE8FD6BFD68298616F840770A;
extern String_t* _stringLiteral9745F6DD8F6E4DC9B1489B94D908BEB88560F4BB;
extern String_t* _stringLiteral9D6860AA4368DE63AB951EBD51EBE481E42A36BC;
extern String_t* _stringLiteral9F014C4FFA509C223C7819DD1B7A00A913C0A4D4;
extern String_t* _stringLiteralBF77DF0CE0C741E8D828D1325CAC45F23A1B9227;
extern String_t* _stringLiteralC22B5F9178342609428D6F51B2C5AF4C0BDE6A42;
extern String_t* _stringLiteralC41975D1DAE1CC69B16AD8892B8C77164E84CA39;
extern String_t* _stringLiteralE024BDF7039F3C56C8870058FEE451733708928A;
extern String_t* _stringLiteralE201A61F8926D2172C1A5E531CFCFC181767F57A;
extern String_t* _stringLiteralE7BEE83B83F7D86323452C9695CF2C8E601486B4;
extern String_t* _stringLiteralEA2091BE332FF14230AB9D6DA49C97D8727ED8F7;
extern String_t* _stringLiteralF4BA7C1A26E685E930BF2E0C986FF8B59E913A1A;
extern String_t* _stringLiteralF53C4A8ED58F0AF9F12FA7797A23D1A5C917147D;
extern const RuntimeMethod* Action_1__ctor_m31BC390E2E0368C57885B41C5A9D480DE46FD72D_RuntimeMethod_var;
extern const RuntimeMethod* Action_1__ctor_mAFC7442D9D3CEC6701C3C5599F8CF12476095510_RuntimeMethod_var;
extern const RuntimeMethod* Action_1__ctor_mCD888E010B612C1A207F48F514125A480CE6045F_RuntimeMethod_var;
extern const RuntimeMethod* Action_2__ctor_mF69CA07CA71C62E254AC8C17A32A90E511F97076_RuntimeMethod_var;
extern const RuntimeMethod* TestingZLegacyExt_cycleThroughExamples_mDF8DF943338F638EAC0C85E7220FF04F6A688E9E_RuntimeMethod_var;
extern const RuntimeMethod* TestingZLegacyExt_delayedCallExampleCallback_mDFBC1BE7E8690A57BAFA4B3CF701C7BDFD5868DD_RuntimeMethod_var;
extern const RuntimeMethod* TestingZLegacyExt_rotateFinished_mA8BBD5BCCC9DC385EC14506B38495656E6730060_RuntimeMethod_var;
extern const RuntimeMethod* TestingZLegacyExt_rotateOnUpdate_m8A23C23C480E71534B637858E25F3558F93575C4_RuntimeMethod_var;
extern const RuntimeMethod* TestingZLegacyExt_updateValue3ExampleCallback_mFFDFB38A2F8D2464EF411E9431A68C882B27DC2D_RuntimeMethod_var;
extern const RuntimeMethod* TestingZLegacyExt_updateValue3ExampleUpdate_mA4B7B597105DB1CA46299022BD7161C32FFF517E_RuntimeMethod_var;
extern const RuntimeMethod* TestingZLegacyExt_updateValueExampleCallback_m167419E4154D6385544E30FFDFDDE5990780F686_RuntimeMethod_var;
extern const RuntimeMethod* U3CU3Ec_U3CcycleThroughExamplesU3Eb__20_0_mE2F5DAC852B800AEED0C5D8C623F22674D07C494_RuntimeMethod_var;
extern const uint32_t TestingZLegacyExt_OnGUI_mF6ABD0B9D035358109C8FBE2A096CB80056E41E7_MetadataUsageId;
extern const uint32_t TestingZLegacyExt_Start_m839D3F27196C6BD444D029046DF6C6C819C15473_MetadataUsageId;
extern const uint32_t TestingZLegacyExt__ctor_m8C269A86760D895ECD5C2E548FC1D5E81B788A36_MetadataUsageId;
extern const uint32_t TestingZLegacyExt_alphaExample_m772ED7AFE66CC4F41DC0A98262E7F2BF9C8F47C1_MetadataUsageId;
extern const uint32_t TestingZLegacyExt_colorExample_m511763C457A6C85C88B7489D59F3F7B91123B147_MetadataUsageId;
extern const uint32_t TestingZLegacyExt_customTweenExample_m6A5F1B07520AA405DD2CC553431F5CC7D4D067B1_MetadataUsageId;
extern const uint32_t TestingZLegacyExt_cycleThroughExamples_mDF8DF943338F638EAC0C85E7220FF04F6A688E9E_MetadataUsageId;
extern const uint32_t TestingZLegacyExt_delayedCallExampleCallback_mDFBC1BE7E8690A57BAFA4B3CF701C7BDFD5868DD_MetadataUsageId;
extern const uint32_t TestingZLegacyExt_delayedCallExample_mAF02317775623160DD2910669FB4402B64D1C0FF_MetadataUsageId;
extern const uint32_t TestingZLegacyExt_endlessCallback_mA2018DB141FAEB70BFE3121CDA2D370A1A238D46_MetadataUsageId;
extern const uint32_t TestingZLegacyExt_loopPause_m89E6AFBB902FD8E359177ABA577E26B0350CBBA0_MetadataUsageId;
extern const uint32_t TestingZLegacyExt_loopResume_m261D07787C9928C3635F38DF99DB3B99EC2DF624_MetadataUsageId;
extern const uint32_t TestingZLegacyExt_loopTestClamp_m681587CDDCC27A90C75E545E492D378331211756_MetadataUsageId;
extern const uint32_t TestingZLegacyExt_loopTestPingPong_mA99F28A92995E0B02E2371B02073A71E61479824_MetadataUsageId;
extern const uint32_t TestingZLegacyExt_moveExample_m8F3737E4C98691C89E5E44903F39A54F72F423F6_MetadataUsageId;
extern const uint32_t TestingZLegacyExt_moveLocalExample_m77D6D6F100D2C0028D6C59C1896B1A189C972B11_MetadataUsageId;
extern const uint32_t TestingZLegacyExt_moveOnACurveExample_m760CAA1946533C5E39C826BA7AADF9D9F850607B_MetadataUsageId;
extern const uint32_t TestingZLegacyExt_pauseNow_mA583FC13277274D5C776155ED441388A5176BBCF_MetadataUsageId;
extern const uint32_t TestingZLegacyExt_rotateAroundExample_m2A7036740240C02293A759200DBA7FE782A3CAA4_MetadataUsageId;
extern const uint32_t TestingZLegacyExt_rotateExample_m434C390101CA254C8E0E69B05D88B14F53FFFD26_MetadataUsageId;
extern const uint32_t TestingZLegacyExt_rotateFinished_mA8BBD5BCCC9DC385EC14506B38495656E6730060_MetadataUsageId;
extern const uint32_t TestingZLegacyExt_scaleExample_mA0BBB30A11969958ECA4DF67B36A5ADB93377081_MetadataUsageId;
extern const uint32_t TestingZLegacyExt_updateValue3Example_mCA7C76CA94FD9F34117147506FE7BFCD31EFBD46_MetadataUsageId;
extern const uint32_t TestingZLegacyExt_updateValueExample_m6DD656D4E13F4159F89FBD778D55764E5D375CDD_MetadataUsageId;
extern const uint32_t U3CU3Ec__cctor_m0293595029CACBE817C79C38257E7F88CC4024A4_MetadataUsageId;
extern const uint32_t U3CU3Ec__cctor_mA92656C1864F97529E02DD8EAC4627B3E15C07D0_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28;


#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#define VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};
#endif // VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#ifndef U3CU3EC_TD53C6FB932407C274F46AF5EB749ECB420822BC6_H
#define U3CU3EC_TD53C6FB932407C274F46AF5EB749ECB420822BC6_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TestingZLegacy_<>c
struct  U3CU3Ec_tD53C6FB932407C274F46AF5EB749ECB420822BC6  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tD53C6FB932407C274F46AF5EB749ECB420822BC6_StaticFields
{
public:
	// TestingZLegacy_<>c TestingZLegacy_<>c::<>9
	U3CU3Ec_tD53C6FB932407C274F46AF5EB749ECB420822BC6 * ___U3CU3E9_0;
	// System.Action`1<System.Single> TestingZLegacy_<>c::<>9__20_0
	Action_1_t298B565CF49E0C72E4377AA3B30170F58D9F64FB * ___U3CU3E9__20_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tD53C6FB932407C274F46AF5EB749ECB420822BC6_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tD53C6FB932407C274F46AF5EB749ECB420822BC6 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tD53C6FB932407C274F46AF5EB749ECB420822BC6 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tD53C6FB932407C274F46AF5EB749ECB420822BC6 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9_0), value);
	}

	inline static int32_t get_offset_of_U3CU3E9__20_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tD53C6FB932407C274F46AF5EB749ECB420822BC6_StaticFields, ___U3CU3E9__20_0_1)); }
	inline Action_1_t298B565CF49E0C72E4377AA3B30170F58D9F64FB * get_U3CU3E9__20_0_1() const { return ___U3CU3E9__20_0_1; }
	inline Action_1_t298B565CF49E0C72E4377AA3B30170F58D9F64FB ** get_address_of_U3CU3E9__20_0_1() { return &___U3CU3E9__20_0_1; }
	inline void set_U3CU3E9__20_0_1(Action_1_t298B565CF49E0C72E4377AA3B30170F58D9F64FB * value)
	{
		___U3CU3E9__20_0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9__20_0_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC_TD53C6FB932407C274F46AF5EB749ECB420822BC6_H
#ifndef U3CU3EC_TCA0F01282E957E50CB00CDF0EDC006F5D2571D7D_H
#define U3CU3EC_TCA0F01282E957E50CB00CDF0EDC006F5D2571D7D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TestingZLegacyExt_<>c
struct  U3CU3Ec_tCA0F01282E957E50CB00CDF0EDC006F5D2571D7D  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tCA0F01282E957E50CB00CDF0EDC006F5D2571D7D_StaticFields
{
public:
	// TestingZLegacyExt_<>c TestingZLegacyExt_<>c::<>9
	U3CU3Ec_tCA0F01282E957E50CB00CDF0EDC006F5D2571D7D * ___U3CU3E9_0;
	// System.Action`1<System.Single> TestingZLegacyExt_<>c::<>9__20_0
	Action_1_t298B565CF49E0C72E4377AA3B30170F58D9F64FB * ___U3CU3E9__20_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tCA0F01282E957E50CB00CDF0EDC006F5D2571D7D_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tCA0F01282E957E50CB00CDF0EDC006F5D2571D7D * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tCA0F01282E957E50CB00CDF0EDC006F5D2571D7D ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tCA0F01282E957E50CB00CDF0EDC006F5D2571D7D * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9_0), value);
	}

	inline static int32_t get_offset_of_U3CU3E9__20_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tCA0F01282E957E50CB00CDF0EDC006F5D2571D7D_StaticFields, ___U3CU3E9__20_0_1)); }
	inline Action_1_t298B565CF49E0C72E4377AA3B30170F58D9F64FB * get_U3CU3E9__20_0_1() const { return ___U3CU3E9__20_0_1; }
	inline Action_1_t298B565CF49E0C72E4377AA3B30170F58D9F64FB ** get_address_of_U3CU3E9__20_0_1() { return &___U3CU3E9__20_0_1; }
	inline void set_U3CU3E9__20_0_1(Action_1_t298B565CF49E0C72E4377AA3B30170F58D9F64FB * value)
	{
		___U3CU3E9__20_0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9__20_0_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC_TCA0F01282E957E50CB00CDF0EDC006F5D2571D7D_H
#ifndef BOOLEAN_TB53F6830F670160873277339AA58F15CAED4399C_H
#define BOOLEAN_TB53F6830F670160873277339AA58F15CAED4399C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_5), value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_TB53F6830F670160873277339AA58F15CAED4399C_H
#ifndef DOUBLE_T358B8F23BDC52A5DD700E727E204F9F7CDE12409_H
#define DOUBLE_T358B8F23BDC52A5DD700E727E204F9F7CDE12409_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Double
struct  Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DOUBLE_T358B8F23BDC52A5DD700E727E204F9F7CDE12409_H
#ifndef ENUM_T2AF27C02B8653AE29442467390005ABC74D8F521_H
#define ENUM_T2AF27C02B8653AE29442467390005ABC74D8F521_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((&___enumSeperatorCharArray_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};
#endif // ENUM_T2AF27C02B8653AE29442467390005ABC74D8F521_H
#ifndef INT32_T585191389E07734F19F3156FF88FB3EF4800D102_H
#define INT32_T585191389E07734F19F3156FF88FB3EF4800D102_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T585191389E07734F19F3156FF88FB3EF4800D102_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef SINGLE_TDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_H
#define SINGLE_TDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_TDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_H
#ifndef VOID_T22962CB4C05B1D89B55A6E1139F0E87A90987017_H
#define VOID_T22962CB4C05B1D89B55A6E1139F0E87A90987017_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T22962CB4C05B1D89B55A6E1139F0E87A90987017_H
#ifndef COLOR_T119BCA590009762C7223FDD3AF9706653AC84ED2_H
#define COLOR_T119BCA590009762C7223FDD3AF9706653AC84ED2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color
struct  Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR_T119BCA590009762C7223FDD3AF9706653AC84ED2_H
#ifndef RECT_T35B976DE901B5423C11705E156938EA27AB402CE_H
#define RECT_T35B976DE901B5423C11705E156938EA27AB402CE_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rect
struct  Rect_t35B976DE901B5423C11705E156938EA27AB402CE 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECT_T35B976DE901B5423C11705E156938EA27AB402CE_H
#ifndef VECTOR3_TDCF05E21F632FE2BA260C06E0D10CA81513E6720_H
#define VECTOR3_TDCF05E21F632FE2BA260C06E0D10CA81513E6720_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___zeroVector_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___oneVector_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___upVector_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___downVector_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___leftVector_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___rightVector_10)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___forwardVector_11)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___backVector_12)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___negativeInfinityVector_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_TDCF05E21F632FE2BA260C06E0D10CA81513E6720_H
#ifndef LEANTWEENTYPE_T57F289B108C05C161355D233590E960BA0DD469D_H
#define LEANTWEENTYPE_T57F289B108C05C161355D233590E960BA0DD469D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LeanTweenType
struct  LeanTweenType_t57F289B108C05C161355D233590E960BA0DD469D 
{
public:
	// System.Int32 LeanTweenType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LeanTweenType_t57F289B108C05C161355D233590E960BA0DD469D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LEANTWEENTYPE_T57F289B108C05C161355D233590E960BA0DD469D_H
#ifndef HASHTABLE_T978F65B8006C8F5504B286526AEC6608FF983FC9_H
#define HASHTABLE_T978F65B8006C8F5504B286526AEC6608FF983FC9_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Hashtable
struct  Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9  : public RuntimeObject
{
public:
	// System.Collections.Hashtable_bucket[] System.Collections.Hashtable::buckets
	bucketU5BU5D_t6FF2C2C4B21F2206885CD19A78F68B874C8DC84A* ___buckets_0;
	// System.Int32 System.Collections.Hashtable::count
	int32_t ___count_1;
	// System.Int32 System.Collections.Hashtable::occupancy
	int32_t ___occupancy_2;
	// System.Int32 System.Collections.Hashtable::loadsize
	int32_t ___loadsize_3;
	// System.Single System.Collections.Hashtable::loadFactor
	float ___loadFactor_4;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Hashtable::version
	int32_t ___version_5;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Hashtable::isWriterInProgress
	bool ___isWriterInProgress_6;
	// System.Collections.ICollection System.Collections.Hashtable::keys
	RuntimeObject* ___keys_7;
	// System.Collections.IEqualityComparer System.Collections.Hashtable::_keycomparer
	RuntimeObject* ____keycomparer_8;
	// System.Object System.Collections.Hashtable::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9, ___buckets_0)); }
	inline bucketU5BU5D_t6FF2C2C4B21F2206885CD19A78F68B874C8DC84A* get_buckets_0() const { return ___buckets_0; }
	inline bucketU5BU5D_t6FF2C2C4B21F2206885CD19A78F68B874C8DC84A** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(bucketU5BU5D_t6FF2C2C4B21F2206885CD19A78F68B874C8DC84A* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((&___buckets_0), value);
	}

	inline static int32_t get_offset_of_count_1() { return static_cast<int32_t>(offsetof(Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9, ___count_1)); }
	inline int32_t get_count_1() const { return ___count_1; }
	inline int32_t* get_address_of_count_1() { return &___count_1; }
	inline void set_count_1(int32_t value)
	{
		___count_1 = value;
	}

	inline static int32_t get_offset_of_occupancy_2() { return static_cast<int32_t>(offsetof(Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9, ___occupancy_2)); }
	inline int32_t get_occupancy_2() const { return ___occupancy_2; }
	inline int32_t* get_address_of_occupancy_2() { return &___occupancy_2; }
	inline void set_occupancy_2(int32_t value)
	{
		___occupancy_2 = value;
	}

	inline static int32_t get_offset_of_loadsize_3() { return static_cast<int32_t>(offsetof(Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9, ___loadsize_3)); }
	inline int32_t get_loadsize_3() const { return ___loadsize_3; }
	inline int32_t* get_address_of_loadsize_3() { return &___loadsize_3; }
	inline void set_loadsize_3(int32_t value)
	{
		___loadsize_3 = value;
	}

	inline static int32_t get_offset_of_loadFactor_4() { return static_cast<int32_t>(offsetof(Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9, ___loadFactor_4)); }
	inline float get_loadFactor_4() const { return ___loadFactor_4; }
	inline float* get_address_of_loadFactor_4() { return &___loadFactor_4; }
	inline void set_loadFactor_4(float value)
	{
		___loadFactor_4 = value;
	}

	inline static int32_t get_offset_of_version_5() { return static_cast<int32_t>(offsetof(Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9, ___version_5)); }
	inline int32_t get_version_5() const { return ___version_5; }
	inline int32_t* get_address_of_version_5() { return &___version_5; }
	inline void set_version_5(int32_t value)
	{
		___version_5 = value;
	}

	inline static int32_t get_offset_of_isWriterInProgress_6() { return static_cast<int32_t>(offsetof(Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9, ___isWriterInProgress_6)); }
	inline bool get_isWriterInProgress_6() const { return ___isWriterInProgress_6; }
	inline bool* get_address_of_isWriterInProgress_6() { return &___isWriterInProgress_6; }
	inline void set_isWriterInProgress_6(bool value)
	{
		___isWriterInProgress_6 = value;
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9, ___keys_7)); }
	inline RuntimeObject* get_keys_7() const { return ___keys_7; }
	inline RuntimeObject** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(RuntimeObject* value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((&___keys_7), value);
	}

	inline static int32_t get_offset_of__keycomparer_8() { return static_cast<int32_t>(offsetof(Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9, ____keycomparer_8)); }
	inline RuntimeObject* get__keycomparer_8() const { return ____keycomparer_8; }
	inline RuntimeObject** get_address_of__keycomparer_8() { return &____keycomparer_8; }
	inline void set__keycomparer_8(RuntimeObject* value)
	{
		____keycomparer_8 = value;
		Il2CppCodeGenWriteBarrier((&____keycomparer_8), value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HASHTABLE_T978F65B8006C8F5504B286526AEC6608FF983FC9_H
#ifndef DELEGATE_T_H
#define DELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_7), value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_8), value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((&___data_9), value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};
#endif // DELEGATE_T_H
#ifndef TIMINGTYPE_T9E6525E8BBA2643914378087E0580E8A91CA5422_H
#define TIMINGTYPE_T9E6525E8BBA2643914378087E0580E8A91CA5422_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TestingZLegacy_TimingType
struct  TimingType_t9E6525E8BBA2643914378087E0580E8A91CA5422 
{
public:
	// System.Int32 TestingZLegacy_TimingType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TimingType_t9E6525E8BBA2643914378087E0580E8A91CA5422, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMINGTYPE_T9E6525E8BBA2643914378087E0580E8A91CA5422_H
#ifndef TIMINGTYPE_TECD128C5D5E282FF05ABD0627F1540353DA42474_H
#define TIMINGTYPE_TECD128C5D5E282FF05ABD0627F1540353DA42474_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TestingZLegacyExt_TimingType
struct  TimingType_tECD128C5D5E282FF05ABD0627F1540353DA42474 
{
public:
	// System.Int32 TestingZLegacyExt_TimingType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TimingType_tECD128C5D5E282FF05ABD0627F1540353DA42474, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMINGTYPE_TECD128C5D5E282FF05ABD0627F1540353DA42474_H
#ifndef TWEENACTION_T297D0658004A36F7DBC1DE81E48030FDB98F1517_H
#define TWEENACTION_T297D0658004A36F7DBC1DE81E48030FDB98F1517_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TweenAction
struct  TweenAction_t297D0658004A36F7DBC1DE81E48030FDB98F1517 
{
public:
	// System.Int32 TweenAction::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TweenAction_t297D0658004A36F7DBC1DE81E48030FDB98F1517, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TWEENACTION_T297D0658004A36F7DBC1DE81E48030FDB98F1517_H
#ifndef ANIMATIONCURVE_TD2F265379583AAF1BF8D84F1BB8DB12980FA504C_H
#define ANIMATIONCURVE_TD2F265379583AAF1BF8D84F1BB8DB12980FA504C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AnimationCurve
struct  AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.AnimationCurve::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // ANIMATIONCURVE_TD2F265379583AAF1BF8D84F1BB8DB12980FA504C_H
#ifndef OBJECT_TAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_H
#define OBJECT_TAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_TAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_H
#ifndef LTDESCR_T88934797D6A324735209180E7958727F7E3746A9_H
#define LTDESCR_T88934797D6A324735209180E7958727F7E3746A9_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LTDescr
struct  LTDescr_t88934797D6A324735209180E7958727F7E3746A9  : public RuntimeObject
{
public:
	// System.Boolean LTDescr::toggle
	bool ___toggle_0;
	// System.Boolean LTDescr::useEstimatedTime
	bool ___useEstimatedTime_1;
	// System.Boolean LTDescr::useFrames
	bool ___useFrames_2;
	// System.Boolean LTDescr::useManualTime
	bool ___useManualTime_3;
	// System.Boolean LTDescr::usesNormalDt
	bool ___usesNormalDt_4;
	// System.Boolean LTDescr::hasInitiliazed
	bool ___hasInitiliazed_5;
	// System.Boolean LTDescr::hasExtraOnCompletes
	bool ___hasExtraOnCompletes_6;
	// System.Boolean LTDescr::hasPhysics
	bool ___hasPhysics_7;
	// System.Boolean LTDescr::onCompleteOnRepeat
	bool ___onCompleteOnRepeat_8;
	// System.Boolean LTDescr::onCompleteOnStart
	bool ___onCompleteOnStart_9;
	// System.Boolean LTDescr::useRecursion
	bool ___useRecursion_10;
	// System.Single LTDescr::ratioPassed
	float ___ratioPassed_11;
	// System.Single LTDescr::passed
	float ___passed_12;
	// System.Single LTDescr::delay
	float ___delay_13;
	// System.Single LTDescr::time
	float ___time_14;
	// System.Single LTDescr::speed
	float ___speed_15;
	// System.Single LTDescr::lastVal
	float ___lastVal_16;
	// System.UInt32 LTDescr::_id
	uint32_t ____id_17;
	// System.Int32 LTDescr::loopCount
	int32_t ___loopCount_18;
	// System.UInt32 LTDescr::counter
	uint32_t ___counter_19;
	// System.Single LTDescr::direction
	float ___direction_20;
	// System.Single LTDescr::directionLast
	float ___directionLast_21;
	// System.Single LTDescr::overshoot
	float ___overshoot_22;
	// System.Single LTDescr::period
	float ___period_23;
	// System.Single LTDescr::scale
	float ___scale_24;
	// System.Boolean LTDescr::destroyOnComplete
	bool ___destroyOnComplete_25;
	// UnityEngine.Transform LTDescr::trans
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___trans_26;
	// UnityEngine.Vector3 LTDescr::fromInternal
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___fromInternal_27;
	// UnityEngine.Vector3 LTDescr::toInternal
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___toInternal_28;
	// UnityEngine.Vector3 LTDescr::diff
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___diff_29;
	// UnityEngine.Vector3 LTDescr::diffDiv2
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___diffDiv2_30;
	// TweenAction LTDescr::type
	int32_t ___type_31;
	// LeanTweenType LTDescr::easeType
	int32_t ___easeType_32;
	// LeanTweenType LTDescr::loopType
	int32_t ___loopType_33;
	// System.Boolean LTDescr::hasUpdateCallback
	bool ___hasUpdateCallback_34;
	// LTDescr_EaseTypeDelegate LTDescr::easeMethod
	EaseTypeDelegate_tA9141EF100D02C74FCEC0F4AB8633E228020F1CD * ___easeMethod_35;
	// LTDescr_ActionMethodDelegate LTDescr::<easeInternal>k__BackingField
	ActionMethodDelegate_t9F3B058CF9E6481BF2E213F41E3853AA049B1570 * ___U3CeaseInternalU3Ek__BackingField_36;
	// LTDescr_ActionMethodDelegate LTDescr::<initInternal>k__BackingField
	ActionMethodDelegate_t9F3B058CF9E6481BF2E213F41E3853AA049B1570 * ___U3CinitInternalU3Ek__BackingField_37;
	// UnityEngine.SpriteRenderer LTDescr::spriteRen
	SpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F * ___spriteRen_38;
	// UnityEngine.RectTransform LTDescr::rectTransform
	RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * ___rectTransform_39;
	// UnityEngine.UI.Text LTDescr::uiText
	Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * ___uiText_40;
	// UnityEngine.UI.Image LTDescr::uiImage
	Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * ___uiImage_41;
	// UnityEngine.UI.RawImage LTDescr::rawImage
	RawImage_t68991514DB8F48442D614E7904A298C936B3C7C8 * ___rawImage_42;
	// UnityEngine.Sprite[] LTDescr::sprites
	SpriteU5BU5D_tC248C30BCF0EAA6D8BD69A89AF1FC5BA002CA017* ___sprites_43;
	// LTDescrOptional LTDescr::_optional
	LTDescrOptional_t75D006D2B3DF2EEA936B01EFC08449BFC04F54B1 * ____optional_44;

public:
	inline static int32_t get_offset_of_toggle_0() { return static_cast<int32_t>(offsetof(LTDescr_t88934797D6A324735209180E7958727F7E3746A9, ___toggle_0)); }
	inline bool get_toggle_0() const { return ___toggle_0; }
	inline bool* get_address_of_toggle_0() { return &___toggle_0; }
	inline void set_toggle_0(bool value)
	{
		___toggle_0 = value;
	}

	inline static int32_t get_offset_of_useEstimatedTime_1() { return static_cast<int32_t>(offsetof(LTDescr_t88934797D6A324735209180E7958727F7E3746A9, ___useEstimatedTime_1)); }
	inline bool get_useEstimatedTime_1() const { return ___useEstimatedTime_1; }
	inline bool* get_address_of_useEstimatedTime_1() { return &___useEstimatedTime_1; }
	inline void set_useEstimatedTime_1(bool value)
	{
		___useEstimatedTime_1 = value;
	}

	inline static int32_t get_offset_of_useFrames_2() { return static_cast<int32_t>(offsetof(LTDescr_t88934797D6A324735209180E7958727F7E3746A9, ___useFrames_2)); }
	inline bool get_useFrames_2() const { return ___useFrames_2; }
	inline bool* get_address_of_useFrames_2() { return &___useFrames_2; }
	inline void set_useFrames_2(bool value)
	{
		___useFrames_2 = value;
	}

	inline static int32_t get_offset_of_useManualTime_3() { return static_cast<int32_t>(offsetof(LTDescr_t88934797D6A324735209180E7958727F7E3746A9, ___useManualTime_3)); }
	inline bool get_useManualTime_3() const { return ___useManualTime_3; }
	inline bool* get_address_of_useManualTime_3() { return &___useManualTime_3; }
	inline void set_useManualTime_3(bool value)
	{
		___useManualTime_3 = value;
	}

	inline static int32_t get_offset_of_usesNormalDt_4() { return static_cast<int32_t>(offsetof(LTDescr_t88934797D6A324735209180E7958727F7E3746A9, ___usesNormalDt_4)); }
	inline bool get_usesNormalDt_4() const { return ___usesNormalDt_4; }
	inline bool* get_address_of_usesNormalDt_4() { return &___usesNormalDt_4; }
	inline void set_usesNormalDt_4(bool value)
	{
		___usesNormalDt_4 = value;
	}

	inline static int32_t get_offset_of_hasInitiliazed_5() { return static_cast<int32_t>(offsetof(LTDescr_t88934797D6A324735209180E7958727F7E3746A9, ___hasInitiliazed_5)); }
	inline bool get_hasInitiliazed_5() const { return ___hasInitiliazed_5; }
	inline bool* get_address_of_hasInitiliazed_5() { return &___hasInitiliazed_5; }
	inline void set_hasInitiliazed_5(bool value)
	{
		___hasInitiliazed_5 = value;
	}

	inline static int32_t get_offset_of_hasExtraOnCompletes_6() { return static_cast<int32_t>(offsetof(LTDescr_t88934797D6A324735209180E7958727F7E3746A9, ___hasExtraOnCompletes_6)); }
	inline bool get_hasExtraOnCompletes_6() const { return ___hasExtraOnCompletes_6; }
	inline bool* get_address_of_hasExtraOnCompletes_6() { return &___hasExtraOnCompletes_6; }
	inline void set_hasExtraOnCompletes_6(bool value)
	{
		___hasExtraOnCompletes_6 = value;
	}

	inline static int32_t get_offset_of_hasPhysics_7() { return static_cast<int32_t>(offsetof(LTDescr_t88934797D6A324735209180E7958727F7E3746A9, ___hasPhysics_7)); }
	inline bool get_hasPhysics_7() const { return ___hasPhysics_7; }
	inline bool* get_address_of_hasPhysics_7() { return &___hasPhysics_7; }
	inline void set_hasPhysics_7(bool value)
	{
		___hasPhysics_7 = value;
	}

	inline static int32_t get_offset_of_onCompleteOnRepeat_8() { return static_cast<int32_t>(offsetof(LTDescr_t88934797D6A324735209180E7958727F7E3746A9, ___onCompleteOnRepeat_8)); }
	inline bool get_onCompleteOnRepeat_8() const { return ___onCompleteOnRepeat_8; }
	inline bool* get_address_of_onCompleteOnRepeat_8() { return &___onCompleteOnRepeat_8; }
	inline void set_onCompleteOnRepeat_8(bool value)
	{
		___onCompleteOnRepeat_8 = value;
	}

	inline static int32_t get_offset_of_onCompleteOnStart_9() { return static_cast<int32_t>(offsetof(LTDescr_t88934797D6A324735209180E7958727F7E3746A9, ___onCompleteOnStart_9)); }
	inline bool get_onCompleteOnStart_9() const { return ___onCompleteOnStart_9; }
	inline bool* get_address_of_onCompleteOnStart_9() { return &___onCompleteOnStart_9; }
	inline void set_onCompleteOnStart_9(bool value)
	{
		___onCompleteOnStart_9 = value;
	}

	inline static int32_t get_offset_of_useRecursion_10() { return static_cast<int32_t>(offsetof(LTDescr_t88934797D6A324735209180E7958727F7E3746A9, ___useRecursion_10)); }
	inline bool get_useRecursion_10() const { return ___useRecursion_10; }
	inline bool* get_address_of_useRecursion_10() { return &___useRecursion_10; }
	inline void set_useRecursion_10(bool value)
	{
		___useRecursion_10 = value;
	}

	inline static int32_t get_offset_of_ratioPassed_11() { return static_cast<int32_t>(offsetof(LTDescr_t88934797D6A324735209180E7958727F7E3746A9, ___ratioPassed_11)); }
	inline float get_ratioPassed_11() const { return ___ratioPassed_11; }
	inline float* get_address_of_ratioPassed_11() { return &___ratioPassed_11; }
	inline void set_ratioPassed_11(float value)
	{
		___ratioPassed_11 = value;
	}

	inline static int32_t get_offset_of_passed_12() { return static_cast<int32_t>(offsetof(LTDescr_t88934797D6A324735209180E7958727F7E3746A9, ___passed_12)); }
	inline float get_passed_12() const { return ___passed_12; }
	inline float* get_address_of_passed_12() { return &___passed_12; }
	inline void set_passed_12(float value)
	{
		___passed_12 = value;
	}

	inline static int32_t get_offset_of_delay_13() { return static_cast<int32_t>(offsetof(LTDescr_t88934797D6A324735209180E7958727F7E3746A9, ___delay_13)); }
	inline float get_delay_13() const { return ___delay_13; }
	inline float* get_address_of_delay_13() { return &___delay_13; }
	inline void set_delay_13(float value)
	{
		___delay_13 = value;
	}

	inline static int32_t get_offset_of_time_14() { return static_cast<int32_t>(offsetof(LTDescr_t88934797D6A324735209180E7958727F7E3746A9, ___time_14)); }
	inline float get_time_14() const { return ___time_14; }
	inline float* get_address_of_time_14() { return &___time_14; }
	inline void set_time_14(float value)
	{
		___time_14 = value;
	}

	inline static int32_t get_offset_of_speed_15() { return static_cast<int32_t>(offsetof(LTDescr_t88934797D6A324735209180E7958727F7E3746A9, ___speed_15)); }
	inline float get_speed_15() const { return ___speed_15; }
	inline float* get_address_of_speed_15() { return &___speed_15; }
	inline void set_speed_15(float value)
	{
		___speed_15 = value;
	}

	inline static int32_t get_offset_of_lastVal_16() { return static_cast<int32_t>(offsetof(LTDescr_t88934797D6A324735209180E7958727F7E3746A9, ___lastVal_16)); }
	inline float get_lastVal_16() const { return ___lastVal_16; }
	inline float* get_address_of_lastVal_16() { return &___lastVal_16; }
	inline void set_lastVal_16(float value)
	{
		___lastVal_16 = value;
	}

	inline static int32_t get_offset_of__id_17() { return static_cast<int32_t>(offsetof(LTDescr_t88934797D6A324735209180E7958727F7E3746A9, ____id_17)); }
	inline uint32_t get__id_17() const { return ____id_17; }
	inline uint32_t* get_address_of__id_17() { return &____id_17; }
	inline void set__id_17(uint32_t value)
	{
		____id_17 = value;
	}

	inline static int32_t get_offset_of_loopCount_18() { return static_cast<int32_t>(offsetof(LTDescr_t88934797D6A324735209180E7958727F7E3746A9, ___loopCount_18)); }
	inline int32_t get_loopCount_18() const { return ___loopCount_18; }
	inline int32_t* get_address_of_loopCount_18() { return &___loopCount_18; }
	inline void set_loopCount_18(int32_t value)
	{
		___loopCount_18 = value;
	}

	inline static int32_t get_offset_of_counter_19() { return static_cast<int32_t>(offsetof(LTDescr_t88934797D6A324735209180E7958727F7E3746A9, ___counter_19)); }
	inline uint32_t get_counter_19() const { return ___counter_19; }
	inline uint32_t* get_address_of_counter_19() { return &___counter_19; }
	inline void set_counter_19(uint32_t value)
	{
		___counter_19 = value;
	}

	inline static int32_t get_offset_of_direction_20() { return static_cast<int32_t>(offsetof(LTDescr_t88934797D6A324735209180E7958727F7E3746A9, ___direction_20)); }
	inline float get_direction_20() const { return ___direction_20; }
	inline float* get_address_of_direction_20() { return &___direction_20; }
	inline void set_direction_20(float value)
	{
		___direction_20 = value;
	}

	inline static int32_t get_offset_of_directionLast_21() { return static_cast<int32_t>(offsetof(LTDescr_t88934797D6A324735209180E7958727F7E3746A9, ___directionLast_21)); }
	inline float get_directionLast_21() const { return ___directionLast_21; }
	inline float* get_address_of_directionLast_21() { return &___directionLast_21; }
	inline void set_directionLast_21(float value)
	{
		___directionLast_21 = value;
	}

	inline static int32_t get_offset_of_overshoot_22() { return static_cast<int32_t>(offsetof(LTDescr_t88934797D6A324735209180E7958727F7E3746A9, ___overshoot_22)); }
	inline float get_overshoot_22() const { return ___overshoot_22; }
	inline float* get_address_of_overshoot_22() { return &___overshoot_22; }
	inline void set_overshoot_22(float value)
	{
		___overshoot_22 = value;
	}

	inline static int32_t get_offset_of_period_23() { return static_cast<int32_t>(offsetof(LTDescr_t88934797D6A324735209180E7958727F7E3746A9, ___period_23)); }
	inline float get_period_23() const { return ___period_23; }
	inline float* get_address_of_period_23() { return &___period_23; }
	inline void set_period_23(float value)
	{
		___period_23 = value;
	}

	inline static int32_t get_offset_of_scale_24() { return static_cast<int32_t>(offsetof(LTDescr_t88934797D6A324735209180E7958727F7E3746A9, ___scale_24)); }
	inline float get_scale_24() const { return ___scale_24; }
	inline float* get_address_of_scale_24() { return &___scale_24; }
	inline void set_scale_24(float value)
	{
		___scale_24 = value;
	}

	inline static int32_t get_offset_of_destroyOnComplete_25() { return static_cast<int32_t>(offsetof(LTDescr_t88934797D6A324735209180E7958727F7E3746A9, ___destroyOnComplete_25)); }
	inline bool get_destroyOnComplete_25() const { return ___destroyOnComplete_25; }
	inline bool* get_address_of_destroyOnComplete_25() { return &___destroyOnComplete_25; }
	inline void set_destroyOnComplete_25(bool value)
	{
		___destroyOnComplete_25 = value;
	}

	inline static int32_t get_offset_of_trans_26() { return static_cast<int32_t>(offsetof(LTDescr_t88934797D6A324735209180E7958727F7E3746A9, ___trans_26)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_trans_26() const { return ___trans_26; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_trans_26() { return &___trans_26; }
	inline void set_trans_26(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___trans_26 = value;
		Il2CppCodeGenWriteBarrier((&___trans_26), value);
	}

	inline static int32_t get_offset_of_fromInternal_27() { return static_cast<int32_t>(offsetof(LTDescr_t88934797D6A324735209180E7958727F7E3746A9, ___fromInternal_27)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_fromInternal_27() const { return ___fromInternal_27; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_fromInternal_27() { return &___fromInternal_27; }
	inline void set_fromInternal_27(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___fromInternal_27 = value;
	}

	inline static int32_t get_offset_of_toInternal_28() { return static_cast<int32_t>(offsetof(LTDescr_t88934797D6A324735209180E7958727F7E3746A9, ___toInternal_28)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_toInternal_28() const { return ___toInternal_28; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_toInternal_28() { return &___toInternal_28; }
	inline void set_toInternal_28(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___toInternal_28 = value;
	}

	inline static int32_t get_offset_of_diff_29() { return static_cast<int32_t>(offsetof(LTDescr_t88934797D6A324735209180E7958727F7E3746A9, ___diff_29)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_diff_29() const { return ___diff_29; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_diff_29() { return &___diff_29; }
	inline void set_diff_29(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___diff_29 = value;
	}

	inline static int32_t get_offset_of_diffDiv2_30() { return static_cast<int32_t>(offsetof(LTDescr_t88934797D6A324735209180E7958727F7E3746A9, ___diffDiv2_30)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_diffDiv2_30() const { return ___diffDiv2_30; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_diffDiv2_30() { return &___diffDiv2_30; }
	inline void set_diffDiv2_30(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___diffDiv2_30 = value;
	}

	inline static int32_t get_offset_of_type_31() { return static_cast<int32_t>(offsetof(LTDescr_t88934797D6A324735209180E7958727F7E3746A9, ___type_31)); }
	inline int32_t get_type_31() const { return ___type_31; }
	inline int32_t* get_address_of_type_31() { return &___type_31; }
	inline void set_type_31(int32_t value)
	{
		___type_31 = value;
	}

	inline static int32_t get_offset_of_easeType_32() { return static_cast<int32_t>(offsetof(LTDescr_t88934797D6A324735209180E7958727F7E3746A9, ___easeType_32)); }
	inline int32_t get_easeType_32() const { return ___easeType_32; }
	inline int32_t* get_address_of_easeType_32() { return &___easeType_32; }
	inline void set_easeType_32(int32_t value)
	{
		___easeType_32 = value;
	}

	inline static int32_t get_offset_of_loopType_33() { return static_cast<int32_t>(offsetof(LTDescr_t88934797D6A324735209180E7958727F7E3746A9, ___loopType_33)); }
	inline int32_t get_loopType_33() const { return ___loopType_33; }
	inline int32_t* get_address_of_loopType_33() { return &___loopType_33; }
	inline void set_loopType_33(int32_t value)
	{
		___loopType_33 = value;
	}

	inline static int32_t get_offset_of_hasUpdateCallback_34() { return static_cast<int32_t>(offsetof(LTDescr_t88934797D6A324735209180E7958727F7E3746A9, ___hasUpdateCallback_34)); }
	inline bool get_hasUpdateCallback_34() const { return ___hasUpdateCallback_34; }
	inline bool* get_address_of_hasUpdateCallback_34() { return &___hasUpdateCallback_34; }
	inline void set_hasUpdateCallback_34(bool value)
	{
		___hasUpdateCallback_34 = value;
	}

	inline static int32_t get_offset_of_easeMethod_35() { return static_cast<int32_t>(offsetof(LTDescr_t88934797D6A324735209180E7958727F7E3746A9, ___easeMethod_35)); }
	inline EaseTypeDelegate_tA9141EF100D02C74FCEC0F4AB8633E228020F1CD * get_easeMethod_35() const { return ___easeMethod_35; }
	inline EaseTypeDelegate_tA9141EF100D02C74FCEC0F4AB8633E228020F1CD ** get_address_of_easeMethod_35() { return &___easeMethod_35; }
	inline void set_easeMethod_35(EaseTypeDelegate_tA9141EF100D02C74FCEC0F4AB8633E228020F1CD * value)
	{
		___easeMethod_35 = value;
		Il2CppCodeGenWriteBarrier((&___easeMethod_35), value);
	}

	inline static int32_t get_offset_of_U3CeaseInternalU3Ek__BackingField_36() { return static_cast<int32_t>(offsetof(LTDescr_t88934797D6A324735209180E7958727F7E3746A9, ___U3CeaseInternalU3Ek__BackingField_36)); }
	inline ActionMethodDelegate_t9F3B058CF9E6481BF2E213F41E3853AA049B1570 * get_U3CeaseInternalU3Ek__BackingField_36() const { return ___U3CeaseInternalU3Ek__BackingField_36; }
	inline ActionMethodDelegate_t9F3B058CF9E6481BF2E213F41E3853AA049B1570 ** get_address_of_U3CeaseInternalU3Ek__BackingField_36() { return &___U3CeaseInternalU3Ek__BackingField_36; }
	inline void set_U3CeaseInternalU3Ek__BackingField_36(ActionMethodDelegate_t9F3B058CF9E6481BF2E213F41E3853AA049B1570 * value)
	{
		___U3CeaseInternalU3Ek__BackingField_36 = value;
		Il2CppCodeGenWriteBarrier((&___U3CeaseInternalU3Ek__BackingField_36), value);
	}

	inline static int32_t get_offset_of_U3CinitInternalU3Ek__BackingField_37() { return static_cast<int32_t>(offsetof(LTDescr_t88934797D6A324735209180E7958727F7E3746A9, ___U3CinitInternalU3Ek__BackingField_37)); }
	inline ActionMethodDelegate_t9F3B058CF9E6481BF2E213F41E3853AA049B1570 * get_U3CinitInternalU3Ek__BackingField_37() const { return ___U3CinitInternalU3Ek__BackingField_37; }
	inline ActionMethodDelegate_t9F3B058CF9E6481BF2E213F41E3853AA049B1570 ** get_address_of_U3CinitInternalU3Ek__BackingField_37() { return &___U3CinitInternalU3Ek__BackingField_37; }
	inline void set_U3CinitInternalU3Ek__BackingField_37(ActionMethodDelegate_t9F3B058CF9E6481BF2E213F41E3853AA049B1570 * value)
	{
		___U3CinitInternalU3Ek__BackingField_37 = value;
		Il2CppCodeGenWriteBarrier((&___U3CinitInternalU3Ek__BackingField_37), value);
	}

	inline static int32_t get_offset_of_spriteRen_38() { return static_cast<int32_t>(offsetof(LTDescr_t88934797D6A324735209180E7958727F7E3746A9, ___spriteRen_38)); }
	inline SpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F * get_spriteRen_38() const { return ___spriteRen_38; }
	inline SpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F ** get_address_of_spriteRen_38() { return &___spriteRen_38; }
	inline void set_spriteRen_38(SpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F * value)
	{
		___spriteRen_38 = value;
		Il2CppCodeGenWriteBarrier((&___spriteRen_38), value);
	}

	inline static int32_t get_offset_of_rectTransform_39() { return static_cast<int32_t>(offsetof(LTDescr_t88934797D6A324735209180E7958727F7E3746A9, ___rectTransform_39)); }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * get_rectTransform_39() const { return ___rectTransform_39; }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 ** get_address_of_rectTransform_39() { return &___rectTransform_39; }
	inline void set_rectTransform_39(RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * value)
	{
		___rectTransform_39 = value;
		Il2CppCodeGenWriteBarrier((&___rectTransform_39), value);
	}

	inline static int32_t get_offset_of_uiText_40() { return static_cast<int32_t>(offsetof(LTDescr_t88934797D6A324735209180E7958727F7E3746A9, ___uiText_40)); }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * get_uiText_40() const { return ___uiText_40; }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 ** get_address_of_uiText_40() { return &___uiText_40; }
	inline void set_uiText_40(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * value)
	{
		___uiText_40 = value;
		Il2CppCodeGenWriteBarrier((&___uiText_40), value);
	}

	inline static int32_t get_offset_of_uiImage_41() { return static_cast<int32_t>(offsetof(LTDescr_t88934797D6A324735209180E7958727F7E3746A9, ___uiImage_41)); }
	inline Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * get_uiImage_41() const { return ___uiImage_41; }
	inline Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E ** get_address_of_uiImage_41() { return &___uiImage_41; }
	inline void set_uiImage_41(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * value)
	{
		___uiImage_41 = value;
		Il2CppCodeGenWriteBarrier((&___uiImage_41), value);
	}

	inline static int32_t get_offset_of_rawImage_42() { return static_cast<int32_t>(offsetof(LTDescr_t88934797D6A324735209180E7958727F7E3746A9, ___rawImage_42)); }
	inline RawImage_t68991514DB8F48442D614E7904A298C936B3C7C8 * get_rawImage_42() const { return ___rawImage_42; }
	inline RawImage_t68991514DB8F48442D614E7904A298C936B3C7C8 ** get_address_of_rawImage_42() { return &___rawImage_42; }
	inline void set_rawImage_42(RawImage_t68991514DB8F48442D614E7904A298C936B3C7C8 * value)
	{
		___rawImage_42 = value;
		Il2CppCodeGenWriteBarrier((&___rawImage_42), value);
	}

	inline static int32_t get_offset_of_sprites_43() { return static_cast<int32_t>(offsetof(LTDescr_t88934797D6A324735209180E7958727F7E3746A9, ___sprites_43)); }
	inline SpriteU5BU5D_tC248C30BCF0EAA6D8BD69A89AF1FC5BA002CA017* get_sprites_43() const { return ___sprites_43; }
	inline SpriteU5BU5D_tC248C30BCF0EAA6D8BD69A89AF1FC5BA002CA017** get_address_of_sprites_43() { return &___sprites_43; }
	inline void set_sprites_43(SpriteU5BU5D_tC248C30BCF0EAA6D8BD69A89AF1FC5BA002CA017* value)
	{
		___sprites_43 = value;
		Il2CppCodeGenWriteBarrier((&___sprites_43), value);
	}

	inline static int32_t get_offset_of__optional_44() { return static_cast<int32_t>(offsetof(LTDescr_t88934797D6A324735209180E7958727F7E3746A9, ____optional_44)); }
	inline LTDescrOptional_t75D006D2B3DF2EEA936B01EFC08449BFC04F54B1 * get__optional_44() const { return ____optional_44; }
	inline LTDescrOptional_t75D006D2B3DF2EEA936B01EFC08449BFC04F54B1 ** get_address_of__optional_44() { return &____optional_44; }
	inline void set__optional_44(LTDescrOptional_t75D006D2B3DF2EEA936B01EFC08449BFC04F54B1 * value)
	{
		____optional_44 = value;
		Il2CppCodeGenWriteBarrier((&____optional_44), value);
	}
};

struct LTDescr_t88934797D6A324735209180E7958727F7E3746A9_StaticFields
{
public:
	// System.Single LTDescr::val
	float ___val_45;
	// System.Single LTDescr::dt
	float ___dt_46;
	// UnityEngine.Vector3 LTDescr::newVect
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___newVect_47;

public:
	inline static int32_t get_offset_of_val_45() { return static_cast<int32_t>(offsetof(LTDescr_t88934797D6A324735209180E7958727F7E3746A9_StaticFields, ___val_45)); }
	inline float get_val_45() const { return ___val_45; }
	inline float* get_address_of_val_45() { return &___val_45; }
	inline void set_val_45(float value)
	{
		___val_45 = value;
	}

	inline static int32_t get_offset_of_dt_46() { return static_cast<int32_t>(offsetof(LTDescr_t88934797D6A324735209180E7958727F7E3746A9_StaticFields, ___dt_46)); }
	inline float get_dt_46() const { return ___dt_46; }
	inline float* get_address_of_dt_46() { return &___dt_46; }
	inline void set_dt_46(float value)
	{
		___dt_46 = value;
	}

	inline static int32_t get_offset_of_newVect_47() { return static_cast<int32_t>(offsetof(LTDescr_t88934797D6A324735209180E7958727F7E3746A9_StaticFields, ___newVect_47)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_newVect_47() const { return ___newVect_47; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_newVect_47() { return &___newVect_47; }
	inline void set_newVect_47(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___newVect_47 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LTDESCR_T88934797D6A324735209180E7958727F7E3746A9_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((&___delegates_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};
#endif // MULTICASTDELEGATE_T_H
#ifndef COMPONENT_T05064EF382ABCAF4B8C94F8A350EA85184C26621_H
#define COMPONENT_T05064EF382ABCAF4B8C94F8A350EA85184C26621_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T05064EF382ABCAF4B8C94F8A350EA85184C26621_H
#ifndef GAMEOBJECT_TBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_H
#define GAMEOBJECT_TBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GameObject
struct  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECT_TBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_H
#ifndef ACTION_T591D2A86165F896B4B800BB5C25CE18672A55579_H
#define ACTION_T591D2A86165F896B4B800BB5C25CE18672A55579_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action
struct  Action_t591D2A86165F896B4B800BB5C25CE18672A55579  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_T591D2A86165F896B4B800BB5C25CE18672A55579_H
#ifndef ACTION_1_T551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0_H
#define ACTION_1_T551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`1<System.Object>
struct  Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_1_T551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0_H
#ifndef ACTION_1_T298B565CF49E0C72E4377AA3B30170F58D9F64FB_H
#define ACTION_1_T298B565CF49E0C72E4377AA3B30170F58D9F64FB_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`1<System.Single>
struct  Action_1_t298B565CF49E0C72E4377AA3B30170F58D9F64FB  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_1_T298B565CF49E0C72E4377AA3B30170F58D9F64FB_H
#ifndef ACTION_1_TA44107B06FF0DB8292A09BDC892436393CD13E67_H
#define ACTION_1_TA44107B06FF0DB8292A09BDC892436393CD13E67_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`1<UnityEngine.Vector3>
struct  Action_1_tA44107B06FF0DB8292A09BDC892436393CD13E67  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_1_TA44107B06FF0DB8292A09BDC892436393CD13E67_H
#ifndef ACTION_2_T6614CB55E7CBF2119E4A6402E4E2A25EF45412E5_H
#define ACTION_2_T6614CB55E7CBF2119E4A6402E4E2A25EF45412E5_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`2<System.Single,System.Object>
struct  Action_2_t6614CB55E7CBF2119E4A6402E4E2A25EF45412E5  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_2_T6614CB55E7CBF2119E4A6402E4E2A25EF45412E5_H
#ifndef ASYNCCALLBACK_T3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4_H
#define ASYNCCALLBACK_T3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AsyncCallback
struct  AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCCALLBACK_T3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4_H
#ifndef NEXTFUNC_T4537D46AA060532C51EF0B326FD5A93368D50E70_H
#define NEXTFUNC_T4537D46AA060532C51EF0B326FD5A93368D50E70_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TestingZLegacy_NextFunc
struct  NextFunc_t4537D46AA060532C51EF0B326FD5A93368D50E70  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NEXTFUNC_T4537D46AA060532C51EF0B326FD5A93368D50E70_H
#ifndef NEXTFUNC_TB4F1FEFABAD83E05D2477DD91C7B0B0EF49B03AE_H
#define NEXTFUNC_TB4F1FEFABAD83E05D2477DD91C7B0B0EF49B03AE_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TestingZLegacyExt_NextFunc
struct  NextFunc_tB4F1FEFABAD83E05D2477DD91C7B0B0EF49B03AE  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NEXTFUNC_TB4F1FEFABAD83E05D2477DD91C7B0B0EF49B03AE_H
#ifndef BEHAVIOUR_TBDC7E9C3C898AD8348891B82D3E345801D920CA8_H
#define BEHAVIOUR_TBDC7E9C3C898AD8348891B82D3E345801D920CA8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_TBDC7E9C3C898AD8348891B82D3E345801D920CA8_H
#ifndef TRANSFORM_TBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_H
#define TRANSFORM_TBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform
struct  Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_TBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_H
#ifndef MONOBEHAVIOUR_T4A60845CF505405AF8BE8C61CC07F75CADEF6429_H
#define MONOBEHAVIOUR_T4A60845CF505405AF8BE8C61CC07F75CADEF6429_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T4A60845CF505405AF8BE8C61CC07F75CADEF6429_H
#ifndef TESTINGZLEGACYEXT_TA6E1C9426A6110E30EB957EC9EFCE02AE4DE0918_H
#define TESTINGZLEGACYEXT_TA6E1C9426A6110E30EB957EC9EFCE02AE4DE0918_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TestingZLegacyExt
struct  TestingZLegacyExt_tA6E1C9426A6110E30EB957EC9EFCE02AE4DE0918  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.AnimationCurve TestingZLegacyExt::customAnimationCurve
	AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * ___customAnimationCurve_4;
	// UnityEngine.Transform TestingZLegacyExt::pt1
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___pt1_5;
	// UnityEngine.Transform TestingZLegacyExt::pt2
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___pt2_6;
	// UnityEngine.Transform TestingZLegacyExt::pt3
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___pt3_7;
	// UnityEngine.Transform TestingZLegacyExt::pt4
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___pt4_8;
	// UnityEngine.Transform TestingZLegacyExt::pt5
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___pt5_9;
	// System.Int32 TestingZLegacyExt::exampleIter
	int32_t ___exampleIter_10;
	// System.String[] TestingZLegacyExt::exampleFunctions
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___exampleFunctions_11;
	// System.Boolean TestingZLegacyExt::useEstimatedTime
	bool ___useEstimatedTime_12;
	// UnityEngine.Transform TestingZLegacyExt::ltLogo
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___ltLogo_13;
	// TestingZLegacyExt_TimingType TestingZLegacyExt::timingType
	int32_t ___timingType_14;
	// System.Int32 TestingZLegacyExt::descrTimeScaleChangeId
	int32_t ___descrTimeScaleChangeId_15;
	// UnityEngine.Vector3 TestingZLegacyExt::origin
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___origin_16;

public:
	inline static int32_t get_offset_of_customAnimationCurve_4() { return static_cast<int32_t>(offsetof(TestingZLegacyExt_tA6E1C9426A6110E30EB957EC9EFCE02AE4DE0918, ___customAnimationCurve_4)); }
	inline AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * get_customAnimationCurve_4() const { return ___customAnimationCurve_4; }
	inline AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C ** get_address_of_customAnimationCurve_4() { return &___customAnimationCurve_4; }
	inline void set_customAnimationCurve_4(AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * value)
	{
		___customAnimationCurve_4 = value;
		Il2CppCodeGenWriteBarrier((&___customAnimationCurve_4), value);
	}

	inline static int32_t get_offset_of_pt1_5() { return static_cast<int32_t>(offsetof(TestingZLegacyExt_tA6E1C9426A6110E30EB957EC9EFCE02AE4DE0918, ___pt1_5)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_pt1_5() const { return ___pt1_5; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_pt1_5() { return &___pt1_5; }
	inline void set_pt1_5(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___pt1_5 = value;
		Il2CppCodeGenWriteBarrier((&___pt1_5), value);
	}

	inline static int32_t get_offset_of_pt2_6() { return static_cast<int32_t>(offsetof(TestingZLegacyExt_tA6E1C9426A6110E30EB957EC9EFCE02AE4DE0918, ___pt2_6)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_pt2_6() const { return ___pt2_6; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_pt2_6() { return &___pt2_6; }
	inline void set_pt2_6(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___pt2_6 = value;
		Il2CppCodeGenWriteBarrier((&___pt2_6), value);
	}

	inline static int32_t get_offset_of_pt3_7() { return static_cast<int32_t>(offsetof(TestingZLegacyExt_tA6E1C9426A6110E30EB957EC9EFCE02AE4DE0918, ___pt3_7)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_pt3_7() const { return ___pt3_7; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_pt3_7() { return &___pt3_7; }
	inline void set_pt3_7(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___pt3_7 = value;
		Il2CppCodeGenWriteBarrier((&___pt3_7), value);
	}

	inline static int32_t get_offset_of_pt4_8() { return static_cast<int32_t>(offsetof(TestingZLegacyExt_tA6E1C9426A6110E30EB957EC9EFCE02AE4DE0918, ___pt4_8)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_pt4_8() const { return ___pt4_8; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_pt4_8() { return &___pt4_8; }
	inline void set_pt4_8(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___pt4_8 = value;
		Il2CppCodeGenWriteBarrier((&___pt4_8), value);
	}

	inline static int32_t get_offset_of_pt5_9() { return static_cast<int32_t>(offsetof(TestingZLegacyExt_tA6E1C9426A6110E30EB957EC9EFCE02AE4DE0918, ___pt5_9)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_pt5_9() const { return ___pt5_9; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_pt5_9() { return &___pt5_9; }
	inline void set_pt5_9(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___pt5_9 = value;
		Il2CppCodeGenWriteBarrier((&___pt5_9), value);
	}

	inline static int32_t get_offset_of_exampleIter_10() { return static_cast<int32_t>(offsetof(TestingZLegacyExt_tA6E1C9426A6110E30EB957EC9EFCE02AE4DE0918, ___exampleIter_10)); }
	inline int32_t get_exampleIter_10() const { return ___exampleIter_10; }
	inline int32_t* get_address_of_exampleIter_10() { return &___exampleIter_10; }
	inline void set_exampleIter_10(int32_t value)
	{
		___exampleIter_10 = value;
	}

	inline static int32_t get_offset_of_exampleFunctions_11() { return static_cast<int32_t>(offsetof(TestingZLegacyExt_tA6E1C9426A6110E30EB957EC9EFCE02AE4DE0918, ___exampleFunctions_11)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_exampleFunctions_11() const { return ___exampleFunctions_11; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_exampleFunctions_11() { return &___exampleFunctions_11; }
	inline void set_exampleFunctions_11(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___exampleFunctions_11 = value;
		Il2CppCodeGenWriteBarrier((&___exampleFunctions_11), value);
	}

	inline static int32_t get_offset_of_useEstimatedTime_12() { return static_cast<int32_t>(offsetof(TestingZLegacyExt_tA6E1C9426A6110E30EB957EC9EFCE02AE4DE0918, ___useEstimatedTime_12)); }
	inline bool get_useEstimatedTime_12() const { return ___useEstimatedTime_12; }
	inline bool* get_address_of_useEstimatedTime_12() { return &___useEstimatedTime_12; }
	inline void set_useEstimatedTime_12(bool value)
	{
		___useEstimatedTime_12 = value;
	}

	inline static int32_t get_offset_of_ltLogo_13() { return static_cast<int32_t>(offsetof(TestingZLegacyExt_tA6E1C9426A6110E30EB957EC9EFCE02AE4DE0918, ___ltLogo_13)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_ltLogo_13() const { return ___ltLogo_13; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_ltLogo_13() { return &___ltLogo_13; }
	inline void set_ltLogo_13(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___ltLogo_13 = value;
		Il2CppCodeGenWriteBarrier((&___ltLogo_13), value);
	}

	inline static int32_t get_offset_of_timingType_14() { return static_cast<int32_t>(offsetof(TestingZLegacyExt_tA6E1C9426A6110E30EB957EC9EFCE02AE4DE0918, ___timingType_14)); }
	inline int32_t get_timingType_14() const { return ___timingType_14; }
	inline int32_t* get_address_of_timingType_14() { return &___timingType_14; }
	inline void set_timingType_14(int32_t value)
	{
		___timingType_14 = value;
	}

	inline static int32_t get_offset_of_descrTimeScaleChangeId_15() { return static_cast<int32_t>(offsetof(TestingZLegacyExt_tA6E1C9426A6110E30EB957EC9EFCE02AE4DE0918, ___descrTimeScaleChangeId_15)); }
	inline int32_t get_descrTimeScaleChangeId_15() const { return ___descrTimeScaleChangeId_15; }
	inline int32_t* get_address_of_descrTimeScaleChangeId_15() { return &___descrTimeScaleChangeId_15; }
	inline void set_descrTimeScaleChangeId_15(int32_t value)
	{
		___descrTimeScaleChangeId_15 = value;
	}

	inline static int32_t get_offset_of_origin_16() { return static_cast<int32_t>(offsetof(TestingZLegacyExt_tA6E1C9426A6110E30EB957EC9EFCE02AE4DE0918, ___origin_16)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_origin_16() const { return ___origin_16; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_origin_16() { return &___origin_16; }
	inline void set_origin_16(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___origin_16 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TESTINGZLEGACYEXT_TA6E1C9426A6110E30EB957EC9EFCE02AE4DE0918_H
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  m_Items[1];

public:
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};


// System.Void System.Action`1<System.Single>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Action_1__ctor_m31BC390E2E0368C57885B41C5A9D480DE46FD72D_gshared (Action_1_t298B565CF49E0C72E4377AA3B30170F58D9F64FB * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.Vector3>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Action_1__ctor_mCD888E010B612C1A207F48F514125A480CE6045F_gshared (Action_1_tA44107B06FF0DB8292A09BDC892436393CD13E67 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Action_1__ctor_mAFC7442D9D3CEC6701C3C5599F8CF12476095510_gshared (Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Void System.Action`2<System.Single,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Action_2__ctor_mF69CA07CA71C62E254AC8C17A32A90E511F97076_gshared (Action_2_t6614CB55E7CBF2119E4A6402E4E2A25EF45412E5 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);

// System.Void TestingZLegacy/<>c::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mADF151B244B6D0657E6F42524B06E75D5CBD3E82 (U3CU3Ec_tD53C6FB932407C274F46AF5EB749ECB420822BC6 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Time::set_timeScale(System.Single)
extern "C" IL2CPP_METHOD_ATTR void Time_set_timeScale_mAB89C3BB5DEE81934159C23F103397A77AC3F4AF (float p0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
extern "C" IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * GameObject_Find_m1470FB04EB6DB15CCC0D9745B70EE987B318E9BD (String_t* p0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
extern "C" IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Action__ctor_m570E96B2A0C48BC1DC6788460316191F24572760 (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// LTDescr LeanTween::delayedCall(System.Single,System.Action)
extern "C" IL2CPP_METHOD_ATTR LTDescr_t88934797D6A324735209180E7958727F7E3746A9 * LeanTween_delayedCall_m9A30D60BD8FDCAB56DB1A6CEBEF3148DABC55C1F (float ___delayTime0, Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___callback1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708 (RuntimeObject * p0, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_timeScale()
extern "C" IL2CPP_METHOD_ATTR float Time_get_timeScale_m7E198A5814859A08FD0FFE6DD5F7ED5C907719F8 (const RuntimeMethod* method);
// System.String System.String::Concat(System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495 (RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_width()
extern "C" IL2CPP_METHOD_ATTR int32_t Screen_get_width_m8ECCEF7FF17395D1237BC0193D7A6640A3FEEAD3 (const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_height()
extern "C" IL2CPP_METHOD_ATTR int32_t Screen_get_height_mF5B64EBC4CDE0EAAA5713C1452ED2CE475F25150 (const RuntimeMethod* method);
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Rect__ctor_m50B92C75005C9C5A0D05E6E0EBB43AFAF7C66280 (Rect_t35B976DE901B5423C11705E156938EA27AB402CE * __this, float p0, float p1, float p2, float p3, const RuntimeMethod* method);
// System.Void UnityEngine.GUI::Label(UnityEngine.Rect,System.String)
extern "C" IL2CPP_METHOD_ATTR void GUI_Label_m3262E5E30013ECAF83C075710F7761E49BEA5CCE (Rect_t35B976DE901B5423C11705E156938EA27AB402CE  p0, String_t* p1, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C" IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// LTDescr LeanTweenExt::LeanValue(UnityEngine.GameObject,System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR LTDescr_t88934797D6A324735209180E7958727F7E3746A9 * LeanTweenExt_LeanValue_mD5A93425AE484792B7CCBB10D7E8AFEA8C9DBDE1 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___gameObject0, float ___from1, float ___to2, float ___time3, const RuntimeMethod* method);
// System.Void System.Action`1<System.Single>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m31BC390E2E0368C57885B41C5A9D480DE46FD72D (Action_1_t298B565CF49E0C72E4377AA3B30170F58D9F64FB * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t298B565CF49E0C72E4377AA3B30170F58D9F64FB *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_m31BC390E2E0368C57885B41C5A9D480DE46FD72D_gshared)(__this, p0, p1, method);
}
// LTDescr LTDescr::setOnUpdate(System.Action`1<System.Single>)
extern "C" IL2CPP_METHOD_ATTR LTDescr_t88934797D6A324735209180E7958727F7E3746A9 * LTDescr_setOnUpdate_mAD3D38A82D50CDE3544A0DD7C70933294DA802BF (LTDescr_t88934797D6A324735209180E7958727F7E3746A9 * __this, Action_1_t298B565CF49E0C72E4377AA3B30170F58D9F64FB * ___onUpdate0, const RuntimeMethod* method);
// LTDescr LTDescr::setEase(LeanTweenType)
extern "C" IL2CPP_METHOD_ATTR LTDescr_t88934797D6A324735209180E7958727F7E3746A9 * LTDescr_setEase_mCF284E5CA17BB1BECBB5B1CC1013571B108580A3 (LTDescr_t88934797D6A324735209180E7958727F7E3746A9 * __this, int32_t ___easeType0, const RuntimeMethod* method);
// LTDescr LTDescr::setUseEstimatedTime(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR LTDescr_t88934797D6A324735209180E7958727F7E3746A9 * LTDescr_setUseEstimatedTime_m689F41334718832FA13226521051FBE6B9A94044 (LTDescr_t88934797D6A324735209180E7958727F7E3746A9 * __this, bool ___useEstimatedTime0, const RuntimeMethod* method);
// LTDescr LTDescr::setRepeat(System.Int32)
extern "C" IL2CPP_METHOD_ATTR LTDescr_t88934797D6A324735209180E7958727F7E3746A9 * LTDescr_setRepeat_mD2FCFF828300FCC0E14689234F08334781F2EDC0 (LTDescr_t88934797D6A324735209180E7958727F7E3746A9 * __this, int32_t ___repeat0, const RuntimeMethod* method);
// System.Int32 LTDescr::get_id()
extern "C" IL2CPP_METHOD_ATTR int32_t LTDescr_get_id_mA60B6D722D7203D71E53B4782A3FC2393F18DF53 (LTDescr_t88934797D6A324735209180E7958727F7E3746A9 * __this, const RuntimeMethod* method);
// System.Void LeanTween::cancel(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void LeanTween_cancel_mEC28E027DD92AED60878081BF43C12DE54CDBC4D (int32_t ___uniqueId0, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::BroadcastMessage(System.String)
extern "C" IL2CPP_METHOD_ATTR void GameObject_BroadcastMessage_m58B3BCA61DA82D13BC28DB128A2717728C053DB8 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, String_t* p0, const RuntimeMethod* method);
// LTDescr LeanTweenExt::LeanDelayedCall(UnityEngine.GameObject,System.Single,System.Action)
extern "C" IL2CPP_METHOD_ATTR LTDescr_t88934797D6A324735209180E7958727F7E3746A9 * LeanTweenExt_LeanDelayedCall_m5DC8F9D70956A7829F379D7483C02D63608774A8 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___gameObject0, float ___delayTime1, Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___callback2, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_time()
extern "C" IL2CPP_METHOD_ATTR float Time_get_time_m7863349C8845BBA36629A2B3F8EF1C3BEA350FD8 (const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.Vector3>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mCD888E010B612C1A207F48F514125A480CE6045F (Action_1_tA44107B06FF0DB8292A09BDC892436393CD13E67 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tA44107B06FF0DB8292A09BDC892436393CD13E67 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mCD888E010B612C1A207F48F514125A480CE6045F_gshared)(__this, p0, p1, method);
}
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, float p0, float p1, float p2, const RuntimeMethod* method);
// LTDescr LeanTweenExt::LeanValue(UnityEngine.GameObject,System.Action`1<UnityEngine.Vector3>,UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C" IL2CPP_METHOD_ATTR LTDescr_t88934797D6A324735209180E7958727F7E3746A9 * LeanTweenExt_LeanValue_m2FDD53340AD0B9F26FAE12EC974FF4390F303841 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___gameObject0, Action_1_tA44107B06FF0DB8292A09BDC892436393CD13E67 * ___callOnUpdate1, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___from2, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___to3, float ___time4, const RuntimeMethod* method);
// LTDescr LTDescr::setLoopPingPong()
extern "C" IL2CPP_METHOD_ATTR LTDescr_t88934797D6A324735209180E7958727F7E3746A9 * LTDescr_setLoopPingPong_m53E03879D46B899429F463427A5EACEE747F9636 (LTDescr_t88934797D6A324735209180E7958727F7E3746A9 * __this, const RuntimeMethod* method);
// LTDescr LTDescr::setOnUpdateVector3(System.Action`1<UnityEngine.Vector3>)
extern "C" IL2CPP_METHOD_ATTR LTDescr_t88934797D6A324735209180E7958727F7E3746A9 * LTDescr_setOnUpdateVector3_mB4E2237829DCE16E0EFC4FB209173ECCBE0AEF5A (LTDescr_t88934797D6A324735209180E7958727F7E3746A9 * __this, Action_1_tA44107B06FF0DB8292A09BDC892436393CD13E67 * ___onUpdate0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C" IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_eulerAngles(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_eulerAngles_m4B2B374C0B089A7ED0B522A3A4C56FA868992685 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, const RuntimeMethod* method);
// LTDescr LeanTweenExt::LeanScaleZ(UnityEngine.Transform,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR LTDescr_t88934797D6A324735209180E7958727F7E3746A9 * LeanTweenExt_LeanScaleZ_mBFB5FC1B8265F45AFD665DF00C5A76F46597BD96 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___transform0, float ___to1, float ___time2, const RuntimeMethod* method);
// LTDescr LTDescr::setLoopClamp()
extern "C" IL2CPP_METHOD_ATTR LTDescr_t88934797D6A324735209180E7958727F7E3746A9 * LTDescr_setLoopClamp_m26C0A8ECA2F70ADA1C48A2C92B13B47B58E2B1B0 (LTDescr_t88934797D6A324735209180E7958727F7E3746A9 * __this, const RuntimeMethod* method);
// LTDescr LeanTweenExt::LeanScaleY(UnityEngine.Transform,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR LTDescr_t88934797D6A324735209180E7958727F7E3746A9 * LeanTweenExt_LeanScaleY_m7E0D3E557C39D55BAE8FA18309C5C4E9E4FAE745 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___transform0, float ___to1, float ___time2, const RuntimeMethod* method);
// LTDescr LTDescr::setLoopPingPong(System.Int32)
extern "C" IL2CPP_METHOD_ATTR LTDescr_t88934797D6A324735209180E7958727F7E3746A9 * LTDescr_setLoopPingPong_m5B01BBEE9A3EB28E9064AE606841CB06A5470734 (LTDescr_t88934797D6A324735209180E7958727F7E3746A9 * __this, int32_t ___loops0, const RuntimeMethod* method);
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Color__ctor_m20DF490CEB364C4FC36D7EE392640DF5B7420D7C (Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * __this, float p0, float p1, float p2, float p3, const RuntimeMethod* method);
// LTDescr LeanTweenExt::LeanColor(UnityEngine.GameObject,UnityEngine.Color,System.Single)
extern "C" IL2CPP_METHOD_ATTR LTDescr_t88934797D6A324735209180E7958727F7E3746A9 * LeanTweenExt_LeanColor_mB64176DFEE80A14D26806793DEDE6F298FE8A0D5 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___gameObject0, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___to1, float ___time2, const RuntimeMethod* method);
// LTDescr LeanTweenExt::LeanMove(UnityEngine.Transform,UnityEngine.Vector3[],System.Single)
extern "C" IL2CPP_METHOD_ATTR LTDescr_t88934797D6A324735209180E7958727F7E3746A9 * LeanTweenExt_LeanMove_m8585918A534BADD4A82C21BC3D6931FA68F8DDBE (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___transform0, Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___to1, float ___time2, const RuntimeMethod* method);
// LTDescr LTDescr::setOrientToPath(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR LTDescr_t88934797D6A324735209180E7958727F7E3746A9 * LTDescr_setOrientToPath_mC4ECC96A2985E64712CD7F510D08D2BFF3718E21 (LTDescr_t88934797D6A324735209180E7958727F7E3746A9 * __this, bool ___doesOrient0, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object[])
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07 (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* p0, const RuntimeMethod* method);
// LTDescr LeanTweenExt::LeanMoveX(UnityEngine.Transform,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR LTDescr_t88934797D6A324735209180E7958727F7E3746A9 * LeanTweenExt_LeanMoveX_mC7E8EDE7941AB0BE24D6B366B89D7ED762DA9D4C (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___transform0, float ___to1, float ___time2, const RuntimeMethod* method);
// LTDescr LTDescr::setEase(UnityEngine.AnimationCurve)
extern "C" IL2CPP_METHOD_ATTR LTDescr_t88934797D6A324735209180E7958727F7E3746A9 * LTDescr_setEase_mBF09981854FEEF635C7CD97C0CBAB2A941193DC6 (LTDescr_t88934797D6A324735209180E7958727F7E3746A9 * __this, AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * ___easeCurve0, const RuntimeMethod* method);
// LTDescr LTDescr::setDelay(System.Single)
extern "C" IL2CPP_METHOD_ATTR LTDescr_t88934797D6A324735209180E7958727F7E3746A9 * LTDescr_setDelay_m17DF40E8031819148E25E4DBEF74B5BE9DC4994B (LTDescr_t88934797D6A324735209180E7958727F7E3746A9 * __this, float ___delay0, const RuntimeMethod* method);
// LTDescr LeanTweenExt::LeanMove(UnityEngine.Transform,UnityEngine.Vector3,System.Single)
extern "C" IL2CPP_METHOD_ATTR LTDescr_t88934797D6A324735209180E7958727F7E3746A9 * LeanTweenExt_LeanMove_mFA9C0F1ADA1433E91B30034BA821C0B28F310D63 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___transform0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___to1, float ___time2, const RuntimeMethod* method);
// System.Void System.Collections.Hashtable::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Hashtable__ctor_m72506C0A5B2608721EA285A04F004A229B537A68 (Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * __this, const RuntimeMethod* method);
// LTDescr LeanTweenExt::LeanRotate(UnityEngine.Transform,UnityEngine.Vector3,System.Single)
extern "C" IL2CPP_METHOD_ATTR LTDescr_t88934797D6A324735209180E7958727F7E3746A9 * LeanTweenExt_LeanRotate_m14AAF277A5B3D5AD7DE6E8AD32518EF4DA87DF82 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___transform0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___to1, float ___time2, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mAFC7442D9D3CEC6701C3C5599F8CF12476095510 (Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mAFC7442D9D3CEC6701C3C5599F8CF12476095510_gshared)(__this, p0, p1, method);
}
// LTDescr LTDescr::setOnComplete(System.Action`1<System.Object>)
extern "C" IL2CPP_METHOD_ATTR LTDescr_t88934797D6A324735209180E7958727F7E3746A9 * LTDescr_setOnComplete_mEAACA4996D0C7A2262041103BE1F1CF350D26248 (LTDescr_t88934797D6A324735209180E7958727F7E3746A9 * __this, Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * ___onComplete0, const RuntimeMethod* method);
// LTDescr LTDescr::setOnCompleteParam(System.Object)
extern "C" IL2CPP_METHOD_ATTR LTDescr_t88934797D6A324735209180E7958727F7E3746A9 * LTDescr_setOnCompleteParam_m38DC7E1D7E7968E25D16619FE4610F813C2B1657 (LTDescr_t88934797D6A324735209180E7958727F7E3746A9 * __this, RuntimeObject * ___onCompleteParam0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// LTDescr LeanTweenExt::LeanScale(UnityEngine.Transform,UnityEngine.Vector3,System.Single)
extern "C" IL2CPP_METHOD_ATTR LTDescr_t88934797D6A324735209180E7958727F7E3746A9 * LeanTweenExt_LeanScale_m9D6A493DACEF89ECD5525DEE71423D6555E6F8FE (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___transform0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___to1, float ___time2, const RuntimeMethod* method);
// System.Void System.Action`2<System.Single,System.Object>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_mF69CA07CA71C62E254AC8C17A32A90E511F97076 (Action_2_t6614CB55E7CBF2119E4A6402E4E2A25EF45412E5 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t6614CB55E7CBF2119E4A6402E4E2A25EF45412E5 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_mF69CA07CA71C62E254AC8C17A32A90E511F97076_gshared)(__this, p0, p1, method);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_eulerAngles()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_eulerAngles_mF2D798FA8B18F7A1A0C4A2198329ADBAF07E37CA (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// LTDescr LeanTweenExt::LeanValue(UnityEngine.GameObject,System.Action`2<System.Single,System.Object>,System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR LTDescr_t88934797D6A324735209180E7958727F7E3746A9 * LeanTweenExt_LeanValue_mC2F4DE067265B5CE99E6EF699367BB57B3C1E226 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___gameObject0, Action_2_t6614CB55E7CBF2119E4A6402E4E2A25EF45412E5 * ___callOnUpdate1, float ___from2, float ___to3, float ___time4, const RuntimeMethod* method);
// LTDescr LTDescr::setOnUpdateParam(System.Object)
extern "C" IL2CPP_METHOD_ATTR LTDescr_t88934797D6A324735209180E7958727F7E3746A9 * LTDescr_setOnUpdateParam_m6B55FBB794854B2D074D5154B5C69EF8CEC79217 (LTDescr_t88934797D6A324735209180E7958727F7E3746A9 * __this, RuntimeObject * ___onUpdateParam0, const RuntimeMethod* method);
// LTDescr LeanTweenExt::LeanAlpha(UnityEngine.GameObject,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR LTDescr_t88934797D6A324735209180E7958727F7E3746A9 * LeanTweenExt_LeanAlpha_m859BECC734C31253611A6242FC1E423ACC0F0E9C (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___gameObject0, float ___to1, float ___time2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_localPosition_m812D43318E05BDCB78310EB7308785A13D85EFD8 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// LTDescr LeanTweenExt::LeanMoveLocal(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
extern "C" IL2CPP_METHOD_ATTR LTDescr_t88934797D6A324735209180E7958727F7E3746A9 * LeanTweenExt_LeanMoveLocal_m268FEE6A2DE5ADE4F628A30004E638B66BE42728 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___gameObject0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___to1, float ___time2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7 (const RuntimeMethod* method);
// LTDescr LeanTweenExt::LeanRotateAround(UnityEngine.GameObject,UnityEngine.Vector3,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR LTDescr_t88934797D6A324735209180E7958727F7E3746A9 * LeanTweenExt_LeanRotateAround_mEA020384FEB93222C3391DB1679EDD26D17C7C03 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___gameObject0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___axis1, float ___add2, float ___time3, const RuntimeMethod* method);
// System.Void LeanTweenExt::LeanPause(UnityEngine.GameObject)
extern "C" IL2CPP_METHOD_ATTR void LeanTweenExt_LeanPause_mCE8F93929D10A0D23BA7F4F152F043459BE14C73 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___gameObject0, const RuntimeMethod* method);
// System.Void LeanTweenExt::LeanResume(UnityEngine.GameObject)
extern "C" IL2CPP_METHOD_ATTR void LeanTweenExt_LeanResume_mB026D98B197328DFADE21A52F0A472394CC5F649 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___gameObject0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, const RuntimeMethod* method);
// System.Void TestingZLegacyExt/<>c::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m6196EBFF9E4B1695BED507AE004E97C6C7F1F039 (U3CU3Ec_tCA0F01282E957E50CB00CDF0EDC006F5D2571D7D * __this, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TestingZLegacy_<>c::.cctor()
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mA92656C1864F97529E02DD8EAC4627B3E15C07D0 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__cctor_mA92656C1864F97529E02DD8EAC4627B3E15C07D0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tD53C6FB932407C274F46AF5EB749ECB420822BC6 * L_0 = (U3CU3Ec_tD53C6FB932407C274F46AF5EB749ECB420822BC6 *)il2cpp_codegen_object_new(U3CU3Ec_tD53C6FB932407C274F46AF5EB749ECB420822BC6_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mADF151B244B6D0657E6F42524B06E75D5CBD3E82(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tD53C6FB932407C274F46AF5EB749ECB420822BC6_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD53C6FB932407C274F46AF5EB749ECB420822BC6_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void TestingZLegacy_<>c::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mADF151B244B6D0657E6F42524B06E75D5CBD3E82 (U3CU3Ec_tD53C6FB932407C274F46AF5EB749ECB420822BC6 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TestingZLegacy_<>c::<cycleThroughExamples>b__20_0(System.Single)
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec_U3CcycleThroughExamplesU3Eb__20_0_m20B65A0D105583310493082AF1A1C3F73B2BAA9A (U3CU3Ec_tD53C6FB932407C274F46AF5EB749ECB420822BC6 * __this, float ___val0, const RuntimeMethod* method)
{
	{
		float L_0 = ___val0;
		Time_set_timeScale_mAB89C3BB5DEE81934159C23F103397A77AC3F4AF(L_0, /*hidden argument*/NULL);
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
extern "C"  void DelegatePInvokeWrapper_NextFunc_t4537D46AA060532C51EF0B326FD5A93368D50E70 (NextFunc_t4537D46AA060532C51EF0B326FD5A93368D50E70 * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void TestingZLegacy_NextFunc::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void NextFunc__ctor_m0C11ABFCB5A07796EF80663E6B6162C2CA59CBFC (NextFunc_t4537D46AA060532C51EF0B326FD5A93368D50E70 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void TestingZLegacy_NextFunc::Invoke()
extern "C" IL2CPP_METHOD_ATTR void NextFunc_Invoke_mEE64CA84F1048357238502F145B767D8CFBBBA6A (NextFunc_t4537D46AA060532C51EF0B326FD5A93368D50E70 * __this, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			if (!il2cpp_codegen_method_is_virtual(targetMethod))
			{
				il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			}
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
			if (___methodIsStatic)
			{
				if (___parameterCount == 0)
				{
					// open
					typedef void (*FunctionPointerType) (const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetMethod);
				}
				else
				{
					// closed
					typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
				}
			}
			else
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
							else
								GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
							else
								VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
						}
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 0)
			{
				// open
				typedef void (*FunctionPointerType) (const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
						else
							GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
						else
							VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
					}
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
}
// System.IAsyncResult TestingZLegacy_NextFunc::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* NextFunc_BeginInvoke_mC4C931CFA302F5BEB304AE876A4F2AB7C918882F (NextFunc_t4537D46AA060532C51EF0B326FD5A93368D50E70 * __this, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Void TestingZLegacy_NextFunc::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void NextFunc_EndInvoke_mAD7BC49E0924D479FAAADD7B905A29989915DA04 (NextFunc_t4537D46AA060532C51EF0B326FD5A93368D50E70 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.Void TestingZLegacyExt::Awake()
extern "C" IL2CPP_METHOD_ATTR void TestingZLegacyExt_Awake_m1001212E3E4E146CDF5D00C4AE90DF573B0A826E (TestingZLegacyExt_tA6E1C9426A6110E30EB957EC9EFCE02AE4DE0918 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void TestingZLegacyExt::Start()
extern "C" IL2CPP_METHOD_ATTR void TestingZLegacyExt_Start_m839D3F27196C6BD444D029046DF6C6C819C15473 (TestingZLegacyExt_tA6E1C9426A6110E30EB957EC9EFCE02AE4DE0918 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TestingZLegacyExt_Start_m839D3F27196C6BD444D029046DF6C6C819C15473_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = GameObject_Find_m1470FB04EB6DB15CCC0D9745B70EE987B318E9BD(_stringLiteral4703B6DD3BDBC68D750233F72EE7B18E3D7D86C4, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_0, /*hidden argument*/NULL);
		__this->set_ltLogo_13(L_1);
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_2 = (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 *)il2cpp_codegen_object_new(Action_t591D2A86165F896B4B800BB5C25CE18672A55579_il2cpp_TypeInfo_var);
		Action__ctor_m570E96B2A0C48BC1DC6788460316191F24572760(L_2, __this, (intptr_t)((intptr_t)TestingZLegacyExt_cycleThroughExamples_mDF8DF943338F638EAC0C85E7220FF04F6A688E9E_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(LeanTween_tC03B6F2C77CCD047964FC7337A56297E0AF9306B_il2cpp_TypeInfo_var);
		LeanTween_delayedCall_m9A30D60BD8FDCAB56DB1A6CEBEF3148DABC55C1F((1.0f), L_2, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = __this->get_ltLogo_13();
		NullCheck(L_3);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_3, /*hidden argument*/NULL);
		__this->set_origin_16(L_4);
		return;
	}
}
// System.Void TestingZLegacyExt::pauseNow()
extern "C" IL2CPP_METHOD_ATTR void TestingZLegacyExt_pauseNow_mA583FC13277274D5C776155ED441388A5176BBCF (TestingZLegacyExt_tA6E1C9426A6110E30EB957EC9EFCE02AE4DE0918 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TestingZLegacyExt_pauseNow_mA583FC13277274D5C776155ED441388A5176BBCF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Time_set_timeScale_mAB89C3BB5DEE81934159C23F103397A77AC3F4AF((0.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(_stringLiteral93C36D6626D4A3DEE8FD6BFD68298616F840770A, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TestingZLegacyExt::OnGUI()
extern "C" IL2CPP_METHOD_ATTR void TestingZLegacyExt_OnGUI_mF6ABD0B9D035358109C8FBE2A096CB80056E41E7 (TestingZLegacyExt_tA6E1C9426A6110E30EB957EC9EFCE02AE4DE0918 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TestingZLegacyExt_OnGUI_mF6ABD0B9D035358109C8FBE2A096CB80056E41E7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* G_B3_0 = NULL;
	{
		bool L_0 = __this->get_useEstimatedTime_12();
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		float L_1 = Time_get_timeScale_m7E198A5814859A08FD0FFE6DD5F7ED5C907719F8(/*hidden argument*/NULL);
		float L_2 = L_1;
		RuntimeObject * L_3 = Box(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var, &L_2);
		String_t* L_4 = String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495(_stringLiteral52B1E17E662E9E1AFBFE56EAE114CE1CD7D3A8BE, L_3, /*hidden argument*/NULL);
		G_B3_0 = L_4;
		goto IL_0023;
	}

IL_001e:
	{
		G_B3_0 = _stringLiteral1F557BEB12D39F4436DB51D18C8CC01CEB340F7B;
	}

IL_0023:
	{
		V_0 = G_B3_0;
		int32_t L_5 = Screen_get_width_m8ECCEF7FF17395D1237BC0193D7A6640A3FEEAD3(/*hidden argument*/NULL);
		int32_t L_6 = Screen_get_height_mF5B64EBC4CDE0EAAA5713C1452ED2CE475F25150(/*hidden argument*/NULL);
		int32_t L_7 = Screen_get_width_m8ECCEF7FF17395D1237BC0193D7A6640A3FEEAD3(/*hidden argument*/NULL);
		int32_t L_8 = Screen_get_height_mF5B64EBC4CDE0EAAA5713C1452ED2CE475F25150(/*hidden argument*/NULL);
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_9;
		memset(&L_9, 0, sizeof(L_9));
		Rect__ctor_m50B92C75005C9C5A0D05E6E0EBB43AFAF7C66280((&L_9), ((float)il2cpp_codegen_multiply((float)(0.03f), (float)(((float)((float)L_5))))), ((float)il2cpp_codegen_multiply((float)(0.03f), (float)(((float)((float)L_6))))), ((float)il2cpp_codegen_multiply((float)(0.5f), (float)(((float)((float)L_7))))), ((float)il2cpp_codegen_multiply((float)(0.3f), (float)(((float)((float)L_8))))), /*hidden argument*/NULL);
		String_t* L_10 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t3E5CBC6B113E392EBBE1453DEF2B7CD020F345AA_il2cpp_TypeInfo_var);
		GUI_Label_m3262E5E30013ECAF83C075710F7761E49BEA5CCE(L_9, L_10, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TestingZLegacyExt::endlessCallback()
extern "C" IL2CPP_METHOD_ATTR void TestingZLegacyExt_endlessCallback_mA2018DB141FAEB70BFE3121CDA2D370A1A238D46 (TestingZLegacyExt_tA6E1C9426A6110E30EB957EC9EFCE02AE4DE0918 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TestingZLegacyExt_endlessCallback_mA2018DB141FAEB70BFE3121CDA2D370A1A238D46_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(_stringLiteralEA2091BE332FF14230AB9D6DA49C97D8727ED8F7, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TestingZLegacyExt::cycleThroughExamples()
extern "C" IL2CPP_METHOD_ATTR void TestingZLegacyExt_cycleThroughExamples_mDF8DF943338F638EAC0C85E7220FF04F6A688E9E (TestingZLegacyExt_tA6E1C9426A6110E30EB957EC9EFCE02AE4DE0918 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TestingZLegacyExt_cycleThroughExamples_mDF8DF943338F638EAC0C85E7220FF04F6A688E9E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	float G_B6_0 = 0.0f;
	Action_1_t298B565CF49E0C72E4377AA3B30170F58D9F64FB * G_B11_0 = NULL;
	LTDescr_t88934797D6A324735209180E7958727F7E3746A9 * G_B11_1 = NULL;
	TestingZLegacyExt_tA6E1C9426A6110E30EB957EC9EFCE02AE4DE0918 * G_B11_2 = NULL;
	Action_1_t298B565CF49E0C72E4377AA3B30170F58D9F64FB * G_B10_0 = NULL;
	LTDescr_t88934797D6A324735209180E7958727F7E3746A9 * G_B10_1 = NULL;
	TestingZLegacyExt_tA6E1C9426A6110E30EB957EC9EFCE02AE4DE0918 * G_B10_2 = NULL;
	TestingZLegacyExt_tA6E1C9426A6110E30EB957EC9EFCE02AE4DE0918 * G_B15_0 = NULL;
	TestingZLegacyExt_tA6E1C9426A6110E30EB957EC9EFCE02AE4DE0918 * G_B14_0 = NULL;
	int32_t G_B16_0 = 0;
	TestingZLegacyExt_tA6E1C9426A6110E30EB957EC9EFCE02AE4DE0918 * G_B16_1 = NULL;
	{
		int32_t L_0 = __this->get_exampleIter_10();
		if (L_0)
		{
			goto IL_00d7;
		}
	}
	{
		int32_t L_1 = __this->get_timingType_14();
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)1));
		int32_t L_2 = V_1;
		if ((((int32_t)L_2) <= ((int32_t)4)))
		{
			goto IL_001a;
		}
	}
	{
		V_1 = 0;
	}

IL_001a:
	{
		int32_t L_3 = V_1;
		__this->set_timingType_14(L_3);
		int32_t L_4 = __this->get_timingType_14();
		__this->set_useEstimatedTime_12((bool)((((int32_t)L_4) == ((int32_t)1))? 1 : 0));
		bool L_5 = __this->get_useEstimatedTime_12();
		if (L_5)
		{
			goto IL_003f;
		}
	}
	{
		G_B6_0 = (1.0f);
		goto IL_0044;
	}

IL_003f:
	{
		G_B6_0 = (0.0f);
	}

IL_0044:
	{
		Time_set_timeScale_mAB89C3BB5DEE81934159C23F103397A77AC3F4AF(G_B6_0, /*hidden argument*/NULL);
		int32_t L_6 = __this->get_timingType_14();
		if ((!(((uint32_t)L_6) == ((uint32_t)2))))
		{
			goto IL_005c;
		}
	}
	{
		Time_set_timeScale_mAB89C3BB5DEE81934159C23F103397A77AC3F4AF((0.5f), /*hidden argument*/NULL);
	}

IL_005c:
	{
		int32_t L_7 = __this->get_timingType_14();
		if ((!(((uint32_t)L_7) == ((uint32_t)3))))
		{
			goto IL_00c2;
		}
	}
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_8 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		LTDescr_t88934797D6A324735209180E7958727F7E3746A9 * L_9 = LeanTweenExt_LeanValue_mD5A93425AE484792B7CCBB10D7E8AFEA8C9DBDE1(L_8, (0.01f), (10.0f), (3.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tCA0F01282E957E50CB00CDF0EDC006F5D2571D7D_il2cpp_TypeInfo_var);
		Action_1_t298B565CF49E0C72E4377AA3B30170F58D9F64FB * L_10 = ((U3CU3Ec_tCA0F01282E957E50CB00CDF0EDC006F5D2571D7D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCA0F01282E957E50CB00CDF0EDC006F5D2571D7D_il2cpp_TypeInfo_var))->get_U3CU3E9__20_0_1();
		Action_1_t298B565CF49E0C72E4377AA3B30170F58D9F64FB * L_11 = L_10;
		G_B10_0 = L_11;
		G_B10_1 = L_9;
		G_B10_2 = __this;
		if (L_11)
		{
			G_B11_0 = L_11;
			G_B11_1 = L_9;
			G_B11_2 = __this;
			goto IL_009f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tCA0F01282E957E50CB00CDF0EDC006F5D2571D7D_il2cpp_TypeInfo_var);
		U3CU3Ec_tCA0F01282E957E50CB00CDF0EDC006F5D2571D7D * L_12 = ((U3CU3Ec_tCA0F01282E957E50CB00CDF0EDC006F5D2571D7D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCA0F01282E957E50CB00CDF0EDC006F5D2571D7D_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Action_1_t298B565CF49E0C72E4377AA3B30170F58D9F64FB * L_13 = (Action_1_t298B565CF49E0C72E4377AA3B30170F58D9F64FB *)il2cpp_codegen_object_new(Action_1_t298B565CF49E0C72E4377AA3B30170F58D9F64FB_il2cpp_TypeInfo_var);
		Action_1__ctor_m31BC390E2E0368C57885B41C5A9D480DE46FD72D(L_13, L_12, (intptr_t)((intptr_t)U3CU3Ec_U3CcycleThroughExamplesU3Eb__20_0_mE2F5DAC852B800AEED0C5D8C623F22674D07C494_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m31BC390E2E0368C57885B41C5A9D480DE46FD72D_RuntimeMethod_var);
		Action_1_t298B565CF49E0C72E4377AA3B30170F58D9F64FB * L_14 = L_13;
		((U3CU3Ec_tCA0F01282E957E50CB00CDF0EDC006F5D2571D7D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCA0F01282E957E50CB00CDF0EDC006F5D2571D7D_il2cpp_TypeInfo_var))->set_U3CU3E9__20_0_1(L_14);
		G_B11_0 = L_14;
		G_B11_1 = G_B10_1;
		G_B11_2 = G_B10_2;
	}

IL_009f:
	{
		NullCheck(G_B11_1);
		LTDescr_t88934797D6A324735209180E7958727F7E3746A9 * L_15 = LTDescr_setOnUpdate_mAD3D38A82D50CDE3544A0DD7C70933294DA802BF(G_B11_1, G_B11_0, /*hidden argument*/NULL);
		NullCheck(L_15);
		LTDescr_t88934797D6A324735209180E7958727F7E3746A9 * L_16 = LTDescr_setEase_mCF284E5CA17BB1BECBB5B1CC1013571B108580A3(L_15, 3, /*hidden argument*/NULL);
		NullCheck(L_16);
		LTDescr_t88934797D6A324735209180E7958727F7E3746A9 * L_17 = LTDescr_setUseEstimatedTime_m689F41334718832FA13226521051FBE6B9A94044(L_16, (bool)1, /*hidden argument*/NULL);
		NullCheck(L_17);
		LTDescr_t88934797D6A324735209180E7958727F7E3746A9 * L_18 = LTDescr_setRepeat_mD2FCFF828300FCC0E14689234F08334781F2EDC0(L_17, (-1), /*hidden argument*/NULL);
		NullCheck(L_18);
		int32_t L_19 = LTDescr_get_id_mA60B6D722D7203D71E53B4782A3FC2393F18DF53(L_18, /*hidden argument*/NULL);
		NullCheck(G_B11_2);
		G_B11_2->set_descrTimeScaleChangeId_15(L_19);
		goto IL_00d7;
	}

IL_00c2:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(_stringLiteralE201A61F8926D2172C1A5E531CFCFC181767F57A, /*hidden argument*/NULL);
		int32_t L_20 = __this->get_descrTimeScaleChangeId_15();
		IL2CPP_RUNTIME_CLASS_INIT(LeanTween_tC03B6F2C77CCD047964FC7337A56297E0AF9306B_il2cpp_TypeInfo_var);
		LeanTween_cancel_mEC28E027DD92AED60878081BF43C12DE54CDBC4D(L_20, /*hidden argument*/NULL);
	}

IL_00d7:
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_21 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_22 = __this->get_exampleFunctions_11();
		int32_t L_23 = __this->get_exampleIter_10();
		NullCheck(L_22);
		int32_t L_24 = L_23;
		String_t* L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		NullCheck(L_21);
		GameObject_BroadcastMessage_m58B3BCA61DA82D13BC28DB128A2717728C053DB8(L_21, L_25, /*hidden argument*/NULL);
		V_0 = (1.1f);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_26 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		float L_27 = V_0;
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_28 = (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 *)il2cpp_codegen_object_new(Action_t591D2A86165F896B4B800BB5C25CE18672A55579_il2cpp_TypeInfo_var);
		Action__ctor_m570E96B2A0C48BC1DC6788460316191F24572760(L_28, __this, (intptr_t)((intptr_t)TestingZLegacyExt_cycleThroughExamples_mDF8DF943338F638EAC0C85E7220FF04F6A688E9E_RuntimeMethod_var), /*hidden argument*/NULL);
		LTDescr_t88934797D6A324735209180E7958727F7E3746A9 * L_29 = LeanTweenExt_LeanDelayedCall_m5DC8F9D70956A7829F379D7483C02D63608774A8(L_26, L_27, L_28, /*hidden argument*/NULL);
		bool L_30 = __this->get_useEstimatedTime_12();
		NullCheck(L_29);
		LTDescr_setUseEstimatedTime_m689F41334718832FA13226521051FBE6B9A94044(L_29, L_30, /*hidden argument*/NULL);
		int32_t L_31 = __this->get_exampleIter_10();
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_32 = __this->get_exampleFunctions_11();
		NullCheck(L_32);
		G_B14_0 = __this;
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)1))) >= ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_32)->max_length)))))))
		{
			G_B15_0 = __this;
			goto IL_0136;
		}
	}
	{
		int32_t L_33 = __this->get_exampleIter_10();
		G_B16_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_33, (int32_t)1));
		G_B16_1 = G_B14_0;
		goto IL_0137;
	}

IL_0136:
	{
		G_B16_0 = 0;
		G_B16_1 = G_B15_0;
	}

IL_0137:
	{
		NullCheck(G_B16_1);
		G_B16_1->set_exampleIter_10(G_B16_0);
		return;
	}
}
// System.Void TestingZLegacyExt::updateValue3Example()
extern "C" IL2CPP_METHOD_ATTR void TestingZLegacyExt_updateValue3Example_mCA7C76CA94FD9F34117147506FE7BFCD31EFBD46 (TestingZLegacyExt_tA6E1C9426A6110E30EB957EC9EFCE02AE4DE0918 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TestingZLegacyExt_updateValue3Example_mCA7C76CA94FD9F34117147506FE7BFCD31EFBD46_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = Time_get_time_m7863349C8845BBA36629A2B3F8EF1C3BEA350FD8(/*hidden argument*/NULL);
		float L_1 = L_0;
		RuntimeObject * L_2 = Box(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var, &L_1);
		String_t* L_3 = String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495(_stringLiteral6425D031726BD87323ECF3E72F4F52F59E5C1480, L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_3, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		Action_1_tA44107B06FF0DB8292A09BDC892436393CD13E67 * L_5 = (Action_1_tA44107B06FF0DB8292A09BDC892436393CD13E67 *)il2cpp_codegen_object_new(Action_1_tA44107B06FF0DB8292A09BDC892436393CD13E67_il2cpp_TypeInfo_var);
		Action_1__ctor_mCD888E010B612C1A207F48F514125A480CE6045F(L_5, __this, (intptr_t)((intptr_t)TestingZLegacyExt_updateValue3ExampleCallback_mFFDFB38A2F8D2464EF411E9431A68C882B27DC2D_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_mCD888E010B612C1A207F48F514125A480CE6045F_RuntimeMethod_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6;
		memset(&L_6, 0, sizeof(L_6));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_6), (0.0f), (270.0f), (0.0f), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7;
		memset(&L_7, 0, sizeof(L_7));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_7), (30.0f), (270.0f), (180.0f), /*hidden argument*/NULL);
		LTDescr_t88934797D6A324735209180E7958727F7E3746A9 * L_8 = LeanTweenExt_LeanValue_m2FDD53340AD0B9F26FAE12EC974FF4390F303841(L_4, L_5, L_6, L_7, (0.5f), /*hidden argument*/NULL);
		NullCheck(L_8);
		LTDescr_t88934797D6A324735209180E7958727F7E3746A9 * L_9 = LTDescr_setEase_mCF284E5CA17BB1BECBB5B1CC1013571B108580A3(L_8, ((int32_t)23), /*hidden argument*/NULL);
		NullCheck(L_9);
		LTDescr_t88934797D6A324735209180E7958727F7E3746A9 * L_10 = LTDescr_setRepeat_mD2FCFF828300FCC0E14689234F08334781F2EDC0(L_9, 2, /*hidden argument*/NULL);
		NullCheck(L_10);
		LTDescr_t88934797D6A324735209180E7958727F7E3746A9 * L_11 = LTDescr_setLoopPingPong_m53E03879D46B899429F463427A5EACEE747F9636(L_10, /*hidden argument*/NULL);
		Action_1_tA44107B06FF0DB8292A09BDC892436393CD13E67 * L_12 = (Action_1_tA44107B06FF0DB8292A09BDC892436393CD13E67 *)il2cpp_codegen_object_new(Action_1_tA44107B06FF0DB8292A09BDC892436393CD13E67_il2cpp_TypeInfo_var);
		Action_1__ctor_mCD888E010B612C1A207F48F514125A480CE6045F(L_12, __this, (intptr_t)((intptr_t)TestingZLegacyExt_updateValue3ExampleUpdate_mA4B7B597105DB1CA46299022BD7161C32FFF517E_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_mCD888E010B612C1A207F48F514125A480CE6045F_RuntimeMethod_var);
		NullCheck(L_11);
		LTDescr_t88934797D6A324735209180E7958727F7E3746A9 * L_13 = LTDescr_setOnUpdateVector3_mB4E2237829DCE16E0EFC4FB209173ECCBE0AEF5A(L_11, L_12, /*hidden argument*/NULL);
		bool L_14 = __this->get_useEstimatedTime_12();
		NullCheck(L_13);
		LTDescr_setUseEstimatedTime_m689F41334718832FA13226521051FBE6B9A94044(L_13, L_14, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TestingZLegacyExt::updateValue3ExampleUpdate(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void TestingZLegacyExt_updateValue3ExampleUpdate_mA4B7B597105DB1CA46299022BD7161C32FFF517E (TestingZLegacyExt_tA6E1C9426A6110E30EB957EC9EFCE02AE4DE0918 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___val0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void TestingZLegacyExt::updateValue3ExampleCallback(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void TestingZLegacyExt_updateValue3ExampleCallback_mFFDFB38A2F8D2464EF411E9431A68C882B27DC2D (TestingZLegacyExt_tA6E1C9426A6110E30EB957EC9EFCE02AE4DE0918 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___val0, const RuntimeMethod* method)
{
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = __this->get_ltLogo_13();
		NullCheck(L_0);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_0, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = ___val0;
		NullCheck(L_1);
		Transform_set_eulerAngles_m4B2B374C0B089A7ED0B522A3A4C56FA868992685(L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TestingZLegacyExt::loopTestClamp()
extern "C" IL2CPP_METHOD_ATTR void TestingZLegacyExt_loopTestClamp_m681587CDDCC27A90C75E545E492D378331211756 (TestingZLegacyExt_tA6E1C9426A6110E30EB957EC9EFCE02AE4DE0918 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TestingZLegacyExt_loopTestClamp_m681587CDDCC27A90C75E545E492D378331211756_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = Time_get_time_m7863349C8845BBA36629A2B3F8EF1C3BEA350FD8(/*hidden argument*/NULL);
		float L_1 = L_0;
		RuntimeObject * L_2 = Box(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var, &L_1);
		String_t* L_3 = String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495(_stringLiteral10FDBEEA3F541575C8115A8498195A793303ABC3, L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_3, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = GameObject_Find_m1470FB04EB6DB15CCC0D9745B70EE987B318E9BD(_stringLiteral165C51332252444354AEE69E6135D8CC126AC576, /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_4, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_6 = L_5;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7;
		memset(&L_7, 0, sizeof(L_7));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_7), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_6);
		Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556(L_6, L_7, /*hidden argument*/NULL);
		LTDescr_t88934797D6A324735209180E7958727F7E3746A9 * L_8 = LeanTweenExt_LeanScaleZ_mBFB5FC1B8265F45AFD665DF00C5A76F46597BD96(L_6, (4.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_8);
		LTDescr_t88934797D6A324735209180E7958727F7E3746A9 * L_9 = LTDescr_setEase_mCF284E5CA17BB1BECBB5B1CC1013571B108580A3(L_8, ((int32_t)30), /*hidden argument*/NULL);
		NullCheck(L_9);
		LTDescr_t88934797D6A324735209180E7958727F7E3746A9 * L_10 = LTDescr_setRepeat_mD2FCFF828300FCC0E14689234F08334781F2EDC0(L_9, 7, /*hidden argument*/NULL);
		NullCheck(L_10);
		LTDescr_t88934797D6A324735209180E7958727F7E3746A9 * L_11 = LTDescr_setLoopClamp_m26C0A8ECA2F70ADA1C48A2C92B13B47B58E2B1B0(L_10, /*hidden argument*/NULL);
		bool L_12 = __this->get_useEstimatedTime_12();
		NullCheck(L_11);
		LTDescr_setUseEstimatedTime_m689F41334718832FA13226521051FBE6B9A94044(L_11, L_12, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TestingZLegacyExt::loopTestPingPong()
extern "C" IL2CPP_METHOD_ATTR void TestingZLegacyExt_loopTestPingPong_mA99F28A92995E0B02E2371B02073A71E61479824 (TestingZLegacyExt_tA6E1C9426A6110E30EB957EC9EFCE02AE4DE0918 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TestingZLegacyExt_loopTestPingPong_mA99F28A92995E0B02E2371B02073A71E61479824_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = Time_get_time_m7863349C8845BBA36629A2B3F8EF1C3BEA350FD8(/*hidden argument*/NULL);
		float L_1 = L_0;
		RuntimeObject * L_2 = Box(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var, &L_1);
		String_t* L_3 = String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495(_stringLiteral92F79EF56C5D5543B66F445BD90D8BE9A0EF7CEF, L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_3, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = GameObject_Find_m1470FB04EB6DB15CCC0D9745B70EE987B318E9BD(_stringLiteral7E01819E649C698F9904E7835EFEDB92ED9C474A, /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_4, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_6 = L_5;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7;
		memset(&L_7, 0, sizeof(L_7));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_7), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_6);
		Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556(L_6, L_7, /*hidden argument*/NULL);
		LTDescr_t88934797D6A324735209180E7958727F7E3746A9 * L_8 = LeanTweenExt_LeanScaleY_m7E0D3E557C39D55BAE8FA18309C5C4E9E4FAE745(L_6, (4.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_8);
		LTDescr_t88934797D6A324735209180E7958727F7E3746A9 * L_9 = LTDescr_setEase_mCF284E5CA17BB1BECBB5B1CC1013571B108580A3(L_8, 2, /*hidden argument*/NULL);
		NullCheck(L_9);
		LTDescr_t88934797D6A324735209180E7958727F7E3746A9 * L_10 = LTDescr_setLoopPingPong_m5B01BBEE9A3EB28E9064AE606841CB06A5470734(L_9, 4, /*hidden argument*/NULL);
		bool L_11 = __this->get_useEstimatedTime_12();
		NullCheck(L_10);
		LTDescr_setUseEstimatedTime_m689F41334718832FA13226521051FBE6B9A94044(L_10, L_11, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TestingZLegacyExt::colorExample()
extern "C" IL2CPP_METHOD_ATTR void TestingZLegacyExt_colorExample_m511763C457A6C85C88B7489D59F3F7B91123B147 (TestingZLegacyExt_tA6E1C9426A6110E30EB957EC9EFCE02AE4DE0918 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TestingZLegacyExt_colorExample_m511763C457A6C85C88B7489D59F3F7B91123B147_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = GameObject_Find_m1470FB04EB6DB15CCC0D9745B70EE987B318E9BD(_stringLiteral1FD5A439E611D0FC93870DF70483B30FCB982424, /*hidden argument*/NULL);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_1;
		memset(&L_1, 0, sizeof(L_1));
		Color__ctor_m20DF490CEB364C4FC36D7EE392640DF5B7420D7C((&L_1), (1.0f), (0.0f), (0.0f), (0.5f), /*hidden argument*/NULL);
		LTDescr_t88934797D6A324735209180E7958727F7E3746A9 * L_2 = LeanTweenExt_LeanColor_mB64176DFEE80A14D26806793DEDE6F298FE8A0D5(L_0, L_1, (0.5f), /*hidden argument*/NULL);
		NullCheck(L_2);
		LTDescr_t88934797D6A324735209180E7958727F7E3746A9 * L_3 = LTDescr_setEase_mCF284E5CA17BB1BECBB5B1CC1013571B108580A3(L_2, ((int32_t)24), /*hidden argument*/NULL);
		NullCheck(L_3);
		LTDescr_t88934797D6A324735209180E7958727F7E3746A9 * L_4 = LTDescr_setRepeat_mD2FCFF828300FCC0E14689234F08334781F2EDC0(L_3, 2, /*hidden argument*/NULL);
		NullCheck(L_4);
		LTDescr_t88934797D6A324735209180E7958727F7E3746A9 * L_5 = LTDescr_setLoopPingPong_m53E03879D46B899429F463427A5EACEE747F9636(L_4, /*hidden argument*/NULL);
		bool L_6 = __this->get_useEstimatedTime_12();
		NullCheck(L_5);
		LTDescr_setUseEstimatedTime_m689F41334718832FA13226521051FBE6B9A94044(L_5, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TestingZLegacyExt::moveOnACurveExample()
extern "C" IL2CPP_METHOD_ATTR void TestingZLegacyExt_moveOnACurveExample_m760CAA1946533C5E39C826BA7AADF9D9F850607B (TestingZLegacyExt_tA6E1C9426A6110E30EB957EC9EFCE02AE4DE0918 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TestingZLegacyExt_moveOnACurveExample_m760CAA1946533C5E39C826BA7AADF9D9F850607B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* V_0 = NULL;
	{
		float L_0 = Time_get_time_m7863349C8845BBA36629A2B3F8EF1C3BEA350FD8(/*hidden argument*/NULL);
		float L_1 = L_0;
		RuntimeObject * L_2 = Box(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var, &L_1);
		String_t* L_3 = String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495(_stringLiteral6C4BE49CBAB568F44600FF9E83F692D8E1ADA985, L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_3, /*hidden argument*/NULL);
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_4 = (Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28*)SZArrayNew(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28_il2cpp_TypeInfo_var, (uint32_t)8);
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_5 = L_4;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = __this->get_origin_16();
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 )L_6);
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_7 = L_5;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_8 = __this->get_pt1_5();
		NullCheck(L_8);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_8, /*hidden argument*/NULL);
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 )L_9);
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_10 = L_7;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_11 = __this->get_pt2_6();
		NullCheck(L_11);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_12 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_11, /*hidden argument*/NULL);
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(2), (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 )L_12);
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_13 = L_10;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_14 = __this->get_pt3_7();
		NullCheck(L_14);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_14, /*hidden argument*/NULL);
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(3), (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 )L_15);
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_16 = L_13;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_17 = __this->get_pt3_7();
		NullCheck(L_17);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_18 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_17, /*hidden argument*/NULL);
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(4), (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 )L_18);
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_19 = L_16;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_20 = __this->get_pt4_8();
		NullCheck(L_20);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_21 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_20, /*hidden argument*/NULL);
		NullCheck(L_19);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(5), (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 )L_21);
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_22 = L_19;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_23 = __this->get_pt5_9();
		NullCheck(L_23);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_24 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_23, /*hidden argument*/NULL);
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(6), (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 )L_24);
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_25 = L_22;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_26 = __this->get_origin_16();
		NullCheck(L_25);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(7), (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 )L_26);
		V_0 = L_25;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_27 = __this->get_ltLogo_13();
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_28 = V_0;
		LTDescr_t88934797D6A324735209180E7958727F7E3746A9 * L_29 = LeanTweenExt_LeanMove_m8585918A534BADD4A82C21BC3D6931FA68F8DDBE(L_27, L_28, (1.0f), /*hidden argument*/NULL);
		NullCheck(L_29);
		LTDescr_t88934797D6A324735209180E7958727F7E3746A9 * L_30 = LTDescr_setEase_mCF284E5CA17BB1BECBB5B1CC1013571B108580A3(L_29, 2, /*hidden argument*/NULL);
		NullCheck(L_30);
		LTDescr_t88934797D6A324735209180E7958727F7E3746A9 * L_31 = LTDescr_setOrientToPath_mC4ECC96A2985E64712CD7F510D08D2BFF3718E21(L_30, (bool)1, /*hidden argument*/NULL);
		bool L_32 = __this->get_useEstimatedTime_12();
		NullCheck(L_31);
		LTDescr_setUseEstimatedTime_m689F41334718832FA13226521051FBE6B9A94044(L_31, L_32, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TestingZLegacyExt::customTweenExample()
extern "C" IL2CPP_METHOD_ATTR void TestingZLegacyExt_customTweenExample_m6A5F1B07520AA405DD2CC553431F5CC7D4D067B1 (TestingZLegacyExt_tA6E1C9426A6110E30EB957EC9EFCE02AE4DE0918 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TestingZLegacyExt_customTweenExample_m6A5F1B07520AA405DD2CC553431F5CC7D4D067B1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral77D45DD4FEED4D69F4EABD805C0C8E7398F9307F);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral77D45DD4FEED4D69F4EABD805C0C8E7398F9307F);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = L_1;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = __this->get_ltLogo_13();
		NullCheck(L_3);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_3, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = L_4;
		RuntimeObject * L_6 = Box(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var, &L_5);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_6);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_6);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_7 = L_2;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteral0CEAEED5ABBC7BA9448493B26EAA6CF4D63FC023);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral0CEAEED5ABBC7BA9448493B26EAA6CF4D63FC023);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_8 = L_7;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = __this->get_origin_16();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = L_9;
		RuntimeObject * L_11 = Box(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_11);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_11);
		String_t* L_12 = String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07(L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_12, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_13 = __this->get_ltLogo_13();
		LTDescr_t88934797D6A324735209180E7958727F7E3746A9 * L_14 = LeanTweenExt_LeanMoveX_mC7E8EDE7941AB0BE24D6B366B89D7ED762DA9D4C(L_13, (-10.0f), (0.5f), /*hidden argument*/NULL);
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_15 = __this->get_customAnimationCurve_4();
		NullCheck(L_14);
		LTDescr_t88934797D6A324735209180E7958727F7E3746A9 * L_16 = LTDescr_setEase_mBF09981854FEEF635C7CD97C0CBAB2A941193DC6(L_14, L_15, /*hidden argument*/NULL);
		bool L_17 = __this->get_useEstimatedTime_12();
		NullCheck(L_16);
		LTDescr_setUseEstimatedTime_m689F41334718832FA13226521051FBE6B9A94044(L_16, L_17, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_18 = __this->get_ltLogo_13();
		LTDescr_t88934797D6A324735209180E7958727F7E3746A9 * L_19 = LeanTweenExt_LeanMoveX_mC7E8EDE7941AB0BE24D6B366B89D7ED762DA9D4C(L_18, (0.0f), (0.5f), /*hidden argument*/NULL);
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_20 = __this->get_customAnimationCurve_4();
		NullCheck(L_19);
		LTDescr_t88934797D6A324735209180E7958727F7E3746A9 * L_21 = LTDescr_setEase_mBF09981854FEEF635C7CD97C0CBAB2A941193DC6(L_19, L_20, /*hidden argument*/NULL);
		NullCheck(L_21);
		LTDescr_t88934797D6A324735209180E7958727F7E3746A9 * L_22 = LTDescr_setDelay_m17DF40E8031819148E25E4DBEF74B5BE9DC4994B(L_21, (0.5f), /*hidden argument*/NULL);
		bool L_23 = __this->get_useEstimatedTime_12();
		NullCheck(L_22);
		LTDescr_setUseEstimatedTime_m689F41334718832FA13226521051FBE6B9A94044(L_22, L_23, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TestingZLegacyExt::moveExample()
extern "C" IL2CPP_METHOD_ATTR void TestingZLegacyExt_moveExample_m8F3737E4C98691C89E5E44903F39A54F72F423F6 (TestingZLegacyExt_tA6E1C9426A6110E30EB957EC9EFCE02AE4DE0918 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TestingZLegacyExt_moveExample_m8F3737E4C98691C89E5E44903F39A54F72F423F6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(_stringLiteralBF77DF0CE0C741E8D828D1325CAC45F23A1B9227, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = __this->get_ltLogo_13();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1;
		memset(&L_1, 0, sizeof(L_1));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_1), (-2.0f), (-1.0f), (0.0f), /*hidden argument*/NULL);
		LTDescr_t88934797D6A324735209180E7958727F7E3746A9 * L_2 = LeanTweenExt_LeanMove_mFA9C0F1ADA1433E91B30034BA821C0B28F310D63(L_0, L_1, (0.5f), /*hidden argument*/NULL);
		bool L_3 = __this->get_useEstimatedTime_12();
		NullCheck(L_2);
		LTDescr_setUseEstimatedTime_m689F41334718832FA13226521051FBE6B9A94044(L_2, L_3, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = __this->get_ltLogo_13();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = __this->get_origin_16();
		LTDescr_t88934797D6A324735209180E7958727F7E3746A9 * L_6 = LeanTweenExt_LeanMove_mFA9C0F1ADA1433E91B30034BA821C0B28F310D63(L_4, L_5, (0.5f), /*hidden argument*/NULL);
		NullCheck(L_6);
		LTDescr_t88934797D6A324735209180E7958727F7E3746A9 * L_7 = LTDescr_setDelay_m17DF40E8031819148E25E4DBEF74B5BE9DC4994B(L_6, (0.5f), /*hidden argument*/NULL);
		bool L_8 = __this->get_useEstimatedTime_12();
		NullCheck(L_7);
		LTDescr_setUseEstimatedTime_m689F41334718832FA13226521051FBE6B9A94044(L_7, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TestingZLegacyExt::rotateExample()
extern "C" IL2CPP_METHOD_ATTR void TestingZLegacyExt_rotateExample_m434C390101CA254C8E0E69B05D88B14F53FFFD26 (TestingZLegacyExt_tA6E1C9426A6110E30EB957EC9EFCE02AE4DE0918 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TestingZLegacyExt_rotateExample_m434C390101CA254C8E0E69B05D88B14F53FFFD26_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(_stringLiteralE7BEE83B83F7D86323452C9695CF2C8E601486B4, /*hidden argument*/NULL);
		Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * L_0 = (Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 *)il2cpp_codegen_object_new(Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9_il2cpp_TypeInfo_var);
		Hashtable__ctor_m72506C0A5B2608721EA285A04F004A229B537A68(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * L_1 = V_0;
		double L_2 = (5.0);
		RuntimeObject * L_3 = Box(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_1);
		VirtActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(15 /* System.Void System.Collections.Hashtable::Add(System.Object,System.Object) */, L_1, _stringLiteralC41975D1DAE1CC69B16AD8892B8C77164E84CA39, L_3);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = __this->get_ltLogo_13();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5;
		memset(&L_5, 0, sizeof(L_5));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_5), (0.0f), (360.0f), (0.0f), /*hidden argument*/NULL);
		LTDescr_t88934797D6A324735209180E7958727F7E3746A9 * L_6 = LeanTweenExt_LeanRotate_m14AAF277A5B3D5AD7DE6E8AD32518EF4DA87DF82(L_4, L_5, (1.0f), /*hidden argument*/NULL);
		NullCheck(L_6);
		LTDescr_t88934797D6A324735209180E7958727F7E3746A9 * L_7 = LTDescr_setEase_mCF284E5CA17BB1BECBB5B1CC1013571B108580A3(L_6, 2, /*hidden argument*/NULL);
		Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * L_8 = (Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 *)il2cpp_codegen_object_new(Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0_il2cpp_TypeInfo_var);
		Action_1__ctor_mAFC7442D9D3CEC6701C3C5599F8CF12476095510(L_8, __this, (intptr_t)((intptr_t)TestingZLegacyExt_rotateFinished_mA8BBD5BCCC9DC385EC14506B38495656E6730060_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_mAFC7442D9D3CEC6701C3C5599F8CF12476095510_RuntimeMethod_var);
		NullCheck(L_7);
		LTDescr_t88934797D6A324735209180E7958727F7E3746A9 * L_9 = LTDescr_setOnComplete_mEAACA4996D0C7A2262041103BE1F1CF350D26248(L_7, L_8, /*hidden argument*/NULL);
		Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * L_10 = V_0;
		NullCheck(L_9);
		LTDescr_t88934797D6A324735209180E7958727F7E3746A9 * L_11 = LTDescr_setOnCompleteParam_m38DC7E1D7E7968E25D16619FE4610F813C2B1657(L_9, L_10, /*hidden argument*/NULL);
		Action_1_t298B565CF49E0C72E4377AA3B30170F58D9F64FB * L_12 = (Action_1_t298B565CF49E0C72E4377AA3B30170F58D9F64FB *)il2cpp_codegen_object_new(Action_1_t298B565CF49E0C72E4377AA3B30170F58D9F64FB_il2cpp_TypeInfo_var);
		Action_1__ctor_m31BC390E2E0368C57885B41C5A9D480DE46FD72D(L_12, __this, (intptr_t)((intptr_t)TestingZLegacyExt_rotateOnUpdate_m8A23C23C480E71534B637858E25F3558F93575C4_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m31BC390E2E0368C57885B41C5A9D480DE46FD72D_RuntimeMethod_var);
		NullCheck(L_11);
		LTDescr_t88934797D6A324735209180E7958727F7E3746A9 * L_13 = LTDescr_setOnUpdate_mAD3D38A82D50CDE3544A0DD7C70933294DA802BF(L_11, L_12, /*hidden argument*/NULL);
		bool L_14 = __this->get_useEstimatedTime_12();
		NullCheck(L_13);
		LTDescr_setUseEstimatedTime_m689F41334718832FA13226521051FBE6B9A94044(L_13, L_14, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TestingZLegacyExt::rotateOnUpdate(System.Single)
extern "C" IL2CPP_METHOD_ATTR void TestingZLegacyExt_rotateOnUpdate_m8A23C23C480E71534B637858E25F3558F93575C4 (TestingZLegacyExt_tA6E1C9426A6110E30EB957EC9EFCE02AE4DE0918 * __this, float ___val0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void TestingZLegacyExt::rotateFinished(System.Object)
extern "C" IL2CPP_METHOD_ATTR void TestingZLegacyExt_rotateFinished_mA8BBD5BCCC9DC385EC14506B38495656E6730060 (TestingZLegacyExt_tA6E1C9426A6110E30EB957EC9EFCE02AE4DE0918 * __this, RuntimeObject * ___hash0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TestingZLegacyExt_rotateFinished_mA8BBD5BCCC9DC385EC14506B38495656E6730060_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___hash0;
		V_0 = ((Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 *)IsInstClass((RuntimeObject*)L_0, Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9_il2cpp_TypeInfo_var));
		Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * L_1 = V_0;
		NullCheck(L_1);
		RuntimeObject * L_2 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(21 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_1, _stringLiteralC41975D1DAE1CC69B16AD8892B8C77164E84CA39);
		String_t* L_3 = String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495(_stringLiteral9D6860AA4368DE63AB951EBD51EBE481E42A36BC, L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TestingZLegacyExt::scaleExample()
extern "C" IL2CPP_METHOD_ATTR void TestingZLegacyExt_scaleExample_mA0BBB30A11969958ECA4DF67B36A5ADB93377081 (TestingZLegacyExt_tA6E1C9426A6110E30EB957EC9EFCE02AE4DE0918 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TestingZLegacyExt_scaleExample_mA0BBB30A11969958ECA4DF67B36A5ADB93377081_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(_stringLiteral3B27813D7D89DE3208E7CD3A6BFB572B99101107, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = __this->get_ltLogo_13();
		NullCheck(L_0);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = __this->get_ltLogo_13();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = V_0;
		float L_4 = L_3.get_x_2();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = V_0;
		float L_6 = L_5.get_y_3();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = V_0;
		float L_8 = L_7.get_z_4();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9;
		memset(&L_9, 0, sizeof(L_9));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_9), ((float)il2cpp_codegen_add((float)L_4, (float)(0.2f))), ((float)il2cpp_codegen_add((float)L_6, (float)(0.2f))), ((float)il2cpp_codegen_add((float)L_8, (float)(0.2f))), /*hidden argument*/NULL);
		LTDescr_t88934797D6A324735209180E7958727F7E3746A9 * L_10 = LeanTweenExt_LeanScale_m9D6A493DACEF89ECD5525DEE71423D6555E6F8FE(L_2, L_9, (1.0f), /*hidden argument*/NULL);
		NullCheck(L_10);
		LTDescr_t88934797D6A324735209180E7958727F7E3746A9 * L_11 = LTDescr_setEase_mCF284E5CA17BB1BECBB5B1CC1013571B108580A3(L_10, ((int32_t)24), /*hidden argument*/NULL);
		bool L_12 = __this->get_useEstimatedTime_12();
		NullCheck(L_11);
		LTDescr_setUseEstimatedTime_m689F41334718832FA13226521051FBE6B9A94044(L_11, L_12, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TestingZLegacyExt::updateValueExample()
extern "C" IL2CPP_METHOD_ATTR void TestingZLegacyExt_updateValueExample_m6DD656D4E13F4159F89FBD778D55764E5D375CDD (TestingZLegacyExt_tA6E1C9426A6110E30EB957EC9EFCE02AE4DE0918 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TestingZLegacyExt_updateValueExample_m6DD656D4E13F4159F89FBD778D55764E5D375CDD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(_stringLiteral9F014C4FFA509C223C7819DD1B7A00A913C0A4D4, /*hidden argument*/NULL);
		Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * L_0 = (Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 *)il2cpp_codegen_object_new(Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9_il2cpp_TypeInfo_var);
		Hashtable__ctor_m72506C0A5B2608721EA285A04F004A229B537A68(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * L_1 = V_0;
		NullCheck(L_1);
		VirtActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(15 /* System.Void System.Collections.Hashtable::Add(System.Object,System.Object) */, L_1, _stringLiteral6F9B9AF3CD6E8B8A73C2CDCED37FE9F59226E27D, _stringLiteralC22B5F9178342609428D6F51B2C5AF4C0BDE6A42);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		Action_2_t6614CB55E7CBF2119E4A6402E4E2A25EF45412E5 * L_3 = (Action_2_t6614CB55E7CBF2119E4A6402E4E2A25EF45412E5 *)il2cpp_codegen_object_new(Action_2_t6614CB55E7CBF2119E4A6402E4E2A25EF45412E5_il2cpp_TypeInfo_var);
		Action_2__ctor_mF69CA07CA71C62E254AC8C17A32A90E511F97076(L_3, __this, (intptr_t)((intptr_t)TestingZLegacyExt_updateValueExampleCallback_m167419E4154D6385544E30FFDFDDE5990780F686_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_mF69CA07CA71C62E254AC8C17A32A90E511F97076_RuntimeMethod_var);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = __this->get_ltLogo_13();
		NullCheck(L_4);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = Transform_get_eulerAngles_mF2D798FA8B18F7A1A0C4A2198329ADBAF07E37CA(L_4, /*hidden argument*/NULL);
		float L_6 = L_5.get_y_3();
		LTDescr_t88934797D6A324735209180E7958727F7E3746A9 * L_7 = LeanTweenExt_LeanValue_mC2F4DE067265B5CE99E6EF699367BB57B3C1E226(L_2, L_3, L_6, (270.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_7);
		LTDescr_t88934797D6A324735209180E7958727F7E3746A9 * L_8 = LTDescr_setEase_mCF284E5CA17BB1BECBB5B1CC1013571B108580A3(L_7, ((int32_t)30), /*hidden argument*/NULL);
		Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * L_9 = V_0;
		NullCheck(L_8);
		LTDescr_t88934797D6A324735209180E7958727F7E3746A9 * L_10 = LTDescr_setOnUpdateParam_m6B55FBB794854B2D074D5154B5C69EF8CEC79217(L_8, L_9, /*hidden argument*/NULL);
		bool L_11 = __this->get_useEstimatedTime_12();
		NullCheck(L_10);
		LTDescr_setUseEstimatedTime_m689F41334718832FA13226521051FBE6B9A94044(L_10, L_11, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TestingZLegacyExt::updateValueExampleCallback(System.Single,System.Object)
extern "C" IL2CPP_METHOD_ATTR void TestingZLegacyExt_updateValueExampleCallback_m167419E4154D6385544E30FFDFDDE5990780F686 (TestingZLegacyExt_tA6E1C9426A6110E30EB957EC9EFCE02AE4DE0918 * __this, float ___val0, RuntimeObject * ___hash1, const RuntimeMethod* method)
{
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = __this->get_ltLogo_13();
		NullCheck(L_0);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Transform_get_eulerAngles_mF2D798FA8B18F7A1A0C4A2198329ADBAF07E37CA(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		float L_2 = ___val0;
		(&V_0)->set_y_3(L_2);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = __this->get_ltLogo_13();
		NullCheck(L_3);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_3, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = V_0;
		NullCheck(L_4);
		Transform_set_eulerAngles_m4B2B374C0B089A7ED0B522A3A4C56FA868992685(L_4, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TestingZLegacyExt::delayedCallExample()
extern "C" IL2CPP_METHOD_ATTR void TestingZLegacyExt_delayedCallExample_mAF02317775623160DD2910669FB4402B64D1C0FF (TestingZLegacyExt_tA6E1C9426A6110E30EB957EC9EFCE02AE4DE0918 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TestingZLegacyExt_delayedCallExample_mAF02317775623160DD2910669FB4402B64D1C0FF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(_stringLiteral545AB219302B7A2029EFDC568F63AD886BAA7A71, /*hidden argument*/NULL);
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_0 = (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 *)il2cpp_codegen_object_new(Action_t591D2A86165F896B4B800BB5C25CE18672A55579_il2cpp_TypeInfo_var);
		Action__ctor_m570E96B2A0C48BC1DC6788460316191F24572760(L_0, __this, (intptr_t)((intptr_t)TestingZLegacyExt_delayedCallExampleCallback_mDFBC1BE7E8690A57BAFA4B3CF701C7BDFD5868DD_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(LeanTween_tC03B6F2C77CCD047964FC7337A56297E0AF9306B_il2cpp_TypeInfo_var);
		LTDescr_t88934797D6A324735209180E7958727F7E3746A9 * L_1 = LeanTween_delayedCall_m9A30D60BD8FDCAB56DB1A6CEBEF3148DABC55C1F((0.5f), L_0, /*hidden argument*/NULL);
		bool L_2 = __this->get_useEstimatedTime_12();
		NullCheck(L_1);
		LTDescr_setUseEstimatedTime_m689F41334718832FA13226521051FBE6B9A94044(L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TestingZLegacyExt::delayedCallExampleCallback()
extern "C" IL2CPP_METHOD_ATTR void TestingZLegacyExt_delayedCallExampleCallback_mDFBC1BE7E8690A57BAFA4B3CF701C7BDFD5868DD (TestingZLegacyExt_tA6E1C9426A6110E30EB957EC9EFCE02AE4DE0918 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TestingZLegacyExt_delayedCallExampleCallback_mDFBC1BE7E8690A57BAFA4B3CF701C7BDFD5868DD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(_stringLiteralE024BDF7039F3C56C8870058FEE451733708928A, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = __this->get_ltLogo_13();
		NullCheck(L_0);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = __this->get_ltLogo_13();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = V_0;
		float L_4 = L_3.get_x_2();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = V_0;
		float L_6 = L_5.get_y_3();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = V_0;
		float L_8 = L_7.get_z_4();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9;
		memset(&L_9, 0, sizeof(L_9));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_9), ((float)il2cpp_codegen_subtract((float)L_4, (float)(0.2f))), ((float)il2cpp_codegen_subtract((float)L_6, (float)(0.2f))), ((float)il2cpp_codegen_subtract((float)L_8, (float)(0.2f))), /*hidden argument*/NULL);
		LTDescr_t88934797D6A324735209180E7958727F7E3746A9 * L_10 = LeanTweenExt_LeanScale_m9D6A493DACEF89ECD5525DEE71423D6555E6F8FE(L_2, L_9, (0.5f), /*hidden argument*/NULL);
		NullCheck(L_10);
		LTDescr_t88934797D6A324735209180E7958727F7E3746A9 * L_11 = LTDescr_setEase_mCF284E5CA17BB1BECBB5B1CC1013571B108580A3(L_10, ((int32_t)22), /*hidden argument*/NULL);
		bool L_12 = __this->get_useEstimatedTime_12();
		NullCheck(L_11);
		LTDescr_setUseEstimatedTime_m689F41334718832FA13226521051FBE6B9A94044(L_11, L_12, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TestingZLegacyExt::alphaExample()
extern "C" IL2CPP_METHOD_ATTR void TestingZLegacyExt_alphaExample_m772ED7AFE66CC4F41DC0A98262E7F2BF9C8F47C1 (TestingZLegacyExt_tA6E1C9426A6110E30EB957EC9EFCE02AE4DE0918 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TestingZLegacyExt_alphaExample_m772ED7AFE66CC4F41DC0A98262E7F2BF9C8F47C1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(_stringLiteral0FD95B88AFC426838A5BA005BDC96FAEF2D73294, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = GameObject_Find_m1470FB04EB6DB15CCC0D9745B70EE987B318E9BD(_stringLiteral1FD5A439E611D0FC93870DF70483B30FCB982424, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = L_0;
		LTDescr_t88934797D6A324735209180E7958727F7E3746A9 * L_2 = LeanTweenExt_LeanAlpha_m859BECC734C31253611A6242FC1E423ACC0F0E9C(L_1, (0.0f), (0.5f), /*hidden argument*/NULL);
		bool L_3 = __this->get_useEstimatedTime_12();
		NullCheck(L_2);
		LTDescr_setUseEstimatedTime_m689F41334718832FA13226521051FBE6B9A94044(L_2, L_3, /*hidden argument*/NULL);
		LTDescr_t88934797D6A324735209180E7958727F7E3746A9 * L_4 = LeanTweenExt_LeanAlpha_m859BECC734C31253611A6242FC1E423ACC0F0E9C(L_1, (1.0f), (0.5f), /*hidden argument*/NULL);
		NullCheck(L_4);
		LTDescr_t88934797D6A324735209180E7958727F7E3746A9 * L_5 = LTDescr_setDelay_m17DF40E8031819148E25E4DBEF74B5BE9DC4994B(L_4, (0.5f), /*hidden argument*/NULL);
		bool L_6 = __this->get_useEstimatedTime_12();
		NullCheck(L_5);
		LTDescr_setUseEstimatedTime_m689F41334718832FA13226521051FBE6B9A94044(L_5, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TestingZLegacyExt::moveLocalExample()
extern "C" IL2CPP_METHOD_ATTR void TestingZLegacyExt_moveLocalExample_m77D6D6F100D2C0028D6C59C1896B1A189C972B11 (TestingZLegacyExt_tA6E1C9426A6110E30EB957EC9EFCE02AE4DE0918 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TestingZLegacyExt_moveLocalExample_m77D6D6F100D2C0028D6C59C1896B1A189C972B11_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(_stringLiteral5F32623FB7268FDF2EB296D2D97883F47B50E34E, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = GameObject_Find_m1470FB04EB6DB15CCC0D9745B70EE987B318E9BD(_stringLiteral1FD5A439E611D0FC93870DF70483B30FCB982424, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = L_0;
		NullCheck(L_1);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Transform_get_localPosition_m812D43318E05BDCB78310EB7308785A13D85EFD8(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = L_1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5;
		memset(&L_5, 0, sizeof(L_5));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_5), (0.0f), (2.0f), (0.0f), /*hidden argument*/NULL);
		LTDescr_t88934797D6A324735209180E7958727F7E3746A9 * L_6 = LeanTweenExt_LeanMoveLocal_m268FEE6A2DE5ADE4F628A30004E638B66BE42728(L_4, L_5, (0.5f), /*hidden argument*/NULL);
		bool L_7 = __this->get_useEstimatedTime_12();
		NullCheck(L_6);
		LTDescr_setUseEstimatedTime_m689F41334718832FA13226521051FBE6B9A94044(L_6, L_7, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = V_0;
		LTDescr_t88934797D6A324735209180E7958727F7E3746A9 * L_9 = LeanTweenExt_LeanMoveLocal_m268FEE6A2DE5ADE4F628A30004E638B66BE42728(L_4, L_8, (0.5f), /*hidden argument*/NULL);
		NullCheck(L_9);
		LTDescr_t88934797D6A324735209180E7958727F7E3746A9 * L_10 = LTDescr_setDelay_m17DF40E8031819148E25E4DBEF74B5BE9DC4994B(L_9, (0.5f), /*hidden argument*/NULL);
		bool L_11 = __this->get_useEstimatedTime_12();
		NullCheck(L_10);
		LTDescr_setUseEstimatedTime_m689F41334718832FA13226521051FBE6B9A94044(L_10, L_11, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TestingZLegacyExt::rotateAroundExample()
extern "C" IL2CPP_METHOD_ATTR void TestingZLegacyExt_rotateAroundExample_m2A7036740240C02293A759200DBA7FE782A3CAA4 (TestingZLegacyExt_tA6E1C9426A6110E30EB957EC9EFCE02AE4DE0918 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TestingZLegacyExt_rotateAroundExample_m2A7036740240C02293A759200DBA7FE782A3CAA4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(_stringLiteralF4BA7C1A26E685E930BF2E0C986FF8B59E913A1A, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = GameObject_Find_m1470FB04EB6DB15CCC0D9745B70EE987B318E9BD(_stringLiteral1FD5A439E611D0FC93870DF70483B30FCB982424, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7(/*hidden argument*/NULL);
		LTDescr_t88934797D6A324735209180E7958727F7E3746A9 * L_2 = LeanTweenExt_LeanRotateAround_mEA020384FEB93222C3391DB1679EDD26D17C7C03(L_0, L_1, (360.0f), (1.0f), /*hidden argument*/NULL);
		bool L_3 = __this->get_useEstimatedTime_12();
		NullCheck(L_2);
		LTDescr_setUseEstimatedTime_m689F41334718832FA13226521051FBE6B9A94044(L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TestingZLegacyExt::loopPause()
extern "C" IL2CPP_METHOD_ATTR void TestingZLegacyExt_loopPause_m89E6AFBB902FD8E359177ABA577E26B0350CBBA0 (TestingZLegacyExt_tA6E1C9426A6110E30EB957EC9EFCE02AE4DE0918 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TestingZLegacyExt_loopPause_m89E6AFBB902FD8E359177ABA577E26B0350CBBA0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = GameObject_Find_m1470FB04EB6DB15CCC0D9745B70EE987B318E9BD(_stringLiteral165C51332252444354AEE69E6135D8CC126AC576, /*hidden argument*/NULL);
		LeanTweenExt_LeanPause_mCE8F93929D10A0D23BA7F4F152F043459BE14C73(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TestingZLegacyExt::loopResume()
extern "C" IL2CPP_METHOD_ATTR void TestingZLegacyExt_loopResume_m261D07787C9928C3635F38DF99DB3B99EC2DF624 (TestingZLegacyExt_tA6E1C9426A6110E30EB957EC9EFCE02AE4DE0918 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TestingZLegacyExt_loopResume_m261D07787C9928C3635F38DF99DB3B99EC2DF624_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = GameObject_Find_m1470FB04EB6DB15CCC0D9745B70EE987B318E9BD(_stringLiteral165C51332252444354AEE69E6135D8CC126AC576, /*hidden argument*/NULL);
		LeanTweenExt_LeanResume_mB026D98B197328DFADE21A52F0A472394CC5F649(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TestingZLegacyExt::punchTest()
extern "C" IL2CPP_METHOD_ATTR void TestingZLegacyExt_punchTest_m4DC5121A9C9325F84BF9FC82883A07A5FB7CA435 (TestingZLegacyExt_tA6E1C9426A6110E30EB957EC9EFCE02AE4DE0918 * __this, const RuntimeMethod* method)
{
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = __this->get_ltLogo_13();
		LTDescr_t88934797D6A324735209180E7958727F7E3746A9 * L_1 = LeanTweenExt_LeanMoveX_mC7E8EDE7941AB0BE24D6B366B89D7ED762DA9D4C(L_0, (7.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_1);
		LTDescr_t88934797D6A324735209180E7958727F7E3746A9 * L_2 = LTDescr_setEase_mCF284E5CA17BB1BECBB5B1CC1013571B108580A3(L_1, ((int32_t)34), /*hidden argument*/NULL);
		bool L_3 = __this->get_useEstimatedTime_12();
		NullCheck(L_2);
		LTDescr_setUseEstimatedTime_m689F41334718832FA13226521051FBE6B9A94044(L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TestingZLegacyExt::.ctor()
extern "C" IL2CPP_METHOD_ATTR void TestingZLegacyExt__ctor_m8C269A86760D895ECD5C2E548FC1D5E81B788A36 (TestingZLegacyExt_tA6E1C9426A6110E30EB957EC9EFCE02AE4DE0918 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TestingZLegacyExt__ctor_m8C269A86760D895ECD5C2E548FC1D5E81B788A36_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_0 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)SZArrayNew(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var, (uint32_t)((int32_t)14));
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral5D715D206B89402C18DB3F1F1C705CB33739879F);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral5D715D206B89402C18DB3F1F1C705CB33739879F);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteral4600F8B20C873DF798A5354E62D454D332AABD47);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral4600F8B20C873DF798A5354E62D454D332AABD47);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_3 = L_2;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral4F67BCD2AD2BB56385211E4F78D5EE98880140E3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral4F67BCD2AD2BB56385211E4F78D5EE98880140E3);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_4 = L_3;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteral5474CF25ACA3E5AC4FBB7E7873E611D0DE5C92F9);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral5474CF25ACA3E5AC4FBB7E7873E611D0DE5C92F9);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_5 = L_4;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteralF53C4A8ED58F0AF9F12FA7797A23D1A5C917147D);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralF53C4A8ED58F0AF9F12FA7797A23D1A5C917147D);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_6 = L_5;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteralBF77DF0CE0C741E8D828D1325CAC45F23A1B9227);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteralBF77DF0CE0C741E8D828D1325CAC45F23A1B9227);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_7 = L_6;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteralE7BEE83B83F7D86323452C9695CF2C8E601486B4);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteralE7BEE83B83F7D86323452C9695CF2C8E601486B4);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_8 = L_7;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteral3B27813D7D89DE3208E7CD3A6BFB572B99101107);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)_stringLiteral3B27813D7D89DE3208E7CD3A6BFB572B99101107);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_9 = L_8;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteral9F014C4FFA509C223C7819DD1B7A00A913C0A4D4);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteral9F014C4FFA509C223C7819DD1B7A00A913C0A4D4);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_10 = L_9;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, _stringLiteral545AB219302B7A2029EFDC568F63AD886BAA7A71);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)_stringLiteral545AB219302B7A2029EFDC568F63AD886BAA7A71);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_11 = L_10;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteral0FD95B88AFC426838A5BA005BDC96FAEF2D73294);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (String_t*)_stringLiteral0FD95B88AFC426838A5BA005BDC96FAEF2D73294);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_12 = L_11;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteral5F32623FB7268FDF2EB296D2D97883F47B50E34E);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (String_t*)_stringLiteral5F32623FB7268FDF2EB296D2D97883F47B50E34E);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_13 = L_12;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, _stringLiteralF4BA7C1A26E685E930BF2E0C986FF8B59E913A1A);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (String_t*)_stringLiteralF4BA7C1A26E685E930BF2E0C986FF8B59E913A1A);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_14 = L_13;
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, _stringLiteral9745F6DD8F6E4DC9B1489B94D908BEB88560F4BB);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (String_t*)_stringLiteral9745F6DD8F6E4DC9B1489B94D908BEB88560F4BB);
		__this->set_exampleFunctions_11(L_14);
		__this->set_useEstimatedTime_12((bool)1);
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void TestingZLegacyExt_<>c::.cctor()
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m0293595029CACBE817C79C38257E7F88CC4024A4 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__cctor_m0293595029CACBE817C79C38257E7F88CC4024A4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tCA0F01282E957E50CB00CDF0EDC006F5D2571D7D * L_0 = (U3CU3Ec_tCA0F01282E957E50CB00CDF0EDC006F5D2571D7D *)il2cpp_codegen_object_new(U3CU3Ec_tCA0F01282E957E50CB00CDF0EDC006F5D2571D7D_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m6196EBFF9E4B1695BED507AE004E97C6C7F1F039(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tCA0F01282E957E50CB00CDF0EDC006F5D2571D7D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCA0F01282E957E50CB00CDF0EDC006F5D2571D7D_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void TestingZLegacyExt_<>c::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m6196EBFF9E4B1695BED507AE004E97C6C7F1F039 (U3CU3Ec_tCA0F01282E957E50CB00CDF0EDC006F5D2571D7D * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TestingZLegacyExt_<>c::<cycleThroughExamples>b__20_0(System.Single)
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec_U3CcycleThroughExamplesU3Eb__20_0_mE2F5DAC852B800AEED0C5D8C623F22674D07C494 (U3CU3Ec_tCA0F01282E957E50CB00CDF0EDC006F5D2571D7D * __this, float ___val0, const RuntimeMethod* method)
{
	{
		float L_0 = ___val0;
		Time_set_timeScale_mAB89C3BB5DEE81934159C23F103397A77AC3F4AF(L_0, /*hidden argument*/NULL);
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
extern "C"  void DelegatePInvokeWrapper_NextFunc_tB4F1FEFABAD83E05D2477DD91C7B0B0EF49B03AE (NextFunc_tB4F1FEFABAD83E05D2477DD91C7B0B0EF49B03AE * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void TestingZLegacyExt_NextFunc::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void NextFunc__ctor_m2128327F282A0C662E32E5B26620D90BFFAAFB8A (NextFunc_tB4F1FEFABAD83E05D2477DD91C7B0B0EF49B03AE * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void TestingZLegacyExt_NextFunc::Invoke()
extern "C" IL2CPP_METHOD_ATTR void NextFunc_Invoke_m576FAF18FE27554C30A6C11B6EFD0C4B3CD53623 (NextFunc_tB4F1FEFABAD83E05D2477DD91C7B0B0EF49B03AE * __this, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			if (!il2cpp_codegen_method_is_virtual(targetMethod))
			{
				il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			}
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
			if (___methodIsStatic)
			{
				if (___parameterCount == 0)
				{
					// open
					typedef void (*FunctionPointerType) (const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetMethod);
				}
				else
				{
					// closed
					typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
				}
			}
			else
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
							else
								GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
							else
								VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
						}
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 0)
			{
				// open
				typedef void (*FunctionPointerType) (const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
						else
							GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
						else
							VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
					}
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
}
// System.IAsyncResult TestingZLegacyExt_NextFunc::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* NextFunc_BeginInvoke_mFDF0EEB8B990B8D4F0BE65F163A86AEE4F0EF3E8 (NextFunc_tB4F1FEFABAD83E05D2477DD91C7B0B0EF49B03AE * __this, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Void TestingZLegacyExt_NextFunc::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void NextFunc_EndInvoke_mFBCA883FB427684BD733D00A8B1180F81474E577 (NextFunc_tB4F1FEFABAD83E05D2477DD91C7B0B0EF49B03AE * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
