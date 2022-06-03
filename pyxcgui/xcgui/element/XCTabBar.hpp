#pragma once
#include "pch.h"
#include "xcgui/XCElement.hpp"

namespace xcgui {

	class XCTabBar : public XCElement
	{
	public:
		XCTabBar(HELE handle)
		{
			m_handle = handle;
		}

		XCTabBar() = default;

		XCTabBar(int x, int y, int width, int height, HXCGUI parent = NULL) {
			m_handle = XTabBar_Create(x, y, width, height, parent);
		}

		//@��ע ���һ����ǩ.  
		//@���� name.c_str() ��ǩ�ı�����.
		//@���� ��ǩ����.
		//@����  ��ӱ�ǩ()
		int AddLabel(const std::wstring& name) {
			return XTabBar_AddLabel(getEleHandle(), name.c_str());
		}

		//@��ע ����һ����ǩ.  
		//@���� index ����λ��.
		//@���� name.c_str() ��ǩ�ı�����.
		//@���� ��ǩ����.
		//@����  ��ǩ()
		int InsertLabel(int index, const std::wstring& name) {
			return XTabBar_InsertLabel(getEleHandle(), index, name.c_str());
		}

		//@���� iSrc Դλ������
		//@���� iDest Ŀ��λ������
		//@���� �ɹ�����TRUE����FALSE.
		//@����  �ƶ���ǩ()
		bool MoveLabel(int iSrc, int iDest) {
			return XTabBar_MoveLabel(getEleHandle(), iSrc, iDest);
		}

		//@��ע ɾ��һ����ǩ.  
		//@���� index λ������.
		//@���� �ɹ�����TRUE����FALSE.
		//@����  ɾ����ǩ()
		bool DeleteLabel(int index) {
			return XTabBar_DeleteLabel(getEleHandle(), index);
		}

		//@��ע ɾ�����б�ǩ.  
		//@����  ɾ��ȫ��()
		void DeleteLabelAll() {
			XTabBar_DeleteLabelAll(getEleHandle());
		}

		//@��ע ��ȡ��ǩ��ťButton.  
		//@���� index λ������.
		//@���� ��ť���.
		//@����  ȡ��ǩ()
		HELE GetLabel(int index) {
			return XTabBar_GetLabel(getEleHandle(), index);
		}

		//@��ע ��ȡ��ǩ�Ϲرհ�ť.  
		//@���� index λ������.
		//@���� ��ť���.
		//@����  ȡ��ǩ�ϵĹرհ�ť()
		HELE GetLabelClose(int index) {
			return XTabBar_GetLabelClose(getEleHandle(), index);
		}

		//@��ע ��ȡ�������ť.  
		//@���� ���ذ�ť���.
		//@����  ȡ�������ť()
		HELE GetButtonLeft() {
			return XTabBar_GetButtonLeft(getEleHandle());
		}

		//@��ע ��ȡ�ҹ�����ť.  
		//@���� ���ذ�ť���.
		//@����  ȡ�ҹ�����ť()
		HELE GetButtonRight() {
			return XTabBar_GetButtonRight(getEleHandle());
		}

		//@���� ���ذ�ť���.
		//@����  ȡ�����˵���ť���()
		HELE GetButtonDropMenu() {
			return XTabBar_GetButtonDropMenu(getEleHandle());
		}

		//@��ע ��ȡѡ��ı�ǩ����.  
		//@���� ��ǩλ������.
		//@����  ȡ��ǰѡ��()
		int GetSelect() {
			return XTabBar_GetSelect(getEleHandle());
		}

		//@��ע ��ȡ��ǩ���, 0û�м��.  
		//@���� ��ǩ�����С.
		//@����  ȡ���()
		int GetLabelSpacing() {
			return XTabBar_GetLabelSpacing(getEleHandle());
		}

		//@��ע ��ȡ��ǩ������.  
		//@���� ��ǩ������.
		//@����  ȡ��ǩ����()
		int GetLabelCount() {
			return XTabBar_GetLabelCount(getEleHandle());
		}

		//@��ע ��ȡ��ǩ��ťλ������.  
		//@���� hLabel ��ǩ��ť���.
		//@���� �ɹ���������ֵ,���򷵻� @ref XC_ID_ERROR.
		//@����  ȡ��ǩλ������()
		int GetindexByEle(HELE hLabel) {
			return XTabBar_GetindexByEle(getEleHandle(), hLabel);
		}

		//@��ע ���ñ�ǩ���, 0û�м��.  
		//@���� spacing ��ǩ�����С.
		//@����  �ü��()
		void SetLabelSpacing(int spacing) {
			XTabBar_SetLabelSpacing(getEleHandle(), spacing);
		}

		//@��ע ����������߿�ļ����С.  
		//@���� left ��߼����С.
		//@���� top �ϱ߼����С.
		//@���� right �ұ߼����С.
		//@���� bottom �±߼����С.
		//@����  �ñ߾�()
		void SetPadding(int left, int top, int right, int bottom) {
			XTabBar_SetPadding(getEleHandle(), left, top, right, bottom);
		}

		//@��ע ����ѡ���ǩ.  
		//@���� index ��ǩλ������.
		//@����  ��ѡ��()
		void SetSelect(int index) {
			XTabBar_SetSelect(getEleHandle(), index);
		}

		//@��ע ��ť����.  
		//@����  �����()
		void SetUp() {
			XTabBar_SetUp(getEleHandle());
		}

		//@��ע �Ұ�ť����.  
		//@����  �ҹ���()
		void SetDown() {
			XTabBar_SetDown(getEleHandle());
		}

		//@��ע ƽ�̱�ǩ,ÿ����ǩ��ʾ��ͬ��С.  
		//@���� bTile �Ƿ�����.
		//@����  ����ƽ��()
		void EnableTile(bool bTile) {
			XTabBar_EnableTile(getEleHandle(), bTile);
		}

		//@���� bEnable �Ƿ�����.
		//@����  ���������˵���ť()
		void EnableDropMenu(bool bEnable) {
			XTabBar_EnableDropMenu(getEleHandle(), bEnable);
		}

		//@��ע ���ùرձ�ǩ����.  
		//@���� bEnable �Ƿ�����.
		//@����  ���ñ�ǩ���رհ�ť()
		void EnableClose(bool bEnable) {
			XTabBar_EnableClose(getEleHandle(), bEnable);
		}

		//@��ע ���ùرհ�ť��С.  
		//@���� pSize ��Сֵ, ��Ⱥ͸߶ȿ���Ϊ-1,-1����Ĭ��ֵ.
		//@����  �ùرհ�ť��С()
		void SetCloseSize(SIZE* pSize) {
			XTabBar_SetCloseSize(getEleHandle(), pSize);
		}

		//@��ע ���÷�����ť��С.  
		//@���� pSize ��Сֵ, ��Ⱥ͸߶ȿ���Ϊ-1,-1����Ĭ��ֵ.
		//@����  �ù�����ť��С()
		void SetTurnButtonSize(SIZE* pSize) {
			XTabBar_SetTurnButtonSize(getEleHandle(), pSize);
		}

		//@��ע ����ָ����ǩΪ�̶����.  
		//@���� index ����.
		//@���� nWidth ���, ���ֵΪ-1,��ô�Զ�������.
		//@����  ��ָ����ǩ�̶����()
		void SetLabelWidth(int index, int nWidth) {
			XTabBar_SetLabelWidth(getEleHandle(), index, nWidth);
		}

		//@��ע ��ʾ������ָ����ǩ.  
		//@���� index ��ǩ����.
		//@���� bShow �Ƿ���ʾ.
		//@���� �ɹ�����TRUE���򷵻�FALSE.
		//@����  ��ʾ��ǩ()
		bool ShowLabel(int index, bool bShow) {
			return XTabBar_ShowLabel(getEleHandle(), index, bShow);
		}

	};
}