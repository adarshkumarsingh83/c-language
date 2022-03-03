/* INTEGER ARRAY IS PASSED
   TO FUNCTION WITH THE HELP
   OF THE INTEGER POINTER AND SORTED
    AND INTEGER POINTER  IS RETURN
    TO MAIN AND PRINT*/

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int* sort(int *);

void main()
{
 clrscr();
 int i,a[10],*p,*q;

	    printf("\n\n\tENTER THE NUMBER\n");
	    for(i=0;i<10;i++)
	    scanf("%d",&a[i]);
	     q=a;
	    p=sort(q);
	    for(i=0;i<10;i++)
	    printf("%d\t",*(p+i));

 getch();
}
/*----------------------------------------------------------------*/

 int* sort(int *p)
 {
  int i,j,t=0;

	     for(i=0;i<(10-1);i++)
	     {
	      for(j=(i+1);j<10;j++)
	       if(*(p+i)>*(p+j))
	       {
		 t=*(p+i);
		 *(p+i)=*(p+j);
		 *(p+j)=t;
	       }
	     }

    return(p);
 }