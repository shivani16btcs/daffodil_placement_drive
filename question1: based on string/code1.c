#include <stdio.h>
 #include<stdio.h>
 
int main()
{
  int i, a[2][100],flag=0;
  a[0]="i like banana"
 
  scanf("%[^\n]s",&a[1]);
  
  for(i=0;i<strlen(a[0]);i++){
      if(a[0][i]!=a[1][i])
      flag=1;
  }
 if(flag=1)
 printf("not equal");
 else
 printf("equal");
  return 0;
}
 
