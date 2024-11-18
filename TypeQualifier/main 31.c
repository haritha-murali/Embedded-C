/*
 * main.c
 *
 *  Created on: 22-Apr-2024
 *      Author: 33198
 */
#include <stdio.h>

//int const x = 10;   //const data defined as global can't be modified by pointer too

int main(){
	int const x = 10;
	printf("%d\n",x);
	int *ptr = (int*)&x;   //const data defined as local can be modified by pointer
	*ptr=20;
	//x=20;
	printf("%d",x);
}
