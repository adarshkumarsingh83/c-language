#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
       char a[25];
       int     b,c=0,w=1,d=0;

       printf("enter the word \n");
       gets(a);

       printf("\nout put\n");

       for(b=0;a[b]!='\0';b++)
      {
       c++;
       if(a[b]==32)
       w++;
      }


       printf("%d\n",c);
       printf("%d",w);

       for(b=0;a[b]!='\0';b++)
      {
	if(a[b]!=32)
	d++;
	else















	printf("%d\n",d);
     }
getch();
}