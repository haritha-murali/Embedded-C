/*
 * main.c
 *
 *  Created on: 18-Jul-2024
 *      Author: 33198
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

#include "file1.h"

int main(){
	//string vs string literal
	char msg[] = "Hai Haritha";
	char *msg2 = "google.com";
	int l = strlen(msg);
	int size = sizeof(msg);
	printf("%s\n",msg);
	printf("strlen = %d\n",l);
	printf("size = %d\n",size);
	for(int i=0; i<l; i++){
		printf("%c,",msg[i]);
	}

	printf("\nAddress = %#x",&msg);
	printf("\nValue = %#x",msg);
	printf("\nAddress = %#x",&msg2);
	printf("\nValue = %#x\n",msg2);
	//string vs string literal

	//input & printing string --> scanset
	char name[20];
	printf("\nEnter Name: ");
	fflush(stdout);
	scanf("%[^\n]s",name);
	printf("Hai %s",name);
	//input & printing string

	StudentsRecords();

	return 0;

}
