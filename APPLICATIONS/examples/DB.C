#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<malloc.h>
/* STRUCTURE DEFINATION  */
/*========================================================================*/
struct add
	  {
	  char name[30];
	  char  address[100];
	  char  ph[10];
	  struct add *nxt;
	  struct add *prior;

	  };
	  struct add list;
	  struct add *start;
	  struct add *last;

/* GLOBAL VARIABLE  */
/*===================================================================*/

    int ch,i=0,n;
    int top;
    int bottom;
    int right;
    int left;
    int color=WHITE;

/* prototype  */
/*=====================================================================*/

    void box_draw(int ,int ,int ,int ,int);
    void gets1(char *);
    void main_menu();
    void input();
    void load();
    void store();
    void list1();
    void delete ();
    void update ();
    void search();


/* MAIN FUNCTION  */
/*=======================================================================*/

  void main()
  {
     int choice;


    while(1)
	    {
	      clrscr();
	      main_menu();      /* main menu function calling */
	      choice = getche();
	      choice = toupper (choice); /* for converting in upper case */
     switch (choice)
     {
	case 'L':
	   {
	     clrscr();
	     load();
	     clrscr();
	     printf("\n\n\t\tFILE IS SUCCESSFULLY LOADED");
	     gotoxy(10,11);
	     textcolor(RED | 128);
	     cprintf("\n \n   PRESS A KEY  ");
	     getch();
	     textcolor(WHITE);
	     clrscr();
	     break;
	    }
	 case 'I':
	    {
	      clrscr();
	      printf("\n\nINPUT SESSION ");
	      gotoxy(10,11);
	      textcolor(RED | 128);
	      cprintf(" \n PRESS A KEY ");
	      getch();
	      clrscr();
	      textcolor(WHITE);
	      window(1,1,80,25);
	      input();
	      clrscr();

	      break;
	     }
	   case 'T':
	      {
	       clrscr();
	       window(1,1,80,25);
	       printf("\n\nLISTING SESSION ");
	       gotoxy(10,11);
	       textcolor(RED| 128);
	       cprintf("\n\nPRESS A KEY");
	       getch();
	       textcolor(WHITE);
	       clrscr();
	       list1 ();
	       getch();
	       window(1,1,80,25);
	       clrscr();

	       break;
	      }
	   case 'U':
	       {
		update();
		getch();

		break;
	       }
	   case 'D':
	       {
		delete();
		getch();

		break;
	       }
	    case 'S':
		{
		 search();

		 break;
		}
	     case 'E':
		 {
		  clrscr();
		  printf("\n\nEND OF SESSION ");
		  gotoxy(10,11);
		  textcolor(RED |128);
		  cprintf("\n\nPRESS A KEY");
		  getch();
		  textcolor(WHITE);
		  exit(0);
		 }
      }

	    }

  }

 /* FUNCTIONS  */
 /*====================================================================*/
  void input()
      {
       struct add *info;
       FILE *fp;
       fp=fopen("rec.dat","r");
       if (fp!=NULL)
       load();
       do
	 {
	  info = malloc(sizeof (list));
	  if (info==0)
	     {
	     printf("\n\nOUT OF MEMOARY");
	     exit(0);
	     }
	   clrscr();
	   gotoxy(11,8);
	   printf("\n\nENTER THE NAME :");
	   printf("\n\nENTER THE ADDRESS :");
	   printf("\n\nENTER THE PHONE NUMBER :");
	   printf("\n\n\n\n TYPE `end ` WHEN FINISHED:");

	   gotoxy(28,9);
	   gets1(info->name);
	   if(strcmp(info->name ,"end")==0)
	   break;

	   gotoxy(28,10);
	   gets(info->address );

	   gotoxy(28,11);
	   gets1(info->ph);
    if (start !=0 )

	 {

	    last->nxt=info;
	    info->prior=last;
	    last=info;
	    last->nxt=0;

	 }
    else
       {
	start=info;
	start->nxt=0;
	last=start;
	start->prior=0;
       }

      }while(1);
      store();
    }
 /*------------------------------------------------------------------------*/
 /* STORE FUNCTION  */

 void store()
     {
      register int t,size;
      struct add *info;
      char *p;
      FILE *fp;
      fp=fopen("rec.dat","w");
      if(fp==NULL)
	 {
	 printf("File rec.dat \n");
	 perror("ERROR : ");
	 exit(0);
	 }
      size = sizeof(list);
      info= start;
      while(info)
	 {
	  p=(char*)info;
	  for(t=0;t<size;++t)
	  putc(*p++,fp);
	  info=info->nxt;
	 }

      putc(EOF,fp);
      fclose(fp);
     }
/*-----------------------------------------------------------------*/

  void load()
  {
    register int t,size;
    struct add *info,*temp;
    char *p;
    FILE *fp;
    fp= fopen("rec.dat","r");
    if(fp==NULL)
       {
	printf("DATABASE FILE NOT EXIST-> rec.dat \n");
	perror("ERROR :");
	exit(0);
       }
     size=sizeof(list);
     start=malloc(size);
     if(!start)
	       {
	       printf("\n\nOUT OF MEMOARY");
	       }
      info= start;
      p=(char*)info;
      while((*p++=getc(fp))!=EOF)
	    {
	     for(t=0;t<size-1;++t)
	     *p++=getc(fp);
	     info->nxt=malloc(size);
	     if(!info->nxt)
		{
		 printf("\n\nOUT OF MEMO");
		 break;
		}
	      info->prior=temp;
	      temp=info;
	      info=info->nxt;
	      p=(char*)info;
	      }
       free(temp->nxt);
       temp->nxt=0;
       last=temp;
       start->prior=0;
       fclose(fp);


   }
/*---------------------------------------------------------------------*/
/*  LIST FUNCTION */


    void list1()
    {
    int i=1,j=1;
    register int t;
    struct add *info;
    info=start;
    if(!info)
    printf("\n\nLOAD FILE");
    while(info)
	 {
	 display(info);
	 info=info->nxt;
	 /*FOR SHOWING FIVE RECOARD ON SCREEN*/
	 if(i==5*j)
	    {
	     printf("\n\nPRESS ANY KEY TO CONTINUE");
	     getch();
	     j++;
	     i++;
	    }
	   i++;
	   printf("\n\n");
	 }
    }
/*--------------------------------------------------------------------*/
 /*  DISPLAY FUNCTION */


     display (info)
     struct add *info;
	  {
	   printf("\n\nNAME : %s",info->name);
	   printf("\n\nADDRESS :%s",info->address);
	   printf("\n\nPHONE NUMBER :",info->ph);
	   return;
	  }
/*------------------------------------------------------------------------*/
/*  DELETE FUNCTION */
   void delete()
       {
	 char name[30];
	 register int t,size;
	 struct add *info, *find();
	 window(1,1,80,25);
	 clrscr();
	 printf("\n\nDELETE SESSION");
	 gotoxy(10,11);
	 textcolor(RED|128);
	 cprintf("\n PRESS A KEY ");
	 getch();
	 textcolor(WHITE);
	 clrscr();
     printf("\n ENTER THE NAME TO DELETE ");
     gets1(name);
     info= find(name);
     if(info)
     {
     if(start==info)
     {
      start=info->nxt;
      start->prior=0;
     }
       else
       {info->prior->nxt=info->nxt;
       if(info!=last)
       {
	info->nxt->prior=info->prior;
       }
	else
	{
	 last=info->prior;
	}
	}
      free(info);
      store();
      printf("\n\n RECORD SUCCESSFULLY DELETED");
      }
      else
      printf("\n\nRECORD NOT FOUND ");
   }

/*-----------------------------------------------------------------------*/
/*SEARCH FUNCTION */

 void search()
 {
   char name[30];
   struct add*info,*find();
   window (1,1,80,25);
   clrscr();
   printf("\n\nSEARCH SESSION ");
   gotoxy(10,11);
   textcolor(RED|128);
   cprintf("\n\nPRESS A KEY ");
   getch();
   textcolor(WHITE);
   clrscr();

	    printf("\n\nENTER THE NAME TO FIND ->");
	    gets1(name);
	    if(!(info=find(name)))
	       {
		 printf("\nNOT FOUND ");
		 gotoxy(10,11);
		 textcolor(WHITE);
		 clrscr();
	       }
	     else
		{
		  display(info);
			  gotoxy(10,11);
			  textcolor(RED|128);
			  cprintf("\n\nPRESS A KEY");
			  getch();
			  textcolor(WHITE);
			  clrscr();
		}
 }

/*-----------------------------------------------------------------------*/
/* FUNCTION FIND  */

    struct add *find(name)
	   char *name;
	   {
	    struct add *info;
	    info =start;
	    while(info)
		 {
		  if(strcmp(info->name,name)==0)
		  return(info);
		  info=info->nxt;
		  }
	     return 0;
	   }


/*-------------------------------------------------------------------------*/
/* UPDATE FUNCTION  */

   void update()
   {
    char name[30];
    struct add *info;
    window(1,1,80,25);
    clrscr();
    printf("\n\nENTER THE NAME  -> ");
    gets1(name);
    info=start;
    while(info)
    {
     if(strcmp(info->name,name)==0)
     {
      display(info);
	      printf("\n\nNEW RECORD FOR ->%s",name);
	      gotoxy(10,11);
	      printf("\n\nENTER THE NAME : ");
	      printf("\n\nENTER THE ADDRESS : ");
	      printf("\n\nENTER THE PHONE NUMBER : ");
	      gotoxy(28,9);
	      gets1(info->name);
	      gotoxy(28,10);
	      gets1(info->address);
	      gotoxy(28,11);
	      gets1(info->ph);
	      store();
      }

      else

	  {
	    clrscr();
	    printf("\n\nNOT FOUND RECORD ->%s",name);
	    printf("\n\nPRESS A KEY ");
	   }
       info=info->nxt;
      }
   }

/*-------------------------------------------------------------------------*/
/* window function  */

  void main_menu()
      {
	clrscr();
	left=25;
	top=6;
	right=55;
	bottom=18;
	box_draw(left,top,right,bottom,YELLOW);
      }

/*-------------------------------------------------------------------------*/
/* FUNCTION DEFINATION  */

   void box_draw(int left,int top,int right, int bottom,int color)
       {
	 int i;
	 int width;
	 int hight;
	 char *string[]={
			  "L ->  LOAD" ,
			  "I ->  INPUT",
			  "T ->  LIST",
			  "U ->  UPDATE",
			  "D ->  DELETE",
			  "S ->  SEARCH",
			  "E ->  EXIT \n",
			  "ENTER U R CHOICE ->"
			  };
	   clrscr();
	   width= right-left+1;
	   hight=bottom-top+1;
	   window(left,top,right,bottom+1);
	   textcolor(color);
	   for(i=1;i<=width;i++)
	   {
	    gotoxy(i,1);
	    putchar(205);
	    gotoxy(i,hight);
	    putchar(205);
	   }
	    for(i=1;i<=width;i++)
	    {
	     gotoxy(1,i);
	     putchar(186);
	     gotoxy(width,i);
	     putchar(186);
	    }
	    gotoxy(1,1);
	    putchar(201);
	    gotoxy(width,1);
	    putchar(187);
	    gotoxy(1,hight);
	    putchar(200);
	    gotoxy(width,hight);
	    putchar(180);
	    window(left+2,top+1,right-2,bottom-3);
	    window(left,top,right,bottom+1);
	    for(i=1;i<=7;i++)
	    {
	     gotoxy(i+3,i+2);
	     cprintf("%s",string[i]);
	    }
	    gotoxy(10,hight-1);
	    textcolor(RED|128);
	    textcolor(WHITE);
       }

/*-------------------------------------------------------------------*/
/*DEFINATION OF FUNCTION*/
void gets1(char *s)
   {
    int i;
    char ch;
    i=0;
    ch=getche();
    while(ch!='\r')
    {
    s[i]=ch;
    i++;
    ch=getche();
    }
   s[i]='\0';
   }


/***************************************************************************/













