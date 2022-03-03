#include<stdio.h>
#include<conio.h>
struct std
	      {
		 int roll;
		 char name[50];
	       }s;
void main()
{
clrscr();
	   struct std *p;
	   p=&s;


	   printf("\nENTER THE DATA\n");

	  {
	   printf("ENTER THE ROLL NO\n");
	   printf("ENTER THE NAME\n");
	   scanf("%d",&p->roll);
	   gets(&p->name);
	  }


getch();
}
