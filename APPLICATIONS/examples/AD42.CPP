#include<stdio.h>
#include<conio.h>
 void main()
{
 clrscr();
 int i=1,x=5,m=0,n=1;
 while(i<6)
 {
 int j=1;

 while(j<=i)
{
 if(x%2==0)
printf("%d",m);

  else
 {
  printf("%d",n);
 }
 x++;
 j++;
   }
 i++;
 printf("\n");
 x=5;
 x=x-(i-1);

  }
 getch();
 }
