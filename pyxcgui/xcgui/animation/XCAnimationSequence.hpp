#pragma once
#include "pch.h"
#include "XCAnimation.hpp"

namespace xcgui {


	class XCAnimationSequence : public XCAnimation
	{

	public:
		XCAnimationSequence(HXCGUI handle)
		{
			m_handle = handle;
		}

		XCAnimationSequence() = default;

		XCAnimationSequence(HXCGUI objectHandle, int nLoopCount) {
			m_objectHandle = objectHandle;
			m_handle = XAnima_Create(objectHandle, nLoopCount);
		}

		//@��ע �ƶ���Ŀ��λ��, Ĭ����UI�������ĵ�Ϊ������ʽ,������������λ
		//@���� hSequence �������о��
		//@���� duration ����ʱ��
		//@���� x �յ�λ��X(�������Ͻ�����)
		//@���� y �յ�λ��Y(�������Ͻ�����)
		//@���� nLoopCount ����ѭ������, 0:����ѭ��
		//@���� ease_flag ������ʶ @ref ease_flag_
		//@���� bGoBack �Ƿ񷵻�; �����ú�:���������,  ���->�յ�->���
		//@���� ���ض�������
		//@���� ����_�ƶ�()
		HXCGUI Move(UINT duration, float x, float y, int nLoopCount = 1, int ease_flag = 0, bool bGoBack = false) {
			return XAnima_Move(m_handle, duration, x, y, nLoopCount, ease_flag, bGoBack);
		}


		//@��ע ��ָ��λ���ƶ���Ŀ��λ��, Ĭ����UI�������ĵ�Ϊ������ʽ,������������λ
		//@���� hSequence �������о��
		//@���� duration ����ʱ��
		//@���� from_x ���λ��X(�������Ͻ�����)
		//@���� from_y ���λ��Y(�������Ͻ�����)
		//@���� to_x �յ�λ��X(�������Ͻ�����)
		//@���� to_y �յ�λ��Y(�������Ͻ�����)
		//@���� nLoopCount ����ѭ������, 0:����ѭ��
		//@���� ease_flag ������ʶ @ref ease_flag_
		//@���� bGoBack �Ƿ񷵻�; �����ú�:���������,  ���->�յ�->���
		//@���� ���ض�������
		//@���� ����_�ƶ���չ()
		HXCGUI MoveEx(UINT duration, float from_x, float from_y, float to_x, float to_y, int nLoopCount = 1, int ease_flag = 0, bool bGoBack = false) {
			return XAnima_MoveEx(m_handle, duration, from_x, from_y, to_x, to_y, nLoopCount, ease_flag, bGoBack);
		}

		//@��ע ��ת�Ƕ�֧�ָ���ֵ, ��Ϊ�������Կ��Ʒ�����ת
		//@���� hSequence �������о��
		//@���� duration ����ʱ��
		//@���� angle �Ƕ�
		//@���� nLoopCount ����ѭ������, 0:����ѭ��
		//@���� ease_flag ������ʶ @ref ease_flag_
		//@���� bGoBack �Ƿ񷵻�; �����ú�:���������,  ���->�յ�->���
		//@���� ���ض�������
		//@���� ����_��ת()
		HXCGUI Rotate(UINT duration, float angle, int nLoopCount = 1, int ease_flag = 0, bool bGoBack = false) {
			return XAnima_Rotate(m_handle, duration, angle, nLoopCount, ease_flag, bGoBack);
		}

		//@��ע ָ�������յ�
		//@���� hSequence �������о��
		//@���� duration ����ʱ��
		//@���� from ���Ƕ�
		//@���� to �յ�Ƕ�
		//@���� nLoopCount ����ѭ������, 0:����ѭ��
		//@���� ease_flag ������ʶ @ref ease_flag_
		//@���� bGoBack �Ƿ񷵻�; �����ú�:���������,  ���->�յ�->���
		//@���� ���ض�������
		//@���� ����_��ת��չ()
		HXCGUI RotateEx(UINT duration, float from, float to, int nLoopCount = 1, int ease_flag = 0, bool bGoBack = false) {
			return XAnima_RotateEx(m_handle, duration, from, to, nLoopCount, ease_flag, bGoBack);
		}

		//@��ע ���Ŷ���   Ĭ��������Ϊ��������
		//@���� hSequence �������о��
		//@���� duration ����ʱ��
		//@���� scaleX X�����ű���
		//@���� scaleY Y�����ű���
		//@���� nLoopCount ����ѭ������, 0:����ѭ��
		//@���� ease_flag ������ʶ  @ref ease_flag_
		//@���� bGoBack �Ƿ񷵻�; �����ú�:���������,  ���->�յ�->���
		//@���� ���ض�������
		//@���� ����_����()
		HXCGUI Scale(UINT duration, float scaleX, float scaleY, int nLoopCount = 0, int ease_flag = 0, bool bGoBack = true) {
			return XAnima_Scale(m_handle, duration, scaleX, scaleY, nLoopCount, ease_flag, bGoBack);
		}

		//@��ע �޸�UI�����С,Ĭ����������
		//@���� hSequence �������о��
		//@���� duration ����ʱ��
		//@���� width ���
		//@���� height �߶�
		//@���� nLoopCount ����ѭ������, 0:����ѭ��
		//@���� ease_flag ������ʶ @ref ease_flag_
		//@���� bGoBack �Ƿ񷵻�; �����ú�:���������,  ���->�յ�->���
		//@���� ���ض�������
		//@���� ����_���Ŵ�С()
		HXCGUI ScaleSize(UINT duration, float width, float height, int nLoopCount = 1, int ease_flag = 0, bool bGoBack = false) {
			return XAnima_ScaleSize(m_handle, duration, width, height, nLoopCount, ease_flag, bGoBack);
		}

		//@���� hSequence �������о��
		//@���� duration ����ʱ��
		//@���� alpha ͸����
		//@���� nLoopCount ����ѭ������, 0:����ѭ��
		//@���� ease_flag ������ʶ @ref ease_flag_
		//@���� bGoBack �Ƿ񷵻�; �����ú�:���������,  ���->�յ�->���
		//@���� ���ض�������
		//@���� ����_͸����()
		HXCGUI Alpha(UINT duration, BYTE alpha, int nLoopCount = 0, int ease_flag = 0, bool bGoBack = false) {
			return XAnima_Alpha(m_handle, duration, alpha, nLoopCount, ease_flag, bGoBack);
		}

		//@��ע ��ָ��͸���ȵ�Ŀ��͸����
		//@���� hSequence �������о��
		//@���� duration ����ʱ��
		//@���� from_alpha ��ʼ͸����
		//@���� to_alpha ��ֹ͸����
		//@���� nLoopCount ����ѭ������, 0:����ѭ��
		//@���� ease_flag ������ʶ  @ref ease_flag_
		//@���� bGoBack �Ƿ񷵻�; �����ú�:���������,  ���->�յ�->���
		//@���� ���ض�������
		//@���� ����_͸������չ()
		HXCGUI AlphaEx(UINT duration, BYTE from_alpha, BYTE to_alpha, int nLoopCount = 0, int ease_flag = 0, bool bGoBack = false) {
			return XAnima_AlphaEx(m_handle, duration, from_alpha, to_alpha, nLoopCount, ease_flag, bGoBack);
		}

		//@���� hSequence �������о��
		//@���� duration ����ʱ��
		//@���� color ��ɫ
		//@���� nLoopCount ����ѭ������, 0:����ѭ��
		//@���� ease_flag ������ʶ @ref ease_flag_
		//@���� bGoBack �Ƿ񷵻�; �����ú�:���������,  ���->�յ�->���
		//@���� ���ض�������
		//@���� ����_��ɫ()
		HXCGUI Color(UINT duration, COLORREF color, int nLoopCount = 0, int ease_flag = 0, bool bGoBack = false) {
			return XAnima_Color(m_handle, duration, color, nLoopCount, ease_flag, bGoBack);
		}

		//@��ע ��ָ����ɫ��Ŀ����ɫ
		//@���� hSequence �������о��
		//@���� duration ����ʱ��
		//@���� from �����ɫ
		//@���� to �յ���ɫ
		//@���� nLoopCount ����ѭ������, 0:����ѭ��
		//@���� ease_flag ������ʶ @ref ease_flag_
		//@���� bGoBack �Ƿ񷵻�; �����ú�:���������,  ���->�յ�->���
		//@���� ���ض�������
		//@���� ����_��ɫ��չ()
		HXCGUI ColorEx(UINT duration, COLORREF from, COLORREF to, int nLoopCount = 0, int ease_flag = 0, bool bGoBack = false) {
			return XAnima_ColorEx(m_handle, duration, from, to, nLoopCount, ease_flag, bGoBack);
		}


		//@��ע �޸Ĳ��ֿ������
		//@���� hSequence �������о��
		//@���� duration ����ʱ��
		//@���� nType ���ֿ������
		//@���� width ���ֿ��
		//@���� nLoopCount ����ѭ������, 0:����ѭ��
		//@���� ease_flag ������ʶ  @ref ease_flag_
		//@���� bGoBack �Ƿ񷵻�; �����ú�:���������,  ���->�յ�->���
		//@���� ���ض�������
		//@���� ����_���ֿ��()
		HXCGUI LayoutWidth(UINT duration, layout_size_ nType, float width, int nLoopCount = 1, int ease_flag = 0, bool bGoBack = false) {
			return XAnima_LayoutWidth(m_handle, duration, nType, width, nLoopCount, ease_flag, bGoBack);
		}

		//@��ע �޸Ĳ��ָ߶�����
		//@���� hSequence �������о��
		//@���� duration ����ʱ��
		//@���� nType ���ָ߶�����
		//@���� height ���ָ߶�
		//@���� nLoopCount ����ѭ������, 0:����ѭ��
		//@���� ease_flag ������ʶ  @ref ease_flag_
		//@���� bGoBack �Ƿ񷵻�; �����ú�:���������,  ���->�յ�->���
		//@���� ���ض�������
		//@���� ����_���ָ߶�()
		HXCGUI LayoutHeight(UINT duration, layout_size_ nType, float height, int nLoopCount = 1, int ease_flag = 0, bool bGoBack = false) {
			return XAnima_LayoutHeight(m_handle, duration, nType, height, nLoopCount, ease_flag, bGoBack);
		}


		//@��ע �޸Ĳ��ֿ�Ⱥ͸߶�
		//@���� hSequence �������о��
		//@���� duration ����ʱ��
		//@���� nWidthType ���ֿ������, @ref layout_size_disable : ���ÿ�ȶ���
		//@���� width ���ֿ��
		//@���� nHeightType ���ָ߶�����, @ref layout_size_disable : ���ø߶ȶ���
		//@���� height ���ָ߶�
		//@���� nLoopCount ����ѭ������, 0:����ѭ��
		//@���� ease_flag ������ʶ  @ref ease_flag_
		//@���� bGoBack �Ƿ񷵻�; �����ú�:���������,  ���->�յ�->���
		//@���� ���ض�������
		//@���� ����_���ִ�С()
		HXCGUI LayoutSize(UINT duration, layout_size_ nWidthType, float width, layout_size_ nHeightType, float height, int nLoopCount = 0, int ease_flag = 0, bool bGoBack = true) {
			return XAnima_LayoutSize(m_handle, duration, nWidthType, width, nHeightType, height, nLoopCount, ease_flag, bGoBack);
		}


		//@���� hSequence �������о��
		//@���� duration ����ʱ��
		//@���� ���ض�������
		//@���� ����_�ӳ�()
		HXCGUI Delay(float duration) {
			return XAnima_Delay(m_handle, duration);
		}


		//@��ע ������Ϊһ���ն���, Ȼ���ڻص��ﴦ���Լ����㷨
		//@���� hSequence �������о��
		//@���� duration ����ʱ��
		//@���� nLoopCount ����ѭ������, 0:����ѭ��
		//@���� ease_flag ������ʶ  @ref ease_flag_
		//@���� bGoBack �Ƿ񷵻�; �����ú�:���������,  ���->�յ�->���
		//@���� ���ض�������
		//@���� ����_�ӳ���չ()
		HXCGUI DelayEx(float duration, int nLoopCount = 1, int ease_flag = 0, bool bGoBack = false) {
			return XAnima_DelayEx(m_handle, duration, nLoopCount, ease_flag, bGoBack);
		}

		//@��ע ��ʾ������UI����
		//@���� hSequence �������о��
		//@���� duration ����ʱ��
		//@���� bShow ��ʾ������
		//@���� ���ض�������
		//@���� ����_��ʾ()
		HXCGUI Show(float duration, bool bShow) {
			return XAnima_Show(m_handle, duration, bShow);
		}


		//@���� hSequence �������о��
		//@���� duration ����ʱ��
		//@���� ���ض�������
		//@���� ����_����UI����()
		HXCGUI DestroyObjectUI(float duration) {
			return XAnima_DestroyObjectUI(m_handle, duration);
		}

	};
}