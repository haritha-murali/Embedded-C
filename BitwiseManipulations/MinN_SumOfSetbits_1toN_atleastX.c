/*Given a number X, the task is to find the minimum number N such that the total set bits of all numbers from 1 to n is at least X. 
Examples: 
Input: x = 5 
Output: 4 
Set bits in 1-> 1
Set bits in 2-> 1
Set bits in 3-> 2 
Set bits in 4-> 1 
Hence first four numbers add upto 5 
Input: x = 20 
Output: 11 */


#include <stdio.h>

int main()
{
	int x=5;
	int i=1;
	static int sb=0;
	int flag=0;
	int c=x;
	for(int j=1;j<=c;j++){
	    int i=j;
	    if(!flag){
	        while(i){
	            sb+=(i&1);
	            i>>=1;
	        }
  	  }
	    if(sb>=x){
	        flag=1;
	        c=j;
	    }
  }
  printf("%d\n",c);

	return 0;
}
