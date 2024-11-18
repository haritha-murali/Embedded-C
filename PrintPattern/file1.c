#include <stdio.h>

void printF();
void printC();
void RightAngleTriangle();
void RightAngleTriangleNumber1();
void RightAngleTriangleNumber2();
void RightAngleTriangleNumber3();
void pyramid();

void printF()
{
    int h=8;
    int w1=6,w2=4;
    for(int i=0;i<h;i++){
        if(i==0){
            for(int j=0;j<w1;j++){
                printf("#");
            }
        }
        else if(i==3){
           for(int j=0;j<w2;j++){
                printf("#");
            }
        }
        else{
            printf("#");
        }
        printf("\n");
    }
}

void printC(){
	int h=11,w=10;
	for(int i=0;i<h;i++){
		for(int j=0;j<w;j++){
			if(((i==0 && j>2 && j<w-3) || (i==h-1 && j>2 && j<w-3) || (i>=2 && i<=h-3 && j==0) ||
			     (i==1 && (j==1 || j==2 || j==w-2 || j==w-3)) || (i==h-2 && (j==1 || j==2 || j==w-2 || j==w-3)))){
				printf("#");
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
}

void RightAngleTriangle(){
	int h=6;
	for(int i=1;i<=h;i++){
		for(int j=i;j>0;j--){
			printf("*");
	    }
	    printf("\n");
	}
}

void RightAngleTriangleNumber1(){
	int h=6;
	for(int i=1;i<=h;i++){
		for(int j=1;j<i;j++){
			printf("%d",j);
	    }
	    printf("\n");
	}
}

void RightAngleTriangleNumber2(){
	int h=6;
	for(int i=1;i<=h;i++){
		for(int j=i;j>0;j--){
			printf("%d",j);
	    }
	    printf("\n");
	}
}

void RightAngleTriangleNumber3(){
	int h=6;
	for(int i=1;i<=h;i++){
		for(int j=i;j>0;j--){
			printf("%d",i);
	    }
	    printf("\n");
	}
}

void pyramid(){
	int h=5;
	for (int i = 1; i <= h; i++) {
      for (int j = i; j < h; j++) {
          printf(" ");
      }
      for (int k = 1; k <= i; k++) {
    	  printf("* ");
      }
      printf("\n");
    }
}
