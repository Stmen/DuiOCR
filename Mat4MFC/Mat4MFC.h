
// Mat4MFC.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CMat4MFCApp: 
// �йش����ʵ�֣������ Mat4MFC.cpp
//

class CMat4MFCApp : public CWinApp
{
public:
	CMat4MFCApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CMat4MFCApp theApp;