#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
      int x,y,z,o=5;

      for(x=1;x<=5;x++)
     {
      for(y=1;y<=x;y++)
       printf(" ");
     {
      for(z=1;z<=o;z++)
      printf("%c",6);
     }
      printf("\n");
      o--;
     }

getch();
}