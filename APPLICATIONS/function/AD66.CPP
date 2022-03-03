/* FUNCTION WITH ARGUMENTS AND RETURN VALUE
   {[ PASSED BY REFERENCE OF ARRAY ]}
    EVEN NUMBER PROGRAM*/

#include<stdio.h>
#include<conio.h>

int*  even(int [],int []);

void main()
{
clrscr();
	  int a[10],b[10],i,*j;

	  printf("ENTER THE 10 NUMBER\n");
	  printf("-------------------\n");
	  for(i=0;i<10;i++)
	  scanf("%d",&a[i]);

/*FUNCTION CALLING*/
	  j=even(a,b);
 /*(FOR PRINTING OF RETURN ARRAY IN B)*/
	 printf("\n\nOUTPUT\n");
	 printf("--------------------\n");
	  for(i=0;*(j+i)!='\n';i++)
	  printf("%d\n",*(j+i));

getch();
}

/*(o---------------------------------------------------------------o)*/
/*FUNCTION DEFINATION*/

  int*  even(int a[],int b[])
  {
	  int i=0,k=0;
/*(FOR CHEACKING OF EVEN NUMBER IN ARRAY AND PUTTING IT INTO ARRAY B )*/

    for(i=0;i<10;i++)
    {
    if(a[i]%2==0)
    {
      b[k]=a[i];
       k++;
     }
    }
     b[k]='\n';
/*(RETURN ADDRESS OF ARRAY B)*/
    return(b);

  }


