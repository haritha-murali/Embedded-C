/*Given two integers a and b, the task is to multiply them without using the multiplication operator. Instead of that, use the Russian Peasant Algorithm.
Examples:
Input: a = 8, b = 8
Output: 64
Explanation: Product of 8 and 8 is 64.
*/


//TRADITIONAL APPROACH
#include <stdio.h>

int main()
{
	int a =8,b=8;
	int count=0;
	int arrA[20]={0},arrB[20]={0};
	int i=0,sum=0;
	while(a){
	    count++;
	    arrA[i++]=a;
	    a/=2;
	}
	for(int k=0;k<=count;k++){
	    arrB[k]=b;
	    b*=2;
	}
	for(int i=0;i<count;i++){
	    if((arrA[i]%2)!=0){
	        sum+=arrB[i];
	    }
	}
	printf("%d ",sum);
	
	return 0;
}


//BITWISE APPROACH
int main()
{
	int a =9,b=8;
	int sum=0;
	while(a){
    	if(a&1)sum+=b;
    	a>>=1;
    	b<<=1;
	}
	printf("%d ",sum);
	
	return 0;
}
