/*Write a function to check if a given number is Sparse or not. 
A number is said to be a sparse number if in the binary representation of the number no two or more consecutive bits are set.
Input:  x  = 72
Output: true
Explanation:  Binary representation of 72 is 01001000. There are no two consecutive 1's in binary representation
*/


#include <stdio.h>

int main()
{
	int n=7;
	int has_con=0;
	while(n){
	    int pre=n&1;
	    n>>=1;
	    int curr=n&1;
	    if(pre==1 && pre==curr){
	        has_con=1;
	        break;
	    }   
	}
	if(has_con){
	    printf("have con 1s");
	}
	else{
	    printf("no con 1s\n");
	}
	
	return 0;
}
