/*
 * main.c
 *
 *  Created on: 08-Jun-2024
 *      Author: 33198
 */

#include "main.h"

int main(){
	RCC_AHB1ENR_t volatile *address_clk_control_register = (RCC_AHB1ENR_t *)0x40023830;
	GPIOx_mode_t volatile *address_GPIOD_mode_register = (GPIOx_mode_t *)0x40020C00;
	GPIOx_ODR_t volatile *address_GPIOD_op_data_register = (GPIOx_ODR_t *)0x40020C14;

	//enable GPIOD clock
	address_clk_control_register->gpioDen = 1;

	//enable GPIOD mode reg
	address_GPIOD_mode_register->pin12 = 1;

	//set 12th bit(12th pin using) to turn on LED
	address_GPIOD_op_data_register->pin12 = 1;

	while(1);

}
