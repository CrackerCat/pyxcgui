#pragma once
#include "pch.h"
#include "xcgui/XCElement.hpp"

namespace xcgui {

	class XCMonthCal : public XCElement
	{
	public:
		XCMonthCal(HELE handle)
		{
			m_handle = handle;
		}

		XCMonthCal() = default;

		XCMonthCal(int x, int y, int width, int height, HXCGUI parent = NULL) {
			m_handle = XMonthCal_Create(x, y, width, height, parent);
		}


		HELE GetButton(monthCal_button_type_ nType) {
			return XMonthCal_GetButton(getEleHandle(), nType);
		}

		//@��ע ����������ǰ������.  
		//@���� nYear ��.
		//@���� nMonth ��.
		//@���� nDay ��.
		//@����  �õ�ǰ����()
		void SetToday(int nYear, int nMonth, int nDay) {
			XMonthCal_SetToday(getEleHandle(), nYear, nMonth, nDay);
		}

		//@��ע ��ȡ������ǰ������.  
		//@���� pnYear ��.[INT,OUT]
		//@���� pnMonth ��.[INT,OUT]
		//@���� pnDay ��.[INT,OUT]
		//@����  ȡ��ǰ����()
		void GetToday(int* pnYear, int* pnMonth, int* pnDay) {
			XMonthCal_GetToday(getEleHandle(), pnYear, pnMonth, pnDay);
		}

		//@��ע ��ȡ����ѡ�е�������.  
		//@���� pnYear ��.[INT,OUT]
		//@���� pnMonth ��.[INT,OUT]
		//@���� pnDay ��.[INT,OUT]
		//@����  ȡѡ������()
		void GetSelDate(int* pnYear, int* pnMonth, int* pnDay) {
			XMonthCal_GetSelDate(getEleHandle(), pnYear, pnMonth, pnDay);
		}

		//@���� nFlag 1:����,����������ɫ, 2:�������ֵ���ɫ;  ������������ɫ, ʹ��Ԫ��������ɫ
		//@���� color ��ɫֵ
		//@����  ���ı���ɫ()
		void SetTextColor(int nFlag, COLORREF color) {
			XMonthCal_SetTextColor(getEleHandle(), nFlag, color);
		}


	};
}