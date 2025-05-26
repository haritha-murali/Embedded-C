//Shortest path length between two given nodes such that adjacent nodes are at bit difference 2
/*Input: N = 15, a = 15, b = 3
Output: 1
Explanation: a = 15 = (1111)2 and b = 3 = (0011)2. The bit difference between 15 and 3 is 2. Therefore, there is a direct edge between 15 and 3. Hence, length of the shortest path is 1.
*/

#include <stdio.h>

int main()
{
    int n=15;
    int a=8,b=9;
    int bitdif=a^b;
    int c=0;
    while(bitdif!=0){
        c+=(bitdif&1);
        bitdif>>=1;
    }
    if(c==2){printf("%d",c);}
    else{printf("%d",c);}
    
    return 0;
}
