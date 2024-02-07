﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <stdint.h>
#include <limits>



// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

struct Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3;
struct Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70;
struct InboundRecvBuffer_t629D03E5A6660D506F09AFF9B44D37D7400448EB;
struct InboundSendBuffer_t87526AA7D284BED0A1462C13268C07175DD5FDF2;
struct NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686;
struct NetworkInterfaceSendHandle_t0DDDEE6B24387948E786543B54C52A3F7B625CE3;
struct NetworkPipelineContext_t8F3D91FC8F21E09B471629ACF6E92F903A1ED3DD;
struct NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035;
struct NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090;
struct ProcessPacketCommand_t041B9CF2E9754D040113AC55953BB3D9B7CD2F70;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

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

// System.UIntPtr
struct UIntPtr_t 
{
	// System.Void* System.UIntPtr::_pointer
	void* ____pointer_1;
};

struct UIntPtr_t_StaticFields
{
	// System.UIntPtr System.UIntPtr::Zero
	uintptr_t ___Zero_0;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif

extern "C" void CDECL ReversePInvokeWrapper_BaselibNetworkInterface_AbortSendMessage_m5F9043A30F4052AAC6580BB7BB10C6E152696590(NetworkInterfaceSendHandle_t0DDDEE6B24387948E786543B54C52A3F7B625CE3* ___handle0, intptr_t ___userData1);
extern "C" int32_t CDECL ReversePInvokeWrapper_BaselibNetworkInterface_BeginSendMessage_m4B03CD2C62062907D9E474AC94BA8BA25E884F6B(NetworkInterfaceSendHandle_t0DDDEE6B24387948E786543B54C52A3F7B625CE3* ___handle0, intptr_t ___userData1, int32_t ___requiredPayloadSize2);
extern "C" int32_t CDECL ReversePInvokeWrapper_BaselibNetworkInterface_EndSendMessage_m4A8E416076357079492DB9FBE94E542658CB3CF7(NetworkInterfaceSendHandle_t0DDDEE6B24387948E786543B54C52A3F7B625CE3* ___handle0, NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686* ___address1, intptr_t ___userData2, NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* ___sendQueueHandle3);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_CultureInfo_OnCultureInfoChangedInAppX_mDBD419B094B2CFE933BB3F63886A5AB4E44D2DC0(Il2CppChar* ___language0);
extern "C" void CDECL ReversePInvokeWrapper_FragmentationPipelineStage_InitializeConnection_m4336E8B7DF74456365AF60B88C182BE7CFE28BAB(uint8_t* ___staticInstanceBuffer0, int32_t ___staticInstanceBufferLength1, uint8_t* ___sendProcessBuffer2, int32_t ___sendProcessBufferLength3, uint8_t* ___recvProcessBuffer4, int32_t ___recvProcessBufferLength5, uint8_t* ___sharedProcessBuffer6, int32_t ___sharedProcessBufferLength7);
extern "C" void CDECL ReversePInvokeWrapper_FragmentationPipelineStage_Receive_mFB0A7300F6EDC4BC51DAAE344D2517B89D2BFC65(NetworkPipelineContext_t8F3D91FC8F21E09B471629ACF6E92F903A1ED3DD* ___ctx0, InboundRecvBuffer_t629D03E5A6660D506F09AFF9B44D37D7400448EB* ___inboundBuffer1, int32_t* ___requests2, int32_t ___systemHeaderSize3);
extern "C" int32_t CDECL ReversePInvokeWrapper_FragmentationPipelineStage_Send_mA9689F293C654EEFC8920895D4362476A37BE95D(NetworkPipelineContext_t8F3D91FC8F21E09B471629ACF6E92F903A1ED3DD* ___ctx0, InboundSendBuffer_t87526AA7D284BED0A1462C13268C07175DD5FDF2* ___inboundBuffer1, int32_t* ___requests2, int32_t ___systemHeaderSize3);
extern "C" void CDECL ReversePInvokeWrapper_IPCNetworkInterface_AbortSendMessage_m2D391DF3AB6FD34C4F919E2D06115607533D7F04(NetworkInterfaceSendHandle_t0DDDEE6B24387948E786543B54C52A3F7B625CE3* ___handle0, intptr_t ___userData1);
extern "C" int32_t CDECL ReversePInvokeWrapper_IPCNetworkInterface_BeginSendMessage_m0997CE54FA947B7DC5F66F321635F9DB3D5732FA(NetworkInterfaceSendHandle_t0DDDEE6B24387948E786543B54C52A3F7B625CE3* ___handle0, intptr_t ___userData1, int32_t ___requiredPayloadSize2);
extern "C" int32_t CDECL ReversePInvokeWrapper_IPCNetworkInterface_EndSendMessage_mAA754456BE02657A29DDDA669021B777A6FD7C85(NetworkInterfaceSendHandle_t0DDDEE6B24387948E786543B54C52A3F7B625CE3* ___handle0, NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686* ___address1, intptr_t ___userData2, NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* ___sendQueueHandle3);
extern "C" int32_t CDECL ReversePInvokeWrapper_ManagedSecureFunctions_SecureDataReceiveCallback_mA28D8963C749533F49443A2EEF25DDE6DB9EE245(intptr_t ___userData0, uint8_t* ___data1, uintptr_t ___dataLen2, uint32_t ___status3);
extern "C" int32_t CDECL ReversePInvokeWrapper_ManagedSecureFunctions_SecureDataSendCallback_m89132FF24552B53C3B82D15DB61487B787B42B44(intptr_t ___userData0, uint8_t* ___data1, uintptr_t ___dataLen2, uint32_t ___status3);
extern "C" void CDECL ReversePInvokeWrapper_NullPipelineStage_InitializeConnection_mB7F5D9C7584262B1836BBB86BC59B162AF31D12F(uint8_t* ___staticInstanceBuffer0, int32_t ___staticInstanceBufferLength1, uint8_t* ___sendProcessBuffer2, int32_t ___sendProcessBufferLength3, uint8_t* ___recvProcessBuffer4, int32_t ___recvProcessBufferLength5, uint8_t* ___sharedProcessBuffer6, int32_t ___sharedProcessBufferLength7);
extern "C" void CDECL ReversePInvokeWrapper_NullPipelineStage_Receive_mD5DBF7539944B150DE09CE7EAA800E6EA2833A1B(NetworkPipelineContext_t8F3D91FC8F21E09B471629ACF6E92F903A1ED3DD* ___ctx0, InboundRecvBuffer_t629D03E5A6660D506F09AFF9B44D37D7400448EB* ___inboundBuffer1, int32_t* ___requests2, int32_t ___systemHeaderSize3);
extern "C" int32_t CDECL ReversePInvokeWrapper_NullPipelineStage_Send_m53582E73920861E3EB3D7E647E419E4E48D0A082(NetworkPipelineContext_t8F3D91FC8F21E09B471629ACF6E92F903A1ED3DD* ___ctx0, InboundSendBuffer_t87526AA7D284BED0A1462C13268C07175DD5FDF2* ___inboundBuffer1, int32_t* ___requests2, int32_t ___systemHeaderSize3);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_OSSpecificSynchronizationContext_InvocationEntry_mB85BF0265E239960FC963DCA74DC67EBCE9480AC(intptr_t ___arg0);
extern "C" int32_t CDECL ReversePInvokeWrapper_RelayNetworkProtocol_ComputePacketOverhead_m79E5650CFA8F686F3B3B906A1C9F7FC4A2A4AA87(Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70* ___connection0, int32_t* ___dataOffset1);
extern "C" void CDECL ReversePInvokeWrapper_RelayNetworkProtocol_Connect_m0CE61E80317A875DBA8E4445199B408EAFF439BC(Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70* ___connection0, NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* ___sendInterface1, NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* ___queueHandle2, intptr_t ___userData3);
extern "C" void CDECL ReversePInvokeWrapper_RelayNetworkProtocol_Disconnect_m47C8F6D10D90D626E582D1B6AFC60FC8A8E7121C(Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70* ___connection0, NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* ___sendInterface1, NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* ___queueHandle2, intptr_t ___userData3);
extern "C" void CDECL ReversePInvokeWrapper_RelayNetworkProtocol_ProcessReceive_mC02582993B1891A07A69A358423E20EA660DECC8(intptr_t ___stream0, NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686* ___endpoint1, int32_t ___size2, NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* ___sendInterface3, NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* ___queueHandle4, intptr_t ___userData5, ProcessPacketCommand_t041B9CF2E9754D040113AC55953BB3D9B7CD2F70* ___command6);
extern "C" int32_t CDECL ReversePInvokeWrapper_RelayNetworkProtocol_ProcessSend_mAF6BCEC7D035DE72EB8AFDA7A3EA4073508ACE1F(Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70* ___connection0, int32_t ___hasPipeline1, NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* ___sendInterface2, NetworkInterfaceSendHandle_t0DDDEE6B24387948E786543B54C52A3F7B625CE3* ___sendHandle3, NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* ___queueHandle4, intptr_t ___userData5);
extern "C" void CDECL ReversePInvokeWrapper_RelayNetworkProtocol_ProcessSendConnectionAccept_m52882487597DC5AE32A4616A06FFB9261346842F(Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70* ___connection0, NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* ___sendInterface1, NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* ___queueHandle2, intptr_t ___userData3);
extern "C" void CDECL ReversePInvokeWrapper_RelayNetworkProtocol_ProcessSendPing_mE55EFCAFD057B3C704471168852BCA8CC46CC54F(Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70* ___connection0, NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* ___sendInterface1, NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* ___queueHandle2, intptr_t ___userData3);
extern "C" void CDECL ReversePInvokeWrapper_RelayNetworkProtocol_ProcessSendPong_m3BF2B9529ACB74B6B333FAAF3827897FB1F2A28D(Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70* ___connection0, NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* ___sendInterface1, NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* ___queueHandle2, intptr_t ___userData3);
extern "C" void CDECL ReversePInvokeWrapper_RelayNetworkProtocol_Update_m0E03BA136EBE4879009A422B49102E9E76BF4A81(int64_t ___updateTime0, NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* ___sendInterface1, NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* ___queueHandle2, intptr_t ___userData3);
extern "C" void CDECL ReversePInvokeWrapper_ReliableSequencedPipelineStage_InitializeConnection_m47946EA9700033526122D3DE982BAE96FB662D20(uint8_t* ___staticInstanceBuffer0, int32_t ___staticInstanceBufferLength1, uint8_t* ___sendProcessBuffer2, int32_t ___sendProcessBufferLength3, uint8_t* ___recvProcessBuffer4, int32_t ___recvProcessBufferLength5, uint8_t* ___sharedProcessBuffer6, int32_t ___sharedProcessBufferLength7);
extern "C" void CDECL ReversePInvokeWrapper_ReliableSequencedPipelineStage_Receive_m13216FDE9D682558E795B699DBF0AC896EBC7057(NetworkPipelineContext_t8F3D91FC8F21E09B471629ACF6E92F903A1ED3DD* ___ctx0, InboundRecvBuffer_t629D03E5A6660D506F09AFF9B44D37D7400448EB* ___inboundBuffer1, int32_t* ___requests2, int32_t ___systemHeaderSize3);
extern "C" int32_t CDECL ReversePInvokeWrapper_ReliableSequencedPipelineStage_Send_mAE9323BADFE9D1D0193FB40A205D45E8547E9739(NetworkPipelineContext_t8F3D91FC8F21E09B471629ACF6E92F903A1ED3DD* ___ctx0, InboundSendBuffer_t87526AA7D284BED0A1462C13268C07175DD5FDF2* ___inboundBuffer1, int32_t* ___requests2, int32_t ___systemHeaderSize3);
extern "C" int32_t CDECL ReversePInvokeWrapper_RewindableAllocator_Try_mFA247929359660CC33023F374ED76B43812B9115(intptr_t ___state0, Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* ___block1);
extern "C" int32_t CDECL ReversePInvokeWrapper_RewindableAllocator_TryU24BurstManaged_m9FC90FBCAB23681675E5FF0BBE59BB7D5058ED52(intptr_t ___state0, Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* ___block1);
extern "C" int32_t CDECL ReversePInvokeWrapper_SecureNetworkProtocol_ComputePacketOverhead_m7004032B41C1987FDC95381D5F77E3F359A30608(Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70* ___connection0, int32_t* ___dataOffset1);
extern "C" void CDECL ReversePInvokeWrapper_SecureNetworkProtocol_Connect_m871722C3102CC5FE8DC1E5EA9570BC5D27EF5E5F(Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70* ___connection0, NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* ___sendInterface1, NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* ___queueHandle2, intptr_t ___userData3);
extern "C" void CDECL ReversePInvokeWrapper_SecureNetworkProtocol_Disconnect_m905F4CBE9421743B2E09AB3D74F937B9647A4D04(Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70* ___connection0, NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* ___sendInterface1, NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* ___queueHandle2, intptr_t ___userData3);
extern "C" void CDECL ReversePInvokeWrapper_SecureNetworkProtocol_ProcessReceive_m10821BC0B841EEF240B60FB0B7B3E7FAA78A22AF(intptr_t ___stream0, NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686* ___endpoint1, int32_t ___size2, NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* ___sendInterface3, NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* ___queueHandle4, intptr_t ___userData5, ProcessPacketCommand_t041B9CF2E9754D040113AC55953BB3D9B7CD2F70* ___command6);
extern "C" int32_t CDECL ReversePInvokeWrapper_SecureNetworkProtocol_ProcessSend_m741FC176DF0B0D670C3CB4CC996DFA6DDFCA3936(Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70* ___connection0, int32_t ___hasPipeline1, NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* ___sendInterface2, NetworkInterfaceSendHandle_t0DDDEE6B24387948E786543B54C52A3F7B625CE3* ___sendHandle3, NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* ___queueHandle4, intptr_t ___userData5);
extern "C" void CDECL ReversePInvokeWrapper_SecureNetworkProtocol_ProcessSendConnectionAccept_m9194AC18FF1FA47CDF0C4020E5F4CEFBC998B5A1(Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70* ___connection0, NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* ___sendInterface1, NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* ___queueHandle2, intptr_t ___userData3);
extern "C" void CDECL ReversePInvokeWrapper_SecureNetworkProtocol_ProcessSendPing_m82A18028BD00A576E0C49BA7B21C1B334B9EBDC9(Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70* ___connection0, NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* ___sendInterface1, NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* ___queueHandle2, intptr_t ___userData3);
extern "C" void CDECL ReversePInvokeWrapper_SecureNetworkProtocol_ProcessSendPong_m6F39D24E5211199998287D5496B57883635E8986(Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70* ___connection0, NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* ___sendInterface1, NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* ___queueHandle2, intptr_t ___userData3);
extern "C" void CDECL ReversePInvokeWrapper_SecureNetworkProtocol_Update_m1EEDB302200B96DDFEC3194A0346DD423FB60DDF(int64_t ___updateTime0, NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* ___sendInterface1, NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* ___queueHandle2, intptr_t ___userData3);
extern "C" void CDECL ReversePInvokeWrapper_SimulatorPipelineStage_InitializeConnection_mA33FBCCC1209F36775AA0B1B1BCB415765E8C53B(uint8_t* ___staticInstanceBuffer0, int32_t ___staticInstanceBufferLength1, uint8_t* ___sendProcessBuffer2, int32_t ___sendProcessBufferLength3, uint8_t* ___recvProcessBuffer4, int32_t ___recvProcessBufferLength5, uint8_t* ___sharedProcessBuffer6, int32_t ___sharedProcessBufferLength7);
extern "C" void CDECL ReversePInvokeWrapper_SimulatorPipelineStage_Receive_m20E9C4973E26F0E9614281AB0C724F00D53B2D5F(NetworkPipelineContext_t8F3D91FC8F21E09B471629ACF6E92F903A1ED3DD* ___ctx0, InboundRecvBuffer_t629D03E5A6660D506F09AFF9B44D37D7400448EB* ___inboundBuffer1, int32_t* ___requests2, int32_t ___systemHeaderSize3);
extern "C" int32_t CDECL ReversePInvokeWrapper_SimulatorPipelineStage_Send_m235ADAE30F42B6FC8778F118B8AB5B79825F265D(NetworkPipelineContext_t8F3D91FC8F21E09B471629ACF6E92F903A1ED3DD* ___ctx0, InboundSendBuffer_t87526AA7D284BED0A1462C13268C07175DD5FDF2* ___inboundBuffer1, int32_t* ___requests2, int32_t ___systemHeaderSize3);
extern "C" void CDECL ReversePInvokeWrapper_SimulatorPipelineStageInSend_InitializeConnection_mE39FBEDBD9E527F68C7D899FDD75FC28DAF1FB03(uint8_t* ___staticInstanceBuffer0, int32_t ___staticInstanceBufferLength1, uint8_t* ___sendProcessBuffer2, int32_t ___sendProcessBufferLength3, uint8_t* ___recvProcessBuffer4, int32_t ___recvProcessBufferLength5, uint8_t* ___sharedProcessBuffer6, int32_t ___sharedProcessBufferLength7);
extern "C" void CDECL ReversePInvokeWrapper_SimulatorPipelineStageInSend_Receive_m13ED8AF7E0A3676E81EACE29B68342E5584E6E5C(NetworkPipelineContext_t8F3D91FC8F21E09B471629ACF6E92F903A1ED3DD* ___ctx0, InboundRecvBuffer_t629D03E5A6660D506F09AFF9B44D37D7400448EB* ___inboundBuffer1, int32_t* ___requests2, int32_t ___systemHeaderSize3);
extern "C" int32_t CDECL ReversePInvokeWrapper_SimulatorPipelineStageInSend_Send_m43897E0EF68BA6D1C160EC5C5D25B92E7D820D31(NetworkPipelineContext_t8F3D91FC8F21E09B471629ACF6E92F903A1ED3DD* ___ctx0, InboundSendBuffer_t87526AA7D284BED0A1462C13268C07175DD5FDF2* ___inboundBuffer1, int32_t* ___requests2, int32_t ___systemHeaderSize3);
extern "C" int32_t CDECL ReversePInvokeWrapper_UnityTransportProtocol_ComputePacketOverhead_m816CCAC92B27A42A2A1520B8CAACD5034D7CEF97(Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70* ___connection0, int32_t* ___dataOffset1);
extern "C" void CDECL ReversePInvokeWrapper_UnityTransportProtocol_Connect_m86CB9CB4E4E4B88B405D5BD94EE06B93E0BBA162(Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70* ___connection0, NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* ___sendInterface1, NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* ___queueHandle2, intptr_t ___userData3);
extern "C" void CDECL ReversePInvokeWrapper_UnityTransportProtocol_Disconnect_m2486C8E6EE041B3DC6B50152B3E8A60C112A45F0(Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70* ___connection0, NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* ___sendInterface1, NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* ___queueHandle2, intptr_t ___userData3);
extern "C" void CDECL ReversePInvokeWrapper_UnityTransportProtocol_ProcessReceive_m325652A364F11E6864CDE344CD319CA2A11329C6(intptr_t ___stream0, NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686* ___endpoint1, int32_t ___size2, NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* ___sendInterface3, NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* ___queueHandle4, intptr_t ___userData5, ProcessPacketCommand_t041B9CF2E9754D040113AC55953BB3D9B7CD2F70* ___command6);
extern "C" int32_t CDECL ReversePInvokeWrapper_UnityTransportProtocol_ProcessSend_mFC7964304BC9874C4CC3B6C28BE4F45719FE29A8(Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70* ___connection0, int32_t ___hasPipeline1, NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* ___sendInterface2, NetworkInterfaceSendHandle_t0DDDEE6B24387948E786543B54C52A3F7B625CE3* ___sendHandle3, NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* ___queueHandle4, intptr_t ___userData5);
extern "C" void CDECL ReversePInvokeWrapper_UnityTransportProtocol_ProcessSendConnectionAccept_m6188486CF25FAB9AC8BA9B1055ADE888DD010C47(Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70* ___connection0, NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* ___sendInterface1, NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* ___queueHandle2, intptr_t ___userData3);
extern "C" void CDECL ReversePInvokeWrapper_UnityTransportProtocol_ProcessSendPing_m8EFD482AB3118E894A260E3C30C1D80FB189560A(Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70* ___connection0, NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* ___sendInterface1, NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* ___queueHandle2, intptr_t ___userData3);
extern "C" void CDECL ReversePInvokeWrapper_UnityTransportProtocol_ProcessSendPong_m99C28BE731761FCB2F8D53036F2532235297A01A(Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70* ___connection0, NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* ___sendInterface1, NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* ___queueHandle2, intptr_t ___userData3);
extern "C" void CDECL ReversePInvokeWrapper_UnityTransportProtocol_Update_m95EEA7C238506DADD40BEA1DE1D081F535A376F7(int64_t ___updateTime0, NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* ___sendInterface1, NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* ___queueHandle2, intptr_t ___userData3);
extern "C" void CDECL ReversePInvokeWrapper_UnreliableSequencedPipelineStage_InitializeConnection_m1E7AE900961EA72D550166743AC58C5B1FEE9235(uint8_t* ___staticInstanceBuffer0, int32_t ___staticInstanceBufferLength1, uint8_t* ___sendProcessBuffer2, int32_t ___sendProcessBufferLength3, uint8_t* ___recvProcessBuffer4, int32_t ___recvProcessBufferLength5, uint8_t* ___sharedProcessBuffer6, int32_t ___sharedProcessBufferLength7);
extern "C" void CDECL ReversePInvokeWrapper_UnreliableSequencedPipelineStage_Receive_m2CCC0A20031708875CC05DB86C5D041521F98B84(NetworkPipelineContext_t8F3D91FC8F21E09B471629ACF6E92F903A1ED3DD* ___ctx0, InboundRecvBuffer_t629D03E5A6660D506F09AFF9B44D37D7400448EB* ___inboundBuffer1, int32_t* ___requests2, int32_t ___systemHeaderSize3);
extern "C" int32_t CDECL ReversePInvokeWrapper_UnreliableSequencedPipelineStage_Send_mD2DAF9E838760B12BB1E67A10E493AC8F901DBB5(NetworkPipelineContext_t8F3D91FC8F21E09B471629ACF6E92F903A1ED3DD* ___ctx0, InboundSendBuffer_t87526AA7D284BED0A1462C13268C07175DD5FDF2* ___inboundBuffer1, int32_t* ___requests2, int32_t ___systemHeaderSize3);
extern "C" int32_t CDECL ReversePInvokeWrapper_SlabAllocator_Try_mBC7DA9938F61EC1FA877854A3F095EB8CA5D4AE0(intptr_t ___allocatorState0, Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* ___block1);
extern "C" int32_t CDECL ReversePInvokeWrapper_SlabAllocator_TryU24BurstManaged_m484D87FD1C7B43A0E6B77864265E0370AC734EA5(intptr_t ___allocatorState0, Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* ___block1);
extern "C" int32_t CDECL ReversePInvokeWrapper_StackAllocator_Try_mAE50C02088BB7F9E154A124C00E7BF1C3DF1B0B6(intptr_t ___allocatorState0, Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* ___block1);
extern "C" int32_t CDECL ReversePInvokeWrapper_StackAllocator_TryU24BurstManaged_m8C725A7308CCA2FCF709053D2660D37BBB1990E7(intptr_t ___allocatorState0, Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* ___block1);
extern "C" int32_t CDECL ReversePInvokeWrapper_BurstCompilerHelper_IsBurstEnabled_m5EFFD7E2094228A267B5DBC3F28B82A7FF53E733();


IL2CPP_EXTERN_C const Il2CppMethodPointer g_ReversePInvokeWrapperPointers[];
const Il2CppMethodPointer g_ReversePInvokeWrapperPointers[62] = 
{
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_BaselibNetworkInterface_AbortSendMessage_m5F9043A30F4052AAC6580BB7BB10C6E152696590),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_BaselibNetworkInterface_BeginSendMessage_m4B03CD2C62062907D9E474AC94BA8BA25E884F6B),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_BaselibNetworkInterface_EndSendMessage_m4A8E416076357079492DB9FBE94E542658CB3CF7),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_CultureInfo_OnCultureInfoChangedInAppX_mDBD419B094B2CFE933BB3F63886A5AB4E44D2DC0),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_FragmentationPipelineStage_InitializeConnection_m4336E8B7DF74456365AF60B88C182BE7CFE28BAB),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_FragmentationPipelineStage_Receive_mFB0A7300F6EDC4BC51DAAE344D2517B89D2BFC65),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_FragmentationPipelineStage_Send_mA9689F293C654EEFC8920895D4362476A37BE95D),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_IPCNetworkInterface_AbortSendMessage_m2D391DF3AB6FD34C4F919E2D06115607533D7F04),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_IPCNetworkInterface_BeginSendMessage_m0997CE54FA947B7DC5F66F321635F9DB3D5732FA),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_IPCNetworkInterface_EndSendMessage_mAA754456BE02657A29DDDA669021B777A6FD7C85),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_ManagedSecureFunctions_SecureDataReceiveCallback_mA28D8963C749533F49443A2EEF25DDE6DB9EE245),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_ManagedSecureFunctions_SecureDataSendCallback_m89132FF24552B53C3B82D15DB61487B787B42B44),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_NullPipelineStage_InitializeConnection_mB7F5D9C7584262B1836BBB86BC59B162AF31D12F),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_NullPipelineStage_Receive_mD5DBF7539944B150DE09CE7EAA800E6EA2833A1B),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_NullPipelineStage_Send_m53582E73920861E3EB3D7E647E419E4E48D0A082),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_OSSpecificSynchronizationContext_InvocationEntry_mB85BF0265E239960FC963DCA74DC67EBCE9480AC),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_RelayNetworkProtocol_ComputePacketOverhead_m79E5650CFA8F686F3B3B906A1C9F7FC4A2A4AA87),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_RelayNetworkProtocol_Connect_m0CE61E80317A875DBA8E4445199B408EAFF439BC),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_RelayNetworkProtocol_Disconnect_m47C8F6D10D90D626E582D1B6AFC60FC8A8E7121C),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_RelayNetworkProtocol_ProcessReceive_mC02582993B1891A07A69A358423E20EA660DECC8),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_RelayNetworkProtocol_ProcessSend_mAF6BCEC7D035DE72EB8AFDA7A3EA4073508ACE1F),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_RelayNetworkProtocol_ProcessSendConnectionAccept_m52882487597DC5AE32A4616A06FFB9261346842F),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_RelayNetworkProtocol_ProcessSendPing_mE55EFCAFD057B3C704471168852BCA8CC46CC54F),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_RelayNetworkProtocol_ProcessSendPong_m3BF2B9529ACB74B6B333FAAF3827897FB1F2A28D),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_RelayNetworkProtocol_Update_m0E03BA136EBE4879009A422B49102E9E76BF4A81),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_ReliableSequencedPipelineStage_InitializeConnection_m47946EA9700033526122D3DE982BAE96FB662D20),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_ReliableSequencedPipelineStage_Receive_m13216FDE9D682558E795B699DBF0AC896EBC7057),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_ReliableSequencedPipelineStage_Send_mAE9323BADFE9D1D0193FB40A205D45E8547E9739),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_RewindableAllocator_Try_mFA247929359660CC33023F374ED76B43812B9115),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_RewindableAllocator_TryU24BurstManaged_m9FC90FBCAB23681675E5FF0BBE59BB7D5058ED52),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_SecureNetworkProtocol_ComputePacketOverhead_m7004032B41C1987FDC95381D5F77E3F359A30608),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_SecureNetworkProtocol_Connect_m871722C3102CC5FE8DC1E5EA9570BC5D27EF5E5F),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_SecureNetworkProtocol_Disconnect_m905F4CBE9421743B2E09AB3D74F937B9647A4D04),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_SecureNetworkProtocol_ProcessReceive_m10821BC0B841EEF240B60FB0B7B3E7FAA78A22AF),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_SecureNetworkProtocol_ProcessSend_m741FC176DF0B0D670C3CB4CC996DFA6DDFCA3936),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_SecureNetworkProtocol_ProcessSendConnectionAccept_m9194AC18FF1FA47CDF0C4020E5F4CEFBC998B5A1),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_SecureNetworkProtocol_ProcessSendPing_m82A18028BD00A576E0C49BA7B21C1B334B9EBDC9),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_SecureNetworkProtocol_ProcessSendPong_m6F39D24E5211199998287D5496B57883635E8986),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_SecureNetworkProtocol_Update_m1EEDB302200B96DDFEC3194A0346DD423FB60DDF),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_SimulatorPipelineStage_InitializeConnection_mA33FBCCC1209F36775AA0B1B1BCB415765E8C53B),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_SimulatorPipelineStage_Receive_m20E9C4973E26F0E9614281AB0C724F00D53B2D5F),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_SimulatorPipelineStage_Send_m235ADAE30F42B6FC8778F118B8AB5B79825F265D),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_SimulatorPipelineStageInSend_InitializeConnection_mE39FBEDBD9E527F68C7D899FDD75FC28DAF1FB03),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_SimulatorPipelineStageInSend_Receive_m13ED8AF7E0A3676E81EACE29B68342E5584E6E5C),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_SimulatorPipelineStageInSend_Send_m43897E0EF68BA6D1C160EC5C5D25B92E7D820D31),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_UnityTransportProtocol_ComputePacketOverhead_m816CCAC92B27A42A2A1520B8CAACD5034D7CEF97),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_UnityTransportProtocol_Connect_m86CB9CB4E4E4B88B405D5BD94EE06B93E0BBA162),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_UnityTransportProtocol_Disconnect_m2486C8E6EE041B3DC6B50152B3E8A60C112A45F0),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_UnityTransportProtocol_ProcessReceive_m325652A364F11E6864CDE344CD319CA2A11329C6),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_UnityTransportProtocol_ProcessSend_mFC7964304BC9874C4CC3B6C28BE4F45719FE29A8),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_UnityTransportProtocol_ProcessSendConnectionAccept_m6188486CF25FAB9AC8BA9B1055ADE888DD010C47),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_UnityTransportProtocol_ProcessSendPing_m8EFD482AB3118E894A260E3C30C1D80FB189560A),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_UnityTransportProtocol_ProcessSendPong_m99C28BE731761FCB2F8D53036F2532235297A01A),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_UnityTransportProtocol_Update_m95EEA7C238506DADD40BEA1DE1D081F535A376F7),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_UnreliableSequencedPipelineStage_InitializeConnection_m1E7AE900961EA72D550166743AC58C5B1FEE9235),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_UnreliableSequencedPipelineStage_Receive_m2CCC0A20031708875CC05DB86C5D041521F98B84),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_UnreliableSequencedPipelineStage_Send_mD2DAF9E838760B12BB1E67A10E493AC8F901DBB5),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_SlabAllocator_Try_mBC7DA9938F61EC1FA877854A3F095EB8CA5D4AE0),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_SlabAllocator_TryU24BurstManaged_m484D87FD1C7B43A0E6B77864265E0370AC734EA5),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_StackAllocator_Try_mAE50C02088BB7F9E154A124C00E7BF1C3DF1B0B6),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_StackAllocator_TryU24BurstManaged_m8C725A7308CCA2FCF709053D2660D37BBB1990E7),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_BurstCompilerHelper_IsBurstEnabled_m5EFFD7E2094228A267B5DBC3F28B82A7FF53E733),
};