#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.UInt32 Unity.TLS.LowLevel.Binding::unitytls_client_send_data(Unity.TLS.LowLevel.Binding/unitytls_client*,System.Byte*,System.UIntPtr)
extern void Binding_unitytls_client_send_data_mF3AE0492D5C1DC16509143E3B5AC3184EEC14C8C (void);
// 0x00000002 System.UInt32 Unity.TLS.LowLevel.Binding::unitytls_client_read_data(Unity.TLS.LowLevel.Binding/unitytls_client*,System.Byte*,System.UIntPtr,System.UIntPtr*)
extern void Binding_unitytls_client_read_data_m14C77D4CED026F078466128AA7B2553EB0C3139A (void);
// 0x00000003 System.Void Unity.TLS.LowLevel.Binding::unitytls_client_init_config(Unity.TLS.LowLevel.Binding/unitytls_client_config*)
extern void Binding_unitytls_client_init_config_mE0D980DAB167E1ECA33BBE9BC764DC210CB468BF (void);
// 0x00000004 Unity.TLS.LowLevel.Binding/unitytls_client* Unity.TLS.LowLevel.Binding::unitytls_client_create(System.UInt32,Unity.TLS.LowLevel.Binding/unitytls_client_config*)
extern void Binding_unitytls_client_create_mF990B14F241D0CF6F2BEB4044C5516D0B5C3896C (void);
// 0x00000005 System.Void Unity.TLS.LowLevel.Binding::unitytls_client_destroy(Unity.TLS.LowLevel.Binding/unitytls_client*)
extern void Binding_unitytls_client_destroy_mFA97254E8A0E2422C5B7F2D809249B93A6ED19AE (void);
// 0x00000006 System.Int32 Unity.TLS.LowLevel.Binding::unitytls_client_init(Unity.TLS.LowLevel.Binding/unitytls_client*)
extern void Binding_unitytls_client_init_m45D70F9105B8F4413556D285A15B6B0BDD6B4562 (void);
// 0x00000007 System.UInt32 Unity.TLS.LowLevel.Binding::unitytls_client_handshake(Unity.TLS.LowLevel.Binding/unitytls_client*)
extern void Binding_unitytls_client_handshake_mE6C190D54B9CEFFA3D4A87B9E7C2B804E901E0C3 (void);
// 0x00000008 System.UInt32 Unity.TLS.LowLevel.Binding::unitytls_client_get_handshake_state(Unity.TLS.LowLevel.Binding/unitytls_client*)
extern void Binding_unitytls_client_get_handshake_state_m3ACEF93AA696120481120BCA631019683C15F532 (void);
// 0x00000009 System.UInt32 Unity.TLS.LowLevel.Binding::unitytls_client_get_state(Unity.TLS.LowLevel.Binding/unitytls_client*)
extern void Binding_unitytls_client_get_state_mDD8133B4C37C3BEE983D6A8724FF86F36606C164 (void);
// 0x0000000A System.UInt32 Unity.TLS.LowLevel.Binding::unitytls_client_get_role(Unity.TLS.LowLevel.Binding/unitytls_client*)
extern void Binding_unitytls_client_get_role_m565D607C50729F80A686BC56A86B3CD4162064D5 (void);
// 0x0000000B System.Void Unity.TLS.LowLevel.Binding/unitytls_client_data_send_callback::.ctor(System.Object,System.IntPtr)
extern void unitytls_client_data_send_callback__ctor_mA3190917673633997FB351384D19AC2DCB09F3D4 (void);
// 0x0000000C System.Int32 Unity.TLS.LowLevel.Binding/unitytls_client_data_send_callback::Invoke(System.IntPtr,System.Byte*,System.UIntPtr,System.UInt32)
extern void unitytls_client_data_send_callback_Invoke_m9BAC5496CD637DEBFA55F4D2BA1960C45B8AF277 (void);
// 0x0000000D System.Void Unity.TLS.LowLevel.Binding/unitytls_client_data_receive_callback::.ctor(System.Object,System.IntPtr)
extern void unitytls_client_data_receive_callback__ctor_m856BA3CAF960B07B7C62FF0A91FA3108F55FF56E (void);
// 0x0000000E System.Int32 Unity.TLS.LowLevel.Binding/unitytls_client_data_receive_callback::Invoke(System.IntPtr,System.Byte*,System.UIntPtr,System.UInt32)
extern void unitytls_client_data_receive_callback_Invoke_m569CE992486A426475D923974F91171087AAE6B8 (void);
static Il2CppMethodPointer s_methodPointers[14] = 
{
	Binding_unitytls_client_send_data_mF3AE0492D5C1DC16509143E3B5AC3184EEC14C8C,
	Binding_unitytls_client_read_data_m14C77D4CED026F078466128AA7B2553EB0C3139A,
	Binding_unitytls_client_init_config_mE0D980DAB167E1ECA33BBE9BC764DC210CB468BF,
	Binding_unitytls_client_create_mF990B14F241D0CF6F2BEB4044C5516D0B5C3896C,
	Binding_unitytls_client_destroy_mFA97254E8A0E2422C5B7F2D809249B93A6ED19AE,
	Binding_unitytls_client_init_m45D70F9105B8F4413556D285A15B6B0BDD6B4562,
	Binding_unitytls_client_handshake_mE6C190D54B9CEFFA3D4A87B9E7C2B804E901E0C3,
	Binding_unitytls_client_get_handshake_state_m3ACEF93AA696120481120BCA631019683C15F532,
	Binding_unitytls_client_get_state_mDD8133B4C37C3BEE983D6A8724FF86F36606C164,
	Binding_unitytls_client_get_role_m565D607C50729F80A686BC56A86B3CD4162064D5,
	unitytls_client_data_send_callback__ctor_mA3190917673633997FB351384D19AC2DCB09F3D4,
	unitytls_client_data_send_callback_Invoke_m9BAC5496CD637DEBFA55F4D2BA1960C45B8AF277,
	unitytls_client_data_receive_callback__ctor_m856BA3CAF960B07B7C62FF0A91FA3108F55FF56E,
	unitytls_client_data_receive_callback_Invoke_m569CE992486A426475D923974F91171087AAE6B8,
};
static const int32_t s_InvokerIndices[14] = 
{
	6734,
	6169,
	9053,
	7111,
	9053,
	8697,
	8936,
	8936,
	8936,
	8936,
	2132,
	494,
	2132,
	494,
};
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_UnityEngine_TLSModule_CodeGenModule;
const Il2CppCodeGenModule g_UnityEngine_TLSModule_CodeGenModule = 
{
	"UnityEngine.TLSModule.dll",
	14,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	0,
	NULL,
	0,
	NULL,
	NULL,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
