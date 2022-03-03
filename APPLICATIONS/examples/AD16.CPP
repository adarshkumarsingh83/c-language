#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
       int l,u,a=0,b=1,x=0,i;

	  printf("ENTER THE LOWER LIMIT ");
	  scanf("%d",&l);

	  printf("ENTER THE UPPER LIMIT ");
	  scanf("%d",&u);

	  printf("\n \n\nfebonasi series \n\n");


       for(i=0;i<=u;i++)
      {
	  x=a+b;
	{
	  if(x>=l)
	 {
	  if(x<=u)
	  printf("%d \n",x);

	  }

	}
	  a=b;
	  b=x;
       }

getch();
}