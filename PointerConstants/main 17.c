/*
 * main.c
 *
 *  Created on: Oct 10, 2024
 *      Author: 33198
 */
#include <stdio.h>

int main(){
	//Pointer to Constant Integer (ie, pointer can points to other variable(say y), variable (both x & y) is constant
	printf("Pointer to constant integer\n");
	int x1=10,y1=11;
	const int *p1;
	p1=&x1;
	printf("x1=%d\n",*p1);
	p1=&y1;
	printf("y1=%d\n",*p1);

	//Constant Pointer to Integer (ie, pointer is constant. It cannot points to other variable(say y), variable(x) can modify
	printf("\nconstant pointer to integer\n");
	int x2=10;
	int *const p2=&x2;
	printf("x2=%d\n",*p2);
	x2=5;
	printf("x2=%d\n",*p2);

	//both pointer & variable is constant (ie, can't modify both)
	printf("\nconstant pointer to constant integer\n");
	int x3=10;
	const int *const p3=&x3;
	printf("x3=%d\n",*p3);
	return 0;
}
