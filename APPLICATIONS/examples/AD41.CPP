#include<stdio.h>
#include<conio.h>
 void main()
{
 clrscr();
 int i=1,x=5;
 while(i<6)
 {
 int j=1;

 while(j<=i)
{
printf("%d",x);
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
