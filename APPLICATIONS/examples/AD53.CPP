#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
	 char a[50];
	 int i,l=0,t=0;

	 printf("ENTER THE NAME\n");
	 gets(a);

	 printf("\nSHORT NAME\n");
	 printf("------------------------------\n\n");

	 printf("%c ",a[0]);
	 for(i=0;a[i]!='\0';i++,t++)
	 {
	 if(a[i]==' '||a[i]=='\t')

	 printf(" %c",a[i+1]);
	 }

 /*(for counting the length of last word)*/
	for(i=t;a[i]!=' ';i--)
	l++;

/*(for printing of last word)*/
	for(i=(t-l)+1;a[i]!='\0';i++)
	{
	printf("%c",a[i+1]);
	}

getch();
}