/*
Binary to Gray conversion : 
1.The Most Significant Bit (MSB) of the gray code is always equal to the MSB of the given binary code.
2.Other bits of the output gray code can be obtained by XORing binary code bit at that index and previous index.
Gray to binary conversion :
1.The Most Significant Bit (MSB) of the binary code is always equal to the MSB of the given gray code.
2.Other bits of the output binary code can be obtained by checking the gray code bit at that index. If the current gray code bit is 0, then copy the previous binary code bit, else copy the invert of the previous binary code bit.
*/


#include <stdio.h>

int b2g(int n,int c){
    int bg=((n>>c)&1)<<c;
    int i=c;
    while(i){
        int t3=((n>>i)^(n>>(i-1)));
        bg=bg|(t3<<(i-1));
        i--;
    }
    return bg;
}

int g2b(int n,int c){
    int gb=((n>>c)&1)<<c;
    int i=c;
    while(i){
        int t3=((gb>>i)^(n>>(i-1)));
        gb=gb|(t3<<(i-1));
        i--;
    }
    return gb;
}

int main()
{
    int n=9;
    int t=n;
    int countBits=0;
    while(t){
        countBits++;
        t>>=1;
    }
    int c=countBits-1;
    
    printf("binary to grey of %d -> %d = %b \n",n, b2g(n,c), b2g(n,c));
    printf("grey to binary of %d -> %d = %b \n",n, g2b(n,c), g2b(n,c));
    
    return 0;
}
