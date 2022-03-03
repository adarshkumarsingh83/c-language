#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
	 int a[5][3],i,j;
	 char b[5];
/*(ENTERING VALUES IN THE ARRAY)*/
	 printf("ENTER THE AGE , ROLL NUMBER  AND  NAME \n");
       printf("***********************************************\n\n");
      {
	 for(i=0;i<5;i++)
	{
	 for(j=1;j<=3;j++)
	{
   if(j==1)
	 {
	  printf("\nAGE  ");
	  scanf("%d",&a[i][j]);
	 }
   else if  (j==2)
	  {
	   printf("\nROLL NUMBER  ");
	   scanf("%d",&a[i][j]);
	  }
     else if(j==3)
	{
	 printf("\nENTER THE NAME  ");
	  scanf("%s",b[i]);
	 }
	 }
	}
     }
/* (printing of the age and roll number) */

	 printf("\n(  OUTPUT  )\n");

      {
	 for(i=0;i<5;i++)
	{
	 for(j=1;j<=3;j++)
	{
	if(j==1)
       {
	printf("AGE ");
	 printf("%d ",a[i][j]);
	 printf("\n");
	}
	else if(j==2)
       {printf("\nROLL NUMBER  ");
	printf("%d",a[i][j]);
	printf("\n");
       }
       else if (j==3)
      {printf("\nNAME  ");
       printf("%s",b[i]);
       printf("\n\n");
       }
	}
	}
     }
getch();
}