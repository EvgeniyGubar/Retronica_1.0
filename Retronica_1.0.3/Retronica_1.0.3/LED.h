/*
 * led_setting.h
 *
 * Created: 23.01.2022 20:00:43
 *  Author: Evgeniy
 */ 


#ifndef LED_H_
#define LED_H_

#include <avr/eeprom.h>
#include "SysTick.h"
#include "ws2812.h"
#include "MenuSettings.h"
#include "EEPROM.h"

extern uint16_t color_eeprom;	//����� � ������ EEPROM
uint8_t flag_start_led;			//���� ��� ������� ���������
uint16_t color_angle;			//���� �����

void led_delay(void);		//������������� �������� ����� ��������� ������ �����    


#endif /* LED_H_ */