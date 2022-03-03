#include<stdio.h>
#include<conio.h>
void fact();
void main()

{
clrscr();
fact();
getch();
}

 void fact()
 {
 int a,b=1;
 printf("ENTER THE NUMBER\n");
 scanf("%d",&a);
  while(a>=1)
  {
    b=b*a;
    a--;
  }
  printf("\nOUT PUT\n");
  printf("--------------------------\n");
  printf("%d",b);
  }