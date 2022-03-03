#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
	     int a[10][3],i,j,k=0;
	     float b[10];

	     printf("ENTER THE ROLLNO AND MARKS IN 2 SUBJECTS\n=*\n");

	    {
	     for(i=0;i<10;i++)
	     {
	     for(j=0;j<3;j++)
	     scanf("%d",&a[i][j]);
	      printf("\n=*\n");
	     }
	    }

/*for calculating average of two subject*/
       for(i=0,k=0;i<10;i++)
       {
       b[k++]=(a[i][1]+a[i][2])/2;
       }

/*for printing the marks and rollnumber*/
	     printf("\R0LLNO  MARKS  MARKS \n");
	     printf("\n==================\n");

	     for(i=0;i<10;i++)
	     {
	     for(j=0;j<3;j++)
	     printf("%d \t",a[i][j]);
	     printf("\n");
	    }
	    printf("\nAVERAGE MARKS");
	    printf("\n=======================\n");
	    for(i=0;i<10;i++)
	    printf("%f\n",b[i]);
getch();
}