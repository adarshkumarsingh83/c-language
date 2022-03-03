/*ROMAN NUMBER PROGRAM  BETWEEN I TO 100  */
/*===============================================================*/

#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
	   int i=0,a=0,b=0;
	   char ans;

	   do
	   {
	   clrscr();

	   printf("ENTER THE NUMBER BETWEEN 1-100\n==============================\n-->");
	   scanf("%d",&i);
	   printf("\nROMAN NUMBER\n");
	   printf("----------------------\n\n");
	   printf("%d\t",i);


	    if(i==1||b==1)
	    printf("%c",73);
	    else if(i==2||b==2)
	    printf("%c%c",73,73);
	    else if(i==3||b==3)
	    printf("%c%c%c",73,73,73);
	      else if(i==4||b==4)
	    printf("%c%c",73,86);
	      else if(i==5||b==5)
	    printf("%c",86);
	      else if(i==6||b==6)
	    printf("%c%c",86,73);
	      else if(i==7||b==7)
	    printf("%c%c%c",86,73,73);
	      else if(i==8||b==8)
	    printf("%c%c%c%c",86,73,73,73);
	      else if(i==9||b==9)
	    printf("%c%c",73,88);
	      else if(i==10)
	    printf("%c",88);
	      else if(i==50)
	    printf("%c",76);
	      else if(i==60)
	    printf("%c%c",76,88);
	      else if(i==70)
	    printf("%c%c%c",76,88,88);
	      else if(i==80)
	    printf("%c%c%c",76,88,88);
	      else if(i==90)
	    printf("%c%c",88,67);
	    else if(i==99)
	    {
	    printf("%c%c",73,67);
	     goto step;
	   }
	  else if(i==100)
	    printf("%c",67);

	  else
	     a=i/10;

	     b=i%10;
	/*   printf("%d\t%d",a,b);  FOR CHEACKING THE VALUE   */

/* FOR CHEACKING THE FIRST VALUE IN A*/
	   if(a>=1&&a<=4)
	   {
	    for( ;a>0;a--)
	    printf("%c",88);
	   }
	   else if (a==5)
	   printf("%c",76);
	   else if(a==6)
	   printf("%c%c",76,88);
	   else if(a==7)
	   printf("%c%c%c",76,88,88);
	   else if(a==8)
	   printf("%c%c%c%c",76,88,88,88);
	   else if(a==9)
	   printf("%c%c",88,67);
/* FOR CHEAKING OF VALUE OF B SECOUND NUMBER*/


	    if(b==1)
	    printf("%c",73);
	    else if(b==2)
	    printf("%c%c",73,73);
	    else if(b==3)
	    printf("%c%c%c",73,73,73);
	      else if(b==4)
	    printf("%c%c",73,86);
	      else if(b==5)
	    printf("%c",86);
	      else if(b==6)
	    printf("%c%c",86,73);
	      else if(b==7)
	    printf("%c%c%c",86,73,73);
	      else if(b==8)
	    printf("%c%c%c%c",86,73,73,73);
	      else if(b==9)
	    printf("%c%c",73,88);
	    step:
	    getch();
	    printf("\n\n\t DO U WANT TO CONTINUE (Y||N)");
	    printf("\n\n\t==============================================\n");
	    ans=getch();
	    }
	    while(ans=='Y'||ans=='y');

}