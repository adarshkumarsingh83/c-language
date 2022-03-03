/*(FUNCTION WITH ARGUMENTS (CHAR ARRAY PASSED AND SORTED))*/

#include<stdio.h>
#include<conio.h>
char name(char a[30],char b[30]);
void main()
{
clrscr();
	   char a[30],b[30];
	   int i=0,m;

	   printf("ENTER NAME\n");
	   printf("-----------------\n");
	   gets(a);


    m=name(a,b);       /*FUNCTION CALL*/
	  printf("\nOUT PUT\n");
	  printf("---------------\n");
	  for(i=0;i<m;i++)
	  printf("%c",b[i]);

getch();
}

/*============================================================*/
char name(char a[30],char b[30])
{
 int   i=0,j=0,k=0,l=0;
 char t;

      for(i=0;a[i]!='\0';i++)
       l=i;

	 for(i=0;i<l;i++)
	 {
	 for(j=i+1;j<=l;j++)
	 if(a[i]>a[j])
	 {
	 t=a[i];
	 a[i]=a[j];
	 a[j]=t;
	 }
	 }
	for(i=0;i<=l;i++)
	b[k++]=a[i];

	return(k);

}