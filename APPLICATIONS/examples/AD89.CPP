/* RECURSIVE FUNCTION FACTORIAL */
#include<stdio.h>
#include<conio.h>
int fact(int no);
void main()
{
clrscr();
	     int no,n1;

	     printf("ENTER THE NUMBER\n");
	     scanf("%d",&no);

	     n1=fact(no);
	     printf("\n%d",n1);

getch();
}

/*---------------------------------------------------------------------*/

 int fact(int no)
 {
 int static f=1;

  if(no>=1)
  {
  f=f*no;
  no--;

  fact (no);  /* function call*/
  }
  else

    return(0);
     return(0);
      return(f);

 }













