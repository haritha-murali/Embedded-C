/*Given a 32-bit integer n and an integer d, rotate the binary representation of n by d positions in both left and right directions. After each rotation, convert the result back to its decimal representation and return both values in an array as [left rotation, right rotation].
Note: A rotation (or circular shift) is an operation similar to shift except that the bits that fall off at one end are put back to the other end.  
Examples:
Input: n = 28, d = 2
Output: [112, 7]
*/


#include <stdio.h>

int main()
{
	int n=28,d=2;
	
	int extractl=((1<<(32-d))-1);
	int extractr=n&((1<<d)-1);
	
  int left=(n<<d)+(extractl>>(32-d));
  int right=(n>>d)+(extractr<<(32-d));
    
	printf("%d %d\n",left,right);
	
	return 0;
}
