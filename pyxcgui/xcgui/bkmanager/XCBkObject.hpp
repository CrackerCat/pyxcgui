#pragma once
#include "pch.h"
#include "xcgui/XCObject.hpp"
#include "xcgui/XCFont.hpp"
#include "xcgui/XCImage.hpp"

namespace xcgui {

	class XCBkObject
	{
	public:
		XCBkObject()
			:m_handle(0) 
		{

		}
		XCBkObject(vint handle) {
			m_handle = handle;
		}

		XCBkObject(HXCGUI handle)
		{
			m_handle = (vint)handle;
		}
		
		virtual ~XCBkObject() = default;

		// ��������_������
		void SetMargin(int left, int top, int right, int bottom) {
			XBkObj_SetMargin(m_handle, left, top, right, bottom);
		}

		// ��������_�ö���  ���뷽ʽ @ref bkObject_align_flag_
		void SetAlign(int nFlags) {
			XBkObj_SetAlign(m_handle, nFlags);
		}

		// ��������_��ͼƬ
		void SetImage(const XCImage& image) {
			XBkObj_SetImage(m_handle, image.getImageHandle());
		}

		// ��������_����ת
		void SetRotate(float angle) {
			XBkObj_SetRotate(m_handle, angle);
		}

		// ��������_�������ɫ
		void SetFillColor(COLORREF color)
		{
			XBkObj_SetFillColor(m_handle, color);
		}

		// ��������_�ñ߿���
		void SetBorderWidth(int width) {
			XBkObj_SetBorderWidth(m_handle, width);
		}

		// ��������_�ñ߿���ɫ
		void SetBorderColor(COLORREF color) {
			XBkObj_SetBorderColor(m_handle, color);
		}

		// ��������_�þ���Բ��
		void SetRectRoundAngle(int leftTop, int leftBottom, int rightTop, int rightBottom) {
			XBkObj_SetRectRoundAngle(m_handle, leftTop, leftBottom, rightTop, rightBottom);
		}

		// ��������_�������
		void EnableFill(bool bEnable) {
			XBkObj_EnableFill(m_handle, bEnable);
		}

		// ��������_���ñ߿�
		void EnableBorder(bool bEnable) {
			XBkObj_EnableBorder(m_handle, bEnable);
		}

		// ��������_���ı�
		void SetText(const std::wstring& text) {
			XBkObj_SetText(m_handle, text.c_str());
		}

		// ��������_������
		void SetFont(HFONTX hFont) {
			XBkObj_SetFont(m_handle, hFont);
		}

		// ��������_���ı�����
		void SetTextAlign(int align) {
			XBkObj_SetTextAlign(m_handle, align);
		}

		// ��������_ȡ����
		void GetMargin(marginSize_* pMargin) {
			XBkObj_GetMargin(m_handle, pMargin);
		}

		// ��������_ȡ���� ���ض����ʶ @ref bkObject_align_flag_
		int GetAlign() {
			return XBkObj_GetAlign(m_handle);
		}

		// ��������_ȡͼƬ
		HIMAGE GetImage() {
			return XBkObj_GetImage(m_handle);
		}

		// ��������_ȡ��ת�Ƕ�
		int GetRotate() {
			return XBkObj_GetRotate(m_handle);
		}

		// ��������_ȡ���ɫ
		COLORREF GetFillColor() {
			return XBkObj_GetFillColor(m_handle);
		}

		// ��������_ȡ�߿�ɫ
		COLORREF GetBorderColor() {
			return XBkObj_GetBorderColor(m_handle);
		}

		// ��������_ȡ�߿���
		int GetBorderWidth() {
			return XBkObj_GetBorderWidth(m_handle);
		}

		//��������_ȡ����Բ��
		void GetRectRoundAngle(RECT* pRect) {
			XBkObj_GetRectRoundAngle(m_handle, pRect);
		}

		// ��������_�Ƿ����
		bool IsFill() {
			return XBkObj_IsFill(m_handle);
		}

		// ��������_�Ƿ�߿�
		bool IsBorder() {
			return XBkObj_IsBorder(m_handle);
		}

		// ��������_ȡ�ı�
		std::wstring GetText() {
			auto pText = XBkObj_GetText(m_handle);
			if (!pText) {
				return L"";
			}
			return pText;
		}

		// ��������_ȡ����
		HFONTX GetFont() {
			return XBkObj_GetFont(m_handle);
		}

		// ��������_ȡ�ı�����, �����ı����뷽ʽ @ref textFormatFlag_ 
		int GetTextAlign() {
			return XBkObj_GetTextAlign(m_handle);
		}

		vint GetId() {
			return m_handle;
		}

	protected:
		vint m_handle;
	};
}