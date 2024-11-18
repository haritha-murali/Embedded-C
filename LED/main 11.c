/*
 * main.c
 *
 *  Created on: 01-Apr-2024
 *      Author: 33198
 */

#include <stdio.h>


int main()
{
	int *address_GPIOD_mode_register = (int *)0x40020C00;	//GPIOD port mode register
	int *address_GPIOD_op_data_register = (int *)0x40020C14;	//GPIOD port output data register
	int *address_clk_control_register = (int *)0x40023830;	//RCC AHB1 peripheral clock enable register(RCC_AHB1ENR)

	//enable GPIOD clock
	int temp = *address_clk_control_register;
	temp = temp | 0x08;
	*address_clk_control_register = temp;

	//enable GPIOD mode reg
	int temp1 = *address_GPIOD_mode_register;
	temp1 = temp1 & 0xFCFFFFFF; //to clear 24th & 25th bit positions
	temp1 = temp1 | 0x01000000; //to set 24th 25th bits to 01
	*address_GPIOD_mode_register = temp1;

	//set 12th bit(12th pin using) to turn on LED
	int temp2 = *address_GPIOD_op_data_register;
	temp2 = temp2 | 0x1000;
	*address_GPIOD_op_data_register = temp2;

	while(1);

}
