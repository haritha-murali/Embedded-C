//Given a positive number N, the task is to find out all the perfect powers of two which are less than or equal to the given number N. 
/*Input: N = 63 
Output: 32 16 8 4 2 1 
Explanation: There are total of 6 powers of 2, which are less than or equal to the given number N.
*/
//if x=power(2), then x&(x-1)=0

#include <stdio.h>

int main()
{
	int n=63;
	for(int i=1;i<=n;i++){
	    int t=(i&(i-1));
	    if(t==0){printf("%d\n",i);}
	}

	return 0;
}
