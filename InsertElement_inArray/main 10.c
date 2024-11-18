#include <stdio.h>

void fun(int a[],int s1){
    int inV=9,p=0;
    for(int i=0;i<s1;i++){
        if(inV<a[i]){
            p=i;
            break;
        }
        else{
        	p=i+1;
        }
    }
    for(int i=s1;i>=p;i--){
        a[i]=a[i-1];
    }
    a[p]=inV;
    for(int i=0;i<=s1;i++){
        printf("%d ",a[i]);
    }
}

int main(){
    int s1;
    int x[]={1,2,3,3,5,6};
    s1=sizeof(x)/sizeof(x[0]);
    fun(x,s1);
}
