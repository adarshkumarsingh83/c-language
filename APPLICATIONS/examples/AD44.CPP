#include<stdio.h>
#include<conio.h>
void main ()
{
clrscr();
	  int a[20],i,j,k,p=0,n=0;

	  printf("ENTER THE NUMBER\n");

	  {
	  for(i=0;i<20;i++)
	  {
	   if(a[i]!=20)
	  scanf("%d",&a[i]);
	    else
	  printf("NUMBER IS ENTERED\n");
	  }
	 }
clrscr();
	  printf("ENTER THE NUMBER FOR SEARCH\t");
	  scanf("%d",&k);

	  printf("\nOUT PUT \n");
	  printf("----------------------------\n\n");


      {
	  for(i=0;i<20;i++)
	{
	   if(a[i]==k)
	     p++;
	   else
	     n++;
	 }
      }
	{

	  if(p>=1)
	   {
	   printf("NUMBER IS PRESENT\n");
	   }
	   else if(n>=1)
	   {
	   printf("NUMBER IS NOT PRESENT");
	   }
	}


getch();
}