
#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
       int a[2][2],b,c,x[2][2],i[2][2];
/* first matrix number enter */

       printf("ENTER THE NUMBER \n");

       for(b=0;b<2;b++)
      {
       for(c=0;c<2;c++)
       scanf("%d",&a[b][c]);
      }
       printf("\n");

/* secound matrix number enter */
       printf("ENTER THE NUMBER \n");

       for(b=0;b<2;b++)
      {
       for(c=0;c<2;c++)
       scanf("%d",&x[b][c]);
      }
       printf("\n \n \n");

/* first matrix number print */
      printf("FIRST MATRIX \n \n \n");

      for(b=0;b<2;b++)
     {
      for(c=0;c<2;c++)
      printf(" %d ",a[b][c] );

      printf("\n \n");
     }
      printf("\n \n");
/* secound matrix print */
     printf("SECOUND MATRIX \n \n \n");
     for(b=0;b<2;b++)
    {
     for(c=0;c<2;c++)
     printf(" %d ",x[b][c] );
     printf("\n \n");
    }
    printf("\n");
/* SUM OF THE MATRIX */
     for(b=0;b<2;b++)
    {
     for(c=0;c<2;c++)
     i[b][c]=a[b][c]+x[b][c];
    }
/* for printing sum */
     printf("SUM OF THE MATRIX \n \n \n");
     for(b=0;b<2;b++)
    {
     for(c=0;c<2;c++)
     printf(" %d ",i[b][c] );
     printf("\n \n");
    }

getch();
}