/*PROGRAMMING USING THE POINTER IN PASSING OF
 ARRAY IN RETURN FROM THE FUNCTION*/
/*-----------------------------------------------------*/
#include<stdio.h>
#include<conio.h>
int sum(int a[10]);
void main()
{
clrscr();
	 int a[10],i,*p,k=0;

	 printf("ENTER THE NUMBER \n");
	 printf("---------------------------\n");

	 for(i=0;i<10;i++)
	 scanf("%d",&a[i]);


   k=sum(a);
	   printf("\nOUT PUT\n");
	   printf("--------------------\n\n");

	  for(k=0;k<10;k++)
	  printf("%d\n",a[k]);

getch();
}

/*------------------------------------------------------------------*/
    int sum(int x[10])
    {
      int s,*p;

	 printf("\n OUTPUT IN FUNCTION\n");
	 printf("\n----------------------\n");

	 for(s=9 ;s>=0;s--)
	 printf("%d\n",x[s]);


       *p=x[s];

	 return(*p);
    }
