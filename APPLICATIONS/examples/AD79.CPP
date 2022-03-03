/*( POINTER  FUNCTION WITH ARGUMENTS (CHAR ARRAY PASSED AND SORTED))*/

#include<stdio.h>
#include<conio.h>
char name(char a[50],char b[50]);
void main()
{
clrscr();
	   char a[50],b[50],*p,*p1;
	   int i=0,m,o=0;

	   printf("ENTER NAME\n");
	   printf("-----------------\n");
	   gets(a);


    *p1=name(a,b);       /*FUNCTION CALL*/
	 m=*p1;
	  printf("\n\nOUT PUT\n");
	  printf("---------------\n-> ");
	  for(i=0,o=1;i<m;i++,o++)
	  printf("%c",b[i]);

	 printf("\n\nLENGTH OF SORTED ARRAY\n");
	 printf("------------------------------------\n");
	 printf("-> %d",o);

getch();
}

/*============================================================*/
char name(char a[],char b[])
{
 int   i=0,j=0,k=0,l=0;
 char t,*p;

      for(i=0;a[i]!='\0';i++)
      if(a[i]!=32)
      l++;

       printf("\nTOTAL NO OF ALPHABET\n");
       printf("-----------------------\n");
       printf("-> %d",l);

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
	*p=k;


	return(*p);

}