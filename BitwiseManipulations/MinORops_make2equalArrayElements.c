/*
Given an array arr[] of integers and an integer K, we can perform the Bitwise OR operation between any array element and K any number of times. The task is to print the minimum number of such operations required to make any two elements of the array equal. If it is not possible to make any two elements of the array equal after performing the above-mentioned operation then print -1.
Examples: 
Input: arr[] = {1, 9, 4, 3}, K = 3 
Output: 1 
We can OR a[0] with x, which makes it 3 which is equal to a[3]
Input : arr[] = {13, 26, 21, 15}, K = 13 
Output : -1 
*/

#include <stdio.h>

int main()
{
	int a[]= {1,2,4}; //{13,26,21,15} {1,9,3,4}
	int k=3;
	int n=sizeof(a)/sizeof(a[0]);
	int b[100]= {0};
	int c=0;
	int v[100]= {0};
	int freq[100]={0};
	int found = 0;
	
	for(int i=0;i<n;i++) {
		b[a[i]]++;
		if(b[a[i]]>1) {
			printf("already exists c=0");
			return 0;
		}
	}
	
	for(int j=0;j<n;j++){
	    v[j]=a[j]|k;
	    for(int i=0;i<n;i++){
	        if(i!=j && v[j]==a[i]){
	            c=1;
	            found = 1;
	        }
	    }  
	}
	
	if(found!=1){
	    for(int i=0;i<n;i++){
	        freq[v[i]]++;
	    }
	
            for(int i=0;i<100;i++) {
                if (freq[i]>1) {
                    c=freq[i];
                    found = 2;
                }
            }
        }

    	if (found!=1 && found!=2){
        	c=-1;
    	}
	
    	printf("c= %d\n",c);

	return 0;
}
