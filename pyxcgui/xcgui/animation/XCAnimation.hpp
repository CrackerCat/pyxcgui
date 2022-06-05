#pragma once
#include "pch.h"
#include "xcgui/XCObject.hpp"

namespace xcgui {


	class XCAnimation : public XCObject
	{

	public:
		XCAnimation(HXCGUI handle)
		{
			m_handle = handle;
		}

		XCAnimation() = default;

		XCAnimation(HXCGUI obj, int loopCount) {

			m_handle = XAnima_Create(obj, loopCount);
		}

		//@��ע ���������붯��ϵͳ������
		//@���� hAnimationEx �������л򶯻�����
		//@���� hRedrawObjectUI ������UIʱ�ػ��UI��;  UI������: ���ھ��,Ԫ�ؾ��,��״���,SVG���
		//@���� ����_����()
		void XAnima_Run(HXCGUI hRedrawObjectUI);
		//@��ע �������Ӷ���ϵͳ���Ƴ�,�����Զ�����(��������Զ�����)
		//@���� hAnimationEx �������л򶯻�����
		//@���� bEnd �Ƿ�����ִ�е��յ�
		//@���� ����_�ͷ�()
		BOOL XAnima_Release(BOOL bEnd = TRUE);
		//@��ע �Ӷ���ϵͳ���Ƴ���ָ��UI������������ж���, �����Զ�����(��������Զ�����)
		//@���� hObjectUI ָ��UI������
		//@���� bEnd �Ƿ�����ִ�е��յ�
		//@���� �����ͷŶ�������
		//@���� ����_�ͷ���չ()
		int XAnima_ReleaseEx(HXCGUI hObjectUI, BOOL bEnd);
		//@��ע ��˳��ִ�еĶ����б�
		//@���� hObjectUI �󶨵�UI����,  UI������: ���ھ��,Ԫ�ؾ��,��״���,SVG���
		//@���� nLoopCount ����ѭ������, 0:����ѭ��
		//@���� ���ؾ��
		//@���� ����_������������()
		HXCGUI XAnima_Create(HXCGUI hObjectUI, int nLoopCount = 1);
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
		HXCGUI XAnima_Move(HXCGUI hSequence, UINT duration, float x, float y, int nLoopCount = 1, int ease_flag = 0, BOOL bGoBack = FALSE);
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
		HXCGUI XAnima_MoveEx(HXCGUI hSequence, UINT duration, float from_x, float from_y, float to_x, float to_y, int nLoopCount = 1, int ease_flag = 0, BOOL bGoBack = FALSE);
		//@��ע ��ת�Ƕ�֧�ָ���ֵ, ��Ϊ�������Կ��Ʒ�����ת
		//@���� hSequence �������о��
		//@���� duration ����ʱ��
		//@���� angle �Ƕ�
		//@���� nLoopCount ����ѭ������, 0:����ѭ��
		//@���� ease_flag ������ʶ @ref ease_flag_
		//@���� bGoBack �Ƿ񷵻�; �����ú�:���������,  ���->�յ�->���
		//@���� ���ض�������
		//@���� ����_��ת()
		HXCGUI XAnima_Rotate(HXCGUI hSequence, UINT duration, float angle, int nLoopCount = 1, int ease_flag = 0, BOOL bGoBack = FALSE);
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
		HXCGUI XAnima_RotateEx(HXCGUI hSequence, UINT duration, float from, float to, int nLoopCount = 1, int ease_flag = 0, BOOL bGoBack = FALSE);
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
		HXCGUI XAnima_Scale(HXCGUI hSequence, UINT duration, float scaleX, float scaleY, int nLoopCount = 0, int ease_flag = 0, BOOL bGoBack = TRUE);
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
		HXCGUI XAnima_ScaleSize(HXCGUI hSequence, UINT duration, float width, float height, int nLoopCount = 1, int ease_flag = 0, BOOL bGoBack = FALSE);
		//@���� hSequence �������о��
		//@���� duration ����ʱ��
		//@���� alpha ͸����
		//@���� nLoopCount ����ѭ������, 0:����ѭ��
		//@���� ease_flag ������ʶ @ref ease_flag_
		//@���� bGoBack �Ƿ񷵻�; �����ú�:���������,  ���->�յ�->���
		//@���� ���ض�������
		//@���� ����_͸����()
		HXCGUI XAnima_Alpha(HXCGUI hSequence, UINT duration, BYTE alpha, int nLoopCount = 0, int ease_flag = 0, BOOL bGoBack = FALSE);
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
		HXCGUI XAnima_AlphaEx(HXCGUI hSequence, UINT duration, BYTE from_alpha, BYTE to_alpha, int nLoopCount = 0, int ease_flag = 0, BOOL bGoBack = FALSE);
		//@���� hSequence �������о��
		//@���� duration ����ʱ��
		//@���� color ��ɫ
		//@���� nLoopCount ����ѭ������, 0:����ѭ��
		//@���� ease_flag ������ʶ @ref ease_flag_
		//@���� bGoBack �Ƿ񷵻�; �����ú�:���������,  ���->�յ�->���
		//@���� ���ض�������
		//@���� ����_��ɫ()
		HXCGUI XAnima_Color(HXCGUI hSequence, UINT duration, COLORREF color, int nLoopCount = 0, int ease_flag = 0, BOOL bGoBack = FALSE);
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
		HXCGUI XAnima_ColorEx(HXCGUI hSequence, UINT duration, COLORREF from, COLORREF to, int nLoopCount = 0, int ease_flag = 0, BOOL bGoBack = FALSE);
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
		HXCGUI XAnima_LayoutWidth(HXCGUI hSequence, UINT duration, layout_size_ nType, float width, int nLoopCount = 1, int ease_flag = 0, BOOL bGoBack = FALSE);
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
		HXCGUI XAnima_LayoutHeight(HXCGUI hSequence, UINT duration, layout_size_ nType, float height, int nLoopCount = 1, int ease_flag = 0, BOOL bGoBack = FALSE);
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
		HXCGUI XAnima_LayoutSize(HXCGUI hSequence, UINT duration, layout_size_ nWidthType, float width, layout_size_ nHeightType, float height, int nLoopCount = 0, int ease_flag = 0, BOOL bGoBack = TRUE);
		//@���� hSequence �������о��
		//@���� duration ����ʱ��
		//@���� ���ض�������
		//@���� ����_�ӳ�()
		HXCGUI XAnima_Delay(HXCGUI hSequence, float duration);
		//@��ע ������Ϊһ���ն���, Ȼ���ڻص��ﴦ���Լ����㷨
		//@���� hSequence �������о��
		//@���� duration ����ʱ��
		//@���� nLoopCount ����ѭ������, 0:����ѭ��
		//@���� ease_flag ������ʶ  @ref ease_flag_
		//@���� bGoBack �Ƿ񷵻�; �����ú�:���������,  ���->�յ�->���
		//@���� ���ض�������
		//@���� ����_�ӳ���չ()
		HXCGUI XAnima_DelayEx(HXCGUI hSequence, float duration, int nLoopCount = 1, int ease_flag = 0, BOOL bGoBack = FALSE);
		//@��ע ��ʾ������UI����
		//@���� hSequence �������о��
		//@���� duration ����ʱ��
		//@���� bShow ��ʾ������
		//@���� ���ض�������
		//@���� ����_��ʾ()
		HXCGUI XAnima_Show(HXCGUI hSequence, float duration, BOOL bShow);
		//@���� hSequence �������о��
		//@���� duration ����ʱ��
		//@���� ���ض�������
		//@���� ����_����UI����()
		HXCGUI XAnima_DestroyObjectUI(HXCGUI hSequence, float duration);
		//@��ע TRUE:�Զ����� FALSE:�ֶ�����
		//@���� hAnimationEx �������л򶯻�����
		//@���� bEnable �Ƿ�����
		//@���� ����_�����Զ�����()
		void XAnima_EnableAutoDestroy(BOOL bEnable);
		//@��ע ��ȡ����������UI����
		//@���� hAnimationEx �������л򶯻���򶯻�����
		//@���� ����UI������
		//@���� ����_ȡUI����()
		HXCGUI XAnima_GetObjectUI(HXCGUI hAnimationEx);
		//@���� hAnimationEx �������л򶯻�����
		//@���� callback �ص�����
		//@���� ����_�ûص�()
		void XAnima_SetCallBack(funAnimation callback);
		//@���� hAnimationEx �������л򶯻�����
		//@���� nUserData ������
		//@���� ����_���û�����()
		void XAnima_SetUserData(vint nUserData);
		//@���� hAnimationEx �������л򶯻�����
		//@���� �����û�����
		//@���� ����_ȡ�û�����()
		vint XAnima_GetUserData(HXCGUI hAnimationEx);
		//@���� hAnimationEx �������л򶯻�����
		//@���� ����_ֹͣ()
		void XAnima_Stop(HXCGUI hAnimationEx);
		//@���� hAnimationEx �������л򶯻�����
		//@���� ����_��ʼ()
		void XAnima_Start(HXCGUI hAnimationEx);
		//@��ע δʵ�ֹ���
		//@���� hAnimationEx �������л򶯻�����
		//@���� ����_��ͣ()
		void XAnima_Pause(HXCGUI hAnimationEx);
		//@����}
		//@����{  ������Ч

		//@��ע ����ͬ����, �����ж�������ȫ����ɺ�, ���¿�ʼ; ����������ѭ����ʱ,ֱ������������ɺ���ֹѭ��,��������޷������յ�,�޷�����ͷ������ͬ��
		//@���� nLoopCount ����ѭ������, 0:����ѭ��
		//@���� ���ض�������
		//@���� ������_����()
		HXCGUI XAnimaGroup_Create(int nLoopCount = 1);
		//@��ע ������������ӵ�����
		//@���� hGroup ��������
		//@���� hSequence �������о��
		//@���� ������_�����()
		void XAnimaGroup_AddItem(HXCGUI hGroup, HXCGUI hSequence);
		//@����}
		//@����{  ������Ч

		//@���� hAnimationItem ��������
		//@���� bEnable �Ƿ�����
		//@���� ������_�����Զ�����()
		void XAnimaItem_EnableAutoDestroy(HXCGUI hAnimationItem, BOOL bEnable);
		//@��ע ����������ɺ��Զ��ͷ�
		//@���� hAnimationItem ��������
		//@���� bEnable �Ƿ�����
		//@���� ������_��������ͷ�()
		void XAnimaItem_EnableCompleteRelease(HXCGUI hAnimationItem, BOOL bEnable);
		//@���� hAnimationItem ��������
		//@���� callback �ص�����
		//@���� ������_�ûص�()
		void XAnimaItem_SetCallback(HXCGUI hAnimationItem, funAnimationItem callback);
		//@���� hAnimationItem ��������
		//@���� nUserData �û�����
		//@���� ������_���û�����()
		void XAnimaItem_SetUserData(HXCGUI hAnimationItem, vint nUserData);
		//@���� hAnimationItem ��������
		//@���� �����û�����
		//@���� ������_ȡ�û�����()
		vint XAnimaItem_GetUserData(HXCGUI hAnimationItem);
		//@����}
		//@����{  ������Ч

		//@��ע ������ת���ĵ�����
		//@���� hAnimationRotate ������ת����
		//@���� x ����X
		//@���� y ����Y
		//@���� bOffset TRUE:������������ĵ�ƫ��, FALSE:��������
		//@���� ����ɹ�����TRUE,���򷵻�FALSE
		//@���� ������ת_������()
		void XAnimaRotate_SetCenter(HXCGUI hAnimationRotate, float x, float y, BOOL bOffset = FALSE);
		//@����}
		//@����{  ������Ч

		//@��ע �����������, ȷ�����췽��
		//@���� hAnimationScale ������������
		//@���� position λ��
		//@���� ����ɹ�����TRUE,���򷵻�FALSE
		//@���� ��������_������λ��()
		void XAnimaScale_SetPosition(HXCGUI hAnimationScale, position_flag_ position);
		//@����}
		//@����{  ������Ч

		//@��ע �˽ӿڿɶ�������x���ƶ���y���ƶ�
		//@���� hAnimationMove �����ƶ�����
		//@���� flags @ref animation_move_x : X���ƶ�, @ref animation_move_y : Y���ƶ�, �����ʹ��, @ref animation_move_
		//@���� �����ƶ�_�ñ�ʶ()
		void XAnimaMove_SetFlag(HXCGUI hAnimationMove, int flags);

	};
}