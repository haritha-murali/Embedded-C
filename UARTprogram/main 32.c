/*
 * main.c
 *
 *  Created on: Oct 22, 2024
 *      Author: 33198
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

void enable_peripheralClk();
void Configure_GPIOA();
void Configure_USART2();
void USART2_write(int ch);

int main(){
	enable_peripheralClk();
	Configure_GPIOA();
	Configure_USART2();
	while(1){
		USART2_write('A');
	}

}
