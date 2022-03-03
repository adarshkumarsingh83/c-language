#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
	 int a[5][3],i,j,u;
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
/*(entering the value for search)*/
	printf("\n\nENTER THE ROLL NUMBER FOR SEARCH  ");
	scanf("%d",&u);
printf(" ----------------------------------------------------\n");

/*(for searching record)*/
	printf("\n\nOUTPUT\n");
     printf("******************\n");

       {
	for(i=0;i<5;i++)
	 if(a[i][2]==u)
	{
	  printf("\nAGE   ");
	  printf("%d",a[i][1]);
	  printf("\nROLL NUMBER   ");
	  printf("%d\n",a[i][2]);
	  printf("NAME   ");
	  printf("%s\n",b[3]);
	 }
	  else
	   continue;

       }

getch();
}