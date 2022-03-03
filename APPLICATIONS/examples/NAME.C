/* SIMPLE GRAOHICS PROGRAM TO PRINT THE NAME IN FORMATTED STYLE */
 #include<conio.h>
 #include<graphics.h>

 void main()
 {
     int gd=DETECT,gm;

     initgraph(&gd,&gm,"..\\bgi");
       {
	settextstyle(4,0,10);
	textcolor (RED);
	outtextxy(20,50, "ADARSH");
	printf("\n");
	outtextxy(100,200,"KUMAR") ;
       }
	    setbkcolor(GREEN);
      getch();
      closegraph();
  }