/* SIMPLE LINK LIST DEMOSTRATION PROGRAM OF EACH FUNCTION */


#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<dos.h>
#include<io.h>
#include<malloc.h>
#include<process.h>
#include<stdlib.h>
#include<ctype.h>

typedef struct student
		      {
		       int rno;
		       char na[50];
		       int age;
		       struct student *next;
		       }node;

node *head;   //GLOBAL DECLARATION
/*---------------------*/
void create();
int count();
void view();
/*---------------------*/
void print();
void print1();
void printrev();
int p_delay();
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
int cheak_integer(char []);
int check_singleint(int );
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
int o,x;
clrscr();
	      while(ch!='n')
	     {
	       l:
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
		 printf("\n\n\n (OPTION ENTER)-> ENTER YOUR CHOICE :->  ");
		 fflush(stdin);
		 scanf("%d",&o);

	     x=check_singleint(o);
	     if(x!=0)
	     {
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
		   printf("\n(RESULT)-> NUMBER OF NODES IN LIST IS %d ",x);
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
		   printf("\n(ERROR MASSAGE)-> INVALID CHOICE ");
		   delay(1000); menu();
		   break;
		  }
		 }
	     else
	     { printf("\n\n(ERROR MASSAGE)-> INVALID CHOICE ");goto l;   }
	    }
	  menu();
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
	      printf("\n(SYSTEM MASSAGE)-> LINK LIST DOES NOT EXISIST");
	      head=new1;
	      }
	   else
	      {
	       list=head;
	    while(list->next!=NULL)
	       {
	       list=list->next;}
	       list->next=new1;
		}
	       printf("\n\n(MASSAGE)-> DO U WANT TO CONTINUE PRESS Y | N \t ");
	       fflush(stdin);
	      scanf("%c",&ch);
	   }

}
/*========================================================================*/
/*########################################################################*/
/* ENTERING DATA IN THE NEWLY FORMED NODE OF LINK LIST
AND RETURN NUE NODE TO CALLING FUNCTION
INPUT VALIDATION IS ALSO CHECK */

node* load()
{
 node *new1;
 int x=0,y=0;
 char n[20];
 char a[50];

	   new1=(node*)malloc(sizeof(node));

	m:  printf("\n\t ENTER U R ROLL NO ");
	    fflush(stdin);
	    gets(n);
	y=cheak_integer(n);
	if(y!=0)
	  { (new1->rno= y); }
	else
	{   goto m; }

	l:    printf("\n\t ENTER U R NAME ");
	      fflush(stdin);
	      gets(a);
	 x=cheak_string(a);
	 if(x==0)
	    {strcpy(new1->na,a);}
	 else
	 {  goto l;  }


	o:   printf("\n\t ENTER U R AGE ");
	     fflush(stdin);
	     gets(n);
	  y=cheak_integer(n);
	  if(y!=0)
	    { (new1->age= y); }
	   else
	     {   goto o; }

   return(new1);
}


/*========================================================================*/
/*########################################################################*/
/* PRINTING OF THE EACH NODES OF LINK LIST
 AND PROVIDING OPTION TO USER FOR PRINTING  */

void print1()
{
int c=0,x=0;

	 l:   clrscr();
	      printf("\n\n\t\t       MENU  ");
	      printf("\n\n\t-----------------------------");
	      printf("\n\t* FOR NORMAL PRINTING   :-> 1 ");
	      printf("\n\t* FOR REVERSE PRINTING  :-> 2 ");
	      printf("\n\t* FOR MAIN MENU         :-> 3 ");
	      printf("\n\t* FOR EXIT              :-> 4 ");
	      printf("\n\n(OPTION ENTER)-> ENTER THE DESIRED CHOICE \t");
	      fflush(stdin);
	      scanf("%d",&c);
	  x=check_singleint(c);
	  if(x!=0)
	     {
	      switch (c)
	      {
	       case 1:
	       print();
	       break;

	       case 2:
	       printrev();
	       break;

	       case 3:
	       menu();
	       break;

	       case 4:
	       exit(1);
	       break;

	       default:
	       printf("\n(ERROR MASSAGE)-> INVALID CHOICE ");
	       p_delay(); print1();
	       break;
	      }
	     }
	  else
	   {goto l;  }
 print1();
}
/*---------------------------------------------------------------------*/
/* PRINTING IS DONE   */
void print()
{

node *list,*new1;
int o=0,z=0,c=0;

    clrscr();
  if(head==NULL)
    { printf("\n(ERROR MASSAGE)->  LINK LIST DOES NOT EXISIST \n");
      p_delay();print1(); }
  else
     {
	printf("\n\t PRINTING RESULT ");
	printf("\n\t====================================\n");
	c=count();
	list=head;
    while(list!=NULL)
	{
	 o=o+1;z=z+1;
	 printf("\n\tROLL NO %d",list->rno);
	 printf("\n\tNAME %s",list->na);
	 printf("\n\tAGE %d ",list->age);
	 printf("\n\n");
	 list=list->next;
	   if(o==7||z==c)
	     {p_delay();}
	 }
     }
}
/*--------------------------------------------------------------------*/
/* REVERSE PRINTING IS DONE */

void printrev()
{
 node *list,*p;
 int c=0,z=0,o=0;



       if(head==NULL)
	 { printf("\n(ERROR MASSAGE)-> LINK LIST DOES NOT EXISIST \n");
	 p_delay();print1(); }
       else
	   {
	   c=count();
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
		 o=o+1;z=z+1;
		 printf("\n\tROLL NO %d",list->rno);
		 printf("\n\tNAME %s",list->na);
		 printf("\n\tAGE %d ",list->age);
		 printf("\n\n");
		 p=list;
	       if(o==7||z==c)
		 {p_delay(); }
	   }while(p!=head);
	}
}
/*-----------------------------------------------------------------------*/
/* PROVIDING OPTION TO USER
TO PROCEED FURTHER FOR PRINTING */

int p_delay()
{
  int x=0;
	     printf("\n\n\t*  PRESS ANY KEY TO CONTINUE  * \n\n");
	     fflush(stdin);
	     scanf("%c",&x);
	     if(x>=0)
	     {x=1;clrscr();}
	     return (x);
}
/*======================================================================*/
/*######################################################################*/
/* COUNTING OF NODES  LINK LIST
 RETURN THE TOTAL NUMBER OF
  THE NOODE IN THE LINK LIST  */

int count()
{

node *list,*new1;
int c=0;
clrscr();

	    if(head==NULL)
	      { printf("\n(ERROR MASSAGE)-> LINK LIST DOES NOT EXISIST\n"); }
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
	    printf("\n\tFOR MAIN MENU     4");
 }
/*=========================================================================*/

/*########################################################################*/

   /*SEARCHING OF NODE AND PROVIDING
     OPTION TO USER FOR SEARCHING */

void search()
{

 node *list,*new1;
 int c=0,x=0;
 clrscr();
 list=head;
	 if(list==NULL)
	   { printf("\n(ERROR MASSAGE)-> LINK LIST DOES NOT EXISIST ");delay(1000);}
	 else
	   {
	 l: smenu();
	    printf("\n\n(OPTION ENTER)-> ENTER THE BAISE OF SEARCHING\t");
	    fflush(stdin);
	    scanf("%d",&c);
	 x=check_singleint(c);
	  if(x!=0)
	  {
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
	     printf("\n\n(ERROR MASSAGE)-> INVALID CHOICE ");
	     p_delay(); search();
	     break;
	     }
	    }
	  else
	  {goto l; }
	}
   search();
}
/*----------------------------------------------------------------------*/
  /* SEARCHING ON THE BASICES OF THE ROLL NUMBER
  AND THE NODE POSITION IN LINK LIST IS RETURN TO CALLING FUNCTION*/

int rno()
{
 node *list;
 int o=0,c=0;
 clrscr();
	      printf("\n\t ENTER THE ROLLNO \t");
	      fflush(stdin);
	      scanf("%d",&c);

	      list=head;
	     while(list!=NULL)
	      {
		o++;
	      if(list->rno==c)
		{
		 printf("\n\tROLL NO %d",list->rno);
		 printf("\n\tNAME    %s ",list->na);
		 printf("\n\tAGE     %d ",list->age);
		 printf("\n\tNODE NUMBER IS %d ",o);
		 break;
		 }
	       list=list->next;
	      }

	    if(list->rno!=c)
	      {printf("\n\n\tNO RESULT FOUND "); o=0; }
	       p_delay();
   return(o);
}
/*-----------------------------------------------------------------*/
/* SEARCHING IS DONE ON THE BASICES OF THE NAME
AND THE NODE POSITION IN LINK LIST IS RETURN TO CALLING FUNCTION */
int name()
{
 node *list;
 int o=0,x=0,y=0,u=0,i=0,z=0;
 char c[40],a[40],b[40];
 clrscr();


	  l:  printf("\n\t ENTER THE NAME \t");
	      fflush(stdin);
	      gets(c);

       y=cheak_string(c);
	 if(y!=0)
	   { printf("\n(ERROR MASSAGE)-> STRING CONTAINES NUMERIC VALUES \n");
	      goto l;}

	   for(i=0;c[i]!='\0';i++)
	   { a[i]=toupper(c[i]); }   //converting string to upper case
	     a[i]='\0';
	   for(i=0;c[i]!='\0';i++)
	   { b[i]=tolower(c[i]); }   //converting string to lower case
	     b[i]='\0';

	     list=head;
	    while(list!=NULL)
	     {
	      o++;
	     x=strcmp(list->na,a); //for comparing the string
	     z=strcmp(list->na,b);
	       if(x==0||z==0)
		 {
		  u++;
		   printf("\n\tROLL NO %d ",list->rno);
		   printf("\n\tNAME    %s ",list->na);
		   printf("\n\tAGE     %d ",list->age);
		   printf("\n\tNODE NUMBER IS %d ",o);
		   break;
		  }
		list=list->next;
	      }

	    if(u==0)
	      {printf("\n\n\tNO RESULT FOUND ");}
	    p_delay();

   return(o);
}

/*-------------------------------------------------------------------*/
/* SEARCHING OF NODE ON THE BASICES OF AGE
AND THE NODE POSITION IN LINL LIST IS RETURN TO CALLING FUNCTION*/
int age()
{
 node *list;
 int o=0,c=0,g=0;
 clrscr();
	     printf("\n\t ENTER THE AGE \t");
	     fflush(stdin);
	     scanf("%d",&c);

	     list=head;
	  while(list!=NULL)
	   {
	    o++;
	      if(list->age==c)
	      {
	       g=g+1;
	       printf("\n\tROLL NO %d",list->rno);
	       printf("\n\tNAME    %s",list->na);
	       printf("\n\tAGE     %d",list->age);
	       printf("\n\tNODE NUMBER IS  %d ",o);
	       break;
	      }
	    list=list->next;
	   }
	  if(g==0)
	    {printf("\n\n\tNO RESULT FOUND ");  }
	     p_delay();

   return(o);
}
/*=========================================================================*/
/*########################################################################*/
/* FOR VIEWING ANY PARTICULAR NODE IN THE LINK LIST */

void view()
{
 node *list;
 int c=0,o=0,x=0;
 clrscr();

	    printf("\n\n\t ENTER THE NODE NUMBER FOR VIEW \t");
	    fflush(stdin);
	    scanf("%d",&c);
	    x=count();
	  if(c<1||c>x)
     {printf("\n\n(ERROR MASSAGE)-> THIS NUMBER'S NODE DOES NOT EXIXIST");
	p_delay();}
	  else
	   {
	   list=head;
	   o=0;
	    while(list!=NULL)
	     {
	      o++;
	      if(c==o)
	       {
		printf("\n\tROLL NO %d",list->rno);
		printf("\n\tNAME     %s",list->na);
		printf("\n\tAGE      %d",list->age);
		printf("\n(MASSAGE)-> NODE NUMBER IS  %d ",o);
		break;
	       }
	      list=list->next;
	     }
	   }
}
/*===================================================================*/
/*###################################################################*/
   /*DELETION OF NODE AND PROVIDING OPTION TO USER*/

void del()
{
  node *list,*p;
  int c=0,x=0;

	  l: clrscr();
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
	     printf("\n\n(OPTION ENTER)-> ENTER U R CHOICE      ");
	     fflush(stdin);
	     scanf("%d",&c);
	  x=check_singleint(c);
	   if(x!=0)
	    {
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
	      break;

	      case 8:
	      exit(1);
	      break;

	      default:
	      printf("\n(ERROR MASSAGE)-> INVALID CHOICE ");
	      p_delay(); del();
	      break;
	     }
	    }
	   else
	    {goto l; }
  del();
}
/*---------------------------------------------------------------------*/
/* FOR DELITION OF THE FIRST NODE INT HE LINK LIST */
void d1_first()
{
 node *list;
 int c,u=0;

	 if(u==0)
     {printf("\n(ERROR MASSAGE)-> LINK LIST DOES NOT EXISIST ");
     p_delay();del();}
	  else
	   {
	   u=count();
	    list=head;
	    head=head->next;
	    free(list);
     { printf("\n\n(SYSTEM MASSAGE)-> DELITION OF NODE SUCESSFUL "); }
	p_delay();
	   }
  del();
}
/*------------------------------------------------------------------*/
/* DELITION OF THE LAST NODE IN THE LINK LIST */
void d2_last()
{
 node *p,*list;
 int c,u=0;

	 if(u==0)
    { printf("\n(ERROR MASSAGE)-> LINK LIST DOES NOT EXISIST ");
    p_delay();del(); }
	  else
	   {
	   u=count();
	    list=head;
	    while(list->next!=NULL)
	     { list=list->next; }
	       p=head;
	       while(p->next!=list)
		{ p=p->next;}
	    p->next=NULL;
	    free(list);
	   {printf("\n\n(SYSTEM MASSAGE)-> DELITION OF NODE SUCESSFUL "); }
	   p_delay();
	 }
  del();
}
/*-----------------------------------------------------------------*/
/* DELITION OF THE NODE AFTER
ANY NAME ,AGE , ROLL NUMBER IN THE LINK LIST */

void d3_after()
{
 node *p,*list;
 int c,x,u=0;

	 if(u==0)
    { printf("\n(ERROR MASSAGE)-> LINK LIST DOES NOT EXISIST ");
    p_delay();del(); }
	  else
	   {
	   u=count();
	 l: smenu();
	    printf("\n\n(OPTION ENTER)-> ENTER THE BAISE OF DELITION \t");
	    fflush(stdin);
	    scanf("%d",&c);
	  x=check_singleint(c);
	  if(x!=0)
	   {
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
	     printf("\n\n(ERROR MASSAGE)-> INVALID CHOICE ");
	     p_delay();  d3_after();
	     break;
	    }
	   }
	 else
	  {goto l; }
	}
  d3_after();
}
/*----------------------------------------------------------------------*/
/* DELITION OF THE NODE BEFORE
ANY NAME ,AGE , ROLL NUMBER IN THE LINK LIST */

 void d4_before()
 {
   node *p,*list;
   int c,x,x1=0,u=0;

       if(u==0)
   { printf("\n(ERROR MASSAGE)-> LINK LIST DOES NOT EXISIST ");
   p_delay(); del(); }
	   else
	   {
	   u=count();
	 l: smenu();
	    printf("\n\n(OPTION ENTER)-> ENTER THE BAISE OF DELITION \t");
	    fflush(stdin);
	    scanf("%d",&c);
	  x1=check_singleint(c);
	  if(x1!=0)
	   {
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
	     printf("\n\n(ERROR MASSAGE)-> INVALID CHOICE ");
	     p_delay();  d4_before();
	     break;
	    }
	   }
	  else
	  { goto l; }
	 }
   d4_before();
}
/*-----------------------------------------------------------------*/
/* DELITION OF THE ANY NODE ON THE BASICES OF
 NAME ,AGE , ROLL NUMBER IN THE LINK LIST */

void d5_any()
{
 node *p,*list;
 int x=0,x1=0,c=0,u=0;


	 if(u==0)
  { printf("\n(ERROR MASSAGE)-> LINK LIST DOES NOT EXISIST ");
  p_delay();del(); }
	 else
	  {
	  u=count();
	 l: smenu();
	    printf("\n\n(OPTION ENTER)-> ENTER THE BAISE OF DELITION \t");
	    fflush(stdin);
	    scanf("%d",&c);
	 x1=check_singleint(c);
	 if(x1!=0)
	  {
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
	     printf("\n\n(ERROR MASSAGE)-> INVALID CHOICE ");
	     p_delay(); d5_any();
	     break;
	    }
	   }
	 else
	  { goto l; }
       }
  d5_any();
}
/*-------------------------------------------------------------------*/
/* ACTUAL DELITION OF THE NODES FROM
THE LINK LIST BY ACCEPTING NODE NUMBER*/
void delet(int r)
{
 node *p,*list;
 int o=0,x=0;
	   x=count();

	 if(r>x||r==0||x==0)
 {printf("\n(ERROR MASSAGE)-> NODES NUMBER IN LIST IS DOES NOT EXISIST ");
   p_delay(); del();}
	  else if(r==1)
	   { d1_first(); }
	  else if(r==x)
	   { d2_last();}
	  else
	   {
	     list=head;
	    while(list!=NULL)
	    {
	      o++;
	      if(o==r)
	      { break;}
	      list=list->next;
	     }
	      p=head;
	   while(p->next!=list)
	      { p=p->next; }
	  p->next=list->next;
	  free (list);
	printf("\n\n(SYSTEM MASSAGE)-> DELITION OF NODE SUCESSFUL ");
	p_delay();
	   }
  del();
}
/*===================================================================*/
/*######################################################################*/
			/*INSERTION OF NODE*/
/* INSEARTION OF THE NODES IN THE LINK LIST
PROVIDING OPTION TO THE USER FOR INSEARTION  */
void insert()
{
 node *list;
 int c=0,x=0;

	 l:  clrscr();
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
	     printf("\n\n(OPTION ENTER)-> ENTER U R CHOICE      ");
	     fflush(stdin);
	     scanf("%d",&c);
	 x=check_singleint(c);
	 if(x!=0)
	  {
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
	      printf("\n(ERROR MASSAGE)-> INVALID CHOICE ");
	      p_delay(); insert();
	      break;
	     }
	    }
	  else
	   { goto l; }
   insert();
}
/*--------------------------------------------------------------*/
/* INSEARTION AT THE BEAGNING OF THE LINK LIST */
void in1_begning()
{
  node *new1;
	      new1=load();
	      new1->next=head;
	      head=new1;
  insert();
}
/*-----------------------------------------------------------------*/
/* INSEARTION AT THE END OF THE LINK LIST  */
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
		   { list=list->next; }
		 new1=load();
		 new1->next=NULL;
		 list->next=new1;
		 }
    insert();
}
/*-----------------------------------------------------------------*/
/* INSEARTION AFTER ANY NODE AND PROVIDING OPTION FOR THE INSEARTION  */


void in3_after()
{

 node *p,*list;
 int c;
 int x,o,x1=0;

	 if(list==NULL)
	   { printf("\n(ERROR MASSAGE)-> LINK LIST DOES NOT EXISIST "); }
	 else
	  {
	 l: clrscr();
	    smenu();
	    printf("\n\n(OPTION ENTER)-> ENTER THE BAISE OF INSERTION  \t");
	    fflush(stdin);
	    scanf("%d",&c);
	 x1=check_singleint(c);
	  if(x1!=0)
	    {
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
	     printf("\n\n(ERROR MASSAGE)-> INVALID CHOICE ");
	     p_delay(); insert();
	     break;
	     }
	    }
	 else
	  {goto l; }
	}
   insert();
}
/*--------------------------------------------------------------------*/
/* INSEARTION BEFORE ANY NODE AND PROVIDING OPTION FOR THE INSEARTION  */

void in4_before()
{

  node *p,*list;
  int c,x,x1=0;

	  if(list==NULL)
	    { printf("\n(ERROR MASSAGE)-> LINK LIST DOES NOT EXISIST "); }
	  else
	   {
	   l:smenu();
	     printf("\n\n(OPTION ENTER)-> ENTER THE BAISE OF INSERTION  \t");
	     fflush(stdin);
	     scanf("%d",&c);
	   x1=check_singleint(c);
	  if(x1!=0)
	   {
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
	     printf("\n\n(ERROR MASSAGE)-> INVALID CHOICE ");
	     p_delay(); insert();
	     break;
	     }
	    }
	 else
	  { goto l; }
	}
    insert();
}
/*------------------------------------------------------------------*/
/* INSEARTION OF THE NODE ANY WHERE IN THE LINK LIST  */

void in5_anywhere()
{
  int c=0;
  int x=0;
  clrscr();
	  printf("\n\n(CHOICE MASSAGE)-> ENTER THE POSTION FOR NEW NODE \t");
	  fflush(stdin);
	  scanf("%d",&c);
	  x=count();
	  if(c<1)
	   { printf("\n\n(ERROR MASSAGE)-> INVALID NODE NUMBER  "); }
	  else if(c>x)
	   { printf("\n\n(ERROR MASSAGE)-> INVALID NODE NUMBER  "); }
	  else if(x==0&&c==1)
	   { in1_begning(); }
	  else
	   { ins1(c); }
}
/*------------------------------------------------------------------------*/
/* INSEARTION IN THE LINK LIST BY ACCEPTING NODE NUMBER */
void ins1(int n)
{
 node *list,*new1;
 int o=0,y=0;

		 y=count();
	       if(n==1&&y==1)
		{ in1_begning(); }
		 n=n-1;
	       if(n==y)
		  { in2_end(); }
	       else
		  {
		   list=head;
		 do
		   {
		    o++;
		     if(o==n)
		     { break; }
		     list=list->next;
		    }while(list!=NULL);
	       new1=load();
	       new1->next=list->next;
	       list->next=new1;
	       }
}
/*=====================================================================*/
/*######################################################################*/

/* FOR UPDATEING THE DATA OF THE NODE
 AND PROVIDING OPTION FOR UPDATE */

void up_menu()
{
  int x=0,c=0,x1=0;

	   l: smenu();
	      printf("\n\n(OPTION ENTER)-> ENTER THE BAISE OF ACTION \t");
	      fflush(stdin);
	      scanf("%d",&c);
	   x1=check_singleint(c);
	    if(x1!=0)
	    {
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
	      printf("\n\n(ERROR MASSAGE)-> INVALID CHOICE ");
	      p_delay(); up_menu();
	      break;
	      }
	    }
	else
	 { goto l; }
   up_menu();
 }

/*--------------------------------------------------------------------*/
/*ACTUAL UPDATION OF THE DATA OF THE NODE BY
 ACCEPTING NODE NUMBER  */
 void update(int x)
 {
 node *j,*list,*p;
 int  o=0,n=0,y=0;
 char a[50],n1[50];

       n=count();
    if(x<0)
      { printf("\n\n(ERROR MASSAGE)-> NODE CAN'T INSEART INTO LIST \n");}
    else if(x>n)
       { printf("\n\n(ERROR MASSAGE)-> NODE CAN'T INSEART INTO LIST \n");}

		 p=head;
		  o=0;
		       while(p!=NULL)
		       {
			o++;
			  if(o==x)
			    { break; }
			p=p->next;
		       }
		     list=p;

       m:  printf("\n\t ENTER U R ROLL NO ");
	   fflush(stdin);
	   gets(n1);
	    y=cheak_integer(n1);
	    if(y!=0)
	    { (list->rno= y); }
	    else
	    {   goto m; }

       l:  printf("\n\t ENTER U R NAME ");
	   fflush(stdin);
	   gets(a);
	   y=cheak_string(a);
	   if(y!=0)
	   { printf("\n\tSTRING CONTAINES NUMERIC VALUES \n");
	   goto l; }
	   else
	   {strcpy(list->na,a);}

       o:   printf("\n\t ENTER U R AGE ");
	    fflush(stdin);
	    gets(n1);
	    y=cheak_integer(n1);
	    if(y!=0)
	    { (list->age= y); }
	    else
	    {   goto o; }
}
/*====================================================================*/
		      /*  SORTING OF THE LINK LIST  */
/* PROVIDING OPTION TO USER FOR SORTING */
void sort()
{
  int c=0,x=0;

	  l: clrscr();
	     printf("\n\n\t        MENU   ");
	     printf("\n\n-------------------------------");
	     printf("\n\n\tFOR ASSENDING SORTING    :->1");
	     printf("\n\n\tFOR DECENDING SORTING    :->2");
	     printf("\n\n\tFOR SORTED PRINTING      :->3");
	     printf("\n\n\tFOR MAIN MENU            :->4");
	     printf("\n\n\tFOR EXIT                 :->5");
	     printf("\n\n--------------------------------");
	     printf("\n\n(OPTION ENTER)-> ENTER U R CHOICE      ");
	     fflush(stdin);
	     scanf("%d",&c);
	x=check_singleint(c);
	if(x!=0)
	 {
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
	      break;

	      case 4:
	      menu();
	      break;

	      case 5:
	      exit(1);
	      break;

	      default:
	      printf("\n\n(ERROR MASSAGE)-> INVALID CHOICE \t");
	      p_delay(); sort();
	      break;
	     }
	   }
	else
	{ goto l; }
   sort();
}
/*--------------------------------------------------------------------*/
/* SORTING IN ASSENING ORDERAND PROVIDING OPTION FOR SORTING */
void sort_assending()
{
  int c=0,x=0;

	l:  smenu();
	    printf("\n\n(OPTION ENTER)-> ENTER UR CHOICE \t");
	    fflush(stdin);
	    scanf("%d",&c);
	 x=check_singleint(c);
	 if(x!=0)
	  {
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
	     printf("\n\n(ERROR MASSAGE)-> INVALID CHOICE ");
	     p_delay(); sort();
	     break;
	    }
	   }
	else
	 {goto l;  }
   sort();
}
/*--------------------------------------------------------------------*/
/* SORTING ON DECENDING ORDER AND PROVIDE OPTION TO USER  */
void sort_decending()
{
  int c=0,x=0;

      l:   smenu();
	   printf("\n\n(OPTION ENTER)-> ENTER UR CHOICE \t");
	   fflush(stdin);
	   scanf("%d",&c);
	x=check_singleint(c);
	if(x!=0)
	 {
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
	     printf("\n\n(ERROR MASSAGE)-> INVALID CHOICE ");
	     p_delay(); sort();
	     break;
	    }
	   }
	else
       {goto l;  }
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
	    l:	t->rno=p->rno;
	  strcpy(t->na,p->na);
		t->age=p->age;

		p->rno=q->rno;
	  strcpy(p->na,q->na);
		p->age=q->age;

		q->rno=t->rno;
	  strcpy(q->na,t->na);
		q->age=t->age;
	       }
	  else if(p->na[0]==q->na[0]&& p->na[1]>q->na[1])
		 { goto l;}
	   else
		{ continue;  }
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
	  l:    t->rno=p->rno;
	strcpy(t->na,p->na);
	      t->age=p->age;

	      p->rno=q->rno;
	strcpy(p->na,q->na);
	      p->age=q->age;

	      q->rno=t->rno;
	strcpy(q->na,t->na);
	      q->age=t->age;
	     }
	   else if(p->na[0]==q->na[0]&& p->na[1]<q->na[1])
		 { goto l;}
	   else
		{ continue;  }
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
/*input validation of character
if it containe integer  it will generate error msg  */
int cheak_string(char a[])
{
 int x=0,l=0,i;

	l=strlen(a);          //for calculating length os string
	   for(i=0;i<l;i++)
	   {
	    if(a[i]>=65 && a[i]<= 90||a[i]>= 97 && a[i]<=122||a[i]==32||a[i]=='\t')
	    { continue; }
	    else
	    { printf("\n\n(ERROR MASSAGE)-> STRING CONTAINE NUMERIC VALUES \n");
	     x=x+1;break; }
	   }
	  return(x);
}
/*-----------------------------------------------------------------*/
/* input validation of numeric values
if it containe char it generate error msg */

int cheak_integer(char n[])
{
   int x=0;
   char *p;

	   p=n;

	   if(*(p)>=48 && *(p)<=57)
	   {
	    x=atoi(p);     //convert string to intger
	    return(x);
	   }
	   else
	   {
	    printf("\n\n(ERROR MASSAGE)-> NUMBER CONTAINE NON INTEGER VALUE\n");
	    x=0;
	   }
     return (x);
}
/*--------------------------------------------------------------------*/
/* SINGLE INTEGER VALIDATION RECEVES INT  IF TRUE RETURN 1 ELSE 0 */

 int check_singleint(int n)
 {
    if(n>=0&&n<=10)
       { return(1);}
    else
       { return(0);}
 }

/*======================================================================*/
/*#####################################################################*/
			      /*( END )*/