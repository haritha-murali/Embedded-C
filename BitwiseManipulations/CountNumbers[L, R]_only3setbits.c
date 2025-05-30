/*Given an array arr[] of N pairs, where each array element denotes a query of the form {L, R}, the task is to find the count of numbers in the range [L, R], having only 3-set bits for each query {L, R}.
Examples:
Input: arr[] = {{11, 19}, {14, 19}}
Output: 4, 2
Explanation: 
Query(11, 19): Numbers in the range [11, 19] having three set bits are {11, 13, 14, 19}.
Query(14, 19): Numbers in the range [14, 19] having three set bits are {14, 19}.
Input: arr[] = {{1, 10}, {6, 12}}
Output: 1 2
Explanation: 
Query(1, 10): Numbers in the range [1, 10] having three set bits are {7}.
Query(6, 12): Numbers in the range [6, 12] having three set bits are {7, 11}.
*/


#include <stdio.h>

int set_bits(int n1,int n2) {
	int b=0,c=0,t=0;
	for(int i=n1; i<=n2; i++) {
		b=0;
		t=i;
		while(t) {
			b+=(t&1);
			t>>=1;
		}
		if(b==3) {
			c++;
		}
	}
	return c;
}

int main()
{
	int a[][2]= {{1, 10}, {6, 12}};
	int n=sizeof(a)/sizeof(a[0][0]);
	int sb=0;

	for(int i=0; i<(n/2); i++) {
		sb=set_bits(a[i][0],a[i][1]);
		printf("%d ",sb);
	}

	return 0;
}
