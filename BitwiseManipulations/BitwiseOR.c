//Calculate Bitwise OR of two integers from their given Bitwise AND and Bitwise XOR values
/*Input: X = 5, Y = 2 
Output: 7 
Explanation: 
If A and B are two positive integers such that A ^ B = 5, A & B = 2, then the possible value of A and B is 3 and 6 respectively. 
Therefore, (A | B) = (3 | 6) = 7.
*/

#include <stdio.h>
#include <math.h>

int main()
{
	int x=5,y=2;
	int t1=x;
	int t2=y;
	int n1,n2=0;
	while(x!=0){
      n1++;
      x>>=1;}
	while(y!=0){
      n2++;
      y>>=1;}

	int l=(n1>=n2) ? pow(2,n1):pow(2,n2);

	for(int i=0;i<l;i++){
	    for(int j=1;j<=l;j++){
	        if(((i^j)==t1) && ((i&j)==t2)){
              printf("1st no = %d, 2nd no = %d, OR of 1st&2nd= %d\n",i,j, (i|j));}
	    }
	}
	return 0;
}
