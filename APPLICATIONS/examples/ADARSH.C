#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<dos.h>
#include<graphics.h>
#include<process.h>
#include<conio.h>
#include<math.h>
#include<io.h>


union REGS i,o;

int gd=DETECT,gm;
FILE *fp,*ft;
char another,choice;


struct book
 {
  char name[40],pub[40],author[40];
  int  row,col;
  float price;

 };



struct book b;
char bookname[40];
long int recsize;


  void form5();

 //initialise mouse
  initmouse()
  {
	i.x.ax=0;
	int86(0X33,&i,&o);
	return(o.x.ax);
  }

//displays mouse ptr
void  showmouseptr()
  {
	i.x.ax=1;
	int86(0X33,&i,&o);
  }

//restricts mouse movement
void  restrictmouseptr(int x1,int y1,int x2,int y2)
  {
	i.x.ax=7;
	i.x.cx=x1;
	i.x.dx=x2;
	int86(0X33,&i,&o);

	i.x.ax=8;
	i.x.cx=y1;
	i.x.dx=y2;
	int86(0X33,&i,&o);
  }

//get mouse coordinates  and button status
void getmousepos(int *button,int *x,int *y)
	{
	i.x.ax=3;
	int86(0X33,&i,&o);
	*button=o.x.bx;
	*x=o.x.cx;
	*y=o.x.dx;

	}

void  hidemouseptr()
  {
	i.x.ax=2;
	int86(0X33,&i,&o);
  }



   void sonu(int num)

      {

		sound(500+num);
		delay(100);
		nosound();
      }







  void add()

  {

     char ans;
     clrscr();
     cleardevice();
     showmouseptr();
     fp=fopen("BOOK.DAT","rb+");
     flushall();

     if(fp==NULL)
      {

       fp=fopen("BOOK.DAT","wb+");

       if(fp==NULL)
	{
	   puts("Cannot open file ");
	   exit(0);
	}
      }

       recsize=sizeof(b);
       fseek(fp,0,SEEK_END);
	flushall();

       settextstyle(9,0,2);
       setcolor(RED);

       outtextxy(84,30,"PLEASE FILL THIS FORM");
       setcolor(GREEN);
       settextstyle(8,0,1);

       printf("\n\n\n\n\n\n\n\n\t\t\t");

       outtextxy(49,120,"BOOK'S NAME");
	scanf("%s",b.name);

       printf("\t\t\t\t\t\t\t\t");

       outtextxy(426,134,"PRICE");
       scanf("%f",&b.price);

       printf("\n\n\n\n\t\t\t");

       outtextxy(49,217,"PUBLICATION");
       scanf("%s",b.pub);

       printf("\t\t\t\t\t\t\t\t");

       outtextxy(421,230,"AUTHOR");
       scanf("%s",b.author);

       printf("\n\n\n\n\t\t\t");

       outtextxy(59,312,"ROW");
       scanf("%d",&b.row);

       printf("\t\t\t\t\t\t\t\t");

       outtextxy(422,323,"COLUMN");
       scanf("%d",&b.col);
       fwrite(&b,recsize,1,fp);
       fclose(fp);
       setcolor(YELLOW);

       outtextxy(100,400,"DO U WANT TO ADD ANOTHER RECORD(Y||N).");
       fflush(stdin);
       ans=getche();
       if(ans=='y'||ans=='Y')
	{
	hidemouseptr();
	form5();

	}
       else
	 exit(0);


	}



     void  author()

    {

       char bookname1[20],ans;
       cleardevice();


	fp=fopen("BOOK.DAT","rb+");

	  if(fp==NULL)
	    {

	      fp=fopen("BOOK.DAT","wb+");

	      if(fp==NULL)
		{
		   puts("Cannot open file ");
		   exit(0);
		}
	     }


	printf("\n\n\n\n\n\t\t\t\t");
	outtextxy(80,50," ENTER THE AUTHOR OF BOOK");

	scanf("%s",bookname1);

	rewind(fp);
	while(fread(&b,recsize,1,fp)==1)
	  {

	   if(strcmp(b.author,bookname1)==0)
	       {
		   clrscr();
		   cleardevice();
		   setcolor(GREEN);
		   settextstyle(1,0,4);

		   outtextxy(180,50,"BOOK DISPLAY");

		   setcolor(YELLOW);
		   settextstyle(8,0,1);

		   printf("\n\n\n\n\n\n\n\n\n\n\t");
		   outtextxy(55,120,"BOOK'S NAME");
		   printf("%s",b.name);

		  printf("\t\t\t\t\t\t");
		  outtextxy(426,120,"PRICE");
		  printf("%f",b.price);

		  printf("\n\n\n\n\n\n\t");
		  outtextxy(55,217,"PUBLICATION");
		  printf("%s",b.pub);

		  printf("\t\t\t\t\t\t");
		  outtextxy(421,217,"AUTHOR");
		  printf("%s",b.author);

		  printf("\n\n\n\n\n\n\t");
		  outtextxy(55,312,"ROW");
		  printf("%d",b.row);

		  printf("\t\t\t\t\t\t");
		  outtextxy(422,312,"COLUMN");
		  printf("%d",b.col);

		  outtextxy(170,400,"   PRESS ANY KEY");
		  fflush(stdin);

		  getch();
		  }

	       }

		  setcolor(12);
		  outtextxy(90,425," DO U WANT TO GO TO MAIN MENU (Y||N)");

		  getch();
		  fflush(stdin);

		  ans=getche();
		  if(ans=='y'||ans=='Y')
		  {

			  form5();


		  }
		  else

		  exit(0);




    }


   void publication()
   {


       char bookname1[20],ans;
       cleardevice();

	fp=fopen("BOOK.DAT","rb+");

	  if(fp==NULL)
	    {

	      fp=fopen("BOOK.DAT","wb+");

	      if(fp==NULL)
		{
		   puts("Cannot open file ");
		   exit(0);
		}
	     }

	outtextxy(60,50," ENTER THE PUBLICATION OF BOOK");
	printf("\n\n\n\n\n\t\t\t\t");
	scanf("%s",bookname1);

	rewind(fp);
	while(fread(&b,recsize,1,fp)==1)
	  {

	   if(strcmp(b.pub,bookname1)==0)
	       {
		   clrscr();
		   cleardevice();
		   setcolor(GREEN);
		   settextstyle(1,0,4);

		   outtextxy(180,50,"BOOK DISPLAY");

		   setcolor(YELLOW);
		   settextstyle(8,0,1);

		   printf("\n\n\n\n\n\n\n\n\n\n\t");
		   outtextxy(55,120,"BOOK'S NAME");
		   printf("%s",b.name);

		  printf("\t\t\t\t\t\t");
		  outtextxy(426,120,"PRICE");
		  printf("%f",b.price);

		  printf("\n\n\n\n\n\n\t");
		  outtextxy(55,217,"PUBLICATION");
		  printf("%s",b.pub);



		  printf("\t\t\t\t\t\t");
		  outtextxy(421,217,"AUTHOR");
		  printf("%s",b.author);

		  printf("\n\n\n\n\n\n\t");
		  outtextxy(55,312,"ROW");
		  printf("%d",b.row);

		  printf("\t\t\t\t\t\t");
		  outtextxy(422,312,"COLUMN");
		  printf("%d",b.col);

		  outtextxy(170,400,"   PRESS ANY KEY");
		  fflush(stdin);

		  getch();
		  }

	       }
		  setcolor(12);
		  outtextxy(90,425," DO U WANT TO GO TO MAIN MENU (Y||N)");

		  getch();
		  fflush(stdin);

		  ans=getche();
		  if(ans=='y'||ans=='Y')
		  {

			  form5();


		  }
		  else

		  exit(0);




   }



   void book()

    {

       char bookname1[20],ans;

       cleardevice();

	fp=fopen("BOOK.DAT","rb+");

	  if(fp==NULL)
	    {

	      fp=fopen("BOOK.DAT","wb+");

	      if(fp==NULL)
		{
		   puts("Cannot open file ");
		   exit(0);
		}
	     }

	outtextxy(80,50," ENTER THE NAME OF BOOK");
	printf("\n\n\n\n\n\t\t\t\t");
	scanf("%s",bookname1);

	rewind(fp);
	while(fread(&b,recsize,1,fp)==1)
	  {

	   if(strcmp(b.name,bookname1)==0)
	       {
		   clrscr();
		   cleardevice();
		   setcolor(GREEN);
		   settextstyle(1,0,4);

		   outtextxy(180,50,"BOOK DISPLAY");

		   setcolor(YELLOW);
		   settextstyle(8,0,1);

		   printf("\n\n\n\n\n\n\n\n\n\n\t");
		   outtextxy(55,120,"BOOK'S NAME");
		   printf("%s",b.name);

		  printf("\t\t\t\t\t\t");
		  outtextxy(426,120,"PRICE");
		  printf("%f",b.price);

		  printf("\n\n\n\n\n\n\t");
		  outtextxy(55,217,"PUBLICATION");
		  printf("%s",b.pub);

		  printf("\t\t\t\t\t\t");
		  outtextxy(421,217,"AUTHOR");
		  printf("%s",b.author);

		  printf("\n\n\n\n\n\n\t");
		  outtextxy(55,312,"ROW");
		  printf("%d",b.row);

		  printf("\t\t\t\t\t\t");
		  outtextxy(422,312,"COLUMN");
		  printf("%d",b.col);

		  outtextxy(170,400,"   PRESS ANY KEY");
		  fflush(stdin);

		  getch();
		  }

	       }

		  setcolor(12);
		  outtextxy(90,425," DO U WANT TO GO TO MAIN MENU (Y||N)");

		  getch();
		  fflush(stdin);

		  ans=getche();
		  if(ans=='y'||ans=='Y')
		  {
			  form5();


		  }
		  else

		  exit(0);


	   }



     void search()
     {

       int but=0,x=0,y=0;
       initmouse();
       cleardevice();

       setcolor(10);
       settextstyle(1,0,4);

       outtextxy(133,50," YOU WANT TO SEARCH ");
       outtextxy(133,150,"  1.BY BOOK NAME");
       outtextxy(133,200,"  2.BY PUBLICATION");
       outtextxy(133,250,"  3.BY AUTHOR");
       outtextxy(133,300,"  4.EXIT");

       showmouseptr();

       while(!kbhit())
		  {

		     getmousepos(&but,&x,&y);

		      if((but&1)==1)
		       {

			     if(x>164 && x<431 && y>156 && y<188)
				{
				  hidemouseptr();
				  but=0;
				  x=0;
				  y=0;
				  book();

				 }

			     if(x>162 && x<445 && y>207 && y<237)
				{
				  hidemouseptr();
				  but=0;
				  x=0;
				  y=0;
				  publication();

				 }

				 if(x>161 && x<371 && y>258 && y<286)
				{
				  hidemouseptr();
				  but=0;
				  x=0;
				  y=0;
				  author();

				 }

				 if(x>167 && x<261 && y>309 && y<334)
				{
				  exit(0);

				 }


		       }

	      }

     }

     void list()
     {

	     char ans;

	     cleardevice();

	     fp=fopen("BOOK.DAT","rb+");

	     if(fp==NULL)
	       {
		fp=fopen("BOOK.DAT","wb+");

		if(fp==NULL)
		{
		   puts("Cannot open file ");
		   exit(0);
		}
	       }

		   rewind(fp);



		   while(fread(&b,recsize,1,fp)==1 )
		   {
		   clrscr();
		   cleardevice();
		   settextstyle(1,0,2);
		   setcolor(RED);

		   outtextxy(130,30,"DISPLAY ALL BOOKS INFORMATION");

		   setcolor(YELLOW);
		   settextstyle(8,0,1);

		   printf("\n\n\n\n\n\n\n\n\n\n\t");
		   outtextxy(55,120,"BOOK'S NAME");
		   printf("%s",b.name);

		  printf("\t\t\t\t\t\t");
		  outtextxy(426,120,"PRICE");
		  printf("%f",b.price);

		  printf("\n\n\n\n\n\n\t");
		  outtextxy(55,217,"PUBLICATION");
		  printf("%s",b.pub);

		  printf("\t\t\t\t\t\t");
		  outtextxy(421,217,"AUTHOR");
		  printf("%s",b.author);

		  printf("\n\n\n\n\n\n\t");
		  outtextxy(55,312,"ROW");
		  printf("%d",b.row);

		  printf("\t\t\t\t\t\t");
		  outtextxy(422,312,"COLUMN");
		  printf("%d",b.col);

		  outtextxy(170,400,"   PRESS ANY KEY");
		  fflush(stdin);

		  getch();
		  }
		  fclose(fp);
		  setcolor(12);
		  settextstyle(1,0,2);
		  outtextxy(90,425," DO U WANT TO GO TO MAIN MENU (Y||N)");
		  getch();

		  fflush(stdin);

		  ans=getche();
		  if(ans=='y'||ans=='Y')
		  {

			  form5();


		  }
		  else

		  exit(0);


	     }


      void update()

      {
	     int count=0;
	     char ans,another,bookname1[40];
	     cleardevice();

	     fp=fopen("BOOK.DAT","rb+");

	     if(fp==NULL)
	       {

		fp=fopen("BOOK.DAT","wb+");

		if(fp==NULL)
		{
		   puts("Cannot open file ");
		   exit(0);
		}
	       }
		 settextstyle(1,0,3);
		 clrscr();
		 cleardevice();
		 printf("\n\n\n\n\n\n\n\n\n\t\t\t\t");
		 outtextxy(70,100,"ENTER THE NAME OF BOOK TO MODIFY");
		 showmouseptr();

		 scanf("%s",bookname1);

		 rewind(fp);
		 while(fread(&b,recsize,1,fp)==1)
		   {

		   if(strcmp(b.name,bookname1)==0)

		    {

		     clrscr();
		     cleardevice();
		     settextstyle(9,0,2);
		     setcolor(YELLOW);
		     flushall();
		     outtextxy(84,30,"PLEASE FILL THIS FORM");
		     setcolor(GREEN);
		     settextstyle(8,0,1);

		     printf("\n\n\n\n\n\n\n\n\t\t\t");
		     outtextxy(49,120,"BOOK'S NAME");
		     scanf("%s",b.name);

		     printf("\t\t\t\t\t\t\t\t");
		     outtextxy(426,134,"PRICE");
		     scanf("%f",&b.price);

		     printf("\n\n\n\n\t\t\t");

		     outtextxy(49,217,"PUBLICATION");
		     scanf("%s",b.pub);


		    printf("\t\t\t\t\t\t\t\t");
		    outtextxy(421,230,"AUTHOR");
		    scanf("%s",b.author);
		    printf("\n\n\n\n\t\t\t");
		    outtextxy(59,312,"ROW");
		    scanf("%d",&b.row);

		    printf("\t\t\t\t\t\t\t\t");
		    outtextxy(422,323,"COLUMN");
		    scanf("%d",&b.col);


		    fseek(fp,-recsize,SEEK_CUR);
		    fwrite(&b,recsize,1,fp);

		    count++;
		    }



		 }
		  setcolor(GREEN);
		  if(count==0)
		  outtextxy(150,300,"ENTERED BOOK NOT FOUND");

		  setcolor(11);
		  outtextxy(100,400,"DO U WANT TO GO TO MAIN MENU(Y||N).");
		  fflush(stdin);
		  getch();
		  fclose(fp);
		  ans=getche();
		  if(ans=='y'||ans=='Y')
		  {
			  hidemouseptr();
			  form5();


		  }
		  else

		  exit(0);




     }



      void delte()

     {
	int count=0;
	char ans;
	char bookname1[20];
	cleardevice();


	fp=fopen("BOOK.DAT","rb+");

	 if(fp==NULL)
	   {

	     fp=fopen("BOOK.DAT","wb+");

	     if(fp==NULL)
	      {
	       puts("Cannot open file ");
	       exit(0);
	      }
	   }

	clrscr();
	cleardevice();

	outtextxy(100,70,"ENTER THE NAME OF BOOK  ") ;

	printf("\n\n\n\n\n\n\n\n\n\t\t\t\t");
	scanf("%s",bookname1);

	ft=fopen("TEMP.DAT","wb") ;
	rewind(fp);

	while(fread(&b,recsize,1,fp)==1)
	{
	  if(strcmp(b.name,bookname1)==0)
	  count=count+1;


	}

	if(count!=0)
	{

	while(fread(&b,recsize,1,fp)==1)

	  {

	    if(strcmp(b.name,bookname1)!=0)

	      fwrite(&b,recsize,1,ft);

	  }

	 fclose(fp);
	 fclose(ft);
	 remove("BOOK.DAT");
	 rename("TEMP.DAT","BOOK.DAT" );
	 fp=fopen("BOOK.DAT","rb+");

	 settextstyle(1,0,4);
	 setcolor(RED);

	 outtextxy(120,300,"RECORD ARE DELETED.");
	 }
	 else

	 outtextxy(120,250,"ENTERED BOOK NOT EXIST");

	 settextstyle(1,0,2);
	 setcolor(9);

	 outtextxy(100,400,"DO U WANT TO GO TO MAIN MENU(Y||N).");
	 getch();

	 fflush(stdin);
	 ans=getche();

		  if(ans=='y'||ans=='Y')

			form5();


		  else

			exit(0);




	 }



     void form5()
     {

       int button=0,x=0,y=0;
       cleardevice();
       setcolor(12);
       settextstyle(1,0,4);

       outtextxy(133,50," *******MENU********");
       outtextxy(133,100,"  1.ADD RECORD");
       outtextxy(133,150,"  2.SEARCH RECORD");
       outtextxy(133,200,"  3.LIST ALL RECORD");
       outtextxy(133,250,"  4.UPDATE RECORD");
       outtextxy(133,300,"  5.DELETE RECORD");
       outtextxy(133,350,"  6.EXIT");

       showmouseptr();

	while(!kbhit())
		  {
		     getmousepos(&button,&x,&y);

		      sonu(x);
		     if((button &1)==1)
			  {


			    if(x>161 && x<380 && y>105 && y<136)
				{
				  hidemouseptr();
				  button=0;
				  x=0;
				  y=0;
				  add();

				 }

			     if(x>161 && x<435 && y>158 && y<186)
				{
				  hidemouseptr();
				  button=0;
				  x=0;
				  y=0;
				  search();

				 }

				 if(x>160 && x<450 && y>205 && y<238)
				{
				  hidemouseptr();
				  button=0;
				  x=0;
				  y=0;
				  list();

				 }

				 if(x>166 && x<445 && y>260 && y<286)
				{
				  hidemouseptr();
				  button=0;
				  x=0;
				  y=0;
				  update();

				 }

			       if(x>161 && x<430 && y>308 && y<340)
				{
				  hidemouseptr();
				  button=0;
				  x=0;
				  y=0;
				  delte();

				 }

				if(x>164 && x<262 && y>358 && y<384)
				{
				  hidemouseptr();
				  button=0;
				  x=0;
				  y=0;
				  exit(6);

				 }

			 }

		  }

	 }



   void form4()
     {
	       int button,x,y;
	       char *password=NULL;
	       char *pass="SCORPIO";
	       char ans;

	      cleardevice();
   again:     setcolor(RED);
	      showmouseptr();

	      settextstyle(1,0,4);
	      setcolor(RED);
	      outtextxy(133,107,"ENTER THE PASSWORD ");


	      password = getpass("");

	      if(*password==*pass)
	       {
		   cleardevice();
		   setcolor(GREEN);
		   outtextxy(123,100,"ENTER PASSWORD MATCH !!");
		   setcolor(8);
		   outtextxy(133,190,"      WELCOME !!");
		   setcolor(13);

		   rectangle(211,363,361,415);

		   settextstyle(4,0,4);
		   outtextxy(220,370," CLICK ");
		   while(!kbhit())
		     {
			getmousepos(&button,&x,&y);
			 sonu(x);

			if((button &1)==1)
			     {
			      if(x>212 && x<356 && y>366 && y<412)
				{
				  hidemouseptr();
				  button=0;
				  x=0;
				  y=0;
				  form5();

				 }

			     }
		       }

		}
	    else
		{
		   cleardevice();
		   settextstyle(5,0,4);
		   setcolor(RED);


		   outtextxy(133,150,"!! WRONG PASSWORD");
		   setcolor(GREEN);
		   settextstyle(1,0,4);

		   outtextxy(93,250,"!! DO U WANT TO TYPE AGAIN (Y||N)");
		   ans=getche();
		   if(ans=='y'||ans=='Y')
		       {
			 cleardevice();
			 goto again;
		       }

		   else
		       {
		       cleardevice();
		       outtextxy(133,150,"PRESS 1 FOR EXIT");
		       exit(1);
		       }

		 }

      getch();

  }


    void form3()

    {

	int button=0,x=0,y=0;
	cleardevice();
	setcolor(10);

	 settextstyle(1,0,4);
	 outtextxy(133,80," *******MENU********");
	 outtextxy(133,150,"  1.SEARCH RECORD");
	 outtextxy(133,200,"  2.LIST ALL RECORD");
	 outtextxy(133,250,"  3.EXIT");

	 showmouseptr();

	 while(!kbhit())
		  {
		     getmousepos(&button,&x,&y);

		      sonu(x);
		      if((button &1)==1)
			  {


				if(x>165 && x<436 && y>157 && y<184)
				{
				  hidemouseptr();
				  button=0;
				  x=0;
				  y=0;
				  search();

				 }

				  if(x>163 && x<450 && y>205 && y<234)
				{
				  hidemouseptr();
				  button=0;
				  x=0;
				  y=0;
				  list();

				 }

				 if(x>165 && x<260 && y>260 && y<281)

				  exit(0);



				 }

			 }

		  }


 void form2()
  {
      int button=0,x=0,y=0;

      cleardevice();
      showmouseptr();
      setcolor(GREEN);

      settextstyle(1,0,4);
      outtextxy(233,107,"   USER");

      settextstyle(1,0,4);
      outtextxy(168,341,"  ADMINISTRATOR");

       while(!kbhit())
       {
	    getmousepos(&button,&x,&y);

	       sonu(x);

		if((button &1)==1)
		     {

		      if(x>272 && x<358 && y>112 && y<139)
			{
			     hidemouseptr();
			     button=0;
			     x=0;
			     y=0;
			     form3();

			 }

		       if(x>198 && x<437 && y>348 && y<375)
			{
			     hidemouseptr();
			     button=0;
			     x=0;
			     y=0;
			     form4();

			 }
		     }


	       }

	  }



  void main()
  {
   int button,x,y;

   initgraph(&gd,&gm,"..\\bgi");

   cleardevice();

   initmouse();

   restrictmouseptr(0,0,630,465);

      fp=fopen("BOOK.DAT","rb+");

	  if(fp==NULL)
	     {
			 fp=fopen("BOOK.DAT","wb+");
		  if(fp==NULL)
		    {
		       puts("Cannot open file ");
		       exit(0);
		    }
	     }

	  recsize=sizeof(b);



    setbkcolor(1);

     settextstyle(1,0,6);
     outtextxy(20,50,"LIBRARY MANAGEMENT  ");
     outtextxy(220,120,"SYSTEM  ");

     settextstyle(1,0,3);

     outtextxy(120,250,"      PROJECT MADE BY ");

     settextstyle(2,0,8);
     outtextxy(220,300,"  ADARSH");

     setcolor(RED);
     rectangle(211,363,361,415);

     settextstyle(4,0,4);
     outtextxy(220,370," LOGIN ");
       showmouseptr();
	while(!kbhit())
		  {
			getmousepos(&button,&x,&y);

			sonu(x);
			if((button &1)==1)
			  {

			    if(x>212 && x<356 && y>366 && y<412)
				{
				  hidemouseptr();
				  button=0;
				  x=0;
				  y=0;
				  form2();

				 }

			 }

		  }

    getch();
    getch();
    closegraph();
  }