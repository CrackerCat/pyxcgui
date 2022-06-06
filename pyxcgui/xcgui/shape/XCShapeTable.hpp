#pragma once
#include "pch.h"
#include "xcgui/shape/XCShape.hpp"

namespace xcgui {

	class XCShapeTable : public XCShape
	{
	public:
		XCShapeTable() = default;

		XCShapeTable(HXCGUI handle)
		{
			m_handle = handle;
		}

		XCShapeTable(int x, int y, int cx, int cy, HXCGUI hParent = NULL) {
			this->Create(x, y, cx, cy, hParent);
		}

		HXCGUI Create(int x, int y, int cx, int cy, HXCGUI hParent = NULL) {
			m_handle = XTable_Create(x, y, cx, cy, hParent);
		}

		//@���� nRow ������
		//@���� nCol ������
		//@����  ����()
		void Reset(int nRow, int nCol) {
			XTable_Reset(m_handle, nRow, nCol);
		}

		//@���� iRow ������
		//@���� iCol ������
		//@���� count ����
		//@����  �����()
		void ComboRow(int iRow, int iCol, int count) {
			XTable_ComboRow(m_handle, iRow, iCol, count);
		}

		//@���� iRow ������
		//@���� iCol ������
		//@���� count ����
		//@����  �����()
		void ComboCol(int iRow, int iCol, int count) {
			XTable_ComboCol(m_handle, iRow, iCol, count);
		}

		//@���� iCol ������
		//@���� width ���
		//@����  ���п�()
		void SetColWidth(int iCol, int width) {
			XTable_SetColWidth(m_handle, iCol, width);
		}

		//@���� iRow ������
		//@���� height �߶�
		//@����  ���и�()
		void SetRowHeight(int iRow, int height) {
			XTable_SetRowHeight(m_handle, iRow, height);
		}

		//@���� color ��ɫ
		//@����  �ñ���ɫ()
		void SetBorderColor(COLORREF color) {
			XTable_SetBorderColor(m_handle, color);
		}

		//@���� color ��ɫ
		//@����  ���ı���ɫ()
		void SetTextColor(COLORREF color) {
			XTable_SetTextColor(m_handle, color);
		}

		//@���� hFont ������
		//@����  ������()
		void SetFont(HFONTX hFont) {
			XTable_SetFont(m_handle, hFont);
		}

		//@���� leftSize ������С
		//@���� topSize ������С
		//@���� rightSize ������С
		//@���� bottomSize ������С
		//@����  ���������()
		void SetItemPadding(int leftSize, int topSize, int rightSize, int bottomSize) {
			XTable_SetItemPadding(m_handle, leftSize, topSize, rightSize, bottomSize);
		}

		//@���� iRow ������
		//@���� iCol ������
		//@���� text.c_str() �ı�
		//@����  �����ı�()
		void SetItemText(int iRow, int iCol, const std::wstring& text) {
			XTable_SetItemText(m_handle, iRow, iCol, text.c_str());
		}

		//@���� iRow ������
		//@���� iCol ������
		//@���� hFont ������
		//@����  ��������()
		void SetItemFont(int iRow, int iCol, HFONTX hFont) {
			XTable_SetItemFont(m_handle, iRow, iCol, hFont);
		}

		//@���� iRow ������
		//@���� iCol ������
		//@���� nAlign ���뷽ʽ  @ref textFormatFlag_
		//@����  �����ı�����()
		void SetItemTextAlign(int iRow, int iCol, int nAlign) {
			XTable_SetItemTextAlign(m_handle, iRow, iCol, nAlign);
		}

		//@���� iRow ������
		//@���� iCol ������
		//@���� color ��ɫ
		//@���� bColor �Ƿ�ʹ��
		//@����  �����ı�ɫ()
		void SetItemTextColor(int iRow, int iCol, COLORREF color, bool bColor) {
			XTable_SetItemTextColor(m_handle, iRow, iCol, color, bColor);
		}

		//@���� iRow ������
		//@���� iCol ������
		//@���� color ��ɫ
		//@���� bColor �Ƿ�ʹ��
		//@����  �����ɫ()
		void SetItemBkColor(int iRow, int iCol, COLORREF color, bool bColor) {
			XTable_SetItemBkColor(m_handle, iRow, iCol, color, bColor);
		}

		//@���� iRow1 ������1
		//@���� iCol1 ������1
		//@���� iRow2 ������2
		//@���� iCol2 ������2
		//@���� nFlag ��ʶ  @ref  table_line_flag_
		//@���� color ��ɫ
		//@����  ������()
		void SetItemLine(int iRow1, int iCol1, int iRow2, int iCol2, int nFlag, COLORREF color) {
			XTable_SetItemLine(m_handle, iRow1, iCol1, iRow2, iCol2, nFlag, color);
		}

		//@���� iRow ������
		//@���� iCol ������
		//@���� flag ��ʶ   @ref table_flag_
		//@����  �����ʶ()
		void SetItemFlag(int iRow, int iCol, int flag) {
			XTable_SetItemFlag(m_handle, iRow, iCol, flag);
		}

		//@���� iRow ������
		//@���� iCol ������
		//@���� pRect ���շ�������
		//@���� �ɹ�����TRUE,���򷵻�FALSE
		//@����  ȡ������()
		bool GetItemRect(int iRow, int iCol, RECT* pRect) {
			return XTable_GetItemRect(m_handle, iRow, iCol, pRect);
		}

	};
}