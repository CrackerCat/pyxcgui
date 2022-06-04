#pragma once
#include "pch.h"
#include "xcgui/XCElement.hpp"

namespace xcgui {

	class XCScrollView : virtual public XCElement
	{
	public:
		XCScrollView(HELE handle)
		{
			m_handle = handle;
		}

		XCScrollView() = default;

		XCScrollView(int x, int y, int width, int height, HXCGUI parent = NULL) {
			m_handle = XSView_Create(x, y, width, height, parent);
		}

		//@��ע �������ݴ�С.  
		//@���� cx ���.
		//@���� cy �߶�.
		//@���� ������ݸı䷵��TRUE���򷵻�FALSE.
		//@����  ����ͼ��С()
		bool SetTotalSize(int cx, int cy) {
			return XSView_SetTotalSize(getEleHandle(), cx, cy);
		}

		//@��ע ��ȡ�����ܴ�С.  
		//@���� pSize ��С.
		//@����  ȡ��ͼ��С()
		void GetTotalSize(SIZE* pSize) {
			XSView_GetTotalSize(getEleHandle(), pSize);
		}

		//@��ע ���ù�����λ��С.  
		//@���� nWidth ���.
		//@���� nHeight �߶�.
		//@���� ������ݸı䷵��TRUE���򷵻�FALSE.
		//@����  �ù�����λ��С()
		bool SetLineSize(int nWidth, int nHeight) {
			return XSView_SetLineSize(getEleHandle(), nWidth, nHeight);
		}

		//@��ע ��ȡ������λ��С.  
		//@���� pSize ���ش�С.
		//@����  ȡ������λ��С()
		void GetLineSize(SIZE* pSize) {
			XSView_GetLineSize(getEleHandle(), pSize);
		}

		//@��ע ���ù�������С.  
		//@���� size ��������С.
		//@����  �ù�������С()
		void SetScrollBarSize(int size) {
			XSView_SetScrollBarSize(getEleHandle(), size);
		}

		//@��ע ��ȡ�ӿ�ԭ��X����.  
		//@���� �ӿ�ԭ��X����.
		//@����  ȡ�ӿ�ԭ��X()
		int GetViewPosH() {
			return XSView_GetViewPosH(getEleHandle());
		}

		//@��ע ��ȡ�ӿ�ԭ��Y����.  
		//@���� �ӿ�ԭ��Y����.
		//@����  ȡ�ӿ�ԭ��Y()
		int GetViewPosV() {
			return XSView_GetViewPosV(getEleHandle());
		}

		//@��ע ��ȡ�ӿڿ��.  
		//@���� �����ӿڿ��.
		//@����  ȡ�ӿڿ��()
		int GetViewWidth() {
			return XSView_GetViewWidth(getEleHandle());
		}

		//@��ע ��ȡ�ӿڸ߶�.  
		//@���� �����ӿڸ߶�.
		//@����  ȡ�ӿڸ߶�()
		int GetViewHeight() {
			return XSView_GetViewHeight(getEleHandle());
		}

		//@��ע ��ȡ�ӿ�����.  
		//@���� pRect ����.
		//@����  ȡ�ӿ�����()
		void GetViewRect(RECT* pRect) {
			XSView_GetViewRect(getEleHandle(), pRect);
		}

		//@��ע ��ȡˮƽ������.  
		//@���� ���������.
		//@����  ȡˮƽ������()
		HELE GetScrollBarH() {
			return XSView_GetScrollBarH(getEleHandle());
		}

		//@��ע ��ȡ��ֱ������.  
		//@���� ��ֱ���������.
		//@����  ȡ��ֱ������()
		HELE GetScrollBarV() {
			return XSView_GetScrollBarV(getEleHandle());
		}

		//@��ע ˮƽ������,������ָ��λ�õ�.  
		//@���� pos λ�õ�.
		//@���� �ɹ�����TRUE���򷵻�FALSE.
		//@����  ˮƽ����()
		bool ScrollPosH(int pos) {
			return XSView_ScrollPosH(getEleHandle(), pos);
		}

		//@��ע ��ֱ������,������ָ��λ�õ�.  
		//@���� pos λ�õ�.
		//@���� �ɹ�����TRUE���򷵻�FALSE.
		//@����  ��ֱ����()
		bool ScrollPosV(int pos) {
			return XSView_ScrollPosV(getEleHandle(), pos);
		}

		//@��ע ˮƽ������,������ָ������.  
		//@���� posX X����.
		//@���� �ɹ�����TRUE���򷵻�FALSE.
		//@����  ˮƽ������X()
		bool ScrollPosXH(int posX) {
			return XSView_ScrollPosXH(getEleHandle(), posX);
		}

		//@��ע ��ֱ������,������ָ������.  
		//@���� posY Y����.
		//@���� �ɹ�����TRUE���򷵻�FALSE.
		//@����  ��ֱ������Y()
		bool ScrollPosYV(int posY) {
			return XSView_ScrollPosYV(getEleHandle(), posY);
		}

		//@��ע ��ʾˮƽ������.  
		//@���� bShow �Ƿ���ʾ.
		//@����  ��ʾˮƽ������()
		void ShowSBarH(bool bShow) {
			XSView_ShowSBarH(getEleHandle(), bShow);
		}

		//@��ע ��ʾ��ֱ������.  
		//@���� bShow �Ƿ���ʾ.
		//@����  ��ʾ��ֱ������()
		void ShowSBarV(bool bShow) {
			XSView_ShowSBarV(getEleHandle(), bShow);
		}

		//@��ע �����Զ���ʾ������.  
		//@���� bEnable �Ƿ�����.
		//@����  �����Զ���ʾ������()
		void EnableAutoShowScrollBar(bool bEnable) {
			XSView_EnableAutoShowScrollBar(getEleHandle(), bEnable);
		}

		//@��ע �������.  
		//@���� ����ɹ�����TRUE,�����෴.
		//@����  �������()
		bool ScrollLeftLine() {
			return XSView_ScrollLeftLine(getEleHandle());
		}

		//@��ע ���ҹ���.  
		//@���� ����ɹ�����TRUE,�����෴.
		//@����  ���ҹ���()
		bool ScrollRightLine() {
			return XSView_ScrollRightLine(getEleHandle());
		}

		//@��ע ���Ϲ���.  
		//@���� ����ɹ�����TRUE,�����෴.
		//@����  ���Ϲ���()
		bool ScrollTopLine() {
			return XSView_ScrollTopLine(getEleHandle());
		}

		//@��ע ���¹���.  
		//@���� ����ɹ�����TRUE,�����෴.
		//@����  ���¹���()
		bool ScrollBottomLine() {
			return XSView_ScrollBottomLine(getEleHandle());
		}

		//@��ע ˮƽ���������.  
		//@���� ����ɹ�����TRUE,�����෴.
		//@����  ���������()
		bool ScrollLeft() {
			return XSView_ScrollLeft(getEleHandle());
		}

		//@��ע ˮƽ�������Ҳ�.  
		//@���� ����ɹ�����TRUE,�����෴.
		//@����  �������Ҳ�()
		bool ScrollRight() {
			return XSView_ScrollRight(getEleHandle());
		}

		//@��ע ��ֱ����������.  
		//@���� ����ɹ�����TRUE,�����෴.
		//@����  ����������()
		bool ScrollTop() {
			return XSView_ScrollTop(getEleHandle());
		}

		//@��ע ��ֱ�������ײ�.  
		//@���� ����ɹ�����TRUE,�����෴.
		//@����  �������ײ�()
		bool ScrollBottom() {
			return XSView_ScrollBottom(getEleHandle());
		}

	};
}