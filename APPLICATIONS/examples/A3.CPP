
   #include<stdio.h>
   #include<conio.h>
   #include<process.h>
   #include<dos.h>
   #include<stdlib.h>
   #include<graphics.h>
   #include<alloc.h>



   void main()

   {
    int gd=DETECT,gm;
    int num,i,k;
    void far *bitmap;
    initgraph(&gd,&gm,"..\\bgi");




    for(k=0;k<480;k++)
    {
	// putimage(0,0,*bitmap,0);

	 for(i=0;i<50;i++)
	    {

	       num=random(i);

	       setbkcolor(1);
	       setcolor(2);
	       rectangle(60-num+k,160-num+k,220-num+k,320-num+k);
	       rectangle(100-num+k,200-num+k,260-num+k,360-num+k);
	       line(60-num+k,160-num+k,100-num+k,200-num+k);
	       line(60-num+k,320-num+k,100-num+k,360-num+k);
	       line(220-num+k,160-num+k,260-num+k,200-num+k);
	       line(220-num+k,320-num+k,260-num+k,360-num+k);
	       delay(100);
	      }
	  //     getimage(0,0,480,640, *bitmap);

	       cleardevice();

       }




	  getch();
	  closegraph();

  }