#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

#define AGE 18
#define PI 3.14
#define AREA_CIRCLE(r) ((PI)*(r)*(r))
//#define NUMBER -5UL

void VoteEligibility();
void CircleArea();
void displayNumber();

int main(){
	VoteEligibility();
	CircleArea();
	displayNumber();

	return 0;
}

void VoteEligibility(){
	int age=17;
	if(age>=AGE){printf("eligible to vote\n");}
	else{printf("not eligible to vote\n");}
}

void CircleArea(){
	//float area=AREA_CIRCLE(2);
	printf("area of circle = %f",AREA_CIRCLE(2));
}

void displayNumber(){
#ifdef NUMBER
#if (NUMBER>0)
	printf("\n%ld is greater than 0",NUMBER);
#else
	printf("\n%ld is less than 0",NUMBER);
#endif
#endif
}
