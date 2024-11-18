/*
 * main.h
 *
 *  Created on: 08-Jun-2024
 *      Author: 33198
 */
#include <stdint.h>

#ifndef MAIN_H_
#define MAIN_H_

typedef struct{
	uint32_t gpioAen:1;
	uint32_t gpioBen:1;
	uint32_t gpioCen:1;
	uint32_t gpioDen:1;
	uint32_t gpioEen:1;
	uint32_t gpioFen:1;
	uint32_t gpioGen:1;
	uint32_t gpioHen:1;
	uint32_t gpioIen:1;
	uint32_t reserved1:3;
	uint32_t crcEn:1;
	uint32_t reserved2:3;
	uint32_t reserved3:2;
	uint32_t bkpsramEn:1;
	uint32_t res:1;
	uint32_t ccmDat:1;
	uint32_t dma1En:1;
	uint32_t dma2En:1;
	uint32_t reserved4:2;
	uint32_t ethmacEn:1;
	uint32_t ethmacTxEn:1;
	uint32_t ethmacRxEn:1;
	uint32_t ethmacptpEn:1;
	uint32_t otghsEn:1;
	uint32_t otghspieEn:1;
	uint32_t reserved5:1;
}RCC_AHB1ENR_t;

typedef struct{
	uint32_t pin0:1;
	uint32_t pin1:1;
	uint32_t pin2:1;
	uint32_t pin3:1;
	uint32_t pin4:1;
	uint32_t pin5:1;
	uint32_t pin6:1;
	uint32_t pin7:1;
	uint32_t pin8:1;
	uint32_t pin9:1;
	uint32_t pin10:1;
	uint32_t pin11:1;
	uint32_t pin12:1;
	uint32_t pin13:1;
	uint32_t pin14:1;
	uint32_t pin15:1;
	uint32_t reserv:16;
}GPIOx_ODR_t;

typedef struct{
	uint32_t pin0:2;
	uint32_t pin1:2;
	uint32_t pin2:2;
	uint32_t pin3:2;
	uint32_t pin4:2;
	uint32_t pin5:2;
	uint32_t pin6:2;
	uint32_t pin7:2;
	uint32_t pin8:2;
	uint32_t pin9:2;
	uint32_t pin10:2;
	uint32_t pin11:2;
	uint32_t pin12:2;
	uint32_t pin13:2;
	uint32_t pin14:2;
	uint32_t pin15:2;
}GPIOx_mode_t;

#endif /* MAIN_H_ */
