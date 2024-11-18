#include <stdio.h>
#include "file1.h"

int data;
void StaticVariable();
static void staticFunction();
void staticFunction_passValue(int var);

int main(){
	printf("extern variable\n");
	data=5;
	printf("%d -> ",data);
	display();
	printf("%d\n",data);

	printf("\nstatic variable\n");
	for(int i=0;i<5;i++){
		StaticVariable();
	}

	printf("\n\nextern function\n");
	for(int i=0;i<5;i++){
		externFunction();
	}

	printf("\n\nstatic function\n");
	staticFunction_passValue(2);
	staticExternFunction();
	for(int i=0;i<5;i++){
		staticFunction();
	}

	return 0;
}

void StaticVariable(){
	static int i=0;
	i++;
	printf("%d	",i);
}

static void staticFunction(){
	static int count = 5;
	count--;
	printf("%d	",count);
}

 void staticFunction_passValue(int var){
	printf("var = %d\n",var);
}


