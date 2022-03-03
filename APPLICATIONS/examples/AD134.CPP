/* CHAR ARRAY IS PASSED
  TO FUNCTION AND SORTED
  IN THE FUNCTION AND
  CHAR POINTER IS RETURN
  TO MAIN AND PRINT  */

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

char* sort(char [] );

void main()
{
 clrscr();
 int i;
 char a[50],*p;

	    printf("\n\n\tENTER THE STRING\n");
	    fflush(stdin);
	    gets(a);

	     p=sort(a);
	    printf("\n\n\tRESULT OF THE SORTING ");
	    printf("\n\t%s",p);

 getch();
}
/*----------------------------------------------------------------*/

 char* sort(char a[])
 {
  int i,j,l=0;
 char t;

	    l=strlen(a);

	     for(i=0;i<(l-1);i++)
	     {
	      for(j=(i+1);j<l;j++)
	       if(a[i]>a[j])
	       {
		 t=a[i];
		 a[i]=a[j];
		 a[j]=t;
	       }
	     }

    return(a);
 }