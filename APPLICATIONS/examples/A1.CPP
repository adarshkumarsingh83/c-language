 #include<stdio.h>
 #include<conio.h>
 #include<process.h>
 #include<graphics.h>
 #include<io.h>
 #include<stdlib.h>


  void rectform(int k)
       {
	    int i,num;

	    for(i=0;i<50;i++)
	       {


	       num=random(i);

	       rectangle(60-num+k,160-num+k,220-num+k,320-num+k);
	       rectangle(100-num+k,200-num+k,260-num+k,360-num+k);
	       line(60-num+k,160-num+k,100-num+k,200-num+k);
	       line(60-num+k,320-num+k,100-num+k,360-num+k);
	       line(220-num+k,160-num+k,260-num+k,200-num+k);
	       line(220-num+k,320-num+k,260-num+k,360-num+k);

	      }

      }


  press_key()

  {
     int  x=getmaxx()/2;
     int  y=getmaxy()/2;
     int  j=0;

    settextstyle(1,0,4);

       for(j=3;j<14;j++)
	{


	     rectform(j);
	     setbkcolor(1);
	     setcolor(j+2);
	     outtextxy(60,40,"THIS IS SIMPLE SOUND PROGRAM ");
	     outtextxy(150,80," DEMONSTRATION ");

	     gotoxy(60,23);
	     if(j%2==0)
	      {
	       setcolor(j);
	       delay(500);
	       outtextxy(x-40,y+50,"Press a key...");
	      }
	    else
	      {
	      setcolor(j);
	      delay(500);
	      outtextxy(x-240,y+140,"UPTECH COMPUTER CONSELTANCY");
	      outtextxy(240,y+190,"ALLAHABAD");

	      }

	}
	       getch();

	       return;
   }



 void main()
 {
     int gd=DETECT,gm;
     int x,y,i,k,j=0,num;

     initgraph(&gd,&gm,"..\\bgi");
     for(i=0;i<getmaxy()/2;i++)
       {
	settextstyle(1,0,6);
	outtextxy(50,80," HI.. I  AM   ADARSH");
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
      cleardevice();
      press_key();
      setbkcolor(RED);
      getch();
      closegraph();
   }