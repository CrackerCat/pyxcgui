#pragma once
#include "pch.h"
#include "xcgui/shape/XCShape.hpp"

namespace xcgui {

	class XCShapeGroupBox : public XCShape
	{
	public:
		XCShapeGroupBox() = default;

		XCShapeGroupBox(HXCGUI handle)
		{
			m_handle = handle;
		}

		XCShapeGroupBox(int x, int y, int cx, int cy, const std::wstring& name, HXCGUI hParent = NULL) {
			this->Create(x, y, cx, cy, name, hParent);
		}

		HXCGUI Create(int x, int y, int cx, int cy, const std::wstring& name, HXCGUI hParent = NULL) {
			m_handle = XShapeGroupBox_Create(x, y, cx, cy, name.c_str(), hParent);
			return m_handle;
		}

		//@��ע ���ñ߿���ɫ.  
		//@���� color ��ɫֵ, ��ʹ�ú�: RGBA()
		//@����  �ñ߿���ɫ()
		void SetBorderColor(COLORREF color) {
			XShapeGroupBox_SetBorderColor(m_handle, color);
		}

		//@��ע �����ı���ɫ.  
		//@���� color ��ɫֵ, ��ʹ�ú�: RGBA()
		//@����  ���ı���ɫ()
		void SetTextColor(COLORREF color) {
			XShapeGroupBox_SetTextColor(m_handle, color);
		}

		//@��ע ��������.  
		//@���� hFontX �Ų�����.
		//@����  ������()
		void SetFontX(HFONTX hFontX) {
			XShapeGroupBox_SetFontX(m_handle, hFontX);
		}

		//@��ע �����ı�ƫ����.  
		//@���� offsetX ˮƽƫ��.
		//@���� offsetY ��ֱƫ��.
		//@����  ���ı�ƫ��()
		void SetTextOffset(int offsetX, int offsetY) {
			XShapeGroupBox_SetTextOffset(m_handle, offsetX, offsetY);
		}

		//@��ע ����Բ�Ǵ�С.  
		//@���� nWidth Բ�ǿ��.
		//@���� nHeight Բ�Ǹ߶�.
		//@����  ��Բ�Ǵ�С()
		void SetRoundAngle(int nWidth, int nHeight) {
			XShapeGroupBox_SetRoundAngle(m_handle, nWidth, nHeight);
		}

		//@��ע �����ı�����.  
		//@���� pText �ı�����.
		//@����  ���ı�()
		void SetText(const std::wstring& text) {
			XShapeGroupBox_SetText(m_handle, text.c_str());
		}

		//@��ע ��ȡ�ı�ƫ����.  
		//@���� pOffsetX X����ƫ����.
		//@���� pOffsetY Y����ƫ����.
		//@���� �ɹ�����TRUE���򷵻�FALSE.
		//@����  ȡ�ı�ƫ��()
		void GetTextOffset(int* pOffsetX, int* pOffsetY) {
			XShapeGroupBox_GetTextOffset(m_handle, pOffsetX, pOffsetY);
		}

		//@��ע ��ȡԲ�Ǵ�С.  
		//@���� pWidth ����Բ�ǿ��.
		//@���� pHeight ����Բ�Ǹ߶�.
		//@����  ȡԲ�Ǵ�С()
		void GetRoundAngle(int* pWidth, int* pHeight) {
			XShapeGroupBox_GetRoundAngle(m_handle, pWidth, pHeight);
		}

		//@��ע ����Բ��.  
		//@���� bEnable �Ƿ�����.
		//@����  ����Բ��()
		void EnableRoundAngle(bool bEnable) {
			XShapeGroupBox_EnableRoundAngle(m_handle, bEnable);
		}

	};
}