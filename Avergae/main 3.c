#include <stdio.h>
#include <stdlib.h>

int main(){
	double x1,x2,x3;
	double avg;

	printf("enter numbers :");
	//fflush(stdout);
	scanf("%lf %lf %lf",&x1,&x2,&x3);
	avg = (x1+x2+x3)/3;
	printf("avg = %lf",avg);
	printf("\nplease press enter to exit\n");
	while(getchar() != '\n')
	{
	}
	getchar();
}
