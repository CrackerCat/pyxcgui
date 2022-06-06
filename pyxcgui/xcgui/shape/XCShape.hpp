#pragma once
#include "pch.h"
#include "xcgui/XCWidget.hpp"

namespace xcgui {

	class XCShape: public XCWidget
	{
	public:
		XCShape(HXCGUI handle)
		{
			m_handle = handle;
		}

		XCShape() = default;

		//@��ע �Ӹ�UIԪ�ػ򴰿�,�͸����ֶ������Ƴ�.  
		//@����  �Ƴ�()
		void RemoveShape() {
			XShape_RemoveShape(m_handle);
		}

		//@��ע ��ȡ��״����Z��.  
		//@���� �ɹ���������ֵ,���򷵻� XC_ID_ERROR.
		//@����  ȡZ��()
		int GetZOrder() {
			return XShape_GetZOrder(m_handle);
		}

		//@��ע �ػ���״����.  
		//@����  �ػ�()
		void Redraw() {
			XShape_Redraw(m_handle);
		}

		//@��ע ��ȡ���ݿ��.  
		//@���� �������ݿ��.
		//@����  ȡ���()
		int GetWidth() {
			return XShape_GetWidth(m_handle);
		}

		//@��ע ��ȡ���ݸ߶�.  
		//@���� �������ݸ߶�.
		//@����  ȡ�߶�()
		int GetHeight() {
			return XShape_GetHeight(m_handle);
		}

		//@��ע �ƶ�λ��
		//@���� x x����
		//@���� y y����
		//@����  ��λ��()
		void SetPosition(int x, int y) {
			XShape_SetPosition(m_handle, x, y);
		}

		//@���� pOutX ����X����
		//@���� pOutY ����Y����
		//@����  ȡλ��()
		void GetPosition(int* pOutX, int* pOutY) {
			XShape_GetPosition(m_handle, pOutX, pOutY);
		}

		//@���� nWidth ���
		//@���� nHeight �߶�
		//@����  �ô�С()
		void SetSize(int nWidth, int nHeight) {
			XShape_SetSize(m_handle, nWidth, nHeight);
		}

		//@���� pOutWidth ���ؿ��
		//@���� pOutHeight ���ظ߶�
		//@����  ȡ��С()
		void GetSize(int* pOutWidth, int* pOutHeight) {
			XShape_GetSize(m_handle, pOutWidth, pOutHeight);
		}

		//@���� alpha ͸����
		//@����  ��͸����()
		void SetAlpha(BYTE alpha) {
			XShape_SetAlpha(m_handle, alpha);
		}

		//@���� ����͸����
		//@����  ȡ͸����()
		BYTE GetAlpha() {
			return XShape_GetAlpha(m_handle);
		}

		//@��ע ��ȡ����.  
		//@���� pRect ���շ�������.
		//@����  ȡ����()
		void GetRect(RECT* pRect) {
			XShape_GetRect(m_handle, pRect);
		}

		//@��ע ��������.  
		//@���� pRect ����.
		//@����  ������()
		void SetRect(RECT* pRect) {
			XShape_SetRect(m_handle, pRect);
		}

		//@��ע ����Ԫ������,�߼�����,����������ͼƫ��.  
		//@���� pRect ����.
		//@���� bRedraw �Ƿ��ػ�.
		//@���� ����ɹ�����TRUE, ���򷵻�FALSE.
		//@����  ���߼�����()
		bool SetRectLogic(RECT* pRect, bool bRedraw) {
			return XShape_SetRectLogic(m_handle, pRect, bRedraw);
		}

		//@��ע ��ȡԪ������,�߼�����,����������ͼƫ��.  
		//@���� pRect ����.
		//@����  ȡ�߼�����()
		void GetRectLogic(RECT* pRect) {
			XShape_GetRectLogic(m_handle, pRect);
		}

		//@��ע ���ڴ��ڿͻ�������.  
		//@���� pRect ����.
		//@����  ȡ���ڴ��ڿͻ�������()
		void GetWndClientRect(RECT* pRect) {
			XShape_GetWndClientRect(m_handle, pRect);
		}

		//@��ע ��������Ч����, ��丸, Ȩ���������������޷�����.  
		//@���� pSize ���շ������ݴ�Сֵ.
		//@����  ȡ���ݴ�С()
		void GetContentSize(SIZE* pSize) {
			XShape_GetContentSize(m_handle, pSize);
		}

		//@��ע �Ƿ���ʾ���ֱ߽�.  
		//@���� bShow �Ƿ���ʾ.
		//@����  ��ʾ���ֱ߽�()
		void ShowLayout(bool bShow) {
			XShape_ShowLayout(m_handle, bShow);
		}

		//@��ע ��������.  
		//@����  ��������()
		void AdjustLayout() {
			XShape_AdjustLayout(m_handle);
		}

		//@��ע ������״����.  
		//@����  ����()
		void Destroy() {
			XShape_Destroy(m_handle);
		}

	};
}