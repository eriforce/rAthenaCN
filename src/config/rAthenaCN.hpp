// Copyright (c) rAthenaCN Dev Teams - Licensed under GNU GPL
// For more information, see LICENCE in the main folder

#ifndef _RATHENA_CN_CONFIG_HPP_
#define _RATHENA_CN_CONFIG_HPP_

#include "renewal.hpp"
#include "packets.hpp"

#define rAthenaCN

#ifdef rAthenaCN
	#define rAthenaCN_Basic					// rAthenaCN ��������
	#define rAthenaCN_NpcEvent				// rAthenaCN �����¼�
	#define rAthenaCN_function				// rAthenaCN ��չ����
#endif // rAthenaCN

//======================================
// rAthenaCN ��������
//======================================
#ifdef rAthenaCN_Basic
	#define rAthenaCN_Version "v1.0.0"		// ���� rAthenaCN �İ汾��
	#define rAthenaCN_Show_Logo				// ������ʱ��ʾ rAthenaCN �� LOGO
	#define rAthenaCN_Disclaimer			// ������ʱ��ʾ��������
	#define rAthenaCN_Show_Version			// ������ʱ��ʾ rAthenaCN �İ汾��
#endif // rAthenaCN_Basic

//======================================
// rAthenaCN �����¼�
//======================================
#ifdef rAthenaCN_NpcEvent
	#define rAthenaCN_NpcEvent_KILLMVP		// ɱ�� MVP ħ��ʱ�����¼� - OnPCKillMvpEvent
#endif // rAthenaCN_NpcEvent

//======================================
// rAthenaCN ��չ����
//======================================
#ifdef rAthenaCN_function
	#if PACKETVER >= 20151001
		#define rAthenaCN_function_BanDoram	// �Ƿ��ֹ�����������ɫ
	#endif // PACKETVER >= 20151001
#endif // rAthenaCN_function

#endif // _RATHENA_CN_CONFIG_HPP_
