#include <stdio.h>
#include <stdint.h>
#include "Exercise1.h"

int main(){

	uint8_t c=827;
    c = (uint8_t)(~((uint32_t)c) +1u);
    printf("%d\n",c);
	evenNo();
	NoPyramid();
	Wait_user_input();
}
