/*Given an array arr[] of odd length N containing positive integers. The task is to find a positive integer X such that, adding X to all the elements of arr[] and then taking XOR of all the elements gives 0. Return -1 if no such X exists.
Examples: 
Input: arr[] = {2, 4, 5}
Output: 1
Explanation: Following are the operations performed in arr[] to get the desired result.
Adding 1 to each element in arr[] updates arr[] to arr[] = {3, 5, 6}
Now XOR of all the elements in arr[] is 3^5^6 = 0. 
Therefore, 1 is the required answer.  

Input: arr[] = {4, 5, 13}
Output: -1
Explanation: No such x exists for fulfilling the desired conditions. */



#include <stdio.h>

void xors(int a[],int n) {
	for(int x=0; x<(1<<20); x++) {
		int xrs=0;
		for(int i=0; i<n; i++) {
			xrs=xrs^(a[i]+x);
		}
		if(xrs==0) {
			printf("%d",x);
			break;
		}
	}
	printf("-1");

}

int main()
{
	int a[]= {4,5,13};
	int n=sizeof(a)/sizeof(a[0]);

	xors(a,n);

	return 0;
}
