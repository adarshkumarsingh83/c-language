#include<stdio.h>
#include<conio.h>
int* ad(int [],int []);
void main()
{
clrscr();
	int a[5],b[5],i,j,*p;

	printf("\n\nENTER THE NUMBER \n");
	for(i=0;i<5;i++)
	scanf("%d",&a[i]);


	printf("\n\nENTER THE NUMBER \n");
	for(j=0;j<5;j++)
	scanf("%d",&b[j]);

	p=ad(a,b);

	 for(i=0;i!=10;i++)
	 printf("%d",p[i]);


getch();
}


 int* ad(int a[],int b[])
 {
  int c[10],i,j;

  for(i=0;i<5;i++)
  c[i]=a[i];

  for(i=5,j=0;i<10;i++,j++)
  c[i]=b[j];


    return(c);

 }







