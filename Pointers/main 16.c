/*
 * main.c
 *
 *  Created on: 25-Mar-2024
 *      Author: 33198
 */

#include <stdio.h>
#include "Exercise1.h"

extern long long int g_data;
int main()
{
	//to store address(0x000fff45de81) as number in some other address and print that address
	long long int addressAsNumber = 0x000fff45de81;
	char* p = (char*)&addressAsNumber;
	printf("%#I64x is stored in %p\n",addressAsNumber,p);

	//to store address(0x000fff45de81) as such as pointer
	long long int* someAddress = (long long int*) 0x00ffffff45de81;
	printf("%x is stored in %p\n\n",someAddress,&someAddress);

	printf("Performing operations in Exercise1.c file\n");
	exercise();
	significanceOfPointerDT();
	significanceOfPointerDTin_pointerArithematic();
	printf("%I64x",g_data);

}
