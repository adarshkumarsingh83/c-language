
#include<stdio.h>
#include<conio.h>
 void main()
 {
 clrscr();
 int i;
 for( i=1;i<=100;++i)
 {
 if(i%2==0)
 {
 printf("\n");
 printf("%d\t",i);
 printf("\teven number");
 }
 else
 {
 printf("\n");
 printf("%d\t",i);
 printf("\tOdd number");
 }
 }
 printf("\n");
  getch();
 }