/* FOR PRINTING THE RIGHT TRIANGLE WITH COLOR BKGROUND AND COLOR TEXT */

#include<stdio.h>
#include<conio.h>
#include <conio.h>
void main()
{
     int i, j;

clrscr();


    printf("\n\n\n\n");
   for (i=0; i<=10; i++)
   {
      for (j=0; j<i; j++)
	     cprintf(" %cADARSH",3);
	     cprintf("\r\n\n");
	     textcolor(i+1);
	     textbackground(i-1);

   }

getch();

}

