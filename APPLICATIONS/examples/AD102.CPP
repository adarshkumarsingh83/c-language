#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<malloc.h>
/* STRUCTURE DEFINATION  */
/*========================================================================*/
typedef struct std
	  {
	  char name[30];
	  char  address[100];
	  char  rno[10];
	  struct std *nxt;
	  }node;
 node *head, *list;


/* GLOBAL VARIABLE  */
/*===================================================================*/
/* prototype  */
/*=====================================================================*/

 //   void main_menu();
    void create();
    void display();
    void count ();
 //   void delete ();

 //   void search();


/* MAIN FUNCTION  */
/*=======================================================================*/
  void main()
  {
   clrscr();

//   node *head,*list,*new1;
		       head =(node*)malloc(sizeof(node));
		       list->nxt=NULL;
		       list=head;
     create();
     count();
     display();

   getch();
  }

		    /* CREATE FUNTION */
/*---------------------------------------------------------------------*/
 void create()
 {
  clrscr();
	  char ch='y';
	  node *new1;

	  while(ch=='y'||ch=='Y')
	  {
	     printf("\t\tENTER THE NAME\t");
	     fflush(stdin);
	     gets(list->name);
	     printf("\n\n\t\tENTER THE ROLL NUMBER\t");
	     gets(list->rno);
	     fflush(stdin);
	     printf("\n\n\t\tENTER THE ADDRESSS\t");
	     gets(list->address);

	     fflush(stdin);
	     printf("\n\n\n\n\t\tDO U WANT TO ENTER MORE RECORD\t");
	     scanf("%c",&ch);

	     if(ch=='y'||ch=='Y')
	     {
	      clrscr();
	      new1=(node*)malloc(sizeof(node));
	      new1->nxt=NULL;
	      list->nxt=new1;
	     }
	    list=new1;

	  }

 }
			/* COUNTING FUNCTION */
/*-------------------------------------------------------------------*/

   void count()
   {
    int i=0;
    list=head;

	  while (list!=NULL)
	  {
	   i++;
	   list=list->nxt;
	   {
	   printf("\n\n\n\t\t%d",i);
	   }

	  }


   }

			 /* DISPLAY FUNCTION  */

/*---------------------------------------------------------------------*/


   void display ()
   {
     list=head;

	      while (list!=NULL)
	      {
	       printf("\n\n\t\t%s",list->name);
	       printf("\n\t\t%s",list->rno);
	       printf("\n\t\t%s",list->address);
	       list=list->nxt;
	      }

 }

 /*---------------------------------------------------------------------*/















































































