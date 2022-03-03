/* CHAR ARRAY IS SORTED
 CHAR POINTER IS SEND TO
 FUNCTION AND SORTED IN
 FUNCTION AND CHAR POINTER
 IS RETURN TO MAIN AND PRINT */

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

char* sort(char *,int );

void main()
{
 clrscr();
 int i,l;
 char a[50],*p,*q;

	    printf("\n\n\tENTER THE STRING\n");
	    fflush(stdin);
	    gets(a);
	    l=strlen(a);
	     q=a;
	    p=sort(q,l);
	    printf("\n\n\tRESULT OF THE SORTING ");
	    printf("\n\t%s",p);

 getch();
}
/*----------------------------------------------------------------*/

 char* sort(char *p,int l)
 {
  int i,j;
 char t;

	     for(i=0;i<(l-1);i++)
	     {
	      for(j=(i+1);j<l;j++)
	       if(*(p+i)>*(p+j)||*(p+i)||*(p+j)!=32)
	       {
		 t=*(p+i);
		 *(p+i)=*(p+j);
		 *(p+j)=t;
	       }
	       else
		{ continue;  }
	     }

    return(p);
 }