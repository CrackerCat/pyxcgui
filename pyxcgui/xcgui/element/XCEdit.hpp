#pragma once
#include "pch.h"
#include "xcgui/element/XCScrollView.hpp"

namespace xcgui {

	class XCEdit : public XCScrollView
	{

	public:
		XCEdit(HELE handle)
		{

			m_handle = handle;
		}

		XCEdit() = default;

		XCEdit(int x, int y, int width, int height, HXCGUI parent = NULL) {

			m_handle = XEdit_Create(x, y, width, height, parent);
		}
		XCEdit(int x, int y, int width, int height, edit_type_ editType, HXCGUI parent = NULL) {

			m_handle = XEdit_CreateEx(x, y, width, height, editType, parent);
		}

		//@��ע �����Զ�����  
		//@���� bEnable �Ƿ�����
		//@����  �����Զ�����()
		void EnableAutoWrap(bool bEnable) {
			XEdit_EnableAutoWrap(getEleHandle(), bEnable);
		}

		//@���� bEnable �Ƿ�����
		//@����  ����ֻ��()
		void EnableReadOnly(bool bEnable) {
			XEdit_EnableReadOnly(getEleHandle(), bEnable);
		}

		//@���� bEnable 
		//@����  ���ö���()
		void EnableMultiLine(bool bEnable) {
			XEdit_EnableMultiLine(getEleHandle(), bEnable);
		}

		//@��ע ��������ģʽ(ֻ֧��Ĭ�����ͱ༭��
		//@���� bEnable �Ƿ�����
		//@����  ��������()
		void EnablePassword(bool bEnable) {
			XEdit_EnablePassword(getEleHandle(), bEnable);
		}

		//@��ע ����ý���ʱ,�Զ�ѡ����������
		//@���� bEnable �Ƿ�����
		//@����  �����Զ�ѡ��()
		void EnableAutoSelAll(bool bEnable) {
			XEdit_EnableAutoSelAll(getEleHandle(), bEnable);
		}

		//@��ע ��ʧȥ����ʱ�Զ�ȡ��ѡ��
		//@���� bEnable �Ƿ�����
		//@����  �����Զ�ȡ��ѡ��()
		void EnableAutoCancelSel(bool bEnable) {
			XEdit_EnableAutoCancelSel(getEleHandle(), bEnable);
		}

		//@���� �ɹ�����TRUE,���򷵻�FALSE
		//@����  �Ƿ�ֻ��()
		bool IsReadOnly() {
			return XEdit_IsReadOnly(getEleHandle());
		}

		//@���� �ɹ�����TRUE,���򷵻�FALSE
		//@����  �Ƿ����()
		bool IsMultiLine() {
			return XEdit_IsMultiLine(getEleHandle());
		}

		//@���� �ɹ�����TRUE,���򷵻�FALSE
		//@����  �Ƿ�����()
		bool IsPassword() {
			return XEdit_IsPassword(getEleHandle());
		}

		//@���� �ɹ�����TRUE,���򷵻�FALSE
		//@����  �Ƿ��Զ�����()
		bool IsAutoWrap() {
			return XEdit_IsAutoWrap(getEleHandle());
		}

		//@���� ���Ϊ�շ���TRUE���򷵻�FALSE.
		//@����  �Ƿ�Ϊ��()
		bool IsEmpty() {
			return XEdit_IsEmpty(getEleHandle());
		}

		//@���� iRow ������
		//@���� iCol ������
		//@���� �����ѡ�������ڷ���TRUE,���򷵻�FALSE
		//@����  �Ƿ���ѡ������()
		bool IsInSelect(int iRow, int iCol) {
			return XEdit_IsInSelect(getEleHandle(), iRow, iCol);
		}

		//@���� ���ش�����
		//@����  ȡ������()
		int GetRowCount() {
			return XEdit_GetRowCount(getEleHandle());
		}

		//@��ע �����ı�����ı�����
		//@���� �������ݽṹ
		//@����  ȡ����()
		edit_data_copy_* GetData() {
			return XEdit_GetData(getEleHandle());
		}

		//@���� pData ���ݽṹ
		//@���� styleTable ��ʽ��
		//@���� nStyleCount ��ʽ����
		//@����  �������()
		void AddData(edit_data_copy_* pData, USHORT* styleTable, int nStyleCount) {
			XEdit_AddData(getEleHandle(), pData, styleTable, nStyleCount);
		}

		//@����  �ͷ�����()
		//@���� pData ���ݽṹ
		void FreeData(edit_data_copy_* pData) {
			XEdit_FreeData(pData);
		}

		//@��ע ������Ϊ��ʱ,��ʾĬ���ı�
		//@���� pString �ı�����
		//@����  ��Ĭ���ı�()
		void SetDefaultText(const std::wstring& text) {
			XEdit_SetDefaultText(getEleHandle(), text.c_str());
		}

		//@���� color ��ɫֵ, ��ʹ�ú�: RGBA()
		//@����  ��Ĭ���ı���ɫ()
		void SetDefaultTextColor(COLORREF color) {
			XEdit_SetDefaultTextColor(getEleHandle(), color);
		}

		//@���� ch �ַ�
		//@����  �������ַ�()
		void SetPasswordCharacter(wchar_t ch) {
			XEdit_SetPasswordCharacter(getEleHandle(), ch);
		}

		//@��ע ����ģʽ����Ч
		//@���� align ���뷽ʽ @ref edit_textAlign_flag_
		//@����  ���ı�����()
		void SetTextAlign(int align) {
			XEdit_SetTextAlign(getEleHandle(), align);
		}

		//@���� nSpace �ո�����
		//@����  ��TAB�ո�()
		void SetTabSpace(int nSpace) {
			XEdit_SetTabSpace(getEleHandle(), nSpace);
		}

		//@��ע ����������;  ���������, �����������ַ�ʱʹ�ú�����, �����֧�����ĵ���������
		//@���� hFont ����
		//@����  �ú�����()
		void SetBackFont(HFONTX hFont) {
			XEdit_SetBackFont(getEleHandle(), hFont);
		}

		//@���� size �ո��С
		//@����  �ÿո��С()
		void SetSpaceSize(int size) {
			XEdit_SetSpaceSize(getEleHandle(), size);
		}

		//@���� size Ӣ���ַ�����С
		//@���� sizeZh �����ַ�����С
		//@����  ���ַ����()
		void SetCharSpaceSize(int size, int sizeZh) {
			XEdit_SetCharSpaceSize(getEleHandle(), size, sizeZh);
		}

		//@���� pString �ַ���
		//@����  ���ı�()
		void SetText(const std::wstring& text) {
			XEdit_SetText(getEleHandle(), text.c_str());
		}

		//@���� nValue ����ֵ
		//@����  ���ı�����()
		void SetTextInt(int nValue) {
			XEdit_SetTextInt(getEleHandle(), nValue);
		}

		//@��ע ���������ı�����
		//@���� pOut �����ı��ڴ�ָ��
		//@���� nOutlen �ڴ��С, �ַ�Ϊ��λ
		//@���� ����ʵ�ʽ����ı�����
		//@����  ȡ�ı�()
		std::wstring GetText(int maxSize=-1) {
			if (maxSize == -1) {
				maxSize = this->GetLength();
			}
			maxSize += 1;
			std::wstring out;
			out.resize(maxSize);
			int realLen = XEdit_GetText(getEleHandle(), (wchar_t*)out.c_str(), maxSize);
			return out.substr(0, realLen);
		}

		//@��ע ��ȡָ�����ı�����
		//@���� iRow ������
		//@���� pOut �����ı��ڴ�ָ��
		//@���� nOutlen �����ı��ڴ�鳤��,�ַ�Ϊ��λ
		//@���� ����ʵ�ʽ����ı�����
		//@����  ȡ�ı���()
		std::wstring GetTextRow(int iRow, int maxSize=-1) {
			if (maxSize == -1) {
				maxSize = GetLengthRow(iRow);
			}
			maxSize += 1;
			std::wstring out;
			out.resize(maxSize);
			int realLen = XEdit_GetTextRow(getEleHandle(), iRow, (wchar_t*)out.c_str(), maxSize); 
			return out.substr(0, realLen);
		}

		//@��ע �������ı�����
		//@���� �������ݳ���
		//@����  ȡ���ݳ���()
		int GetLength() {
			return XEdit_GetLength(getEleHandle());
		}

		//@��ע �������ı�����
		//@���� iRow ������
		//@���� �������ݳ���
		//@����  ȡ���ݳ�����()
		int GetLengthRow(int iRow) {
			return XEdit_GetLengthRow(getEleHandle(), iRow);
		}

		//@���� iRow ������
		//@���� iCol ������
		//@���� ����ָ��λ���ַ�
		//@����  ȡ�ַ�()
		wchar_t GetAt(int iRow, int iCol) {
			return XEdit_GetAt(getEleHandle(), iRow, iCol);
		}

		//@���� iRow ������
		//@���� iCol ������
		//@���� pString �ַ���
		//@����  �����ı�()
		void InsertText(int iRow, int iCol, const std::wstring& text) {
			XEdit_InsertText(getEleHandle(), iRow, iCol, text.c_str());
		}

		//@���� pString �ַ���
		//@����  ����ı�()
		void AddText(const std::wstring& text) {
			XEdit_AddText(getEleHandle(), text.c_str());
		}

		//@��ע �Զ�ˢ��UI, ֧�ֳ���/�ָ�
		//@���� pString �ַ���
		//@����  ����ı�ģ���û�����()
		void AddTextUser(const std::wstring& text) {
			XEdit_AddTextUser(getEleHandle(), text.c_str());
		}

		//@���� pString �ַ���
		//@���� iStyle ��ʽ����
		//@����  ����ı���չ()
		void AddTextEx(const std::wstring& text, int iStyle) {
			XEdit_AddTextEx(getEleHandle(), text.c_str(), iStyle);
		}

		//@��ע ����: ����, ͼƬ, UI����
		//@���� hObj ������
		//@���� ������ʽ����
		//@����  ��Ӷ���()
		int AddObject(HXCGUI hObj) {
			return XEdit_AddObject(getEleHandle(), hObj);
		}

		//@��ע ����ʽΪͼƬʱ��Ч
		//@���� iStyle ��ʽ����
		//@����  ��Ӷ������ʽ()
		void AddByStyle(int iStyle) {
			XEdit_AddByStyle(getEleHandle(), iStyle);
		}

		//@���� hFont_image_Obj ����,ͼƬ��UI����
		//@���� color ��ɫ
		//@���� bColor �Ƿ�ʹ����ɫ
		//@���� ������ʽ����
		//@����  �����ʽ()
		int AddStyle(HXCGUI hFont_image_Obj, COLORREF color, bool bColor) {
			return XEdit_AddStyle(getEleHandle(), hFont_image_Obj, color, bColor);
		}

		//@���� fontName ��������
		//@���� fontSize �����С
		//@���� fontStyle ������ʽ @ref fontStyle_
		//@���� color ��ɫ
		//@���� bColor �Ƿ�ʹ����ɫ
		//@���� ������ʽ����
		//@����  �����ʽ��չ()
		int AddStyleEx(const std::wstring& fontName, int fontSize, int fontStyle, COLORREF color, bool bColor) {
			return XEdit_AddStyleEx(getEleHandle(), fontName.c_str(), fontSize, fontStyle, color, bColor);
		}

		//@���� iStyle ��ʽ����
		//@���� hFont ������
		//@���� color ��ɫ
		//@���� bColor �Ƿ�ʹ����ɫ
		//@���� ����ɹ�����TRUE,���򷵻�FALSE
		//@����  �޸���ʽ()
		bool ModifyStyle(int iStyle, HFONTX hFont, COLORREF color, bool bColor) {
			return XEdit_ModifyStyle(getEleHandle(), iStyle, hFont, color, bColor);
		}

		//@���� iStyle ��ʽ
		//@���� ����ɹ�����TRUE,���򷵻�FALSE 
		//@����  �ͷ���ʽ()
		bool ReleaseStyle(int iStyle) {
			return XEdit_ReleaseStyle(getEleHandle(), iStyle);
		}

		//@���� iStyle ��ʽ����
		//@���� info ������ʽ��Ϣ
		//@���� �ɹ�����TRUE,���򷵻�FALSE
		//@����  ȡ��ʽ��Ϣ()
		bool GetStyleInfo(int iStyle, edit_style_info_* info) {
			return XEdit_GetStyleInfo(getEleHandle(), iStyle, info);
		}

		//@���� iStyle ��ʽ����
		//@����  �õ�ǰ��ʽ()
		void SetCurStyle(int iStyle) {
			XEdit_SetCurStyle(getEleHandle(), iStyle);
		}

		//@���� iStyle ��ʽ����
		//@����  ��ѡ���ı���ʽ()
		void SetSelectTextStyle(int iStyle) {
			XEdit_SetSelectTextStyle(getEleHandle(), iStyle);
		}

		//@���� color ��ɫ
		//@����  �ò������ɫ()
		void SetCaretColor(COLORREF color) {
			XEdit_SetCaretColor(getEleHandle(), color);
		}

		//@���� nWidth ���
		//@����  �ò�������()
		void SetCaretWidth(int nWidth) {
			XEdit_SetCaretWidth(getEleHandle(), nWidth);
		}

		//@���� color ��ɫֵ, ��ʹ�ú�: RGBA()
		//@����  ��ѡ�񱳾���ɫ()
		void SetSelectBkColor(COLORREF color) {
			XEdit_SetSelectBkColor(getEleHandle(), color);
		}

		//@���� nHeight �и�
		//@����  ��Ĭ���и�()
		void SetRowHeight(int nHeight) {
			XEdit_SetRowHeight(getEleHandle(), nHeight);
		}

		//@��ע ������Ϊ edit_type_richedit ֧��ָ����ͬ�и�
		//@���� iRow ������
		//@���� nHeight �߶�
		//@����  ��ָ���и߶�()
		void SetRowHeightEx(int iRow, int nHeight) {
			XEdit_SetRowHeightEx(getEleHandle(), iRow, nHeight);
		}

		//@��ע �����м����С,����ģʽ��Ч
		//@���� nSpace �м����С
		//@����  ���м��()
		void SetRowSpace(int nSpace) {
			XEdit_SetRowSpace(getEleHandle(), nSpace);
		}

		//@���� pos λ��
		//@���� ����ɹ�����TRUE,���򷵻�FALSE
		//@����  �õ�ǰλ��()
		bool SetCurPos(int pos) {
			return XEdit_SetCurPos(getEleHandle(), pos);
		}

		//@���� ����λ��
		//@����  ȡ��ǰλ��()
		int GetCurPos() {
			return XEdit_GetCurPos(getEleHandle());
		}

		//@���� iRow ������
		//@���� iCol ������
		//@����  �õ�ǰλ����չ()
		void SetCurPosEx(int iRow, int iCol) {
			XEdit_SetCurPosEx(getEleHandle(), iRow, iCol);
		}

		//@���� iRow ����������
		//@���� iCol ����������
		//@����  ȡ��ǰλ����չ()
		void GetCurPosEx(int* iRow, int* iCol) {
			XEdit_GetCurPosEx(getEleHandle(), iRow, iCol);
		}

		//@���� ����������
		//@����  ȡ��ǰ��()
		int GetCurRow() {
			return XEdit_GetCurRow(getEleHandle());
		}

		//@���� ����������
		//@����  ȡ��ǰ��()
		int GetCurCol() {
			return XEdit_GetCurCol(getEleHandle());
		}

		//@����  �ƶ���ĩβ()
		void MoveEnd() {
			XEdit_MoveEnd(getEleHandle());
		}

		//@���� iRow ������
		//@���� iCol ������
		//@���� pOut ���շ��������
		//@����  ȡ�����()
		void GetPoint(int iRow, int iCol, POINT* pOut) {
			XEdit_GetPoint(getEleHandle(), iRow, iCol, pOut);
		}

		//@��ע ��ͼ�Զ���������ǰ�����λ��
		//@���� �ɹ�����TRUE,���򷵻�FALSE
		//@����  �Զ�����()
		bool AutoScroll() {
			return XEdit_AutoScroll(getEleHandle());
		}

		//@��ע ��ͼ�Զ�������ָ��λ��
		//@���� iRow ������
		//@���� iCol ������
		//@���� �ɹ�����TRUE,���򷵻�FALSE
		//@����  �Զ�������չ()
		bool AutoScrollEx(int iRow, int iCol) {
			return XEdit_AutoScrollEx(getEleHandle(), iRow, iCol);
		}

		//@��ע ת��λ�õ㵽����
		//@���� iPos λ�õ�
		//@���� pInfo ����
		//@����  λ�õ�����()
		void PosToRowCol(int iPos, position_* pInfo) {
			XEdit_PosToRowCol(getEleHandle(), iPos, pInfo);
		}

		//@���� iRow ������
		//@���� iCol ������
		//@���� λ�õ�
		//@����  ���е�λ��()
		int RowColToPos(int iRow, int iCol) {
			return XEdit_RowColToPos(getEleHandle(), iRow, iCol);
		}

		//@���� �ɹ�����TRUE,���򷵻�FALSE
		//@����  ѡ��ȫ��()
		bool SelectAll() {
			return XEdit_SelectAll(getEleHandle());
		}

		//@���� �ɹ�����TRUE,���򷵻�FALSE
		//@����  ȡ��ѡ��()
		bool CancelSelect() {
			return XEdit_CancelSelect(getEleHandle());
		}

		//@���� �ɹ�����TRUE,���򷵻�FALSE
		//@����  ɾ��ѡ������()
		bool DeleteSelect() {
			return XEdit_DeleteSelect(getEleHandle());
		}

		//@���� iStartRow ��ʼ������
		//@���� iStartCol ��ʼ��������
		//@���� iEndRow ����������
		//@���� iEndCol ������������
		//@���� �ɹ�����TRUE,���򷵻�FALSE
		//@����  ��ѡ��()
		bool SetSelect(int iStartRow, int iStartCol, int iEndRow, int iEndCol) {
			return XEdit_SetSelect(getEleHandle(), iStartRow, iStartCol, iEndRow, iEndCol);
		}

		//@��ע ���������ı�����
		//@���� pOut ���շ����ı�����
		//@���� nOutLen �����ڴ��С,�ַ�Ϊ��λ
		//@���� ���ؽ����ı�����ʵ�ʳ���
		//@����  ȡѡ���ı�()
		std::wstring GetSelectText(int maxSize=-1) {
			std::wstring out;
			if (maxSize == -1) {
				maxSize = GetSelectTextLength();
			}
			maxSize += 1;
			out.resize(maxSize);
			auto realLen = XEdit_GetSelectText(getEleHandle(), (wchar_t*)out.c_str(), out.size());
			return out.substr(0, realLen);
		}

		//@��ע ���������ı�����
		//@���� �����ı����ݳ���
		//@����  ȡѡ���ı�����()
		int GetSelectTextLength() {
			return XEdit_GetSelectTextLength(getEleHandle());
		}

		//@���� pBegin ��ʼλ��
		//@���� pEnd ����λ��
		//@���� �ɹ�����TRUE,���򷵻�FALSE
		//@����  ȡѡ�����ݷ�Χ()
		bool GetSelectRange(position_* pBegin, position_* pEnd) {
			return XEdit_GetSelectRange(getEleHandle(), pBegin, pEnd);
		}

		//@���� piStart ��ʼ������
		//@���� piEnd ����������
		//@����  ȡ�����з�Χ()
		void GetVisibleRowRange(int* piStart, int* piEnd) {
			XEdit_GetVisibleRowRange(getEleHandle(), piStart, piEnd);
		}

		//@��ע ɾ��ָ����Χ����; ɾ��ȫ����ʹ�� XEdit_SetText(hEdit,L"")
		//@���� iStartRow ��ʼ������
		//@���� iStartCol ��ʼ��������
		//@���� iEndRow ����������
		//@���� iEndCol ������������
		//@���� �ɹ�����TRUE,���򷵻�FALSE
		//@����  ɾ��()
		bool Delete(int iStartRow, int iStartCol, int iEndRow, int iEndCol) {
			return XEdit_Delete(getEleHandle(), iStartRow, iStartCol, iEndRow, iEndCol);
		}

		//@���� iRow ������
		//@���� �ɹ�����TRUE,���򷵻�FALSE
		//@����  ɾ����()
		bool DeleteRow(int iRow) {
			return XEdit_DeleteRow(getEleHandle(), iRow);
		}

		//@���� �ɹ�����TRUE,���򷵻�FALSE
		//@����  ���������()
		bool ClipboardCut() {
			return XEdit_ClipboardCut(getEleHandle());
		}

		//@���� �ɹ�����TRUE,���򷵻�FALSE
		//@����  �����帴��()
		bool ClipboardCopy() {
			return XEdit_ClipboardCopy(getEleHandle());
		}

		//@���� �ɹ�����TRUE,���򷵻�FALSE
		//@����  ������ճ��()
		bool ClipboardPaste() {
			return XEdit_ClipboardPaste(getEleHandle());
		}

		//@���� �ɹ�����TRUE,���򷵻�FALSE
		//@����  ����()
		bool Undo() {
			return XEdit_Undo(getEleHandle());
		}

		//@��ע �ָ�/����
		//@���� �ɹ�����TRUE,���򷵻�FALSE
		//@����  �ָ�()
		bool Redo() {
			return XEdit_Redo(getEleHandle());
		}

		//@��ע ��ǰ�п�ʼ
		//@���� hImageAvatar ͷ��
		//@���� hImageBubble ���ݱ���
		//@���� nFlag ��־ @ref chat_flag_
		//@����  ������ݿ�ʼ()
		void AddChatBegin(HIMAGE hImageAvatar, HIMAGE hImageBubble, int nFlag) {
			XEdit_AddChatBegin(getEleHandle(), hImageAvatar, hImageBubble, nFlag);
		}

		//@��ע ��ǰ�н���
		//@����  ������ݽ���()
		void AddChatEnd() {
			XEdit_AddChatEnd(getEleHandle());
		}

		//@��ע ��������������������
		//@���� nIndentation ����ֵ
		//@����  ����������()
		void SetChatIndentation(int nIndentation) {
			XEdit_SetChatIndentation(getEleHandle(), nIndentation);
		}

	};
}