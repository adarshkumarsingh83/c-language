
 #include<stdio.h>
 #include<conio.h>
 #include<process.h>
 #include<graphics.h>
 #include<io.h>
 #include<stdlib.h>
 #include<malloc.h>


  press_key()
 {
   int  x=getmaxx()/2;
   int   y=getmaxy()/2;
   int j=0;


  settextstyle(1,0,4);

  for(j=3;j<57;j++)
  {

  setbkcolor(1);
  gotoxy(60,23);
  if(j%2==0)
  {
  setcolor(j);
  delay(1200);
  outtextxy(x-120,y+80,"Press a key...");
  }
  else
  {
  setcolor(j);
  delay(1200);

  outtextxy(x-240,y+120,"ARMY INSTITUTE OF TECHNOLOGY");
 }
 }
  getch();

  return;
  }




 void main()
 {
     int gd=DETECT,gm;
     int x,y,i,j=0,num;
     int stangle=45;
     int endangle=270;
     int radius=100;

     x=getmaxx()/2;
     y=getmaxy()/2;


     initgraph(&gd,&gm,"..\\bgi");


      for(i=0;i<getmaxy()/2;i++)
    {
       settextstyle(1,0,6);
       outtextxy(x/12,y/12,"  Hi.. I  am    Pradeep");

      delay(100);
      num=random(i);
      sound(500+num);
      setbkcolor(6);
      circle(1,1,num);
      circle(1,getmaxy()-1,num);
      circle(getmaxx()-1,1,num);
      circle(getmaxx()-1,getmaxy()-1,num);
      circle(getmaxx()/2,getmaxy()/2,num/4);


      setcolor(j);
      j++;
      if(j==128)
      j=0;
   }

      nosound();




     setfillstyle(2,getmaxcolor());
     pieslice(x,y,stangle,endangle,radius/4);
     sector(x,y,45,135,30,50);
     press_key();

     setbkcolor(RED);
     getch();
     closegraph();




 }