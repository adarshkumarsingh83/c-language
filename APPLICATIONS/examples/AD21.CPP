#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
       int a[3][3],b,c,x[3][3],i[3][3];
/* first matrix number enter */

       printf("ENTER THE NUMBER \n");

       for(b=0;b<=2;b++)
      {
       for(c=0;c<=2;c++)
       scanf("%d",&a[b][c]);
      }
       printf("\n");

/* secound matrix number enter */
       printf("ENTER THE NUMBER \n");

       for(b=0;b<=2;b++)
      {
       for(c=0;c<=2;c++)
       scanf("%d",&x[b][c]);
      }
       printf("\n \n \n");

/* first matrix number print */
      printf("\n \n FIRST MATRIX\n\n ");

      for(b=0;b<=2;b++)
     {
      for(c=0;c<=2;c++)
      printf(" %d ",a[b][c] );

      printf("\n \n");
     }
      printf("\n \n");
/* secound matrix print */
     printf("\n SECOUND MATRIX \n \n");

     for(b=0;b<=2;b++)
    {
     for(c=0;c<=2;c++)
     printf(" %d ",x[b][c] );
     printf("\n \n");
    }
    printf("\n \n");
/* multiplication of the matrix print */
    for(b=0;b<=2;b++)
   {
    for(c=0;c<=2;c++)
    i[b][c]=a[b][c] * x[b][c];
   }
/* for printing product */
    printf("PRODUCT OF TWO MATRIX \n \n \n");
    for(b=0;b<=2;b++)
   {
    for(c=0;c<=2;c++)
    printf(" %d ",i[b][c] );
    printf("\n \n");
   }


getch();
}