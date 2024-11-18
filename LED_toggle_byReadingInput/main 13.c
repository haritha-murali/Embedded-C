#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int main()
{
	uint32_t volatile *pAHB1ENR = (uint32_t*)0x40023830;
	uint32_t volatile *pGPIOA_MODE = (uint32_t*)0x40020000;
	uint32_t volatile *pGPIOC_MODE = (uint32_t*)0x40020800;
	uint32_t const volatile *pGPIOA_IDR = (uint32_t*)0x40020010;
	uint32_t volatile *pGPIOC_ODR = (uint32_t*)0x40020814;

	*pAHB1ENR |= 0x05;
	*pGPIOA_MODE &= 0xfcffffff;
	*pGPIOA_MODE |= 0x00;
	*pGPIOC_MODE &= 0xfffffffc;
	*pGPIOC_MODE |= 0x0d;

	while(1){
		uint8_t pinStatus = (uint8_t)((*pGPIOA_IDR) & (0x1));

	    if(!pinStatus){
	        *pGPIOC_ODR |= 0x1;
	    }
	    else{
	        *pGPIOC_ODR &= 0x0;
	    }
	}

}
