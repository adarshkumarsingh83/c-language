/*  PASSING OF STRUCTURE THROUGH FUNCTION  */


#include<stdio.h>
#include<conio.h>
struct info
	   {
	     char name[30];
	     int rno;
	   };
 void display( struct info );
 struct info p;

  void main()
  {
  clrscr();

    printf("\n\nENTER THE NAME \t");
    gets(p.name);
    printf("\n\nENTER THE ROLLNUMBER \t");
    scanf("%d",&p.rno);
 //   g=&p;
    display(p);

  getch();
  }

/*--------------------------------------------------------------------*/
  void display(struct info g)
  {
   clrscr();
     printf("\nNAME :-> %s",g.name);
     printf("\n\nROLL NUMBER :-> %d",g.rno);
  }


/*=====================================================================*/

