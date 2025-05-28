#include <stdio.h>

void noSETbitsArray(){            //no. of set bits in a array
  int a[]={1,4};
  int c=0;
  int n=sizeof(a)/sizeof(a[0]);
  for(int i=0;i<n;i++){
      int x=a[i];
      while(x!=0){
          if((x&1)!=0){c++;}
          x>>=1;
      }
  }
  printf("%d\n",c);
}


void noSETbitsNumber(){            //no. of set bits in a number
  int x=15;
  int t=x;
  int c=0;
  int n=0;
  while(x!=0){
      n++;
      if((x&1)!=0){c++;}
      x>>=1;
      }  
  printf("set bits in %d is %d\n",t,c);

  /*another approach
	int x=15;
	int c=0;
	while(x!=0){
	    x=x&(x-1);
      c++;
	}
	printf("%d",c);
  */

}

int main()
{
    noSETbitsArray();
    noSETbitsNumber();
    return 0;
}
