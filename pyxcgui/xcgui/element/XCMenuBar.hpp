#pragma once
#include "pch.h"
#include "xcgui/XCElement.hpp"

namespace xcgui {

	class XCMenuBar : public XCElement
	{
	public:
		XCMenuBar(HELE handle)
		{
			m_handle = handle;
		}

		XCMenuBar() = default;

		XCMenuBar(int x, int y, int width, int height, HXCGUI parent = NULL) {
			m_handle = XMenuBar_Create(x, y, width, height, parent);
		}

		//@��ע ��ӵ����˵���ť.  
		 //@���� pText �ı�����.
		 //@���� ���ز˵���ť����.
		 //@����  ��Ӱ�ť()
		int AddButton(const std::wstring& text) {
			return XMenuBar_AddButton(getEleHandle(), text.c_str());
		}

		//@��ע ���ò˵���ť�߶�.  
		//@���� height �߶�.
		//@����  �ð�ť�߶�()
		void SetButtonHeight(int height) {
			XMenuBar_SetButtonHeight(getEleHandle(), height);
		}

		//@��ע ��ȡ�˵�.  
		//@���� nIndex �˵����ϲ˵���ť������.
		//@���� ���ز˵����.
		//@����  ȡ�˵�()
		HMENUX GetMenu(int nIndex) {
			return XMenuBar_GetMenu(getEleHandle(), nIndex);
		}

		//@���� nIndex �˵����ϲ˵���ť������
		//@���� ���ذ�ť���
		//@����  ȡ�˵���ť()
		HELE GetButton(int nIndex) {
			return XMenuBar_GetButton(getEleHandle(), nIndex);
		}

		//@��ע ɾ���˵����ϵĲ˵���ť,ͬʱ�ð�ť�µĵ����˵�Ҳ������.  
		//@���� nIndex �˵�����ť����.
		//@���� �ɹ�����TRUE���򷵻�FALSE.
		//@����  ɾ����ť()
		bool DeleteButton(int nIndex) {
			return XMenuBar_DeleteButton(getEleHandle(), nIndex);
		}

		//@��ע ���������Զ��������
		//@���� bEnable �Ƿ�����.
		//@����  �����Զ����()
		void EnableAutoWidth(bool bEnable) {
			XMenuBar_EnableAutoWidth(getEleHandle(), bEnable);
		}

	};
}
