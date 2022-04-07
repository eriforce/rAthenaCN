// Copyright (c) rAthena Dev Teams - Licensed under GNU GPL
// For more information, see LICENCE in the main folder

#ifndef _RATHENA_CN_CONFIG_H_
#define _RATHENA_CN_CONFIG_H_

#include "renewal.hpp"
#include "packets.hpp"

#define rAthenaCN

#ifdef rAthenaCN
	#define rAthenaCN_Basic
#endif // rAthenaCN

#ifdef rAthenaCN_Basic
	// ���� rAthenaCN �İ汾��
	#define rAthenaCN_Version "v1.0.0"

	// ������ʱ��ʾ rAthenaCN �� LOGO
	#define rAthenaCN_Show_Logo

	// ������ʱ��ʾ��������
	#define rAthenaCN_Disclaimer

	// ������ʱ��ʾ rAthenaCN �İ汾��
	#define rAthenaCN_Show_Version
#endif // rAthenaCN_Basic


#endif // _RATHENA_CN_CONFIG_H_
