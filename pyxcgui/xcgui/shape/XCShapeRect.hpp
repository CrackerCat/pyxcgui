#pragma once
#include "pch.h"
#include "xcgui/shape/XCShape.hpp"

namespace xcgui {

	class XCShapeRect : public XCShape
	{
	public:
		XCShapeRect() = default;

		XCShapeRect(HXCGUI handle)
		{
			m_handle = handle;
		}

		XCShapeRect(int x, int y, int cx, int cy, HXCGUI hParent = NULL) {
			this->Create(x, y, cx, cy, hParent);
		}

		HXCGUI Create(int x, int y, int cx, int cy, HXCGUI hParent = NULL) {
			m_handle = XShapeRect_Create(x, y, cx, cy, hParent);
		}

		//@��ע ���ñ߿���ɫ.  
		//@���� color ��ɫֵ, ��ʹ�ú�: RGBA()
		//@����  �ñ߿�ɫ()
		void SetBorderColor(COLORREF color) {
			XShapeRect_SetBorderColor(m_handle, color);
		}

		//@��ע ���������ɫ.  
		//@���� color ��ɫֵ, ��ʹ�ú�: RGBA()
		//@����  �����ɫ()
		void SetFillColor(COLORREF color) {
			XShapeRect_SetFillColor(m_handle, color);
		}

		//@��ע ����Բ�Ǵ�С.  
		//@���� nWidth Բ�ǿ��.
		//@���� nHeight Բ�Ǹ߶�.
		//@���� �ɹ�����TRUE���򷵻�FALSE.
		//@����  ��Բ�Ǵ�С()
		void SetRoundAngle(int nWidth, int nHeight) {
			XShapeRect_SetRoundAngle(m_handle, nWidth, nHeight);
		}

		//@��ע ��ȡԲ�Ǵ�С.  
		//@���� pWidth Բ�ǿ��.
		//@���� pHeight Բ�Ǹ߶�.
		//@����  ȡԲ�Ǵ�С()
		void GetRoundAngle(int* pWidth, int* pHeight) {
			XShapeRect_GetRoundAngle(m_handle, pWidth, pHeight);
		}

		//@��ע ���û��ƾ��α߿�.  
		//@���� bEnable �Ƿ�����.
		//@����  ���ñ߿�()
		void EnableBorder(bool bEnable) {
			XShapeRect_EnableBorder(m_handle, bEnable);
		}

		//@��ע ����������.  
		//@���� bEnable �Ƿ�����.
		//@����  �������()
		void EnableFill(bool bEnable) {
			XShapeRect_EnableFill(m_handle, bEnable);
		}

		//@��ע ����Բ��.  
		//@���� bEnable �Ƿ�����.
		//@����  ����Բ��()
		void EnableRoundAngle(bool bEnable) {
			XShapeRect_EnableRoundAngle(m_handle, bEnable);
		}

	};
}