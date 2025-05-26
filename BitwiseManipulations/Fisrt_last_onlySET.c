//Check whether the number has only first and last bits set
/*Input : 9
Output : Yes
(9)10 = (1001)2, only the first and
last bits are set.
*/

#include <stdio.h>
#include <math.h>

int main()
{
    int x=9;
    int c=0;
    int n=0;
    int x1=x;
    while(x1!=0){
        n++;
        x1>>=1;
    }
    
    int t=pow(2,(n-1))+1;
    if((t&x)!=0){printf("%d %d, 1st & last only set",t,x);}

    
    return 0;
}
