/* STRUCTURE */

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct student
	      {
	      char name[50];
	      int rno;
	      int age;
	      };

void main()
{
clrscr();
struct student stud;

	  /* TO TAKE INPUT IN STRUCTURE  */
	 printf("\n\n\tENTER THE NAME \t");
	 fflush(stdin);
	 gets(stud.name);

	 printf("\n\n\tENTER THE ROLL NO \t");
	 fflush(stdin);
	 scanf("%d",&stud.rno);

	 printf("\n\n\tENTER THE AGE \t");
	 fflush(stdin);
	 scanf("%d",&stud.age);

	  /* TO PRINT STRUCTURE  */

	 printf("\n\nNAME %s\n",stud.name);
	 printf("ROLL NO %d\n",stud.rno);
	 printf("AGE %d\n",stud.age);

getch();
}