#include<stdio.h>
#include<conio.h>
 void main ()
 {
  clrscr();
  int a;
  printf("ENTER THE NUMBER\nFOR CHEACKING ODD OR EVEN \n");
  scanf("%d",&a);
  printf("\nOUTPUT\n");
  printf("------------------------------\n");
  if(a%2==0)
  {
  printf(" even number");
  }
  else
  {
    printf(" odd number");
  }
  getch();
 }