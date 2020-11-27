#include <stdio.h>
#include <string.h>
void main()
{
  int i,j,w,x,n,k;
  char y;
  char a[16][16];
  for (i=1;i<17;i++){
      for (j=1;j<17;j++){
          scanf("%16s",y);
           strcpy(a[i,j], y);
          }
   }
  scanf("%d",n);
  if (n>0 && n<256){
      n=n;
     }
  else{
     n=0;
     printf("wrong number");
     }
  x=n/16;
  k=n%16;
  for (i=1;i<17;i++){
      for (j=1;j<(x-1);j++){
          strcpy(a[i,j], "*");
     }
   }
   for (j=1;i<k+1;i++){
      a[x,j]=='\0';
      puts("*");
   }
   x=n-x;
   k=16-n;
   for (i=1;i<17;i++){
      for (j=1;j<x+1;j++){
          strcpy(a[i,j], "");
     }
   }
   for (j=1;i<k+1;i++){
      a[x,j]='\0';
      puts("");
   }
   for (i=1;i<17;i++){
      for (j=1;j<17;j++){
          printf("%c",a[i,j]);
      }
      printf("\n");
   }
}
