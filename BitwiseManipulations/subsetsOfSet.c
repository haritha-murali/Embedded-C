//subsets of a given array/set

#include <stdio.h>
#include <math.h>

int main()
{
	int a[]={2,7};
	int n = sizeof(a) / sizeof(a[0]);
	int subsets=pow(2,n);
	for(int i=0;i<subsets;i++){
	    printf("{");
	    for(int j=0;j<n;j++){
	        if(i&(1<<j)){printf("%d ",a[j]);}
	    }printf("}\n");
	}
	return 0;
}
