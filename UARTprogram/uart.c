/*
 * uart.c
 *
 *  Created on: Oct 22, 2024
 *      Author: 33198
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include "uart.h"

void enable_peripheralClk();
void Configure_GPIOA();
static uint32_t baudrate_calc(uint32_t periClk,uint32_t baudrate);
void Configure_USART2();
void USART2_write(int ch);

void enable_peripheralClk(){
	*RCC_AHB1ENR |= (1<<0); //Enable GPIOA clock
	*RCC_APB1ENR |= (1<<17); //Enable USART2 clock
}

void Configure_GPIOA(){
	*GPIOA_MODE &= 0xffffff0f; //// Clear mode bits for PA2(PA3 not configured now-it is USART_rx)
	*GPIOA_MODE |= (0x1<<5); //0x02 << 4 // Set PA2 to alternate (PA3 not configured now)

	*GPIOA_AFRL &= 0x0fffffff; // Clear alternate function bits for PA2(PA3 not configured now)
	*GPIOA_AFRL |= (0x7<<8); //Set AF7 for PA2
	//*GPIOA_AFRL |= (0x7<<12); //Set AF7 for PA3 (PA3 not configured now)
}

static uint32_t baudrate_calc(uint32_t periClk,uint32_t baudrate){
	return ((periClk+(baudrate/2U))/baudrate);
}

void Configure_USART2(){
	*USART2_CR1 &= 0x00; //clear CR1
	*USART2_CR1 |= (1<<3); //TE enable
	*USART2_CR1 |= (1<<13); //UE enable
	*USART2_BRR = baudrate_calc(APB1_CLK,BAUDRATE); // Set baud rate
}

void USART2_write(int ch){
	//check Uart2_SR(transmit data reg) empty or not. If yes can write to DR
	while(!(*USART2_SR & (1<<7))){
		//write to transmit DR
		*USART2_DR = (ch & 0xFF);
	}

}
