///////////////////////
//  ��Ǹ�Ԫ��Ӧ��λ��  //
///////////////////////

#include "size.h"
#ifndef PLACE_H
#define PLACE_H

#define MINESPACEY 131
////////  ���������������������
#define MINERPLACEX ((BGWIDTH - MINERWIDTH) / 2)	//�󹤺�����
#define MINERPLACEY (MINESPACEY - MINERHEIGHT)		//��������
////////  ��λ��
#define GRPLACEX (MINERPLACEX + 12)
#define GRPLACEY MINESPACEY
////////  ����λ��
#define FNPLACEX (BGWIDTH + (WINDOWWIDTH - BGWIDTH - BOTTONWIDTH) / 2)
////////  ��ť����Ϣ��������
#define BOTTON1PLACE 20			//��ť1������
#define BOTTON2PLACE 140		//��ť2������
#define BOTTON3PLACE 260		//��ť3������
////////  ��ťλ��������
#define TEXTMSGPLACEX FNPLACEX+110	//�ɱ���Ϣ������
#define TEXT1PLACE 450			//��Ϣ1������
#define TEXT2PLACE 500			//��Ϣ2������
#define TEXT3PLACE 550			//��Ϣ3������
#define TEXT4PLACE 600			//��Ϣ4������
////////  ��Ϣλ��
#endif
