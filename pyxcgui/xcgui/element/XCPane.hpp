#pragma once
#include "pch.h"
#include "xcgui/XCElement.hpp"

namespace xcgui {

	class XCPane : public XCElement
	{
	public:
		XCPane(HXCGUI handle)
		{
			m_handle = handle;
		}

		XCPane() = default;

		XCPane(const std::wstring& name, int width, int height, HWINDOW parent) {
			m_handle = XPane_Create(name.c_str(), width, height, parent);
		}

		//@��ע ���ô�����ͼԪ��.  
		//@���� hView ����ͼԪ��.
		//@����  ����ͼ()
		void SetView(HELE hView) {
			XPane_SetView(getEleHandle(), hView);
		}

		//@��ע ���ñ����ı�.  
		//@���� pTitle �ı�����.
		//@����  �ñ���()
		void SetTitle(const std::wstring& title) {
			XPane_SetTitle(getEleHandle(), (wchar_t*)title.c_str());
		}

		//@��ע ��ȡ�����ı�.  
		//@���� �����ı�����
		//@����  ȡ����()
		std::wstring GetTitle() {
			auto pTitle = XPane_GetTitle(getEleHandle());
			if (!pTitle) return L"";
			return pTitle;
		}

		//@��ע ���ñ������߶�.  
		//@���� nHeight �߶�.
		//@����  �ñ������߶�()
		void SetCaptionHeight(int nHeight) {
			XPane_SetCaptionHeight(getEleHandle(), nHeight);
		}

		//@��ע ��ȡ�������߶�.  
		//@���� ���ر������߶�.
		//@����  ȡ�������߶�()
		int GetCaptionHeight() {
			return XPane_GetCaptionHeight(getEleHandle());
		}

		//@��ע �жϴ����Ƿ���ʾ.  
		//@���� �����ʾ����TRUE���򷵻�FALSE.
		//@����  �Ƿ���ʾ()
		bool IsShowPane() {
			return XPane_IsShowPane(getEleHandle());
		}

		//@��ע �жϴ����Ƿ񼤻�, ��Ϊ���Աʱ��Ч
		//@���� ���Ϊ��������ʾ���TRUE,���򷵻�FALSE
		//@����  �Ƿ񼤻�()
		bool IsGroupActivate() {
			return XPane_IsGroupActivate(getEleHandle());
		}

		//@��ע ���ô����С.  
		//@���� nWidth ���.
		//@���� nHeight �߶�.
		//@����  �ô�С()
		void SetSize(int nWidth, int nHeight) {
			XPane_SetSize(getEleHandle(), nWidth, nHeight);
		}

		//@��ע ��ȡ����ͣ��״̬.  
		//@���� ����״̬��ʶ @ref pane_state_.
		//@����  ȡ״̬()
		pane_state_ GetState() {
			return XPane_GetState(getEleHandle());
		}

		//@��ע ��ȡ������ͼ����.  
		//@���� pRect ���շ��ص�����ֵ.
		//@����  ȡ��ͼ����()
		void GetViewRect(RECT* pRect) {
			XPane_GetViewRect(getEleHandle(), pRect);
		}

		//@��ע ���ش���.  
		//@���� bGroupDelay ��Ϊ�������Աʱ, �ӳٴ��������Ա������л�
		//@����  ����()
		void HidePane(bool bGroupDelay = false) {
			XPane_HidePane(getEleHandle(), bGroupDelay);
		}

		//@��ע ��ʾ����.  
		//@���� bGroupActivate ����Ǵ������Ա,��ô�������л���ǰ����Ϊ��ʾ״̬
		//@����  ��ʾ()
		void ShowPane(bool bGroupActivate) {
			XPane_ShowPane(getEleHandle(), bGroupActivate);
		}

		//@��ע ����ͣ������ͷ.  
		//@����  ͣ��()
		void DockPane() {
			XPane_DockPane(getEleHandle());
		}

		//@��ע ��������.  
		//@����  ����()
		void LockPane() {
			XPane_LockPane(getEleHandle());
		}

		//@��ע ��������.  
		//@����  ����()
		void FloatPane() {
			XPane_FloatPane(getEleHandle());
		}

		//@��ע �ֶ����øú������ƴ���, �Ա���ƻ���˳��.  
		//@���� hDraw ͼ�λ��ƾ��.
		//@����  ����()
		void DrawPane(HDRAW hDraw) {
			XPane_DrawPane(getEleHandle(), hDraw);
		}

		//@��ע ������������Ա,����ѡ�е�ǰ����ɼ�
		//@���� �ɹ�����TRUE,���򷵻�FALSE
		//@����  ��ѡ��()
		bool SetSelect() {
			return XPane_SetSelect(getEleHandle());
		}

	};
}