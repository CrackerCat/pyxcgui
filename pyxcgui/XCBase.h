#pragma once
#include "pch.h"

class XCBase
{
public:
	XCBase();
	XCBase(HXCGUI handle);

	//  ��ȡ������������
	XC_OBJECT_TYPE GetType();

	// ��ȡ����Ļ�������
	XC_OBJECT_TYPE GetTypeBase();

	// ��ȡ������չ����
	XC_OBJECT_TYPE_EX GetTypeEx();

	// ����ǰ�ť, ��ʹ�ð�ť����ǿ�ӿ� XBtn_SetTypeEx()
	void SetTypeEx(XC_OBJECT_TYPE_EX nType);

	HXCGUI GetHandle();
	void SetHandle(HXCGUI handle);

protected:
	HXCGUI m_handle;
};

