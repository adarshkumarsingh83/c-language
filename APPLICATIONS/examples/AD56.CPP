#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
	  char n[20],a;
	  int i,l=0,j,c=0;

     /*	   do
	    {
	    clrscr();      */
	    printf("ENTER THE NAME\nCHEAK FOR PALLENDROM\n-------------------\n");
	    gets(n);

	    for(l=0;n[l]!='\0';l++);


	    for(i=0,l--;n[i]!='\0';i++,l--)
	    {
	    if(n[i]!=n[l])
	    c=1;
	    break;
	    }
	    printf("\nOUT PUT\n-----------------------\n");

	    if(!c)
	    printf("\nPALLENDROM\n");
	     else
	    printf("\nNOT PALLENDROM\n");
	    getch();

	    /*
	    printf("\n\n\tDO U WANT TO ENTER MORE NAME (Y||N)");
	    a=getch();
	   }
	  while(a=='y'||a=='Y'); */
}