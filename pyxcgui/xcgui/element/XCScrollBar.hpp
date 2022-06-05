#pragma once
#include "pch.h"
#include "xcgui/XCElement.hpp"

namespace xcgui {

	class XCScrollBar : public XCElement
	{
	public:
		XCScrollBar(HXCGUI handle)
		{
			m_handle = handle;
		}

		XCScrollBar() = default;

		XCScrollBar(int x, int y, int width, int height, HXCGUI parent = NULL) {
			m_handle = XSBar_Create(x, y, width, height, parent);
		}

		//@��ע ���ù�����Χ.  
		//@���� range ��Χ.
		//@����  �÷�Χ()
		void SetRange(int range) {
			XSBar_SetRange(getEleHandle(), range);
		}

		//@��ע ��ȡ������Χ.  
		//@���� ������Χ.
		//@����  ȡ��Χ()
		int GetRange() {
			return XSBar_GetRange(getEleHandle());
		}

		//@��ע ��ʾ���ع��������°�ť.  
		//@���� bShow �Ƿ���ʾ.
		//@����  ��ʾ���°�ť()
		void ShowButton(bool bShow) {
			XSBar_ShowButton(getEleHandle(), bShow);
		}

		//@��ע ���û��鳤��.  
		//@���� length ����.
		//@����  �û��鳤��()
		void SetSliderLength(int length) {
			XSBar_SetSliderLength(getEleHandle(), length);
		}

		//@��ע ���û�����С����.  
		//@���� minLength ����.
		//@����  �û�����С����()
		void SetSliderMinLength(int minLength) {
			XSBar_SetSliderMinLength(getEleHandle(), minLength);
		}

		//@��ע ���û������ߵļ����С.  
		//@���� nPadding �����С.
		//@����  �û������߼��()
		void SetSliderPadding(int nPadding) {
			XSBar_SetSliderPadding(getEleHandle(), nPadding);
		}

		//@��ע ����ˮƽ���ߴ�ֱ.  
		//@���� bEnable ˮƽ��ֱ.
		//@���� ����ı䷵��TRUE���򷵻�FALSE.
		//@����  ����ˮƽ()
		bool EnableHorizon(bool bHorizon) {
			return XSBar_EnableHorizon(getEleHandle(), bHorizon);
		}

		//@��ע ��ȡ������󳤶�.  
		//@���� ����.
		//@����  ȡ������󳤶�()
		int GetSliderMaxLength() {
			return XSBar_GetSliderMaxLength(getEleHandle());
		}

		//@��ע ���Ϲ���.  
		//@���� �ɹ�����TRUE���򷵻�FALSE.
		//@����  ���Ϲ���()
		bool ScrollUp() {
			return XSBar_ScrollUp(getEleHandle());
		}

		//@��ע ���¹���.  
		//@���� �ɹ�����TRUE���򷵻�FALSE.
		//@����  ���¹���()
		bool ScrollDown() {
			return XSBar_ScrollDown(getEleHandle());
		}

		//@��ע ����������.  
		//@���� �ɹ�����TRUE���򷵻�FALSE.
		//@����  ����������()
		bool ScrollTop() {
			return XSBar_ScrollTop(getEleHandle());
		}

		//@��ע �������ײ�.  
		//@���� �ɹ�����TRUE���򷵻�FALSE.
		//@����  �������ײ�()
		bool ScrollBottom() {
			return XSBar_ScrollBottom(getEleHandle());
		}

		//@��ע ������ָ��λ�õ� ,�����¼� 
		//@���� pos λ�õ�.
		//@���� �ɹ�����TRUE���򷵻�FALSE.
		//@����  ������ָ��λ��()
		bool ScrollPos(int pos) {
			return XSBar_ScrollPos(getEleHandle(), pos);
		}

		//@��ע ��ȡ�ϰ�ť.  
		//@���� ���ذ�ť���.
		//@����  ȡ�ϰ�ť()
		HELE GetButtonUp() {
			return XSBar_GetButtonUp(getEleHandle());
		}

		//@��ע ��ȡ�°�ť.  
		//@���� ���ذ�ť���.
		//@����  ȡ�°�ť()
		HELE GetButtonDown() {
			return XSBar_GetButtonDown(getEleHandle());
		}

		//@��ע ��ȡ������ť.  
		//@���� ���ذ�ť���.
		//@����  ȡ����()
		HELE GetButtonSlider() {
			return XSBar_GetButtonSlider(getEleHandle());
		}

	};
}