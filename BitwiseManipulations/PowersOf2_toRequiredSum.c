//Given an integer N, task is to find the numbers which when raised to the power of 2 and added finally, gives the integer N.
/*Input : 29
Output : 0, 1, 2, 3, 4
Explanation : 
29 = 2^0 + 2^1 + 2^2 + 2^3 + 2^4
*/
/*-------------------------------------------------------------------------------------
Reference
0001 1101

2^0+2^1+2^2+2^3+2^4
1+2+4+8+16
0001 1101
0000 0001
0000 0010
0000 0100
0000 1000
0001 0000
*/

#include <stdio.h>

int main()
{
	int n=29;
	for(int i=0;i<32;i++){
	    if(n&(1<<i)){
	        printf("%d\n",i);
	    }
	}
	return 0;
}
