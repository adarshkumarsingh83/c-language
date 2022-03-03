    struct student {
		    double age,rollno,marks;
		    char name[30];
		  };



#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
	  student s;

	printf("ENTER THE AGE\t");
	 scanf("%d",&s.age);


	 printf("ENTER THE ROLLNO\t");
	 scanf("%d",&s.rollno);


	 printf("ENTER THE MARKS\t");
	 scanf("%d",&s.marks);

	printf("ENTER THE NAME\t");
	scanf ("%s",&s.name);



       printf("\nOUTPUT\n---------------------------\n");
	 printf("AGE\t");
	 printf("%d\n",s.age);
	 printf("ROLL NUMBER\t");
	 printf("%d\n",s.rollno);
	 printf("MARKS\t");
	 printf("%d\n",s.marks);
	 printf("NAME\t");
	printf("%s\n",s.name);





getch();
}
