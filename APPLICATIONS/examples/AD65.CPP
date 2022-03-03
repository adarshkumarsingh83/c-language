#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();


	   char a[50],ans;
	   int i,j,w=0,l=0,k=0,s=1,c=0;

	   do
	   {
	   clrscr();
	   fflush(stdin);
	   printf("\nENTER THE STRING\n==============================\n");
	   gets(a);

	   printf("\nOUTPUT\n");
	   printf("==============================\n\n");

    /*FOR LENGTH AND WORDS COUNTING*/

	   for(i=0,l=0;a[i]!='\0';i++,l++)

	    if(a[i]==32)
	    s++;

       //	   printf("%d\t%d\t",l,s);

	    for( ;s>0;s--)
	    {
	    for(i=l;i>=0;i--)
	    if(a[i]!=' '||a[i]==0)
	    w++;
	    else
	    {
	    break;
	    }

	    c=(l-w);
	    k=c;
       //   printf("%d\t%d\n",c,w);
	    {
	    for(i=c;i<=l;i++)
	    printf("%c",a[i]);
	    }
	    l=k;
      //	  printf("%d",l);
	   }
	    getch();
	   printf("\n\n\t DO U WANT TO CONTINUE..(Y||N)");
	   ans=getche();
	   }while(ans=='y'||ans=='Y');

}
