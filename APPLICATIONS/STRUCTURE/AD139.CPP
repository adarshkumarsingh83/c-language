/* ARRAY OF STRUCTURE AND ACESS BY POINTER  */

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
struct student stud[3] ,*p;
int i=0;
 p=stud;

       /* TO TAKE INPUT IN STRUCTURE  */
       for(i=0;i<3;i++)
	{
	 printf("\n\tENTER THE NAME \t");
	 fflush(stdin);
	 gets((p+i)->name);

	 printf("\n\tENTER THE ROLL NO \t");
	 fflush(stdin);
	 scanf("%d",&(p+i)->rno);

	 printf("\n\tENTER THE AGE \t");
	 fflush(stdin);
	 scanf("%d",&(p+i)->age);
	}
	  /* TO PRINT STRUCTURE  */
       printf("\n\n\tPRINTING RESULT ");

       for(i=0;i<3;i++)
	{
	 printf("\n\tNAME %s\n",(p+i)->name);
	 printf("\tROLL NO %d\n",(p+i)->rno);
	 printf("\tAGE %d\n",(p+i)->age);
	}

getch();
}