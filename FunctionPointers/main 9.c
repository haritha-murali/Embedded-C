/*
 * main.c
 *
 *  Created on: Oct 10, 2024
 *      Author: 33198
 */

#include <stdio.h>

void fun1(int x){
	printf("%d\n",x);
}

int main(){
	//Function Pointers
	printf("Function Pointers\n");
	void (*fun1_p1)(int)=&fun1;
	(*fun1_p1)(10);

	//Array Pointers
	printf("\nArray Pointers\n");
	int arr[]={1,2,3,4,5};
	int *p=&arr;
	int (*p1)[5]=&arr;
	printf("p=%p ,p1=%p\n",p,p1);
	printf("*p=%d ,*p1=%d\n",*p,*p1);
	printf("sizeof(p)=%d ,sizeof(p1)=%d\n",sizeof(p),sizeof(p1));
	printf("sizeof(*p)=%d ,sizeof(*p1)=%d\n",sizeof(*p),sizeof(*p1));

	return 0;
}
