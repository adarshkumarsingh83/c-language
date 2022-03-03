#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
	 char a[50];
	 int i,l,u,s=0,t=0,n=0,sa=0,ca=0,w=0;

     printf("ENTER THE TEXT\n");
 printf("----------------------------------------\n");
      gets(a);
/*(for counting spaces and tab and new line)*/

	  for(i=0;a[i]!='\0';i++)
	{
	  if(a[i]==' ')
	     s++;
	   else if(a[i]=='\t')
	    t++;
	 }
	  for(i=0;a[i]!='\0';i++)
	{
	  if(a[i]>='0'&&a[i]<='9')
	     n++;
	   else if(a[i]>=97&&a[i]<=122)
	   sa++;
	  else if(a[i]>=65&&a[i]<=90)
	  ca ++;
	}

	  for(i=0;a[i]!='\0';i++)
	   if(a[i]<=' '||a[i]<='\t')
	   w++;


      printf("\nOUTPUT\n");
 printf("-----------------------------------------\n");

    printf("TOTAL NUMBER OF SPACES\t");
    printf("%d\n",s);

    printf("TOTAL NUMBER OF TAB\t");
    printf("%d\n",t);

     printf("TOTAL NUMBER IN TEXT\t");
     printf("%d\n",n);

     printf("TOTAL NUMBER OF SMALL ALPHABET IN TEXT \t");
     printf("%d\n",sa);

     printf("TOTAL NUMBER OF CAPITAL ALPHABET IN TEXT \t");
     printf("%d\n",ca);

     printf("TOTAL NUMBER OF THE WORD IN TEXT \t");
     printf("%d",w);

getch();


}