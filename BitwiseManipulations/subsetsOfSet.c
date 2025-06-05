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


//maximum XOR value generated from subsets of an array


#include <stdio.h>


int main()
{
    int a[]={1,2,3,4};
    int n=sizeof(a)/sizeof(a[0]);
    int subsets=1<<n;
    int xr[20]={0};
    int max=0;
	for(int i=0;i<subsets;i++){
	    for(int j=0;j<n;j++){
	        if(i&(1<<j)){
	            xr[i]^=a[j];
	            if(xr[i]>max){
	            max=xr[i];
	            }
	        }
	    }
	    printf("%d ",xr[i]); 
	}
	printf("\nmaximum XOR of subsets is %d\n",max);
    
    return 0;
}
