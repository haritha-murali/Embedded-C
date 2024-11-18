/*
 * main.c
 *
 *  Created on: Aug 29, 2024
 *      Author: 33198
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

struct Point{
	uint8_t x;
	uint8_t y;
	uint32_t z;
}__attribute__((packed));

void Display_CbyRef(struct Point *p1Ptr);
void Display_CbyVal(struct Point p1);
struct Point p1;

int main(){
	p1.x = 10;
	p1.y = 20;
	p1.z = 30;

	printf("%u\n",sizeof(p1));
	Display_CbyRef(&p1);
	Display_CbyVal(p1);

	return 0;
}

void Display_CbyRef(struct Point *p1Ptr){
	printf("\nCall by Reference\n");
	printf("x = %u\n", p1Ptr->x);
	printf("y = %u\n", p1Ptr->y);
	printf("z = %u\n", p1Ptr->z);
}

void Display_CbyVal(struct Point p1){
	printf("\nCall by Value\n");
	printf("x = %u\n", p1.x);
	printf("y = %u\n", p1.y);
	printf("z = %u\n", p1.z);
}
