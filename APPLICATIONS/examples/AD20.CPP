#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
       int a[2][2],b,c,x[2][2],y,z;
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

       for(y=0;y<2;y++)
      {
       for(z=0;z<2;z++)
       scanf("%d",&x[y][z]);
      }
       printf("\n \n \n");

/* first matrix number print */
       printf("FIRST MATRIX \n \n");

      for(b=0;b<2;b++)
     {
      for(c=0;c<2;c++)
      printf(" %d ",a[b][c] );

      printf("\n \n");
     }
      printf("\n \n");
/* secound matrix print */
     printf("SECOUND MATRIX \n \n");

     for(y=0;y<2;y++)
    {
     for(z=0;z<2;z++)
     printf(" %d ",x[y][z] );
     printf("\n \n");
    }

getch();
}