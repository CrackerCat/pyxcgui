#pragma once
#include "pch.h"
#include "xcgui/shape/XCShape.hpp"

namespace xcgui {

	class XCShapeText : public XCShape
	{
	public:
		XCShapeText() = default;

		XCShapeText(HXCGUI handle)
		{
			m_handle = handle;
		}

		XCShapeText(int x, int y, int cx, int cy, const std::wstring& name, HXCGUI hParent = NULL) {
			this->Create(x, y, cx, cy, name, hParent);
		}

		HXCGUI Create(int x, int y, int cx, int cy, const std::wstring& name, HXCGUI hParent = NULL) {
			m_handle = XShapeText_Create(x, y, cx, cy, name.c_str(), hParent);
			return m_handle;
		}

		//@��ע �����ı�����.  
		//@���� name.c_str() �ı�����.
		//@����  ���ı�()
		void SetText(const std::wstring& name) {
			XShapeText_SetText(m_handle, name.c_str());
		}

		//@��ע ��ȡ�ı�����.  
		//@����  ȡ�ı�()
		std::wstring GetText() {
			auto pText = XShapeText_GetText(m_handle);
			if (!pText) return L"";
			return pText;
		}

		//@��ע ��ȡ�ı�����.  
		//@���� �ı�����.
		//@����  ȡ�ı�����()
		int GetTextLength() {
			return XShapeText_GetTextLength(m_handle);
		}

		//@��ע ��������.  
		//@���� hFontx ������.
		//@����  ������()
		void SetFont(HFONTX hFontx) {
			XShapeText_SetFont(m_handle, hFontx);
		}

		//@��ע ��ȡ����.  
		//@���� ����������.
		//@����  ȡ����()
		HFONTX GetFont() {
			return XShapeText_GetFont(m_handle);
		}

		//@��ע �����ı���ɫ.  
		//@���� color ��ɫֵ, ��ʹ�ú�: RGBA()
		//@����  ���ı���ɫ()
		void SetTextColor(COLORREF color) {
			XShapeText_SetTextColor(m_handle, color);
		}

		//@��ע ��ȡ�ı���ɫ.  
		//@���� ��ɫֵ.
		//@����  ȡ�ı���ɫ()
		COLORREF GetTextColor() {
			return XShapeText_GetTextColor(m_handle);
		}

		//@��ע �����ı����뷽ʽ.  
		//@���� align �ı����뷽ʽ; @ref textFormatFlag_ .
		//@����  ���ı�����()
		void SetTextAlign(int align) {
			XShapeText_SetTextAlign(m_handle, align);
		}

		//@��ע ��������ƫ��.  
		//@���� x X����.
		//@���� y Y����.
		//@���� �ɹ�����TRUE���򷵻�FALSE.
		//@����  ��ƫ��()
		void SetOffset(int x, int y) {
			XShapeText_SetOffset(m_handle, x, y);
		}
	};
}