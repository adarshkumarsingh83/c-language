#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
       int i,j,k,c=0;

       printf("enter the number \n");
       scanf("%d",&i);

       printf("enter the power \n");
       scanf("%d",&j);
     {

       for(k=1;k<=j;k++)
       c=i*j;
       c=c+c;

     }
       printf("\n ROOT OF THE NUMBER \n");
       printf("--------------------------------\n");
       printf("%d\n",c);


getch();

}