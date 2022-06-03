#pragma once
#include "pch.h"
#include "xcgui/XCElement.hpp"

namespace xcgui {

	class XCToolBar : public XCElement
	{
	public:
		XCToolBar(HELE handle)
		{
			m_handle = handle;
			;
		}


		XCToolBar() = default;

		XCToolBar(int x, int y, int width, int height, HXCGUI parent = NULL) {
			m_handle = XToolBar_Create(x, y, width, height, parent);
		}


		//@��ע ����Ԫ�ص�������.  
		//@���� hNewEle ��Ҫ�����Ԫ��.
		//@���� index ����λ������, (-1)����ĩβ..
		//@���� ���ز���λ������.
		//@����  ����Ԫ��()
		int InsertEle(HELE hNewEle, int index = -1) {
			return XToolBar_InsertEle(getEleHandle(), hNewEle, index);
		}

		//@��ע ����ָ�����������.  
		//@���� index ����λ������, (-1)����ĩβ.
		//@���� color ��ɫֵ, ��ʹ�ú�: RGBA()
		//@���� ���ز���λ������.
		//@����  ����ָ���()
		int InsertSeparator(int index = -1, COLORREF color = COLORREF_MAKE(128, 128, 128, 255)) {
			return XToolBar_InsertSeparator(getEleHandle(), index, color);
		}

		//@��ע ���������˵�,��ʾ���ص���.  
		//@���� bEnable �Ƿ�����.
		//@����  ���������˵�()
		void EnableButtonMenu(bool bEnable) {
			XToolBar_EnableButtonMenu(getEleHandle(), bEnable);
		}

		//@��ע ��ȡ��������ָ��Ԫ��.  
		//@���� index ����ֵ.
		//@���� ����Ԫ�ؾ��.
		//@����  ȡԪ��()
		HELE GetEle(int index) {
			return XToolBar_GetEle(getEleHandle(), index);
		}

		//@��ע ��ȡ�������ť.  
		//@���� ���ذ�ť���.
		//@����  ȡ�������ť()
		HELE GetButtonLeft() {
			return XToolBar_GetButtonLeft(getEleHandle());
		}

		//@��ע ��ȡ�ҹ�����ť.  
		//@���� ���ذ�ť���.
		//@����  ȡ�ҹ�����ť()
		HELE GetButtonRight() {
			return XToolBar_GetButtonRight(getEleHandle());
		}

		//@��ע ��ȡ�˵���ť.  
		//@���� ���ز˵���ť���.
		//@����  ȡ�˵���ť()
		HELE GetButtonMenu() {
			return XToolBar_GetButtonMenu(getEleHandle());
		}

		//@��ע ���ö���֮��ļ��.  
		//@���� nSize ����С.
		//@����  �ü��()
		void SetSpace(int nSize) {
			XToolBar_SetSpace(getEleHandle(), nSize);
		}

		//@��ע ɾ��Ԫ��,��������.  
		//@���� index ����ֵ.
		//@����  ɾ��Ԫ��()
		void DeleteEle(int index) {
			XToolBar_DeleteEle(getEleHandle(), index);
		}

		//@��ע ɾ������Ԫ��,��������.  
		//@����  ɾ��ȫ��()
		void DeleteAllEle() {
			XToolBar_DeleteAllEle(getEleHandle());
		}
	};
}
