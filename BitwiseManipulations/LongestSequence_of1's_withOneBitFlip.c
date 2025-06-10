/*Give an integer n. We can flip exactly one bit. Write code to find the length of the longest sequence of 1 s you could create. 
Examples: 
Input : 1775         
Output : 8 
Binary representation of 1775 is 11011101111. After flipping the highlighted bit, we get consecutive 8 bits. 11011111111.
*/


#include <stdio.h>


int main()
{
    int n=27;
    int curr=0,prev=0,c=0;
    while(n){
        if(n&1){
            curr++;
        }
        else{
            if(n&2){
                prev=curr;
                curr=0;
            }
            else{
                prev=0;
                curr=0;}
        }
        c = (prev + curr + 1 > c) ? (prev + curr + 1) : c;
        n>>=1;
    }
    
    printf("%d\n",c);

    return 0;
}
