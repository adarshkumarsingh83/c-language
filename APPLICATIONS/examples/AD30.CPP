#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
	int a[10],i,g=0,o;
 step:
	printf("ENTER THE NUMBER \n");
     printf("-------------------------------------\n");
	for(i=0;i<10;i++)
	scanf("%d",&a[i]);

	for(i=0;i<10;i++)
	{
	   if(a[i]<0)
	 {
	   printf("NUMBER SHOULD NOT LESS THEN ZERO\n");
	    goto step;
	 }
	}
/*(for comparision and swaping  )*/

	 g=a[0];

     {	for(i=0;i<10;i++)
	 if( g<a[i])
	    g= a[i];
	 else
	    continue;
	}

       printf("\n\nBIGGEST NUMBER\n");
       printf("%d",g);

getch();
}