/* ARRAY OF THE STRUCTURE  */

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
struct student stud[5];
int i=0;

	  /* TO TAKE INPUT IN STRUCTURE  */
       for(i=0;i<5;i++)
	{
	 printf("\n\n\tENTER THE NAME \t");
	 fflush(stdin);
	 gets(stud[i].name);

	 printf("\n\n\tENTER THE ROLL NO \t");
	 fflush(stdin);
	 scanf("%d",&stud[i].rno);

	 printf("\n\n\tENTER THE AGE \t");
	 fflush(stdin);
	 scanf("%d",&stud[i].age);
	}


	  /* TO PRINT STRUCTURE  */
	printf("\nPRINTING RESULT ");
	printf("\n-------------------------------------\n\n");
	for(i=0;i<5;i++)
	{
	 printf("\n\nNAME %s\n",stud[i].name);
	 printf("ROLL NO %d\n",stud[i].rno);
	 printf("AGE %d\n",stud[i].age);
	}
getch();
}