/*
Given a number x and two positions (0 based from the right side) in the binary representation of x, write a function that swaps n bits at the given two positions and returns the result. It is also given that the two sets of bits do not overlap.
Examples:
Input:
x = 47 (00101111)
p1 = 1 (Start from the second bit from the right side)
p2 = 5 (Start from the 6th bit from the right side)
n = 3 (No of bits to be swapped)
Output:
227 (11100011)
*/


#include <stdio.h>

int main()
{
	int num=47,p1=1,p2=5,n=3;
	int first=(num>>p1)&((1<<n)-1);
	int sec=(num>>p2)&((1<<n)-1);
	int xr=first^sec;
	num=num^((xr<<p2)|(xr<<p1));
	
	printf("%d ",num);
	
	return 0;
}
