// Copyright (c) rAthenaCN Dev Teams - Licensed under GNU GPL
// For more information, see LICENCE in the main folder

#ifndef _RATHENA_CN_CONFIG_HPP_
#define _RATHENA_CN_CONFIG_HPP_

#include "renewal.hpp"
#include "packets.hpp"

#define rAthenaCN

#ifdef rAthenaCN
	#define rAthenaCN_Basic							// rAthenaCN ��������
	#define rAthenaCN_NpcEvent						// rAthenaCN �����¼�
	#define rAthenaCN_Function						// rAthenaCN ��չ����
	#define rAthenaCN_Mapflag						// rAthenaCN ��ͼ���
	#define rAthenaCN_AtCommand						// rAthenaCN ����Աָ��
	#define rAthenaCN_ScriptCommand					// rAthenaCN �ű�ָ��
#endif // rAthenaCN

//======================================
// rAthenaCN ��������
//======================================
#ifdef rAthenaCN_Basic
	#define rAthenaCN_Version "v2.0.0"				// ���� rAthenaCN �İ汾��
	#define rAthenaCN_Show_Logo						// ������ʱ��ʾ rAthenaCN �� LOGO
	#define rAthenaCN_Disclaimer					// ������ʱ��ʾ��������
	#define rAthenaCN_Show_Version					// ������ʱ��ʾ rAthenaCN �İ汾��
#endif // rAthenaCN_Basic

//======================================
// rAthenaCN �����¼�
//======================================
#ifdef rAthenaCN_NpcEvent
	#define rAthenaCN_NpcEvent_KILLMVP				// ɱ�� MVP ħ��ʱ�����¼� - OnPCKillMvpEvent
#endif // rAthenaCN_NpcEvent

//======================================
// rAthenaCN ��չ����
//======================================
#ifdef rAthenaCN_Function
	#if PACKETVER >= 20151001
		#define rAthenaCN_Function_BanDoram			// ��ֹ�����������ɫ
	#endif // PACKETVER >= 20151001
	#define rAthenaCN_Function_MobInfo				// ��ʾħ�����չ��Ϣ (�������͡����塢���Ե�)
	#define rAthenaCN_Function_MsgConf				// ��չ��Ϣ�����ļ� (Msg_conf) �� ID �������
#endif // rAthenaCN_Function

//======================================
// rAthenaCN ��ͼ���
//======================================
#ifdef rAthenaCN_Mapflag
	#define rAthenaCN_MapFlag_NoAutoLoot			// �˱�ǵĵ�ͼ�Ͻ�ֹ���ʹ���Զ�ʰȡ����
#endif // rAthenaCN_Mapflag

//======================================
// rAthenaCN ����Աָ��
//======================================
#ifdef rAthenaCN_AtCommand
	#define rAthenaCN_AtCommand_RecallMap			// �ٻ���ǰ(��ָ��)��ͼ������������
#endif // rAthenaCN_AtCommand

//======================================
// rAthenaCN �ű�ָ��
//======================================
#ifdef rAthenaCN_ScriptCommand
	#define rAthenaCN_ScriptCommand_InstanceUsers	// ��ȡָ���ĸ���ʵ�����Ѿ����븱����ͼ������
	#define rAthenaCN_ScriptCommand_MobRemove		// ���� GID �Ƴ�һ��ħ�ﵥλ (�����Ƴ�ħ��, ����ʹ������)
#endif // rAthenaCN_ScriptCommand


#endif // _RATHENA_CN_CONFIG_HPP_
