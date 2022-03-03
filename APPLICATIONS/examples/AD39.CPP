#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
	  int i,j;
	  char a[2][25];


      {
	  for(i=0;i<2;i++)
	 {
	  printf("ENTER THE TEXT\n");
	  for(j=0;j<2;j++)
	  scanf("%s",&a[i][j]);
	 }
	  printf("\n");

      }

	  printf("OUTPUT\n");
	  printf("---------------------------\n");
       {
	  for(i=0;i<2;i++)
	 {
	  for(j=0;j<2;j++)
	  printf("%s",a[i][j]);
	 }
	  printf("\n");
	}
getch();
}