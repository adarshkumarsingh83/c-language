#include<stdio.h>
#include<conio.h>
int sort(int a[],int b[]);
void main()
{
clrscr();
	   int a[10],b[10],i=0,m;

	   printf("ENTER 10 NUMBER\n");
	   printf("-----------------\n");
	   for(i=0;i<10;i++)
	   scanf("%d",&a[i]);

    m=sort(a,b);
	  printf("\nOUT PUT\n");
	  printf("---------------\n");
	  for(i=0;i<m;i++)
	  printf("%d\t",b[i]);

getch();
}

/*============================================================*/
int sort(int a[],int b[])
{
 int   i=0,j=0,t=0,k=0;

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
	for(i=0;i<10;i++)
	b[k++]=a[i];

	return(k);

}