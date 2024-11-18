#include <stdio.h>

extern int data;
void staticExternFunction();
void display();
void externFunction();
extern void staticFunction_passValue(int var);

void display(){
	data=100;
}

void externFunction(){
	static int func2_data=10;
	func2_data++;
	printf("%d	",func2_data);
}

void staticExternFunction(){
	staticFunction_passValue(3);
}
