/* for displaying the current system time & date */
#include   <stdio.h>
#include   <dos.h>
#include<conio.h>
void main()
{
       struct  time t;
       struct date d;
clrscr();
while(1)
{
      printf("\n\n\n");
      gettime(&t);
      printf("* THE CURRENT TIME  IS:\t%2d:%02d:%02d\n",t.ti_hour, t.ti_min, t.ti_sec);
      printf("\n");
      getdate(&d);
      printf("* THE CURRENT DATE IS:\t%d-%d-%d\n",d.da_day,d.da_mon,d.da_year);
      delay(500);
      clrscr();
 }
getch();
}