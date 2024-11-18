/*
 * uart.h
 *
 *  Created on: Oct 22, 2024
 *      Author: 33198
 */

#ifndef UART_H_
#define UART_H_

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#define SYSCLK 6000000
#define BAUDRATE 115200
#define APB1_CLK SYSCLK

void enable_peripheralClk();
void Configure_GPIOA();
static uint32_t baudrate_calc(uint32_t periClk,uint32_t baudrate);
void Configure_USART2();
void USART2_write(int ch);

uint32_t volatile *RCC_AHB1ENR = (uint32_t*)0x40023830;
uint32_t volatile *RCC_APB1ENR = (uint32_t*)0x40023840;
uint32_t volatile *GPIOA_MODE  = (uint32_t*)0x40020000;
uint32_t volatile *GPIOA_AFRL  = (uint32_t*)0x40020020;
uint32_t volatile *USART2_SR   = (uint32_t*)0x40004400;
uint32_t volatile *USART2_DR   = (uint32_t*)0x40004404;
uint32_t volatile *USART2_BRR  = (uint32_t*)0x40004408;
uint32_t volatile *USART2_CR1  = (uint32_t*)0x4000440C;



#endif /* UART_H_ */
