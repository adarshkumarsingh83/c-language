    struct student {
		    double age,rollno,marks;
		    char name[30];
		  };



#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
	  student s[3];
	  int i;

	    printf("ENTER THE CONTENT\n");
	  printf("-------------------------------\n");
    for(i=0;i<=2;i++)
      {
	printf("\n\nENTER THE AGE\t");
	 scanf("%d",&s[i].age);
	 printf("ENTER THE ROLLNO\t");
	 scanf("%d",&s[i].rollno);
	 printf("ENTER THE MARKS\t");
	 scanf("%d",&s[i].marks);
	printf("ENTER THE NAME\t");
	scanf ("%s",&s[i].name);
	printf("\n");
       }


       printf("\nOUTPUT\n---------------------------\n");
       for(i=0;i<=2;i++)
	{
	   printf("\nNAME\t");
	printf("%s\n",s[i].name);

	 printf("ROLL NUMBER\t");
	printf("%d\n",s[i].rollno);

	 printf("AGE\t");
	printf("%d\n",s[i].age);

	 printf("MARKS\t");
	 printf("%d\n",s[i].marks);

	}




getch();
}
