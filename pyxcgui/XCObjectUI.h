#pragma once
#include "pch.h"
#include "XCBase.h"

class XCObjectUI : public XCBase {

public:
	XCObjectUI() = default;
	XCObjectUI(HXCGUI handle);
	// ����UI������ʽ
	void SetStyle(XC_OBJECT_STYLE nStyle);

	// ��ȡUI������ʽ
	XC_OBJECT_STYLE GetStyle();
	
	//���û������ʽ
	void EnableCSS(bool bEnable);
	
	// ����CSS[������ʽ]����
	void SetCssName(const std::wstring& name);

	// ��ȡCSS��ʽ����
	std::wstring GetCssName();
};