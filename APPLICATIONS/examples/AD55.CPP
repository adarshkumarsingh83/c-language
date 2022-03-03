#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
	 int  i,s;
	 char a[20],b[20];

	 printf("ENTER THE STRING\n");
	 gets(a);
	 printf("\n\nENTER THE STRING\n");
	 gets(b);
	 printf("\n\nenter the number for space\n");
	 scanf("%d",&s);

	 printf("\nOUT PUT\n\n");
	 printf("------------------------\n");

	 printf("%s",a);
	 for(i=0;i<s;i++)
	 printf("-");
	 printf("%s",b);




getch();
}