
 #include<graphics.h>
 #include<dos.h>
 #include<stdlib.h>
 #include<conio.h>
 #include<graphics.h>

 void main()
 {
  int gd=DETECT,gm;
  int num,i,x1,y2,x2,y1;
  initgraph(&gd,&gm,"..\\bgi");

  for(i=0;i<getmaxx();i++)
  {
   cleardevice();
   x1=random(i);
   y1=random(i+10);
   x2=random(i+20);
   y2=random(i+30);


   setcolor(x1);
   rectangle(x1+100,y1+100,x2+100,y2+100);

   sound(x1);
   sound(y1);
   sound(x2);
   sound(y2);
   delay(100);


   nosound();
   settextstyle(x1,0,y1);
   outtextxy(x1,y1,"*ADARSH*");
   circle(475,360,20);
    delay(500);
   circle(315,360,20);
    delay(500);
   circle(155,360,20);
    delay(500);
    circle(475,238,20);
     delay(500);
     circle(315,238,20);
      delay(500);
      circle(155,238,20);
      delay(500);
       circle(155,117,20);
      delay(500);
       circle(315,117,20);
      delay(500);
       circle(475,117,20);
       delay(800);
   }

   getch();
   closegraph();

   }

