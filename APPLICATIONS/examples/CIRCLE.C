#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<graphics.h>


 void main()
 {
     int gd=DETECT,gm;
     int x=155,a=315,c=475,e=315,g=315,i=475,k=475,m=155,o=155;
     int y=238,b=238,d=238,f=360,h=117,j=360,l=117,n=117,p=360;

     initgraph(&gd,&gm,"..\\bgi");

     setbkcolor(GREEN);
     circle(x,y,50);    /*RIGHT MIDDLE*/
     circle(e,f,50);    /*LOWER MIDDLE*/
     circle(g,h,50);    /*UPPER MIDDLE*/
     circle(a,b,50);    /*MIDDLE*/
     circle(c,d,50);    /*LEFT MIDDLE*/
     circle(i,j,50);    /*RIGHT LOWER CORNER*/
     circle(k,l,50);    /*RIGHT UPPER CORNER*/
     circle(m,n,50);    /*UPPER LEFT CORNER*/
     circle(o,p,50);   /*LOWER LEFT CORNER*/


     /* select fill color */
     setfillstyle(SOLID_FILL,RED);              /*right middle*/
     floodfill(x,y,getmaxcolor());

	setfillstyle(SOLID_FILL, 12);     /*middle*/
     floodfill(a,b,getmaxcolor());

	setfillstyle(SOLID_FILL,RED);          /*LEFT MIDDLE*/
     floodfill(c,d,getmaxcolor());

	setfillstyle(SOLID_FILL,RED);             /*LOWER MIDDLE*/
     floodfill(e,f,getmaxcolor());

	setfillstyle(SOLID_FILL,RED);             /*UPPER MIDDLE*/
     floodfill(g,h,getmaxcolor());

	setfillstyle(SOLID_FILL,BLUE);           /*RIGHT LOWER CORNER*/
     floodfill(i,j,getmaxcolor());

	setfillstyle(SOLID_FILL,BLUE);          /*RIGHT UPPER CORNER*/
	floodfill(k,l,getmaxcolor());

		setfillstyle(SOLID_FILL,BLUE);  /*LEFT UPPER CORNOR*/
     floodfill(m,n,getmaxcolor());

	setfillstyle(SOLID_FILL,BLUE);            /*LEFT LOWER CORNER*/
     floodfill(o,p,getmaxcolor());


  //    getimage(15,15,400,600,p);

       getch();
  //     cleardevice();
   //    putimage(15,15,p,0);


    getch();
    closegraph();
}



