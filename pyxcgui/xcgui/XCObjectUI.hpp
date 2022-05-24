#pragma once
#include "pch.h"
#include "XCBase.hpp"

namespace xcgui {
	class XCObjectUI : public XCBase {

	public:
		XCObjectUI() 
		: XCBase()
		{
		}
		XCObjectUI(HXCGUI handle)
		: XCBase(handle)
		{
		}
		
		// ����UI������ʽ
		void SetStyle(XC_OBJECT_STYLE nStyle)
		{
			XUI_SetStyle(m_handle, nStyle);
		}

		// ��ȡUI������ʽ
		XC_OBJECT_STYLE GetStyle()
		{
			return XUI_GetStyle(m_handle);
		}

		//���û������ʽ
		void EnableCSS(bool bEnable)
		{
			XUI_EnableCSS(m_handle, bEnable);
		}

		// ����CSS[������ʽ]����
		void SetCssName(const std::wstring& name)
		{
			return XUI_SetCssName(m_handle, name.c_str());
		}

		// ��ȡCSS��ʽ����
		std::wstring GetCssName()
		{
			auto pName = XUI_GetCssName(m_handle);
			if (pName) {
				return std::wstring(pName);
			}
			return L"";
		}

	};
}