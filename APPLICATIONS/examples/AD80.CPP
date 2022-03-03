/*( POINTER  FUNCTION WITH ARGUMENTS (INTEGER ARRAY PASSED AND SORTED))*/

#include<stdio.h>
#include<conio.h>
int name(int a[50],int b[50]);
void main()
{
clrscr();
	   int a[10],b[10],*p,*p1;
	   int i=0,m,o=0;

	   printf("ENTER NUMBER\n");
	   printf("-----------------\n");
	   for(i=0;i<10;i++)

	   scanf("%d",&a[i]);



	  printf("\n\nOUT PUT\n");
	  printf("---------------\n-> ");

     *p1=name(a,b);     /*FUNCTION CALL*/
	  m=*p1;

	  for(i=0,o=0;i<m;i++,o++)
	  {
	  printf("%d\t",a[i]);
	  }
	 printf("\n\nLENGTH OF SORTED ARRAY\n");
	 printf("------------------------------------\n");
	 printf("-> %d",o);

getch();
}

/*============================================================*/
int name(int a[],int b[])
{
 int   i=0,j=0,k=0;
 int t,*p;


	 for(i=0;i<9;i++)
	 {
	 for(j=i+1;j<10;j++)
	 if(a[i]>a[j])
	 {
	 t=a[i];
	 a[i]=a[j];
	 a[j]=t;
	 }
	 }
	for(i=0,k=0;i!='\n';i++)
	{
	b[k]=a[i];
	 k++;
	 }
	*p=k;

     return(*p);

}