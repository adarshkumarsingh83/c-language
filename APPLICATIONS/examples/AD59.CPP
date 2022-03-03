#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
	     char a[50],b[50];
	     int i,l=0,w=0;

	     printf("ENTER THE STRING\n");
	     gets(a);

	     for(i=0;a[i]!='\0';i++)
	     l++;

	     for(i=l;a[i]<=0;i--)
	     if(a[i]==32||a[i]=='\t')
	     {
	      for(i=(l-w);a[i]!='\0';i++)
	      b[i]=a[i];
	     }
	     else
	       w++;

	     for(i=0;i<=l;i++)
	     printf("%s",b[i]);



getch();
}