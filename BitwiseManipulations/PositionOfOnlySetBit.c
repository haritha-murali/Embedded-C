/*
Given a number n containing only 1 set bit in its binary representation, the task is to find the position of the only set bit. If there are 0 or more than 1 set bits, then return -1.
Note: Position of set bit '1' should be counted starting with 1 from the LSB side in the binary representation of the number.
Examples:-
Input: n = 2
Output: 2
Explanation: Binary representation of 2 is 10. We can observe that the only set bit is at position 2 from LSB.
Input: n = 5
Output: -1
Explanation: Binary representation of 5 is 101. There are 2 set bits, so return -1.
*/


#include <stdio.h>

int main()
{
	int n=4;
	int pos=1,c=0,flag=0;
	while(n){
	    if(n&1){
	        c++;
	        flag=1;
	    }
	    if(!flag)pos++;
	    n>>=1;
	}
	if(c>1){printf("contains more set bits -1");}
	else{printf("set bit is at %d\n",pos);}
	return 0;
}
