/*
 * Indication.h
 *
 * Created: 22.01.2022 18:05:45
 *  Author: Evgeniy
 */ 


#ifndef INDICATION_H_
#define INDICATION_H_

#define F_CPU 16000000UL //������� ������������ ����������
#include <avr/io.h>
#include <avr/interrupt.h>
#include <util/delay.h>
#include "MenuSettings.h"

struct
{
	uint8_t lamp;	//�������� ����� �� 0 �� 9 ��� ����������������� ����������� �� ������
	uint8_t blink;	//����� ��� ������� ���� ��� ����������
	uint8_t clone;
} Ind[4];			//���������� �� �����������

void indicators_init(void);   //������ �������� ��� ������

#endif /* INDICATION_H_ */