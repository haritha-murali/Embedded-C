/*
 * Exercise1.c
 *
 *  Created on: 25-Mar-2024
 *      Author: 33198
 */
#include <stdio.h>

long long int g_data = 0x00ffffabcd112365;

void exercise()
{
	char data = 100;
	printf("Value = %d\n",data);
	printf("Address = %p\n",&data);
	char* pAddress = &data;
	char read = *pAddress;
	printf("Value after reading = %d\n",read);
	*pAddress = 65;
	printf("Value = %d\n\n",data);
}


void significanceOfPointerDT()
{
	printf("Performing operations in significanceOfPointerDT() fun\n");
	char *pAddress1 = (char*)&g_data;
	printf("Value at address %p = %x\n",pAddress1,*pAddress1);

	short int *pAddress2 = (short int*)&g_data;
	printf("Value at address %p = %x\n",pAddress2,*pAddress2);

	int *pAddress3 = (int*)&g_data;
	printf("Value at address %p = %x\n",pAddress3,*pAddress3);

	long long int *pAddress4 = (long long int*)&g_data;
	printf("Value at address %p = %I64x\n\n",pAddress4,*pAddress4);
}


void significanceOfPointerDTin_pointerArithematic()
{
	printf("Performing operations in significanceOfPointerDTin_pointerArithematic() fun\n");
	char *pAddress1 = (char*)&g_data;
	printf("Value at address %p = %x\n",pAddress1,*pAddress1);
	pAddress1++;
	printf("Value at address %p = %x\n",pAddress1,*pAddress1);

	short int *pAddress2 = (short int*)&g_data;
	printf("Value at address %p = %x\n",pAddress2,*pAddress2);
	pAddress2++;
	printf("Value at address %p = %x\n",pAddress2,*pAddress2);

	int *pAddress3 = (int*)&g_data;
	printf("Value at address %p = %x\n",pAddress3,*pAddress3);
	pAddress3++;
	printf("Value at address %p = %x\n",pAddress3,*pAddress3);

	long long int *pAddress4 = (long long int*)&g_data;
	printf("Value at address %p = %I64x\n",pAddress4,*pAddress4);
	pAddress4++;
	printf("Value at address %p = %I64x\n\n",pAddress4,*pAddress4);
}
