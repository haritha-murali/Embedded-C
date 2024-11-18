/*
 * main.c
 *
 *  Created on: Oct 5, 2024
 *      Author: 33198
 */


#include <stdio.h>

void fun(int a[],int s1){
    int c;
    int uni[s1];
    for(int k=0;k<s1;k++)
    {
        c=0;
        int Alreadycount=0;
        for(int i=0;i<s1;i++){
            if(a[k]==uni[i]){
                Alreadycount=1;
            }
            if(!Alreadycount){
            	if(a[k]==a[i]){
            		c++;
            		uni[k]=a[k];
            	}
            }
        }
        if(!Alreadycount){
        printf("%d occured %d times\n",a[k],c);
        }
    }
}

int main(){
    int s1;
    int x[]={1,1,2,3,3,6,5,6,8,9,8,3};
    s1=sizeof(x)/sizeof(x[0]);
    fun(x,s1);
    return 0;
}
