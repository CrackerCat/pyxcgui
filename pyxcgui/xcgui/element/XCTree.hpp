#pragma once
#include "pch.h"
#include "xcgui/element/XCScrollView.hpp"

namespace xcgui {


	class XCTree : public XCScrollView
	{

	public:
		XCTree(HXCGUI handle)
		{
			m_handle = handle;
		}

		XCTree() = default;

		XCTree(int x, int y, int width, int height, HXCGUI parent = NULL) {

			m_handle = XTree_Create(x, y, width, height, parent);
		}

		//@��ע �����϶����.  
		 //@���� bEnable �Ƿ�����.
		 //@����  �����϶���()
		void EnableDragItem(bool bEnable) {
			XTree_EnableDragItem(getEleHandle(), bEnable);
		}

		//@��ע ���û������ʾ���������.  
		//@���� bEnable �Ƿ�����.
		//@���� bSolid ʵ�߻�����; TRUE:ʵ��, FALSE:����.
		//@����  ����������()
		void EnableConnectLine(bool bEnable, bool bSolid) {
			XTree_EnableConnectLine(getEleHandle(), bEnable, bSolid);
		}

		//@��ע ������ر�Ĭ��չ������,��������²������Զ�չ��.  
		//@���� bEnable �Ƿ�����.
		//@����  ����չ��()
		void EnableExpand(bool bEnable) {
			XTree_EnableExpand(getEleHandle(), bEnable);
		}

		//@���� bEnable �Ƿ�����
		//@����  ����ģ�帴��()
		void EnablemTemplateReuse(bool bEnable) {
			XTree_EnablemTemplateReuse(getEleHandle(), bEnable);
		}

		//@��ע ��������������ɫ.  
		//@���� color ��ɫֵ, ��ʹ�ú�: RGBA()
		//@����  ����������ɫ()
		void SetConnectLineColor(COLORREF color) {
			XTree_SetConnectLineColor(getEleHandle(), color);
		}

		//@��ע ����չ����ťռ�ÿռ��С.  
		//@���� nWidth ���.
		//@���� nHeight �߶�.
		//@����  ��չ����ť��С()
		void SetExpandButtonSize(int nWidth, int nHeight) {
			XTree_SetExpandButtonSize(getEleHandle(), nWidth, nHeight);
		}

		//@��ע �������߻��Ƴ���,չ����ť��������֮�������.  
		//@���� nLength ���߻��Ƴ���.
		//@����  �������߳���()
		void SetConnectLineLength(int nLength) {
			XTree_SetConnectLineLength(getEleHandle(), nLength);
		}

		//@��ע �����϶������λ����ɫ��ʾ.  
		//@���� color ��ɫֵ, ��ʹ�ú�: RGBA()
		//@����  ���϶������λ����ɫ()
		void SetDragInsertPositionColor(COLORREF color) {
			XTree_SetDragInsertPositionColor(getEleHandle(), color);
		}

		//@��ע ������ģ���ļ�.  
		//@���� pXmlFile �ļ���.
		//@���� �ɹ�����TRUE���򷵻�FALSE.
		//@����  ����ģ���ļ�()
		bool SetItemTemplateXML(const std::wstring& xmlFile) {
			return XTree_SetItemTemplateXML(getEleHandle(), xmlFile.c_str());
		}

		//@��ע ������ģ���ļ�,��ѡ��״̬.  
		//@���� pXmlFile �ļ���.
		//@���� �ɹ�����TRUE���򷵻�FALSE.
		//@����  ��ѡ����ģ���ļ�()
		bool SetItemTemplateXMLSel(const std::wstring& xmlFile) {
			return XTree_SetItemTemplateXMLSel(getEleHandle(), xmlFile.c_str());
		}

		//@��ע �����б���ģ��.  
		//@���� hTemp ģ����.
		//@���� ����ɹ�����TRUE,���򷵻�FALSE.
		//@����  ����ģ��()
		bool SetItemTemplate(HTEMP hTemp) {
			return XTree_SetItemTemplate(getEleHandle(), hTemp);
		}

		//@��ע �����б���ģ��,��ѡ��״̬.  
		//@���� hTemp ģ����.
		//@���� ����ɹ�����TRUE,���򷵻�FALSE.
		//@����  ��ѡ����ģ��()
		bool SetItemTemplateSel(HTEMP hTemp) {
			return XTree_SetItemTemplateSel(getEleHandle(), hTemp);
		}

		//@��ע ������ģ���ļ�.  
		//@���� pStringXML �ַ���ָ��.
		//@���� �ɹ�����TRUE���򷵻�FALSE.
		//@����  ����ģ����ַ���()
		bool SetItemTemplateXMLFromString(const std::string& xmlData) {
			return XTree_SetItemTemplateXMLFromString(getEleHandle(), xmlData.c_str());
		}

		//@��ע ������ģ���ļ�,��ѡ��״̬.  
		//@���� pStringXML �ַ���ָ��.
		//@���� �ɹ�����TRUE���򷵻�FALSE.
		//@����  ��ѡ����ģ����ַ���()
		bool SetItemTemplateXMLSelFromString(const std::string& xmlData) {
			return XTree_SetItemTemplateXMLSelFromString(getEleHandle(), xmlData.c_str());
		}

		//@��ע ͨ��ģ����ID,��ȡʵ����ģ����ID��Ӧ�Ķ�����.  
		//@���� nID ����ID.
		//@���� nTempItemID ģ����ID.
		//@���� �ɹ����ض�����,���򷵻�NULL.
		//@����  ȡģ�����()
		HXCGUI GetTemplateObject(int nID, int nTempItemID) {
			return XTree_GetTemplateObject(getEleHandle(), nID, nTempItemID);
		}

		//@��ע ��ȡ��ǰ��������ģ��ʵ��,�����б�������һ����.  
		//@���� hXCGUI ������, UIԪ�ؾ������״������..
		//@���� �ɹ�������ID, ���򷵻�@ref XC_ID_ERROR.
		//@����  ȡ����������()
		int GetItemIDFromHXCGUI(HXCGUI hXCGUI) {
			return XTree_GetItemIDFromHXCGUI(getEleHandle(), hXCGUI);
		}


		//@��ע �����Ƿ����ָ��״̬����ı���.  
		//@���� nFlags ��־λ @ref list_drawItemBk_flag_.
		//@����  ��������Ʊ�־()
		void SetDrawItemBkFlags(int nFlags) {
			XTree_SetDrawItemBkFlags(getEleHandle(), nFlags);
		}

		//@���� color ��ɫֵ, ��ʹ�ú�: RGBA()
		//@����  �÷ָ�����ɫ()
		void SetSplitLineColor(COLORREF color) {
			XTree_SetSplitLineColor(getEleHandle(), color);
		}

		//@��ע �������û�����.  
		//@���� nID ��ID.
		//@���� nUserData �û�����.
		//@���� �ɹ�����TRUE���򷵻�FALSE.
		//@����  ��������()
		bool SetItemData(int nID, vint nUserData) {
			return XTree_SetItemData(getEleHandle(), nID, nUserData);
		}

		//@��ע ��ȡ���û�����.  
		//@���� nID ��ID.
		//@���� ���û�����.
		//@����  ȡ������()
		vint GetItemData(int nID) {
			return XTree_GetItemData(getEleHandle(), nID);
		}

		//@��ע ����ѡ����.  
		//@���� nID ��ID.
		//@���� �ɹ�����TRUE���򷵻�FALSE.
		//@����  ��ѡ����()
		bool SetSelectItem(int nID) {
			return XTree_SetSelectItem(getEleHandle(), nID);
		}

		//@��ע ��ȡѡ����.  
		//@���� ��ID.
		//@����  ȡѡ����()
		int GetSelectItem() {
			return XTree_GetSelectItem(getEleHandle());
		}

		//@��ע ������ͼ��ָ����ɼ�  
		//@���� nID ������.
		//@����  ����ָ����()
		void VisibleItem(int nID) {
			XTree_VisibleItem(getEleHandle(), nID);
		}

		//@��ע �ж����Ƿ�չ��.  
		//@���� nID ��ID.
		//@���� ���չ������TRUE���򷵻�FALSE.
		//@����  �Ƿ�չ��()
		bool IsExpand(int nID) {
			return XTree_IsExpand(getEleHandle(), nID);
		}

		//@��ע չ����.  
		//@���� nID ��ID.
		//@���� bExpand �Ƿ�չ��.
		//@���� �ɹ�����TRUE,������Ѿ�չ����ʧ�ܷ���FALSE.
		//@����  չ����()
		bool ExpandItem(int nID, bool bExpand) {
			return XTree_ExpandItem(getEleHandle(), nID, bExpand);
		}

		//@��ע չ�����е�����.  
		//@���� nID ��ID.
		//@���� bExpand �Ƿ�չ��.
		//@���� �ɹ�����TRUE,ʧ�ܷ���FALSE.
		//@����  չ��ȫ������()
		bool ExpandAllChildItem(int nID, bool bExpand) {
			return XTree_ExpandAllChildItem(getEleHandle(), nID, bExpand);
		}

		//@��ע ��������������.  
		//@���� pPt �����.
		//@���� ��ID.
		//@����  ���Ե����()
		int HitTest(POINT* pPt) {
			return XTree_HitTest(getEleHandle(), pPt);
		}

		//@��ע ��������������,�Զ���ӹ�����ͼƫ������.  
		//@���� pPt �����.
		//@���� ��ID.
		//@����  ���Ե������չ()
		int HitTestOffset(POINT* pPt) {
			return XTree_HitTestOffset(getEleHandle(), pPt);
		}

		//@��ע ��ȡ��һ������.  
		//@���� nID ��ID.
		//@���� ������ID,ʧ�ܷ���XC_ID_ERROR.
		//@����  ȡ��һ������()
		int GetFirstChildItem(int nID) {
			return XTree_GetFirstChildItem(getEleHandle(), nID);
		}

		//@��ע ��ȡĩβ����.  
		//@���� nID ��ID.
		//@���� ����ĩβ����ID,ʧ�ܷ���XC_ID_ERROR.
		//@����  ȡĩβ����()
		int GetEndChildItem(int nID) {
			return XTree_GetEndChildItem(getEleHandle(), nID);
		}

		//@��ע ��ȡ��һ���ֵ���.  
		//@���� nID ��ID.
		//@���� ������һ���ֵ���ID, ʧ�ܷ��� XC_ID_ERROR.
		//@����  ȡ��һ���ֵ���()
		int GetPrevSiblingItem(int nID) {
			return XTree_GetPrevSiblingItem(getEleHandle(), nID);
		}

		//@��ע ��ȡ��һ���ֵ���.  
		//@���� nID ��ID.
		//@���� ������һ���ֵ���ID.
		//@����  ȡ��һ���ֵ���()
		int GetNextSiblingItem(int nID) {
			return XTree_GetNextSiblingItem(getEleHandle(), nID);
		}

		//@��ע ��ȡ����.  
		//@���� nID ��ID.
		//@���� ���ظ���ID,���󷵻�-1.
		//@����  ȡ����()
		int GetParentItem(int nID) {
			return XTree_GetParentItem(getEleHandle(), nID);
		}

		//@��ע �������������������ݰ󶨵���ģ���ʼ����������������.  
		//@���� �������������.
		//@����  ��������������()
		HXCGUI CreateAdapter() {
			return XTree_CreateAdapter(getEleHandle());
		}

		//@��ע ������������.  
		//@���� hAdapter �������������, XAdTree.
		//@����  ������������()
		void BindAdapter(HXCGUI hAdapter) {
			XTree_BindAdapter(getEleHandle(), hAdapter);
		}

		//@��ע ��ȡ����������.  
		//@���� �����������������.
		//@����  ȡ������Ƶ��()
		HXCGUI GetAdapter() {
			return XTree_GetAdapter(getEleHandle());
		}

		//@��ע �޸����ݺ�,ˢ��������ģ��,�Ա�������ݵ�ģ��(�����ɼ�).  
		//@����  ˢ������()
		void RefreshData() {
			XTree_RefreshData(getEleHandle());
		}

		//@��ע �޸����ݺ�,ˢ��ָ����ģ��,�Ա�������ݵ�ģ��(�����ǰ��ɼ�).  
		//@���� nID ��ID.
		//@����  ˢ��ָ����()
		void RefreshItem(int nID) {
			XTree_RefreshItem(getEleHandle(), nID);
		}

		//@��ע ����������С.  
		//@���� nWidth �������.
		//@����  ������()
		void SetIndentation(int nWidth) {
			XTree_SetIndentation(getEleHandle(), nWidth);
		}

		//@��ע ��ȡ����ֵ.  
		//@���� ��������ֵ��С.
		//@����  ȡ����()
		int GetIndentation() {
			return XTree_GetIndentation(getEleHandle());
		}

		//@��ע ������Ĭ�ϸ߶�.  
		//@���� nHeight �߶�.
		//@���� nSelHeight ѡ��ʱ�߶�.
		//@����  ����Ĭ�ϸ߶�()
		void SetItemHeightDefault(int nHeight, int nSelHeight) {
			XTree_SetItemHeightDefault(getEleHandle(), nHeight, nSelHeight);
		}

		//@��ע ��ȡ��Ĭ�ϸ߶�.  
		//@���� pHeight ���շ��ظ߶�.
		//@���� pSelHeight ���շ���ֵ,����ѡ��ʱ�ĸ߶�.
		//@����  ȡ��Ĭ�ϸ߶�()
		void GetItemHeightDefault(int* pHeight, int* pSelHeight) {
			XTree_GetItemHeightDefault(getEleHandle(), pHeight, pSelHeight);
		}

		//@��ע ����ָ����߶�.  
		//@���� nID ��ID.
		//@���� nHeight �߶�.
		//@���� nSelHeight ѡ��ʱ�߶�.
		//@����  ����߶�()
		void SetItemHeight(int nID, int nHeight, int nSelHeight) {
			XTree_SetItemHeight(getEleHandle(), nID, nHeight, nSelHeight);
		}

		//@��ע ��ȡָ����߶�.  
		//@���� nID ��ID.
		//@���� pHeight ���շ��ظ߶�.
		//@���� pSelHeight ���շ���ֵ,����ѡ��ʱ�ĸ߶�.
		//@����  ȡ��߶�()
		void GetItemHeight(int nID, int* pHeight, int* pSelHeight) {
			XTree_GetItemHeight(getEleHandle(), nID, pHeight, pSelHeight);
		}

		//@��ע �����м����С.  
		//@���� nSpace �м����С.
		//@����  ���м��()
		void SetRowSpace(int nSpace) {
			XTree_SetRowSpace(getEleHandle(), nSpace);
		}

		//@��ע ��ȡ�м���С.  
		//@���� �����м���С.
		//@����  ȡ�м��()
		int GetRowSpace() {
			return XTree_GetRowSpace(getEleHandle());
		}

		//@��ע �ƶ����λ��.  
		//@���� nMoveItem Ҫ�ƶ�����ID.
		//@���� nDestItem Ŀ����ID, ����λ��.
		//@���� nFlag 0:Ŀ��ǰ��, 1:Ŀ�����, 2:Ŀ��������, 3:Ŀ������β
		//@���� �ɹ�����TRUE���򷵻�FALSE.
		//@����  �ƶ���()
		bool MoveItem(int nMoveItem, int nDestItem, int nFlag) {
			return XTree_MoveItem(getEleHandle(), nMoveItem, nDestItem, nFlag);
		}


		//@���� value.c_str() 
		//@���� nParentID 
		//@���� insertID 
		//@����  �������ı�()
		int InsertItemText(const std::wstring& value, int nParentID = XC_ID_ROOT, int insertID = XC_ID_LAST) {
			return XTree_InsertItemText(getEleHandle(), value.c_str(), nParentID, insertID);
		}

		//@���� name.c_str() 
		//@���� value.c_str() 
		//@���� nParentID 
		//@���� insertID 
		//@����  �������ı���չ()
		int InsertItemTextEx(const std::wstring& name, const std::wstring& value, int nParentID = XC_ID_ROOT, int insertID = XC_ID_LAST) {
			return XTree_InsertItemTextEx(getEleHandle(), name.c_str(), value.c_str(), nParentID, insertID);
		}

		//@���� hImage 
		//@���� nParentID 
		//@���� insertID 
		//@����  ������ͼƬ()
		int InsertItemImage(HIMAGE hImage, int nParentID = XC_ID_ROOT, int insertID = XC_ID_LAST) {
			return XTree_InsertItemImage(getEleHandle(), hImage, nParentID, insertID);
		}

		//@���� name.c_str() 
		//@���� hImage 
		//@���� nParentID 
		//@���� insertID 
		//@����  ������ͼƬ��չ()
		int InsertItemImageEx(const std::wstring& name, HIMAGE hImage, int nParentID = XC_ID_ROOT, int insertID = XC_ID_LAST) {
			return XTree_InsertItemImageEx(getEleHandle(), name.c_str(), hImage, nParentID, insertID);
		}

		//@����  ȡ������()
		int GetCount() {
			return XTree_GetCount(getEleHandle());
		}

		//@����  ȡ������()
		int GetCountColumn() {
			return XTree_GetCountColumn(getEleHandle());
		}

		//@���� nID 
		//@���� iColumn 
		//@���� value.c_str() 
		//@���� �ɹ�����TRUE,���򷵻�FALSE
		//@����  �����ı�()
		bool SetItemText(int nID, int iColumn, const std::wstring& value) {
			return XTree_SetItemText(getEleHandle(), nID, iColumn, value.c_str());
		}

		//@���� nID 
		//@���� name.c_str() 
		//@���� value.c_str() 
		//@���� �ɹ�����TRUE,���򷵻�FALSE
		//@����  �����ı���չ()
		bool SetItemTextEx(int nID, const std::wstring& name, const std::wstring& value) {
			return XTree_SetItemTextEx(getEleHandle(), nID, name.c_str(), value.c_str());
		}

		//@���� nID 
		//@���� iColumn 
		//@���� hImage 
		//@���� �ɹ�����TRUE,���򷵻�FALSE
		//@����  ����ͼƬ()
		bool SetItemImage(int nID, int iColumn, HIMAGE hImage) {
			return XTree_SetItemImage(getEleHandle(), nID, iColumn, hImage);
		}

		//@���� nID 
		//@���� name.c_str() 
		//@���� hImage 
		//@���� �ɹ�����TRUE,���򷵻�FALSE
		//@����  ����ͼƬ��չ()
		bool SetItemImageEx(int nID, const std::wstring& name, HIMAGE hImage) {
			return XTree_SetItemImageEx(getEleHandle(), nID, name.c_str(), hImage);
		}

		//@���� nID 
		//@���� iColumn 
		//@���� �����ı�����
		//@����  ȡ���ı�()
		std::wstring GetItemText(int nID, int iColumn) {
			auto pText =  XTree_GetItemText(getEleHandle(), nID, iColumn);
			if (!pText) return L"";
			return pText;
		}

		//@���� nID 
		//@���� name.c_str() 
		//@���� �����ı�����
		//@����  ȡ���ı���չ()
		std::wstring GetItemTextEx(int nID, const std::wstring& name) {
			auto pText = XTree_GetItemTextEx(getEleHandle(), nID, name.c_str());
			if (!pText) return L"";
			return pText;
		}

		//@���� nID 
		//@���� iColumn 
		//@����  ȡ��ͼƬ()
		HIMAGE GetItemImage(int nID, int iColumn) {
			return XTree_GetItemImage(getEleHandle(), nID, iColumn);
		}

		//@���� nID 
		//@���� name.c_str() 
		//@����  ȡ��ͼƬ��չ()
		HIMAGE GetItemImageEx(int nID, const std::wstring& name) {
			return XTree_GetItemImageEx(getEleHandle(), nID, name.c_str());
		}

		//@��ע XAdTree_DeleteItem  
		//@���� nID 
		//@���� �ɹ�����TRUE,���򷵻�FALSE
		//@����  ɾ����()
		bool DeleteItem(int nID) {
			return XTree_DeleteItem(getEleHandle(), nID);
		}

		//@��ע XAdTree_DeleteItemAll  
		//@����  ɾ��ȫ����()
		void DeleteItemAll() {
			XTree_DeleteItemAll(getEleHandle());
		}

		//@��ע XAdTree_DeleteColumnAll  
		//@����  ɾ����ȫ��()
		void DeleteColumnAll() {
			XTree_DeleteColumnAll(getEleHandle());
		}

	};
}