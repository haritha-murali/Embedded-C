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
struct Point p1;

int main(){
	p1.x = 10;
	p1.y = 20;
	p1.z = 30;
	printf("%u %u %u\n",p1.x,p1.y,p1.z);
	printf("%u\n",sizeof(p1));

	printf("\nStructure pointer\n");
	struct Point *p1Ptr;
	p1Ptr = &p1;
	printf("x = %u\n", p1Ptr->x);
	printf("y = %u\n", p1Ptr->y);
	printf("z = %u\n", p1Ptr->z);

	printf("\nmemory contents\n"); //__attribute__((packed)) will allocate memory to variables without wasting memory
	uint8_t *ptr = (uint8_t*)&p1;
	uint8_t sizePtr = sizeof(p1);
	for(int i=0;i<sizePtr;i++){
		printf("%p   %u\n",ptr,*ptr);
		ptr++;
	}
	return 0;
}
