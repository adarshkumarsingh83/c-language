/* 2D CHAR ARRAY ACCESSED BY ARRAY OF PIONTER 	*/

#include<stdio.h>
#include<conio.h>
#include<string.h>

void  sort(char *[]);

void main()
{
 clrscr();
    char a[3][30],*p[3],*o;
    int i,j,k;

		 printf("\n\n\tENTER THE NAMES FOR SORTING\n");
		 fflush(stdin);
		 for(i=0;i<3;i++)
		  gets(p[i]);

		  sort(p);

		 /*   for(i=0;i<3;i++)
		  {printf("\n%s",*(p+i));  } */

 getch();
}


void sort(char *p[])
{
  int i=0,j=0,k=0;
  char  t;




	  for(i=0;i<3;i++)
	  {
	   for(j=0;*(p[i]+j)!=('\0')-1;j++)
	    {
	     for(k=(j+1);*(p[i]+k)!='\0';k++)
	     if( *(p[i]+j) > *(p[i]+k) )
	     {
	       t = *(p[i]+j);
	      *(p[i]+j) = *(p[i]+k);
	      *(p[i]+k) = t;
	     }
	   }
	  }
		for(i=0;i<3;i++)
		  {printf("\n%s",*(p+i));  }

}