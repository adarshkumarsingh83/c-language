/* ARRAY OF STRUCTURE WITH IN STRUCTURE */

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
struct student stud[5];
int i=0;

	  /* TO TAKE INPUT IN STRUCTURE  */
       for(i=1;i<4;i++)
	{
	 printf("\n\tENTER THE RECORD NO %d ",i);
	 printf("\n\tENTER THE NAME \t");
	 fflush(stdin);
	 gets(stud[i].name);

	 printf("\n\n\tENTER THE ROLL NO \t");
	 fflush(stdin);
	 scanf("%d",&stud[i].rno);

	 printf("\n\n\tENTER THE AGE \t");
	 fflush(stdin);
	 scanf("%d",&stud[i].age);

	  /* INPUT DATA IN INTERNAL STRUCT REPORT  */

	 printf("\n\n\tENTER THE MARKS1 \t");
	 fflush(stdin);
	 scanf("%d",&stud[i].report.marks1);

	 printf("\n\n\tENTER THE MARKS2 \t");
	 fflush(stdin);
	 scanf("%d",&stud[i].report.marks2);

	 printf("\n\n\tENTER THE GRADE \t");
	 fflush(stdin);
	 gets(stud[i].report.grade);
	}
	  /* TO PRINT STRUCTURE  */

     for(i=1;i<4;i++)
	{
	 printf("\n\n\tPRINTING OF THE STUDENT %d   ",i);
	 printf("\n	foad137\tNAME %s\n",stud[i].name);
	 printf("\tROLL NO %d\n",stud[i].rno);
	 printf("\tAGE %d\n",stud[i].age);
	 printf("\n\n\tPRINTING OF THE REPORT ");
	 printf("\n\tMARKS1 %d\n",stud[i].report.marks1);
	 printf("\tMARKS2 %d\n",stud[i].report.marks2);
	 printf("\tGRADE %s\n",stud[i].report.grade);
	}
getch();
}