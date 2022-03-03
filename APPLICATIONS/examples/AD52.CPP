#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
	  int a[3][3],i,j,m=0;

	  printf("enter the number in 3x3 matrix\n");
	  for(i=0;i<=2;i++)
	  {
	   for(j=0;j<=2;j++)
	   scanf("%d",&a[i][j]);
	  }
/*(for printing the matrix)*/
	   printf("\nthe out put of the matrix\n");
	   printf("---------------------------------------\n\n");

	   for(i=0;i<3;i++)
	  {
	   for(j=0;j<3;j++)
	   printf("%d\t",a[i][j]);
	   printf("\n\n\n");
	  }
/*(for max no in matrix)*/
	   printf("\nthe max number in the matrix\n");
	   printf("---------------------------------------\n");

	   for(i=0;i<3;i++)
	  {
	   for(j=0;j<3;j++)
	   if(a[i][j]>m)
	   m=a[i][j];
	  }

	 printf("%d",m);
getch();
}