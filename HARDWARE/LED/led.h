#ifndef __LED_H
#define __LED_H	 
#include "sys.h"
//////////////////////////////////////////////////////////////////////////////////	 
//������ֻ��ѧϰʹ�ã�δ��������ɣ��������������κ���;
//ALIENTEKս��STM32������
//LED��������	   
//����ԭ��@ALIENTEK
//������̳:www.openedv.com
//�޸�����:2012/9/2
//�汾��V1.0
//��Ȩ���У�����ؾ���
//Copyright(C) ������������ӿƼ����޹�˾ 2009-2019
//All rights reserved									  
////////////////////////////////////////////////////////////////////////////////// 


#if defined STM32F10X_HD
#define LED0 PBout(5)// PB5
#define LED1 PEout(5)// PE5	
#elif defined STM32F10X_MD
#define LED0 PBout(5)// PB5
#define LED1 PCout(13)// PC13	
#endif

#define     FLASH_WAIT_TIMEOUT      100000

void LED_Init(void);//��ʼ��

		 				    
#endif
