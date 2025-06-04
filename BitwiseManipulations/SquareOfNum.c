/*Given an integer n, calculate the square of a number without using *, / and pow(). 
IDEA:
  if n is even 
     square(n) = 4*square(n/2) 
  if n is odd
     square(n) = 4*square(floor(n/2)) + 4*floor(n/2) + 1 
*/


#include <stdio.h>
#include <math.h>

int squ(int n){
    if(n==0)return 0;
    if(n&1){
         return ((squ(n>>1)<<2) + (((n>>1)<<2)+1));            //4*squ(floor(n/2)) + 4*floor(n/2)+1
    }
    else{
        return (squ(n>>1)<<2);                                 //4*squ(n/2);
    }
}

int main()
{
    int n=8;
    printf("%d",squ(n));

    return 0;
}
