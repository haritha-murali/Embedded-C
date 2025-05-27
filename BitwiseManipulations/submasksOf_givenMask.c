//Given an integer N, the task is to print all the subsets of the set formed by the set bits present in the binary representation of N.
/*Input: N = 5
Output: 5 4 1 
Explanation:
Binary representation of N is "101", Therefore all the required subsets are {"101", "100", "001", "000"}.
*/
/*--------------------------------------------------------------------
Reference
101	100&101=100
100	011&101=001
001	000&101=000
000
*/


#include <stdio.h>

int main()
{
	int n=5;
	for(int i=n;i;i=((i-1)&n)){
	    printf("%d\n",i);
	}
	return 0;
}
