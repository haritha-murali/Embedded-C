#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void maxC(int cArr[],int chArr[],int l){
    int max=cArr[0];
    char chara=chArr[0];
    for(int i=0;i<l;i++){
        if(cArr[i]>max){
            max=cArr[i];
            chara=chArr[i];
        }
    }
    printf("Max occurred character is - '%c' which occurred %d times\n",chara,max);
}

void OccOfChars(char *s,char l) {
    int count=0;
    int u[256]={0};
    int cArr[256]={0};
    int chArr[256]={0};
    for(int i=0;i<l;i++){
        int flag=0;
        count=0;
        for(int k=0;k<l;k++){
        	if(s[i]==u[k]){
        		flag=1;
        	}
        	if(!flag && s[i]!=' '){
        		if(s[i]==s[k]){
        			count++;
        			u[k]=s[i];
        		}
        	}
        }
        if(!flag){
        	chArr[i]=u[i];
        	cArr[i]=count;
        	printf("%c %d\n", chArr[i],cArr[i]);
        }
    }
    maxC(cArr,chArr,l);
}

int main() {
    char s1[] = "malayalam language";
    int l = strlen(s1);

    OccOfChars(s1,l);

    return 0;
}
