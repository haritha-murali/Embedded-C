//Write a program in C to merge two arrays of the same size sorted in descending order.

#include <stdio.h>

void fun(int a[],int b[],int s1,int s2){
	int s3=s1+s2;
	for(int k=0;k<s2;k++)
    {
        a[s1+k]=b[k];
    }
	int temp=a[0];
	for(int i=0;i<s3;i++){
		for(int k=0;k<s3-1;k++){
			if(a[k]<a[k+1]){
				temp=a[k];
				a[k]=a[k+1];
				a[k+1]=temp;
			}
		}
	}
	for(int k=0;k<s3;k++){
			printf("%d ",a[k]);
	}
}

int main(){
    int s1,s2;
    int x[]={1,2,3};
    int y[]={3,2,4};
    s1=sizeof(x)/sizeof(x[0]);
    s2=sizeof(y)/sizeof(y[0]);
    fun(x,y,s1,s2);

    return 0;

}
