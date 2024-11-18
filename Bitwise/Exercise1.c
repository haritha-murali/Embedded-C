/*
 * Exercise1.c
 *
 *  Created on: 01-Apr-2024
 *      Author: 33198
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

void Wait_user_input(){
	printf("\n\nplease press enter to exit\n");
	while(getchar() != '\n')
	{

	}
	getchar();
}

void Testing_of_bits(){
	int n1;
	printf("enter a number to test:");
	scanf("%d",&n1);

	if(n1 & 1){
		printf("%d is odd\n",n1);           //if LSB is 1 -> number is odd
	}
	else{
		printf("%d is even\n",n1);          //if LSB is 0 -> number is even
	}
}

void Setting_of_bits(){
	int n1;
	int res;
	printf("enter a number to set:");
	scanf("%d",&n1);

	res = n1 | 0x90;                       //to set bit 4 & 7 to 1
	printf("0x%x\n", res);
}

void Clearing_of_bits(){
	int n1;
	int res;
	printf("enter a number to clear:");
	scanf("%d",&n1);

	res = n1 & (~0x70);      /*OR n1 & 0x8F*/                 //to set bit 4,5,6 to 0
	printf("0x%x\n", res);
}

void BitExtract(){			//extract 9-14 bits in data
	int32_t data = 0xBC10;
	int32_t extractBits = ((data>>9) & 0x3F);
	printf("Extracted bits from bit 14:9 is %#x",extractBits);
}
