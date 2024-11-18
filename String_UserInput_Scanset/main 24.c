#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

int main(){
	//declare a string implicitly
	char s1[]="Hello World";
	printf("%s\n",s1);


	//declare string & input from user (but space cannot read)
	char s2[20];
	printf("\nEnter string : ");
	fflush(stdout);
	scanf("%s",&s2);
	printf("String : %s",s2);


	//declare string & input from user (use scanset to read space)
	char s3[20];
	printf("\nEnter string : ");
	fflush(stdout);
	scanf("%[^\n]s",&s3);
	printf("String : %s",s3);


	//declare string & input from user (use fgets)
	char s4[20];
	printf("\nEnter string : ");
	fflush(stdout);
	fgets(s4,sizeof(s4),stdin);
	printf("String : ");
	puts(s4);


	return 0;
}
