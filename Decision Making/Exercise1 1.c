#include <stdio.h>

void Wait_user_input(){
	printf("\n\nplease press enter to exit\n");
	while(getchar() != '\n')
	{

	}
	getchar();
}

void EligibilityToVote(){
	int age;
	printf("Enter your age: ");
	fflush(stdout);
	scanf("%d",&age);

	if(age>=18){
		printf("Congrats! You are eligible for casting a vote\n\n");
	}
	else{
		printf("Sorry! You are not eligible for casting a vote\n\n");
	}
}

void WhoisBigger(){
	float n1,n2 = 0;
	printf("Enter first number = ");
	scanf("%f",&n1);
	printf("Enter second number = ");
	scanf("%f",&n2);

	int num1,num2 = 0;
	num1 = n1;
	num2 = n2;
	if((num1 != n1) || (num2 != n2)){
		printf("Warning! Considered only integer part of the number\n");
	}


	if(num1>num2){
		printf("%d is bigger\n",num1);
	}
	else if(num1<num2){
		printf("%d is bigger\n",num2);
	}
	else{
		printf("Both are equal\n");
	}
}


void areaOfGeometries(){
	char geo;
	float area = 0;
	float r,b,h,a = 0;

	printf("\nEnter the appropriate key to select a geometry\nCircle --> c\nTriangle --> t\nSquare --> s\nTrapeziod --> z\n");
	scanf("%c",&geo);

	switch(geo){
		case 'c':
			printf("Enter radius = ");
			scanf("%f",&r);
			if(r<=0){
				printf("Radius cannot be -ve\n");
			}
			else{
				area = 3.14 * r * r;
			}
			break;
		case 't':
			printf("Enter base = ");
			scanf("%f",&b);
			printf("Enter height = ");
			scanf("%f",&h);
			if((b<=0) || (h<=0)){
				printf("triangle side cannot be -ve\n");
			}
			else{
				area = 0.5 * b * h;
			}
			break;
		case 's':
			printf("Enter side = ");
			scanf("%f",&a);
			if(a<=0){
				printf("square side cannot be -ve\n");
			}
			else{
				area = a * a;
			}
			break;
		case 'z':
			printf("Enter side = ");
			scanf("%f",&b);
			printf("Enter base = ");
			scanf("%f",&a);
			printf("Enter height = ");
			scanf("%f",&h);
			if((b<=0) || (h<=0) || (a<=0)){
				printf("trapezoid side cannot be -ve\n");
			}
			else{
				area = 0.5 * (a + b) * h;
			}
			break;
		default:
			printf("Invalid input!\n");
	}
	if(area != 0){
		printf("%f\n\n",area);
	}
	area=0;
}
