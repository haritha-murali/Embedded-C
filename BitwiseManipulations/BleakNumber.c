/*A number 'n' is called Bleak if it cannot be represented as sum of a positive number x and set bit count in x, i.e., x + countSetBits(x) is not equal to n for any non-negative number x.
Examples : 
Input : n = 3
Output : false
3 is not Bleak as it can be represented
as 2 + countSetBits(2).
*/


#include <stdio.h>

int countSet(int i){
    int cb=0;
    while(i){
        if(i&1){
            cb++;
        }i>>=1;
    }
    return cb;
}

int main()
{
    int n=3;
    int f=0;
    for(int i=1;i<n;i++){
        int csb=countSet(i);
        if((i+csb)==n){f=1;break;}
    }
    if(f){printf("%d is not bleak",n);}
    else{printf("%d is bleak",n);}
    
    return 0;
}
