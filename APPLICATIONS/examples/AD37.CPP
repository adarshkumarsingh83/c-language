#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
	 char a[50];
	 int i,s=0,t=0,l=0;

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
	  else if(a[i]=='\n')
	   l++;
	}


      printf("\nOUTPUT\n");
 printf("-----------------------------------------\n");

    printf("TOTAL NUMBER OF SPACES\t");
    printf("%d\n",s);

    printf("TOTAL NUMBER OF TAB\t");
    printf("%d\n",t);

     printf("TOTAL NUMBER OF NEW LINE\t");
     printf("%d\n",l);

getch();


}