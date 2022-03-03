#include<stdio.h>
#include<conio.h>
void add();
void main()

{
clrscr();
add();
getch();
}

 void add()
 {
 int a,b,c;
 printf("ENTER THE NUMBER\n");
 scanf("%d %d",&a,&b);
  {
   c=a+b;
  }
  printf("\nOUTPUT");
  printf("\n----------------\n");
  printf("%d",c);
  }