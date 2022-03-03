/* STRUCTURE WITH IN STRUCTURE */

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct student
	      {
	      char name[50];
	      int rno;
	      int age;
		   struct
			 {
			  int marks1;
			  int marks2;
			  char grade[10];
			   }report;
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

	  /* INPUT DATA IN INTERNAL STRUCT REPORT  */

	 printf("\n\n\tENTER THE MARKS1 \t");
	 fflush(stdin);
	 scanf("%d",&stud.report.marks1);

	 printf("\n\n\tENTER THE MARKS2 \t");
	 fflush(stdin);
	 scanf("%d",&stud.report.marks2);

	 printf("\n\n\tENTER THE GRADE \t");
	 fflush(stdin);
	 gets(stud.report.grade);

	  /* TO PRINT STRUCTURE  */

	 printf("\n\n\tPRINTING OF THE STUDENT ");
	 printf("\n	\tNAME %s\n",stud.name);
	 printf("\tROLL NO %d\n",stud.rno);
	 printf("\tAGE %d\n",stud.age);
	 printf("\n\n\tPRINTING OF THE REPORT ");
	 printf("\n\tMARKS1 %d\n",stud.report.marks1);
	 printf("\tMARKS2 %d\n",stud.report.marks2);
	 printf("\tGRADE %s\n",stud.report.grade);

getch();
}