#include<stdio.h>
#include<conio.h>
 void main ()
 {
 clrscr();

 int i,j;

 printf("enter the number \n");
 scanf("%d",&j);

 printf("\nCOMMON DIVISOR \n");
 printf("------------------------------\n");

 for(i=1;i<=j;i++)
 {
  if(j%i==0)

 printf("%d \n",i);
 }

 getch();
 }