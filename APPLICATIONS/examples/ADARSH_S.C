
 #include<graphics.h>
 #include<dos.h>
 #include<stdlib.h>
 #include<conio.h>

 void main()
 {
  int sonu=DETECT,monu;
  int num,i,x1,y2,x2,y1;
  initgraph(&sonu,&monu,"..\\bgi");

  for(i=0;i<getmaxx();i++)
  {
   cleardevice();
   x1=random(i);
   y1=random(i+10);


   setcolor(x1);
/*  rectangle(x1+100,y1+100,x2+100,y2+100);

   sound(x1);
   sound(y1);
   sound(x2);
   sound(y2);
   delay(100);       */
    setbkcolor(x1+1);

   nosound();
   settextstyle(x1,0,y1);
   outtextxy(20,117,"*ADARSH*");
   circle(475,360,20);
    delay(400);
   circle(315,360,20);
    delay(400);
   circle(155,360,20);
    delay(400);
    circle(475,238,20);
     delay(400);
     circle(315,238,80);
      delay(400);
      circle(155,238,20);
      delay(400);
       circle(155,117,20);
      delay(400);
       circle(315,117,20);
      delay(400);
       circle(475,117,20);
       delay(400);
       rectangle(155,117,475,360);
       delay(400);
	circle(315,238,20);
      delay(400);
       circle(315,238,50);
      delay(400);
       circle(315,238,10);
      delay(400);
       circle(475,117,50);
       delay(400);
	circle(315,117,50);
      delay(400);
	  circle(155,117,50);
      delay(400);
	  circle(155,238,50);
      delay(400);
       circle(315,238,5);
      delay(400);
   circle(155,360,50);
    delay(400);
       circle(315,360,50);
    delay(400);
   circle(475,360,50);
    delay(400);

    circle(475,238,50);
     delay(400);


   }
   setbkcolor(GREEN);
   getch();
   closegraph();

   }

