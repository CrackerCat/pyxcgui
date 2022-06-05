#pragma once
#include "pch.h"
#include "xcgui/element/XCButton.hpp"

namespace xcgui {

	class XCTextLink : public XCButton
	{
	public:
		XCTextLink(HXCGUI handle)
		{
			m_handle = handle;
		}

		XCTextLink() = default;

		XCTextLink(int x, int y, int width, int height, const std::wstring& name, HXCGUI parent = NULL) {
			m_handle = XTextLink_Create(x, y, width, height, name.c_str(), parent);
		}

		// �����»���,����뿪״̬
		void EnableUnderlineLeave(bool bEnable) {
			XTextLink_EnableUnderlineLeave(getEleHandle(), bEnable);
		}
		
		// �����»���,���ͣ��״̬.
		void EnableUnderlineStay(bool bEnable) {
			XTextLink_EnableUnderlineStay(getEleHandle(), bEnable);
		}

		// �����ı���ɫ,���ͣ��״̬
		void SetTextColorStay(COLORREF color) {
			XTextLink_SetTextColorStay(getEleHandle(), color);
		}

		// �����»�����ɫ,����뿪״̬
		void SetUnderlineColorLeave(COLORREF color) {
			XTextLink_SetUnderlineColorLeave(getEleHandle(), color);
		}

		// �����»�����ɫ,���ͣ��״̬.
		void SetUnderlineColorStay(COLORREF color) {
			XTextLink_SetUnderlineColorStay(getEleHandle(), color);
		}
	};
}