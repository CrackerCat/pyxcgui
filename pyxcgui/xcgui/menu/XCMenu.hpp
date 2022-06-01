#pragma once
#include "pch.h"
#include "xcgui/XCObject.hpp"

namespace xcgui {
	class XCMenu : public XCObject
	{
	public:
		XCMenu(HMENUX handle) :
			XCObject(handle)
		{
			m_handle = handle;
		}

		XCMenu()
			:XCObject(NULL)
		{
			m_handle = this->Create();
		}

		HMENUX Create() {
			m_handle = XMenu_Create(); 
			return (HMENUX)m_handle;
		}

		//@��ע ��Ӳ˵���.  
		//@���� nID ��ID.
		//@���� text �ı�����.
		//@���� nParentID ����ID.
		//@���� nFlags ��ʶ�μ��궨�� @ref menu_item_flag_.
		//@����  �����()
		void AddItem(int nID, const std::wstring& text, int parentId = XC_ID_ROOT, int nFlags = 0) {
			XMenu_AddItem((HMENUX)m_handle, nID, text.c_str(), parentId, nFlags);
		}

		//@��ע ��Ӳ˵���.  
		//@���� nID ��ID.
		//@���� text �ı�����.
		//@���� nParentID ����ID.
		//@���� hIcon �˵���ͼ����.
		//@���� nFlags ��ʶ�μ��궨�� @ref menu_item_flag_.
		//@����  �����ͼ��()
		void AddItemIcon(int nID, const std::wstring& text, int nParentID, HIMAGE hImage, int nFlags = 0) {
			XMenu_AddItemIcon((HMENUX)m_handle, nID, text.c_str(), nParentID, hImage, nFlags);
		}

		//@��ע ����˵���.  
		//@���� nID ��ID.
		//@���� text �ı�����.
		//@���� nFlags ��ʶ�μ��궨�� @ref menu_item_flag_.
		//@���� insertID ����λ��ID.
		//@����  ������()
		void InsertItem(int nID, const std::wstring& text, int nFlags, int insertID) {
			XMenu_InsertItem((HMENUX)m_handle, nID, text.c_str(), nFlags, insertID);
		}

		//@��ע ����˵���.  
		//@���� nID ��ID.
		//@���� text �ı�����.
		//@���� hIcon �˵���ͼ����.
		//@���� nFlags ��ʶ�μ��궨�� @ref menu_item_flag_.
		//@���� insertID ����λ��ID.
		//@����  ������ͼ��()
		void InsertItemIcon(int nID, const std::wstring& text, HIMAGE hIcon, int nFlags, int insertID) {
			XMenu_InsertItemIcon((HMENUX)m_handle, nID, text.c_str(), hIcon, nFlags, insertID);
		}

		//@��ע ��ȡ��һ������.  
		//@���� nID ��ID.
		//@���� ������ID.
		//@����  ȡ��һ������()
		int GetFirstChildItem(int nID) {
			return XMenu_GetFirstChildItem((HMENUX)m_handle, nID);
		}

		//@��ע ��ȡĩβ����.  
		//@���� nID ��ID.
		//@���� ������ID.
		//@����  ȡĩβ����()
		int GetEndChildItem(int nID) {
			return XMenu_GetEndChildItem((HMENUX)m_handle, nID);
		}

		//@��ע ��ȡ��һ���ֵ���.  
		//@���� nID ��ID.
		//@���� ������ID.
		//@����  ȡ��һ���ֵ���()
		int GetPrevSiblingItem(int nID) {
			return XMenu_GetPrevSiblingItem((HMENUX)m_handle, nID);
		}

		//@��ע ��ȡ��һ���ֵ���.  
		//@���� nID ��ID.
		//@���� ������ID.
		//@����  ȡ��һ���ֵ���()
		int GetNextSiblingItem(int nID) {
			return XMenu_GetNextSiblingItem((HMENUX)m_handle, nID);
		}

		//@��ע ��ȡ����.  
		//@���� nID ��ID.
		//@���� ������ID.
		//@����  ȡ����()
		int GetParentItem(int nID) {
			return XMenu_GetParentItem((HMENUX)m_handle, nID);
		}

		//@��ע �����Ƿ��Զ����ٲ˵�.  
		//@���� bAuto �Ƿ��Զ�����.
		//@����  ���Զ�����()
		void SetAutoDestroy(bool bAuto) {
			XMenu_SetAutoDestroy((HMENUX)m_handle, bAuto);
		}

		//@��ע �Ƿ����û����Ʋ˵�����,�������XWM_MENU_DRAW_BACKGROUND��XE_MENU_DRAW_BACKGROUND�¼���Ч.  
		//@���� bEnable �Ƿ�����.
		//@����  �����û����Ʊ���()
		void EnableDrawBackground(bool bEnable) {
			XMenu_EnableDrawBackground((HMENUX)m_handle, bEnable);
		}

		//@��ע �Ƿ����û����Ʋ˵���,�������XWM_MENU_DRAWITEM��XE_MENU_DRAWITEM�¼���Ч.  
		//@���� bEnable �Ƿ�����.
		//@����  �����û�������()
		void EnableDrawItem(bool bEnable) {
			XMenu_EnableDrawItem((HMENUX)m_handle, bEnable);
		}

		//@��ע �����˵�.  
		//@���� hParentWnd �����ھ��.
		//@���� x x����.
		//@���� y y����.
		//@���� hParentEle ��Ԫ�ؾ��,�����ֵ��ΪNULL,hParentEleԪ�ؽ����ղ˵���Ϣ�¼�,
		//@���� nPosition ����λ��,�μ��궨��.
		//@���� �ɹ�����TRUE���򷵻�FALSE.
		//@����  ����()
		bool Popup(HWND hParentWnd, int x, int y, HELE hParentEle = NULL, menu_popup_position_ nPosition = menu_popup_position_left_top) {
			return XMenu_Popup((HMENUX)m_handle, hParentWnd, x, y, hParentEle, nPosition);
		}

		//@��ע ���ٲ˵�.  
		//@����  ����()
		void DestroyMenu() {
			XMenu_DestroyMenu((HMENUX)m_handle);
		}

		//@��ע �رղ˵�.  
		//@����  �ر�()
		void CloseMenu() {
			XMenu_CloseMenu((HMENUX)m_handle);
		}

		//@��ע ���ò˵�����ͼƬ.  
		//@���� hImage ͼƬ���.
		//@����  �ñ���ͼƬ()
		void SetBkImage(HIMAGE hImage) {
			XMenu_SetBkImage((HMENUX)m_handle, hImage);
		}

		//@��ע �������ı�.  
		//@���� nID ��ID.
		//@���� text �ı�����.
		//@���� �ɹ�����TRUE���򷵻�FALSE.
		//@����  �����ı�()
		bool SetItemText(int nID, const std::wstring& text) {
			return XMenu_SetItemText((HMENUX)m_handle, nID, text.c_str());
		}

		//@��ע ��ȡ���ı�.  
		//@���� nID ��ID.
		//@���� �����ı�����
		//@����  ȡ���ı�()
		std::wstring GetItemText(int nID) {
			 auto pText = XMenu_GetItemText((HMENUX)m_handle, nID);
			 if (!pText)
				 return nullptr;
			 return pText;
		}

		//@��ע ��ȡ���ı�����,�������ַ�������ֹ��.  
		//@���� nID ��ID.
		//@���� ����,�ַ�Ϊ��λ.
		//@����  ȡ���ı�����()
		int GetItemTextLength(int nID) {
			return XMenu_GetItemTextLength((HMENUX)m_handle, nID);
		}

		//@��ע ���ò˵���ͼ��.  
		//@���� nID ��ID.
		//@���� hIcon �˵���ͼ����.
		//@���� �ɹ�����TRUE���򷵻�FALSE.
		//@����  ����ͼ��()
		bool SetItemIcon(int nID, HIMAGE hIcon) {
			return XMenu_SetItemIcon((HMENUX)m_handle, nID, hIcon);
		}

		//@��ע �������ʶ.  
		//@���� nID ��ID.
		//@���� uFlags ��ʶ�μ��궨�� @ref menu_item_flag_.
		//@���� �ɹ�����TRUE���򷵻�FALSE.
		//@����  �����־()
		bool SetItemFlags(int nID, int uFlags) {
			return XMenu_SetItemFlags((HMENUX)m_handle, nID, uFlags);
		}

		//@��ע ������߶�.  
		//@���� height �߶�.
		//@����  ����߶�()
		void SetItemHeight(int height) {
			XMenu_SetItemHeight((HMENUX)m_handle, height);
		}

		//@��ע ��ȡ��߶�.  
		//@���� ������߶�.
		//@����  ȡ��߶�()
		int GetItemHeight() {
			return XMenu_GetItemHeight((HMENUX)m_handle);
		}

		//@��ע �˿��Ϊ�ı���ʾ������, ����������������ı����
		//@���� nID ��ID
		//@���� nWidth ָ���ı�������
		//@���� ����ɹ�����TRUE,���򷵻�FALSE
		//@����  ������()
		bool SetItemWidth(int nID, int nWidth) {
			return XMenu_SetItemWidth((HMENUX)m_handle, nID, nWidth);
		}

		//@��ע ���ò˵��߿���ɫ.  
		//@���� crColor ��ɫֵ, ��ʹ�ú�: RGBA()
		//@����  �ñ߿���ɫ()
		void SetBorderColor(COLORREF crColor) {
			XMenu_SetBorderColor((HMENUX)m_handle, crColor);
		}

		//@��ע ���õ����˵����ڱ߿��С.  
		//@���� nLeft �ߴ�С.
		//@���� nTop �ߴ�С.
		//@���� nRight �ߴ�С.
		//@���� nBottom �ߴ�С.
		//@����  �ñ߿��С()
		void SetBorderSize(int nLeft, int nTop, int nRight, int nBottom) {
			XMenu_SetBorderSize((HMENUX)m_handle, nLeft, nTop, nRight, nBottom);
		}

		//@��ע ��ȡ���������.  
		//@���� �������������.
		//@����  ȡ�����()
		int GetLeftWidth() {
			return XMenu_GetLeftWidth((HMENUX)m_handle);
		}

		//@��ע ��ȡ�˵����ı�����.  
		//@���� ���ز˵����ļ�������С.
		//@����  ȡ����ı����()
		int GetLeftSpaceText() {
			return XMenu_GetLeftSpaceText((HMENUX)m_handle);
		}

		//@��ע ��ȡ�˵�������,�����Ӳ˵���.  
		//@���� �˵�������.
		//@����  ȡ������()
		int GetItemCount() {
			return XMenu_GetItemCount((HMENUX)m_handle);
		}

		//@��ע ���ò˵��ѡ״̬.  
		//@���� nID �˵���ID
		//@���� bCheck ��ѡTRUE,�ǹ�ѡFALSE
		//@���� �����ѡ����TRUE,���򷵻�FALSE.
		//@����  ���ѡ()
		bool SetItemCheck(int nID, bool bCheck) {
			return XMenu_SetItemCheck((HMENUX)m_handle, nID, bCheck);
		}

		//@��ע �жϲ˵����Ƿ�ѡ.  
		//@���� nID �˵���ID
		//@���� �����ѡ����TRUE,���򷵻�FALSE.
		//@����  �Ƿ��ѡ()
		bool IsItemCheck(int nID) {
			return XMenu_IsItemCheck((HMENUX)m_handle, nID);
		}

	};
}