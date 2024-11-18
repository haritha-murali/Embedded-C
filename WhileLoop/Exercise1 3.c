#include <stdio.h>

void Wait_user_input(){
	printf("\n\nplease press enter to exit\n");
	while(getchar() != '\n')
	{

	}
	getchar();
}

void evenNo(){
	int n1,n2;
	static int count = 0;
	printf("enter boundaries: ");
	scanf("%d %d",&n1,&n2);

	for(int i=n1;i<=n2;i++){
		if(i%2==0){
			printf("%4d\t",i);
			count++;
		}
	}
	printf("\ncount of even numbers = %d \n",count);
}

void NoPyramid(){
	int h;
	printf("enter height :");
	scanf("%d",&h);

	for(int i=1;i<=h;i++){
		for(int j=i;j>0;j--){
			printf("* ");
		}
		printf("\n");
	}


}
