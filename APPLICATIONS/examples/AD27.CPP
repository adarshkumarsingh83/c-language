#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
	 int a[5][3],i,j,k=0,m=0;
/*(ENTERING NUMBER IN THE ARRAY)*/
	 printf("ENTER THE ROLL NUMBER AND AGE\n");
      {
	 for(i=0;i<5;i++)
	{
	 for(j=1;j<3;j++)
	{ k++;
   if(k%2==0)
	 {
	  printf("\nAGE  ");
	  scanf("%d",&a[i][j]);
	 }
   else if  (k%2!=0)
	  {
	   printf("\nROLL NUMBER  ");
	   scanf("%d",&a[i][j]);
	  }
	}
       }
      }
/* (printing of the age and roll number) */

	 printf("\n(  OUTPUT  )\n");

      {
	 for(i=0;i<5;i++)
	{
	 for(j=1;j<3;j++)
	{ m++;
	if(m%2==0)
       {
	printf("AGE ");
	 printf("%d ",a[i][j]);
	 printf("\n\n");
	}
	else if(m%2!=0)
       {printf("\nROLL NUMBER  ");
	printf("%d",a[i][j]);
	printf("\n\n");
       }
	}
	}
     }
getch();
}