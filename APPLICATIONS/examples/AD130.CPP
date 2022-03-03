#include<stdio.h>
#include<conio.h>
#include<string.h>

int cheak_string(char []);
int cheak_integer(int );

void main()
{
clrscr();
 int x=0,n=0;
 char a[40],j[10];

    printf("\n\n\tENTER THE STRING\n");
    fflush(stdin);
/*    gets(a);  */
     scanf("%[0-9]s",&j);
     n=(int)j;
     printf("%d",n);
/*
    x=cheak_string();
    x=cheak_integer(n);
      if(x==0)
      {
      printf("%d",n);
      }
      else
      {
       printf("\n\n\tSTRING CONTAIN NUMERIC VALUE OR OTHER CHARACTER ");
      }              */
getch();

}

/*-------------------------------------------------------------------*/
int cheak_string(char a[])
{
 int x=0,l=0,i;
	l=strlen(a);
	   for(i=0;i<l;i++)
	   {
	    if(a[i] >=65 && a[i] <= 90 || a[i] >= 97 && a[i] <= 122||a[i]==32)
	    { continue; }
	    else
	    {  x=x+1;break; }
	   }
	  return(x);
}
/*-----------------------------------------------------------------*/
int cheak_integer(int n)
{
 int x=0,a=0,b=0;

	    while(n>0)
	    {
	      a=n%10;
	      b=n/10;
	     if(a>=0 && a<=9|| a=='32')
	      { n=b; continue; }
	     else
	      { x=x+1; break;  }
	     }
  return(x);
}