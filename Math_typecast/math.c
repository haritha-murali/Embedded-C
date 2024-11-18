/*
 * file1.c
 *
 *  Created on: 04-Mar-2024
 *      Author: 33198
 */
#include <stdio.h>

int add(int a, int b)
{
	return a+b;
}

int sub(int a, int b)
{
	return a-b;
}

int mul(int a, int b)
{
	return a*b;
}

int div(int a, int b)
{
	return a/b;
}

void typeCast()
{
	long int x = ( 0x12345678 + 0x1);
	printf("%#lx\n",x);
	float y = (float)20/3;
	printf("%f\n",y);
}
