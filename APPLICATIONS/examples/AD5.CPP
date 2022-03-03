#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int x=0,a=0,i=0;
 printf("enter the number");
 scanf("%d",&x);
 for(i=1;i<x;i++)
 {
 if (x%i==0)
     a++;
     }
   {
   if(a>=2)
   printf("not  prime number");
   else
    printf(" prime number");
   }
   getch();
  }