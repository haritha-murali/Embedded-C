/*Given two numbers x and y, and a range [l, r] where 1 <= l, r <= 32. The task is consider set bits of y in range [l, r] and set these bits in x also.
Examples : 
Input  : x = 10, y = 13, l = 2, r = 3
Output : x = 14
Binary representation of 10 is 1010 and that of y is 1101. There is one set bit in y at 3'rd position (in given range). After we copy this bit to x, x becomes 1110 which is binary representation of 14.
*/


#include <stdio.h>

int main()
{
    int x = 9, y = 12, l = 3, r = 4;
    int maskL=(1111<<(r-l+1))-1;
    int mask=(maskL<<(l-1))&y;
    x|=mask;
    
    printf("%d",x);
    
    return 0;
}
