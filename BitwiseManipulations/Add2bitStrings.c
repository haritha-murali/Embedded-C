#include <stdio.h>
#include <string.h>

/* Given two binary strings s1 and s2 consisting of only 0s and 1s. Find the resultant string after adding the two Binary Strings.
Note: The input strings may contain leading zeros but the output string should not have any leading zeros.
Examples:
Input: s1 = "1101", s2 = "111"
Output: 10100
Explanation: "1101" and "111" in decimal representation will be 13 and 7 respectively. Adding both the numbers gives 20, and its binary representation is "10100".
*/


int main()
{
	char s1[] = "1101", s2[] = "111",res[10];
	int l1=strlen(s1);
	int l2=strlen(s2);
	int i=l1-1,j=l2-1,k=l1;
	int sum=0,carry=0;
	while(i>=0||j>=0||carry){
	    int b1 = (i >= 0) ? s1[i] - '0' : 0;
        int b2 = (j >= 0) ? s2[j] - '0' : 0;
	    sum=carry+b1+b2;
	    res[k--]=(sum%2)+'0';
	    carry = sum / 2;
	    i--,j--;
	}
 	res[l1+1]='\0';
	printf("%s\n",res);
	
	

	return 0;
}
