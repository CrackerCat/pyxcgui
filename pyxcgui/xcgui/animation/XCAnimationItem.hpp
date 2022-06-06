#pragma once
#include "pch.h"
#include "xcgui/XCObject.hpp"

namespace xcgui {


	class XCAnimationItem : public XCObject
	{

	public:
		XCAnimationItem(HXCGUI handle)
		{
			m_handle = handle;
		}

		XCAnimationItem() = default;

		//@���� hAnimationItem ��������
		//@���� bEnable �Ƿ�����
		//@���� ������_�����Զ�����()
		void EnableAutoDestroy(bool bEnable) {
			XAnimaItem_EnableAutoDestroy(m_handle, bEnable);
		}

		//@��ע ����������ɺ��Զ��ͷ�
		//@���� hAnimationItem ��������
		//@���� bEnable �Ƿ�����
		//@���� ������_��������ͷ�()
		void EnableCompleteRelease(bool bEnable) {
			XAnimaItem_EnableCompleteRelease(m_handle, bEnable);
		}


		//@���� hAnimationItem ��������
		//@���� callback �ص�����
		//@���� ������_�ûص�()
		void SetCallback(funAnimationItem callback) {
			XAnimaItem_SetCallback(m_handle, callback);
		}


		//@���� hAnimationItem ��������
		//@���� nUserData �û�����
		//@���� ������_���û�����()
		void SetUserData(vint nUserData) {
			XAnimaItem_SetUserData(m_handle, nUserData);
		}

		//@���� hAnimationItem ��������
		//@���� �����û�����
		//@���� ������_ȡ�û�����()
		vint GetUserData() {
			XAnimaItem_GetUserData(m_handle);
		}

		//@��ע ������ת���ĵ�����
		//@���� hAnimationRotate ������ת����
		//@���� x ����X
		//@���� y ����Y
		//@���� bOffset true:������������ĵ�ƫ��, false:��������
		//@���� ����ɹ�����true,���򷵻�false
		//@���� ������ת_������()
		void RotateSetCenter(float x, float y, bool bOffset = false) {
			XAnimaRotate_SetCenter(m_handle, x, y, bOffset);
		}


		//@��ע �����������, ȷ�����췽��
		//@���� hAnimationScale ������������
		//@���� position λ��
		//@���� ����ɹ�����true,���򷵻�false
		//@���� ��������_������λ��()
		void ScaleSetPosition(position_flag_ position) {
			XAnimaScale_SetPosition(m_handle, position);
		}


		//@��ע �˽ӿڿɶ�������x���ƶ���y���ƶ�
		//@���� hAnimationMove �����ƶ�����
		//@���� flags @ref animation_move_x : X���ƶ�, @ref animation_move_y : Y���ƶ�, �����ʹ��, @ref animation_move_
		//@���� �����ƶ�_�ñ�ʶ()
		void MoveSetFlag(int flags) {
			return XAnimaMove_SetFlag(m_handle, flags);
		}


	};
}