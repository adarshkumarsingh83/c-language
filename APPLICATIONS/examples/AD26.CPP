#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
	  int  i ,a[10],o=0,c;


	    printf("ENTER THE NUMBER\n");
       {
	    for(i=1;i<=5;i++)
	    scanf("%d",&a[i]);
       }

	    printf("ENTER THE NUMBER FOR SEARCH\n");
	    scanf("%d",&c);

	    printf("\nOUTPUT\n");
	 {
	    for(i=1;i<=5;i++)
	    if(a[i]==c)
	   {
	    o++;
	   }
	    else
		continue;
	 }

	   if(o>0)
	   {
	   printf("\nNUMBER IS PRESENT\n");
	   printf("%d",c);
	   }
	   else
	   {
	   printf("\nNUMBER IS ABSENT\n");
	   printf("%d",c);
	   }


getch();
}