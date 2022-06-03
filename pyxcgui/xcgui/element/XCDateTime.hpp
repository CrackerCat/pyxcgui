#pragma once
#include "pch.h"
#include "xcgui/XCElement.hpp"

namespace xcgui {

	class XCDateTime : public XCElement
	{
	public:
		XCDateTime(HELE handle)
		{
			m_handle = handle;
		}

		XCDateTime() = default;

		XCDateTime(int x, int y, int width, int height, HXCGUI parent = NULL) {
			m_handle = XDateTime_Create(x, y, width, height, parent);
		}

		//@��ע ������ʽ.  
		//@���� nStyle ��ʽ, 0Ϊ����Ԫ��,1Ϊʱ��Ԫ��.
		//@����  ����ʽ()
		void SetStyle(int nStyle) {
			XDateTime_SetStyle(getEleHandle(), nStyle);
		}

		//@��ע ��ȡ��ʽ.  
		//@���� Ԫ����ʽ.
		//@����  ȡ��ʽ()
		int GetStyle() {
			return XDateTime_GetStyle(getEleHandle());
		}

		//@��ע �л��ָ���Ϊ:б�߻����.  
		//@���� bSlash TRUE:б��, FALSE:����.
		//@����  ���÷ָ���Ϊб��()
		void EnableSplitSlash(bool bSlash) {
			XDateTime_EnableSplitSlash(getEleHandle(), bSlash);
		}

		//@��ע ��ȡ�ڲ���ťԪ��.  
		//@���� nType ��ť����, 0:����������ť, 1:�ϼ�ͷ��ť, 2:�¼�ͷ��ť
		//@���� Ԫ����ʽ.
		//@����  ȡ�ڲ���ť()
		HELE GetButton(int nType) {
			return XDateTime_GetButton(getEleHandle(), nType);
		}

		//@��ע ��ȡ��ѡ�����ֵı�����ɫ.  
		//@���� Ԫ����ʽ.
		//@����  ȡѡ�����ڱ�����ɫ()
		COLORREF GetSelBkColor() {
			return XDateTime_GetSelBkColor(getEleHandle());
		}

		//@��ע ���ñ�ѡ�����ֵı�����ɫ.  
		//@���� crSelectBk ���ֱ�ѡ�б���ɫ, ��ɫֵ, ��ʹ�ú�: RGBA()
		//@����  ��ѡ�����ڱ�����ɫ()
		void SetSelBkColor(COLORREF crSelectBk) {
			XDateTime_SetSelBkColor(getEleHandle(), crSelectBk);
		}

		//@��ע ��ȡ��ǰ����.  
		//@���� pnYear ��.[OUT]
		//@���� pnMonth ��.[OUT]
		//@���� pnDay ��.[OUT]
		//@����  ȡ��ǰ����()
		void GetDate(int* pnYear, int* pnMonth, int* pnDay) {
			XDateTime_GetDate(getEleHandle(), pnYear, pnMonth, pnDay);
		}

		//@��ע ���õ�ǰ����.  
		//@���� nYear ��.
		//@���� nMonth ��.
		//@���� nDay ��.
		//@����  �õ�ǰ����()
		void SetDate(int nYear, int nMonth, int nDay) {
			XDateTime_SetDate(getEleHandle(), nYear, nMonth, nDay);
		}

		//@��ע ��ȡ��ǰʱ��.  
		//@���� pnHour ʱ.[OUT]
		//@���� pnMinute ��.[OUT]
		//@���� pnSecond ��.[OUT]
		//@����  ȡ��ǰʱ��()
		void GetTime(int* pnHour, int* pnMinute, int* pnSecond) {
			XDateTime_GetTime(getEleHandle(), pnHour, pnMinute, pnSecond);
		}

		//@��ע ���õ�ǰʱ����.  
		//@���� nHour ʱ.
		//@���� nMinute ��.
		//@���� nSecond ��.
		//@����  �õ�ǰʱ��()
		void SetTime(int nHour, int nMinute, int nSecond) {
			XDateTime_SetTime(getEleHandle(), nHour, nMinute, nSecond);
		}

		//@��ע ����������Ƭ
		//@����  ����()
		void Popup() {
			XDateTime_Popup(getEleHandle());
		}

	};
}