#include <stdio.h>

#include "file1.h"

int main(){
	printf("print large 'F'\n");
	printF();
	printf("\nprint large 'C'\n");
	printC();
	printf("\nprint right angle triangle\n");
	RightAngleTriangle();
	printf("\nprint right angle triangle with number1\n");
	RightAngleTriangleNumber1();
	printf("\nprint right angle triangle with number2\n");
	RightAngleTriangleNumber2();
	printf("\nprint right angle triangle with number3\n");
	RightAngleTriangleNumber3();
	printf("\nprint pyramid with '*'\n");
	pyramid();
	return 0;
}
