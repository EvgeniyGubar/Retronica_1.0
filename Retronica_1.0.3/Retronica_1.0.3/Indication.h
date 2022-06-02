/*
 * Indication.h
 *
 * Created: 22.01.2022 18:05:45
 *  Author: Evgeniy
 */ 


#ifndef INDICATION_H_
#define INDICATION_H_

#define F_CPU 16000000UL //частота тактирования процессора
#include <avr/io.h>
#include <avr/interrupt.h>
#include <util/delay.h>
#include "MenuSettings.h"

struct
{
	uint8_t lamp;	//содержат числа от 0 до 9 для непосредственного отображения на лампах
	uint8_t blink;	//флаги для мигания ламп при настройках
	uint8_t clone;
} Ind[4];			//информация об индикаторах

void indicators_init(void);   //запуск таймеров при старте

#endif /* INDICATION_H_ */