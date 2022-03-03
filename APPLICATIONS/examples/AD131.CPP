/* SIMPLE LINK LIST DEMOSTRATION PROGRAMOF EACH FUNCTION */


#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<dos.h>
#include<malloc.h>
#include<process.h>
#include<graphics.h>

typedef struct student
		      {
		       int rno;
		       char na[50];
		       int age;
		       struct student *next;
		       }node;

node *head;
/*---------------------*/
void create();
int count();
void view();
/*---------------------*/
void print();
void print1();
void printrev();
/*----------------------*/
void up_menu();
void update(int);
/*----------------------*/
void search();
int rno();
int name();
int age();
/*----------------------*/
void insert();
void in1_begning();
void in2_end();
void in3_after();
void in4_before();
void in5_anywhere();
void ins1(int );
/*----------------------*/
void del();
void d1_first();
void d2_last();
void d3_after();
void d4_before();
void d5_any();
void delet(int);
/*----------------------*/
void menu();
void smenu();
node* load();
/*----------------------*/
void sort();
void sort_assending();
void sort1();
void sort2();
void sort3();
void sort_decending();
void sort4();
void sort5();
void sort6();
/*------------------------*/
int cheak_string(char []);
int cheak_integer(int );
/*-----------------------------------------------------------------------*/
/*########################################################################*/
/* MAIN FUNCTION  */

void main()
{
clrscr();
	     menu();
getch();
}


/*=======================================================================*/
/*#########################################################################*/
/* FOR DISPLAYING THE MAIN MENU TO SCREEN */

void menu()
{
node *list,*new1;
char ch ='y';
int o;
int x;
	      while(ch!='n')
	     {

		 printf("\n\n\t         MAIN MENU  ");
		 printf("\n      =======================================");
		 printf("\n\n\n\t*  CREATION OF THE NODE           :-> 1 ");
		 printf("\n\n\t*  PRINTING OF THE NODE           :-> 2 ");
		 printf("\n\n\t*  COUNTING OF THE NODES          :-> 3 ");
		 printf("\n\n\t*  SEARCHING NODE IN THE LIST     :-> 4 ");
		 printf("\n\n\t*  INSEARTION OF THE NODE IN LIST :-> 5 ");
		 printf("\n\n\t*  DELITION OF THE NODE FROM LIST :-> 6 ");
		 printf("\n\n\t*  VIEW A PARTICULAR NODE         :-> 7 ");
		 printf("\n\n\t*  UPDATION OF DATA IN LIST       :-> 8 ");
		 printf("\n\n\t*  SORTING OF THE LINK LIST       :-> 9 ");
		 printf("\n\n\t*  EXIT FROM THE MENU             :-> 10 ");
		 printf("\n\n      =======================================");
		 printf("\n\n\n      ENTER YOUR CHOICE :->  ");
		 fflush(stdin);
		 scanf("%d",&o);

		  switch(o)
		  {
		   case 1:
		   create();
		   break;

		   case 2:
		   print1();
		   break;

		   case 3:
		   x=count();
		   printf("\n\tNUMBER OF NODES IN LIST IS %d ",x);
		   break;

		   case 4:
		   search();
		   break;

		   case 5:
		   insert();
		   break;

		   case 6:
		   del();
		   break;

		   case 7:
		   view();
		   break;

		    case 8:
		   up_menu();
		   break;

		   case 9:
		   sort();
		   break;

		   case 10:
		   exit(1);
		   break;

		   default :
		   printf("\n\tINVALID CHOICE ");
		   menu();
		   break;
		  }
		 }
getch();
}

/*===================================================================*/
/*#####################################################################*/
/* TO CREATE THE FIRST AND ITS ONWARD NODE INTO LINK LIST  */

void create()
{
char ch='y';
node *list,*new1;

       while(ch=='y'||ch=='Y')
       {
	   new1=load();

	   new1->next=NULL;
	   if(head==NULL)
	     {
	      printf("\n\tLINT LIST DOES NOT EXISIST");
	      head=new1;
	      }
	   else
	      {
	       list=head;
	    while(list->next!=NULL)
	       {
		list=list->next;
		}
		list->next=new1;
	    }
	       printf("\n\n\tDO U WANT TO CONTINUE\t ");
	       fflush(stdin);
	      scanf("%c",&ch);
	}

}
/*========================================================================*/
/*########################################################################*/
/* ENTERING DATA INTHE NEWLY FORMDE NODE OF LINK LIST */

node* load()
{
 node *new1;
 int x=0;
 char a[50];

	   new1=(node*)malloc(sizeof(node));

	   printf("\n\tENTER U R ROLL NO ");
	   fflush(stdin);
	   scanf("%d",&new1->rno);

	  l:
	   printf("\n\tENTER U R NAME ");
	   fflush(stdin);
	   gets(a);
	    x=cheak_string(a);
	    if(x==0)
	    {strcpy(new1->na,a);}
	    else
	    { printf("\n\tSTRING CONTAINE NUMERIC VALUES \n");
	    goto l;  }

	   printf("\n\tENTER U R AGE ");
	   fflush(stdin);
	   scanf("%d",&new1->age);

	   return(new1);
}


/*========================================================================*/
/*########################################################################*/
/* PRINTING OF THE EACH NODES OF LINK LIST  */

void print1()
{

int c=0;
	      printf("\n\n\t\t       MENU  ");
	      printf("\n\n\t-----------------------------");
	      printf("\n\t* FOR NORMAL PRINTING   :-> 1 ");
	      printf("\n\t* FOR REVERSE PRINTING  :-> 2 ");
	      printf("\n\t* FOR MAIN MENU         :-> 3 ");
	      printf("\n\t* FOR EXIT              :-> 4 ");
	      printf("\n\n\tENTER THE DESIRED CHOICE \t");
	      fflush(stdin);
	      scanf("%d",&c);

	      switch (c)
	      {
	       case 1:
	       print();
	       delay(2000);
	       break;

	       case 2:
	       printrev();
	       delay(2000);
	       break;

	       case 3:
	       menu();
	       break;

	       case 4:
	       exit(1);
	       break;

	       default:
	       printf("\n\tINVALID CHOICE ");
	       print1();
	       break;
	      }

     print1();
}
/*---------------------------------------------------------------------*/
void print()
{

node *list,*new1;
int q=0;
clrscr();
 if(head==NULL)
      {
	printf("\n\tLINK LIST DOES NOT EXISIST \n");
       }
  else
     {
       printf("\n\t PRINTING RESULT ");
       printf("\n\t====================================\n");

	 list=head;
    while(list!=NULL)
	{
	 q++;
	 printf("\n\tROLL NO %d",list->rno);
	 printf("\n\tNAME %s",list->na);
	 printf("\n\tAGE %d ",list->age);
	 printf("\n\n");
	 list=list->next;
	 if(q==8)
	 { delay(3000); clrscr();q=0; }
	 }
      }
}
/*--------------------------------------------------------------------*/
void printrev()
{
 node *list,*p;

       if(head==NULL)
	 {
	  printf("\n\tLINK LIST DOES NOT EXISIST \n");
	  }
       else

       printf("\n\t PRINTING RESULT ");
       printf("\n\t==================================== ");

       p=head;
	while(p!=NULL)
	p=p->next;
	do
	 {
	  list=head;
	   while(list->next!=p)
	   list=list->next;
		 printf("\n\tROLL NO %d",list->rno);
		 printf("\n\tNAME %s",list->na);
		 printf("\n\tAGE %d ",list->age);
		 printf("\n\n");

		 p=list;
	   }while(p!=head);
}
/*======================================================================*/
/*######################################################################*/
/* COUNTING OF NODES  LINK LIST */

int count()
{

node *list,*new1;
int c=0;
clrscr();
	   if(head==NULL)
	      {
	      printf("\n\tLINK LIST DOES NOT EXISIST\n");
	       }
	   else
	  {
		c=0;
		list=head;
	     while(list!=NULL)
	      {
	       c++;
	       list=list->next;
	      }
	   }
	 delay(50);
	 return(c);
}
/*####################################################################*/
/*=====================================================================*/
/*FOR DISPLAYING THE OPTION OF AGE ,ROLL NO, NAME FOR ANY PURPOSE */
void smenu()
{
clrscr();
	    printf("\n\t          MENU");
	    printf("\n\t===========================");
	    printf("\n\tFOR ROLLNO BASED  1");
	    printf("\n\tFOR NAME BASED    2");
	    printf("\n\tFOR AGE  BASED    3");
	    printf("\n\tFOR MAIN MENU            4");
 }
/*=========================================================================*/

/*########################################################################*/

   /*SEARCHING OF NODE*/

void search()
{

 node *list,*new1;
 int c=0;
clrscr();
list=head;
	   if(list==NULL)
	   {
	    printf("\n\tLINK LIST DOES NOT EXISIST ");
	   }
	   else
	   {
	    smenu();
	    printf("\n\n\tENTER THE BAISE OF SEARCHING\t");
	    fflush(stdin);
	    scanf("%d",&c);

	    switch(c)
	    {
	     case 1:
	     rno();
	     break;

	     case 2:
	     name();
	     break;

	     case 3:
	     age();
	     break;

	     case 4:
	     menu();
	     break;

	     default:
	     printf("\n\n\tINVALID CHOICE ");
	     search();
	     break;

	    }
	   }
}
/*----------------------------------------------------------------------*/
		   /* SEARCHING OF ANY NODE*/

int rno()
{
node *list;
int o=0,c;
clrscr();
	    printf("\nENTER THE ROLLNO \t");
	    fflush(stdin);
	    scanf("%d",&c);

	    list=head;
	     while(list!=NULL)
	     {
	      o++;
	      if(list->rno==c)
	      {
	       printf("\n\t%d",list->rno);
	       printf("\n\t%s",list->na);
	       printf("\n\t%d",list->age);
	       printf("\n\tNODE NUMBER IS %d",o);
	       break;
	      }
	      list=list->next;
	     }
	 return(o);
}
/*-----------------------------------------------------------------*/
int name()
{
node *list;
int o=0,x=1,y=0;
char c[40];
clrscr();

	   l:
	    printf("\nENTER THE NAME \t");
	    fflush(stdin);
	    gets(c);
	    y=cheak_string(c);
	    if(y!=0)
	     { printf("\nSTRING CONTAINES NUMERIC VALUES \n");
	      goto l;}

	    list=head;
	     while(list!=NULL)
	     {
	      o++;
	     x=strcmp(list->na,c);
	       if(x==0)
		 {
		   printf("\n\t%d",list->rno);
		   printf("\n\t%s",list->na);
		   printf("\n\t%d",list->age);
		   printf("\n\tNODE NUMBER IS %d",o);
		   break;
		  }
		list=list->next;
	      }
	    return(o);
}

/*-------------------------------------------------------------------*/
int age()
{
node *list;
int o=0,c;
clrscr();
	    printf("\nENTER THE AGE \t");
	    fflush(stdin);
	    scanf("%d",&c);

	    list=head;
	     while(list!=NULL)
	     {
	      o++;
	      if(list->age==c)
	      {
	       printf("\n\t%d",list->rno);
	       printf("\n\t%s",list->na);
	       printf("\n\t%d",list->age);
	       printf("\n\tNODE NUMBER IS  %d",o);
	       break;
	      }
	      list=list->next;
	     }
	 return(o);
}
/*=========================================================================*/
/*########################################################################*/

void view()
{
 node *list;
 int c=0,o=0,x=0;
 clrscr();

	   printf("\n\n\tENTER THE NODE NUMBER FOR VIEW \t");
	   scanf("%d",&c);
	    x=count();
	    if(c<1)
	    {
	    printf("\n\n\tTHIS NUMBER'S NODE DOES NOT EXIXIST");
	    }
	    else if(c>x)
	    {
	    printf("\n\n\tTHIS NUMBER'S NODE DOES NOT EXIXIST");
	    }
	    else
	    {
	   list=head;
	      o=0;
	    while(list!=NULL)
	     {
	      o++;
	      if(c==o)
	      {
	       printf("\n\t%d",list->rno);
	       printf("\n\t%s",list->na);
	       printf("\n\t%d",list->age);
	       printf("\n\tNODE NUMBER IS  %d ",o);
	       break;
	      }
	      list=list->next;
	    }
	  }
}
/*===================================================================*/
/*###################################################################*/
   /*DELETION OF NODE*/

void del()
{
  node *list,*p;
   int c=0;
	     clrscr();
	     printf("\n\n\t        MENU   ");
	     printf("\n\n-------------------------------");
	     printf("\n\n\tDELETE AT BEAGNING      :-> 1");
	     printf("\n\n\tDELETE AT END            :->2");
	     printf("\n\n\tDELETE AFTER ANY NODE    :->3");
	     printf("\n\n\tDELETE BEFORE ANY NODE   :->4");
	     printf("\n\n\tDELETE  ANY NODE         :->5");
	     printf("\n\n\tFOR MAIN MENU            :->6");
	     printf("\n\n\tFOR PRINTING             :->7");
	     printf("\n\n\tFOR EXIT                 :->8");
	     printf("\n\n--------------------------------");
	     printf("\n\nENTER U R CHOICE      ");
	     scanf("%d",&c);
	     switch (c)
	     {
	      case 1:
	      d1_first();
	      break;

	      case 2:
	      d2_last();
	      break;

	      case 3:
	      d3_after();
	      break;

	      case 4:
	      d4_before();
	      break;

	      case 5:
	      d5_any();
	      break;

	      case 6:
	      menu();
	      break;

	      case 7:
	      print();
	      delay(1000);
	      break;

	      case 8:
	      exit(1);
	      break;

	      default:
	      printf("\n\tINVALID CHOICE ");
	      del();
	      break;

	     }

	   del();
}
/*---------------------------------------------------------------------*/

void d1_first()
{
 node *list;
 int c;
       if(list==NULL)
	   {
	    printf("\n\tLINK LIST DOES NOT EXISIST ");
	   }
	   else
	   {
	    list=head;
	    head=head->next;
	    free(list);
	   }
	 del();
}
/*------------------------------------------------------------------*/
void d2_last()
{
 node *p,*list;
 int c,x;

       if(list==NULL)
	   {
	    printf("\n\tLINK LIST DOES NOT EXISIST ");
	   }
	   else
	   {
	   list=head;
	   while(list->next!=NULL)
	   {
	    list=list->next;
	   }
	    p=head;
	    while(p->next!=list)
	     {
	      p=p->next;
	     }
	    p->next=NULL;
	    free(list);
	   }
	  del();
}
/*-----------------------------------------------------------------*/

void d3_after()
{
 node *p,*list;
 int c;
 int x;
       if(list==NULL)
	   {
	    printf("\n\tLINK LIST DOES NOT EXISIST ");
	   }
	   else
	   {
	    smenu();
	    printf("\n\n\tENTER THE BAISE OF DELITION \t");
	    fflush(stdin);
	    scanf("%d",&c);

	    switch(c)
	    {
	     case 1:
	     x=rno();
	     x=x+1;
	     delet(x);
	     break;

	     case 2:
	     x=name();
	     x=x+1;
	     delet(x);
	     break;

	     case 3:
	     x=age();
	     x=x+1;
	     delet(x);
	     break;

	     case 4:
	     menu();
	     break;

	     default:
	     printf("\n\n\tINVALID CHOICE ");
	     d3_after();
	     break;

	    }
	}
}
/*----------------------------------------------------------------------*/

 void d4_before()
 {
   node *p,*list;
   int c,x;

       if(list==NULL)
	   {
	    printf("\n\tLINK LIST DOES NOT EXISIST ");
	   }
	   else
	   {
	    smenu();
	    printf("\n\n\tENTER THE BAISE OF DELITION \t");
	    fflush(stdin);
	    scanf("%d",&c);

	    switch(c)
	    {
	     case 1:
	     x=rno();
	     x=x-1;
	     delet(x);
	     break;

	     case 2:
	     x=name();
	     x=x-1;
	     delet(x);
	     break;

	     case 3:
	     x=age();
	     x=x-1;
	     delet(x);
	     break;

	     case 4:
	     menu();
	     break;

	     default:
	     printf("\n\n\tINVALID CHOICE ");
	     d4_before();
	     break;

	    }
	 }
}
/*-----------------------------------------------------------------*/
void d5_any()
{
 node *p,*list;
 int c;
 int x;
       if(list==NULL)
	   {
	    printf("\n\tLINK LIST DOES NOT EXISIST ");
	   }
	   else
	   {
	    smenu();
	    printf("\n\n\tENTER THE BAISE OF DELITION \t");
	    fflush(stdin);
	    scanf("%d",&c);

	    switch(c)
	    {
	     case 1:
	     x=rno();
	     delet(x);
	     break;

	     case 2:
	     x=name();
	     delet(x);
	     break;

	     case 3:
	     x=age();
	     delet(x);
	     break;

	     case 4:
	     menu();
	     break;

	     default:
	     printf("\n\n\tINVALID CHOICE ");
	     d5_any();
	     break;

	    }

       }
}
/*-------------------------------------------------------------------*/
void delet(int r)
{
 node *p,*list;
 int o=0,x;
	   x=count();

	 if(r>x)
	   {
	    printf("\n\tNODES NUMBER IN LIST IS DOES NOT EXISIST ");
	   }
	  else if(r==1)
	   {
	    d1_first();
	   }
	  else if(r==x)
	   {
	    d2_last();
	   }
	     list=head;
	    while(list!=NULL)
	    {
	      o++;
	      if(o==r)
	      {
		break;
	      }
	      list=list->next;
	     }

       /*  printf("\n%d",o);
	    printf("\n%d",r); */

	       p=head;
		while(p->next!=list)
		{
		 p=p->next;
		}
		 p->next=list->next;

		 free (list);
		del();
}
/*===================================================================*/
/*######################################################################*/
			/*INSERTION OF NODE*/

void insert()
{
 node *list;
 int c=0;
	     clrscr();
	     printf("\n\n\t        MENU   ");
	     printf("\n\n-------------------------------");
	     printf("\n\n\tINSERT AT BEAGNING      :-> 1");
	     printf("\n\n\tINSERT AT END            :->2");
	     printf("\n\n\tINSEART AFTER ANY NODE   :->3");
	     printf("\n\n\tINSERT BEFORE ANY NODE   :->4");
	     printf("\n\n\tINSERT ANY WHERR IN LIST :->5");
	     printf("\n\n\tFOR MAIN MENU            :->6");
	     printf("\n\n\tFOR EXIT                 :->7");
	     printf("\n\n--------------------------------");
	     printf("\n\nENTER U R CHOICE      ");
	     scanf("%d",&c);
	     switch (c)
	     {
	      case 1:
	      in1_begning();
	      break;

	      case 2:
	      in2_end();
	      break;

	      case 3:
	      in3_after();
	      break;

	      case 4:
	      in4_before();
	      break;

	      case 5:
	      in5_anywhere();
	      break;

	      case 6:
	      menu();
	      break;

	      case 7:
	      exit(1);
	      break;

	      default:
	      printf("\n\tINVALID CHOICE ");
	      insert();
	      break;

	     }
}
/*--------------------------------------------------------------*/

void in1_begning()
{
node *new1;
	   new1=load();
	      new1->next=head;
	      head=new1;
	      insert();
}
/*-----------------------------------------------------------------*/

void in2_end()
{
 node *list,*new1;
 int x=0;
		  x=count();
		  if(x==1)
		  {
		     list=head;
		    new1=load();
		     list->next=new1;
		     new1->next=NULL;
		   }
		  else
		  {
		   list=head;
		  while(list->next!=NULL)
		  {
		   list=list->next;
		  }

	       new1=load();

	      new1->next=NULL;
	      list->next=new1;
	  }
    insert();
}
/*-----------------------------------------------------------------*/

void in3_after()
{

  node *p,*list;
 int c;
 int x,o;

       if(list==NULL)
	   {
	    printf("\n\tLINK LIST DOES NOT EXISIST ");
	   }
	   else
	   {
	    clrscr();
	    smenu();
	     printf("\n\n\tENTER THE BAISE OF INSERTION  \t");
	    fflush(stdin);
	    scanf("%d",&c);

	    switch(c)
	    {
	     case 1:
	     x=rno();
	     x=x+1;
	     ins1(x);
	     break;

	     case 2:
	     x=name();
	     x=x+1;
	     ins1(x);
	     break;

	     case 3:
	     x=age();
	     x=x+1;
	     ins1(x);
	     break;

	     case 4:
	     menu();
	     break;

	     default:
	     printf("\n\n\tINVALID CHOICE ");
	     insert();
	     break;

	    }
       }
}
/*--------------------------------------------------------------------*/

void in4_before()
{

  node *p,*list;
  int c;
  int x;
       if(list==NULL)
	   {
	    printf("\n\tLINK LIST DOES NOT EXISIST ");
	   }
	   else
	   {
	    smenu();
	    printf("\n\n\tENTER THE BAISE OF INSERTION  \t");
	    fflush(stdin);
	    scanf("%d",&c);

	    switch(c)
	    {
	     case 1:
	     x=rno();
	     x=x-1;
	     ins1(x);
	     break;

	     case 2:
	     x=name();
	     x=x-1;
	     ins1(x);
	     break;

	     case 3:
	     x=age();
	     x=x-1;
	     ins1(x);
	     break;

	     case 4:
	     menu();
	     break;

	     default:
	     printf("\n\n\tINVALID CHOICE ");
	     insert();
	     break;

	    }
       }
}
/*------------------------------------------------------------------*/
void in5_anywhere()
{
int c=0;
int x=0;
       clrscr();
      printf("\n\n\tENTER THE POSTION FOR NEW NODE \t");
      scanf("%d",&c);
	x=count();
	  if(c<1)
	 {
	  printf("\n\n\tINVALID NODE NUMBER  ");
	 }
	 else if(c>x)
	 {
	  printf("\n\n\tINVALID NODE NUMBER  ");
	 }
	 else if(x==0&&c==1)
	 {
	 in1_begning();
	 }
	 else
	 {
	 ins1(c);
	 }

}
/*------------------------------------------------------------------------*/

void ins1(int n)
{
 node *list,*new1;
 int o=0,y=0;

		 y=count();
		 if(n==1&&y==1)
		 {
		 in1_begning();
		 }
		 n=n-1;
		 if(n==y)
		 {
		 in2_end();
		 }
		 else
		 {
		   list=head;

		 do  {
		     o++;
		    if(o==n)
		     {
		      break;
		      }
		     list=list->next;
		   }while(list!=NULL);
	   new1=load();
	   new1->next=list->next;
	   list->next=new1;

     }

}
/*=====================================================================*/
/*######################################################################*/

/* FOR UPDATE THE DATA OF THE NODE */

void up_menu()
{
int x=0,c=0;

	     smenu();
	     printf("\n\n\tENTER THE BAISE OF ACTION \t");
	     fflush(stdin);
	     scanf("%d",&c);

	    switch(c)
	    {
	     case 1:
	     x=rno();
	     update( x);
	     break;

	     case 2:
	     x=name();
	     update(x);
	     break;

	     case 3:
	     x=age();
	     update(x);
	     break;

	     case 4:
	     menu();
	     break;

	     default:
	     printf("\n\n\tINVALID CHOICE ");
	     up_menu();
	     break;

	    }
 }

/*--------------------------------------------------------------------*/
 void update(int x)
 {
 node *j,*list,*p;
 int  o=0,n=0,y=0;
 char a[50];

		  n=count();
		 if(x<0)
		      {
		       printf("\n\n\tNODE CAN'T INSEART INTO LIST \n");
		      }
		 else if(x>n)
		      {
		       printf("\n\n\tNODE CAN'T INSEART INTO LIST \n");
		      }

		 p=head;
		  o=0;
		       while(p!=NULL)
		       {
			o++;
			  if(o==x)
			    {
				break;
			    }
			p=p->next;
		       }
		     list=p;

	   printf("\n\tENTER U R ROLL NO ");
	   fflush(stdin);
	   scanf("%d",&list->rno);

	   l:
	   printf("\n\tENTER U R NAME ");
	   fflush(stdin);
	   gets(a);
	   y=cheak_string(a);
	   if(y!=0)
	   { printf("\n\tSTRING CONTAINES NUMERIC VALUES \n");
	   goto l; }
	   else
	   {strcpy(list->na,a);}

	   printf("\n\tENTER U R AGE ");
	   fflush(stdin);
	   scanf("%d",&list->age);


}
/*====================================================================*/
		      /*  SORTING OF THE LINK LIST  */

void sort()
{
  int c=0;


		clrscr();
	     printf("\n\n\t        MENU   ");
	     printf("\n\n-------------------------------");
	     printf("\n\n\tFOR ASSENDING SORTING    :->1");
	     printf("\n\n\tFOR DECENDING SORTING    :->2");
	     printf("\n\n\tFOR SORTED PRINTING      :->3");
	     printf("\n\n\tFOR MAIN MENU            :->4");
	     printf("\n\n\tFOR EXIT                 :->5");
	     printf("\n\n--------------------------------");
	     printf("\n\nENTER U R CHOICE      ");
	     scanf("%d",&c);
	     switch (c)
	     {
	      case 1:
	      sort_assending();
	      break;

	      case 2:
	      sort_decending();
	      break;

	      case 3:
	      printf("\n\n\tPRINTING AFTER SORTING \n");
	      print();
	      delay(3000);
	      break;

	      case 4:
	      menu();
	      break;

	      case 5:
	      exit(1);
	      break;

	      default:
	      printf("\n\n\t INVALID CHOICE \t");
	      sort();
	      break;
	  }
     sort();
}
/*--------------------------------------------------------------------*/
void sort_assending()
{
int c=0;
	  smenu();
	 printf("\n\n\tENTER UR CHOICE \t");
	 fflush(stdin);
	  scanf("%d",&c);
	    switch (c)
	    {
	     case 1:
	     sort1();
	     break;

	     case 2:
	     sort2();
	     break;

	     case 3:
	     sort3();
	     break;

	     case 4:
	     menu();
	     break;

	     default :
	     printf("\n\n\tINVALID CHOICE ");
	     break;
	    }
	sort();
}
/*--------------------------------------------------------------------*/
void sort_decending()
{
int c=0;
	   smenu();
	 printf("\n\n\tENTER UR CHOICE \t");
	 fflush(stdin);
	  scanf("%d",&c);
	    switch (c)
	    {
	     case 1:
	     sort4();
	     break;

	     case 2:
	     sort5();
	     break;

	     case 3:
	     sort6();
	     break;

	     case 4:
	     menu();
	     break;

	     default :
	     printf("\n\n\tINVALID CHOICE ");
	     break;
	    }
	sort();
}
/*--------------------------------------------------------------------*/
/* SORTING IS DONE ON THE BASIC OF ROLLNO IN ASSENDING ORDER
->SELECTION SORT*/

void sort1()
{
node *p,*q,*t;
int i=0,j=0,l=0;

	    l=count();
	    p=head;
	    for(i=0;i<(l-1);i++)
	    {
	      q=p->next;
	      for(j=(i+1);j<l;j++)
	      {
	       if(p->rno>q->rno)
	       {
		t->rno=p->rno;
	  strcpy(t->na,p->na);
		t->age=p->age;

		p->rno=q->rno;
	  strcpy(p->na,q->na);
		p->age=q->age;

		q->rno=t->rno;
	  strcpy(q->na,t->na);
		q->age=t->age;
	       }
	      q=q->next;
	      }
	     p=p->next;
	    }
}

/*-----------------------------------------------------------------*/
/*  SORTING IS DONE ON THE BASIC OF NAME IN ASSENDING ORDER
->SELECTION SORT*/

void sort2()
{
node *p,*q,*t;
int i=0,j=0,l=0;

	    l=count();
	    p=head;
	    for(i=0;i<(l-1);i++)
	    {
	      q=p->next;
	      for(j=(i+1);j<l;j++)
	      {
	       if(p->na[0]>q->na[0])
	       {
		t->rno=p->rno;
	  strcpy(t->na,p->na);
		t->age=p->age;

		p->rno=q->rno;
	  strcpy(p->na,q->na);
		p->age=q->age;

		q->rno=t->rno;
	  strcpy(q->na,t->na);
		q->age=t->age;
	       }
	      q=q->next;
	      }
	     p=p->next;
	    }
}
/*-----------------------------------------------------------------*/
/*  SORTING IS DONE ON THE BASIC OF AGE IN ASSENDING ORDER
->SELECTION SORT*/

void sort3()
{
node *p,*q,*t;
int i=0,j=0,l=0;

	    l=count();
	    p=head;
	    for(i=0;i<(l-1);i++)
	    {
	      q=p->next;
	      for(j=(i+1);j<l;j++)
	      {
	       if(p->age>q->age)
	       {
		t->rno=p->rno;
	  strcpy(t->na,p->na);
		t->age=p->age;

		p->rno=q->rno;
	  strcpy(p->na,q->na);
		p->age=q->age;

		q->rno=t->rno;
	  strcpy(q->na,t->na);
		q->age=t->age;
	       }
	      q=q->next;
	      }
	     p=p->next;
	    }
}
/*-----------------------------------------------------------------*/

/* SORTING IS DONE ON THE BASIC OF ROLLNO IN DECENDING ORDER
 -> BUBLE SORT  */

void sort4()
{
int i=0,j=0,l=0;
node *p,*q,*t;

	    l=count();

	   for(i=0;i<(l-1);i++)
	   {
	    p=head;
	    q=p->next;
	    for(j=l;j>=(i+1);j--)
	    {
	     if(p->rno<q->rno)
	     {
	      t->rno=p->rno;
	strcpy(t->na,p->na);
	      t->age=p->age;

	      p->rno=q->rno;
	strcpy(p->na,q->na);
	      p->age=q->age;

	      q->rno=t->rno;
	strcpy(q->na,t->na);
	      q->age=t->age;
	     }
	     p=p->next;
	     q=q->next;
	    }
       }
}
/*======================================================================*/
/*  SORTING ON THE BASIC OF THE NAME ON DECENDING ORDER
 -> BUBLE SORT */

void sort5()
{
int i=0,j=0,l=0;
node *p,*q,*t;

	    l=count();

	   for(i=0;i<(l-1);i++)
	   {
	    p=head;
	    q=p->next;
	    for(j=l;j>=(i+1);j--)
	    {
	     if(p->na[0]<q->na[0])
	     {
	      t->rno=p->rno;
	strcpy(t->na,p->na);
	      t->age=p->age;

	      p->rno=q->rno;
	strcpy(p->na,q->na);
	      p->age=q->age;

	      q->rno=t->rno;
	strcpy(q->na,t->na);
	      q->age=t->age;
	     }
	     p=p->next;
	     q=q->next;
	    }
       }
}
/*======================================================================*/
/* SORTING ON THE BASIC OF AGE IN DECENDING ORDER
 -> BUBLE SORT */

void sort6()
{
int i=0,j=0,l=0;
node *p,*q,*t;

	    l=count();

	   for(i=0;i<(l-1);i++)
	   {
	    p=head;
	    q=p->next;
	    for(j=l;j>=(i+1);j--)
	    {
	     if(p->age<q->age)
	     {
	      t->rno=p->rno;
	strcpy(t->na,p->na);
	      t->age=p->age;

	      p->rno=q->rno;
	strcpy(p->na,q->na);
	      p->age=q->age;

	      q->rno=t->rno;
	strcpy(q->na,t->na);
	      q->age=t->age;
	     }
	     p=p->next;
	     q=q->next;
	    }
       }
}
/*-------------------------------------------------------------------*/
/*input validationof character */
int cheak_string(char a[])
{
 int x=0,l=0,i;
	l=strlen(a);
	   for(i=0;i<l;i++)
	   {
	    if(a[i]>=65 && a[i]<= 90||a[i]>= 97 && a[i]<=122||a[i]==32||a[i]=='\t')
	    { continue; }
	    else
	    {  x=x+1;break; }
	   }
	  return(x);
}
/*-----------------------------------------------------------------*/
/*input validation of numeric values*/

int cheak_integer(int )
{
   int x=0;

     return (x);
}
/*======================================================================*/
/*#####################################################################*/
			      /*( END)*/