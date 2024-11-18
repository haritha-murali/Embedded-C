/*
 * turn on/off LED in STM32F411RE board
 *
 *
 *
 */

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

void TurnOn_LED_GPIOA_PA5();
void LEDs_GPIO_PC();

void delay(){
	for(volatile uint8_t i=0;i<300000;i++);
}

int main(){
	TurnOn_LED_GPIOA_PA5();
	LEDs_GPIO_PC();
}

void TurnOn_LED_GPIOA_PA5(){                  //LED is connected to PA5 of board
	int32_t *RCC_AHB1ENR_PeriClkEnableGPIOA = (int32_t*)0x40023830;
	int32_t *GPIOA_MODER_PortModeReg = (int32_t*)0x40020000;
	int32_t *GPIOA_ODR_PortOutputDataReg = (int32_t*)0x40020014;

	//1. enable RCC_AHB1ENR of GPIOA -> set 0th pin
	*RCC_AHB1ENR_PeriClkEnableGPIOA |= 0x01;

	//set GPIOA_MODER -> clear 5th pin & then set 5th pin
	*GPIOA_MODER_PortModeReg &=0xFFFFF3FF;      //*GPIOA_MODER_PortModeReg = (*GPIOA_MODER_PortModeReg >>10)&0x00;
	*GPIOA_MODER_PortModeReg |=0x400;

	//set GPIOA_ODR -> set 5th pin
	*GPIOA_ODR_PortOutputDataReg |= 0x20;
}

void LEDs_GPIO_PC(){
	int32_t *RCC_AHB1ENR_PeriClkEnableGPIOC = (int32_t*)0x40023830;
	int32_t *GPIOC_MODER_PortModeReg = (int32_t*)0x40020800;
	int32_t *GPIOC_ODR_PortOutputDataReg = (int32_t*)0x40020814;

	//1. enable RCC_AHB1ENR of GPIOC -> set 2nd pin
	*RCC_AHB1ENR_PeriClkEnableGPIOC |= 0x04;

	//set GPIOC_MODER -> clear 0-8pins & then set those
	*GPIOC_MODER_PortModeReg &=0xFFFF0000;
	*GPIOC_MODER_PortModeReg |=0x5555;

	while(1){
		//set GPIOC_ODR to turn on 8 LEDs-> set 0-8 pins
		*GPIOC_ODR_PortOutputDataReg |= 0xFF;
		delay();
		//set GPIOC_ODR to turn off 8 LEDs-> set 0-8 pins
		*GPIOC_ODR_PortOutputDataReg &= 0x00;
		delay();
	}
}
