#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
	int a,b,x,y;

       printf("enter the lower limit");
       scanf("%d",&x);

       printf("enter the upper limit");
       scanf("%d",&y);
       printf("\n \nEVEN NUMBER \n \n");
      {
       for(a=1;a<=y;a++)
      {
       if(a%2==0)
      {
       if(a>=x)
       printf("%d",a);
      }
       printf("\n");
      }
      }
getch();
}