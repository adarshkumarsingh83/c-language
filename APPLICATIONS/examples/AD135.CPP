/*  SORTING OF INTERGER ARRAY
    ARRAY IS PASSED TO FUNCTION
    AND INTEGER POINTER IS RETURN
    TO MAIN FUNCTION AND PRINT  */

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

int* sort(int []);

void main()
{
 clrscr();
 int i;
 int a[10],*p;

	    printf("\n\n\tENTER THE NUMBER\n");
	    fflush(stdin);
	    for(i=0;i<10;i++)
	    scanf("%d",&a[i]);

	     p=sort(a);
	    printf("\n\n\tRESULT OF THE SORTING ");
	    for(i=0;i<10;i++)
	    printf("\n\t%d",*(p+i));

 getch();
}
/*----------------------------------------------------------------*/

 int* sort(int a[])
 {
  int i,j;
 int t;

	     for(i=0;i<(10-1);i++)
	     {
	      for(j=(i+1);j<10;j++)
	       if(a[i]>a[j])
	       {
		 t=a[i];
		 a[i]=a[j];
		 a[j]=t;
	       }
	     }

    return(a);
 }