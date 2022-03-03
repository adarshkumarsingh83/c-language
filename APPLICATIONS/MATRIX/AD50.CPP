/* MATRIX SUM OF ROW */

#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
	  int a[3][3],i,j,sum=0;
	  printf("ENTER THE NUMBER\n");
	  printf("-----------------------\n");

	  for(i=0;i<3;i++)
	  {
	   for(j=0;j<3;j++)
	  scanf("%d",&a[i][j]);
	  }

      printf("\nOUTPUT OF MATRIX\n");
      printf("---------------------------\n\n");

	  for(i=0;i<3;i++)
	  {
	   for(j=0;j<3;j++)
	  printf("%d\t",a[i][j]);
	  printf("\n\n\n");
	  }


     printf("\nSUM OF THE ROWS\n");
     printf("\n--------------------------\n");


      for(i=0;i<3;i++)
     {
      for(j=0,sum=0;j<3;j++)
       sum=sum+a[i][j];
      printf("%d\n",sum);
     }

getch();
}