#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
	    char *a[5],o;
	    int i=0,j=0,c=0;

	    do
	    {
	    clrscr();

	    printf("ENTER THE NAME FOR CHEACKING VOVELS\n");
	    printf("----------------------------------\n");
	    for(i=0;i<5;i++)
	    gets(a[i]);

	    printf("\nTOTAL NO OF VOVELS\n");
	    printf("===================================\n");

	    for(i=0;i<5;i++)
	   {
	    for(j=0;*(a[i]+j)!='\0';j++)
	    if(*(a[i]+j)=='a'||*(a[i]+j)=='e'
	      || *(a[i]+j)=='i'||*(a[i]+j)=='o'
	      || *(a[i]+j)=='u'||*(a[i]+j)=='A'
	      || *(a[i]+j)=='E'||*(a[i]+j)=='I'
	      || *(a[i]+j)=='O'||*(a[i]+j)=='U')
	       c++;
	      printf("%d\n",c);
	      c=0;
	    }
	    getch();
	    printf("\n\n\tDO U WANT TO ENTER MORE(Y||N)");
	    o=getch();
	   }
	   while(o=='y'||o=='Y');
}