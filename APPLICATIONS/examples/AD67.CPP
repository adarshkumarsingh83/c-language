/* FUNCTION WITH ARGUMENTS AND RETURN VALUE
{[ PASSED BY REFERENCE OF ARRAY ]}
(ODD NUMBER PROGRAM)*/

#include<stdio.h>
#include<conio.h>
int odd(int a[],int b[]);
void main()
{
clrscr();
	  int a[10],b[10],i,j;

	  printf("ENTER THE 10 NUMBER\n");
	  printf("-------------------\n");
	  for(i=0;i<10;i++)
	  scanf("%d",&a[i]);

/*FUNCTION CALLING*/
	  j=odd(a,b);
 /*(FOR PRINTING OF RETURN ARRAY IN B)*/
	 printf("\n\nOUTPUT\n");
	 printf("--------------------\n");
	  for(i=0;i<j;i++)
	  printf("%d\n",b[i]);

getch();
}

/*(o---------------------------------------------------------------o)*/
/*FUNCTION DEFINATION*/

  int odd(int a[],int b[])
  {
	  int i=0,j=0;
/*(FOR CHEACKING OF ODD NUMBER IN ARRAY AND PUTTING IT INTO ARRAY B )*/

    for(i=0;i<10;i++)
    if(a[i]%2!=0)
    b[j++]=a[i];

/*(RETURN ADDRESS OF ARRAY B)*/
    return(j);

  }


