#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
	 char a[5][25];
	 int i,j,k,m;

     printf("ENTER THE FIVE NAME\n");
 printf("----------------------------------------\n");
     for(i=0;i<5;i++)
      gets(a[i]);

      printf("\nOUTPUT\n");
 printf("-----------------------------------------\n");


      for(i=0;i<5;i++)
    printf("%s\n",a[i]);




getch();
}