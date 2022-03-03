/* MATRIX MULTIPLICATION 3X3 */

#include<stdio.h>
#include<conio.h>
void mat();
void main()
{
clrscr();
mat ();
getch();
}


/*(=============================================================)*/
 void mat()
 {
   int a[3][3],b[3][3],c[3][3],i,j;

  printf("ENTER THE NUMBER IN FIRST MATRIX\n");
  printf("------------------------------------------\n\n");
  for(i=0;i<3;i++)
  {
   for(j=0;j<3;j++)
   scanf("%d",&a[i][j]);
  }

  printf("\n\nENTER THE NUMBER IN SECPUND MATRIX\n");
  printf("-----------------------------------------\n\n");
  for(i=0;i<3;i++)
  {
   for(j=0;j<3;j++)
   scanf("%d",&b[i][j]);
  }

 /*(for matrix multiplication)*/
  for(i=0;i<3;i++)
  {
   for(j=0;j<3;j++)
   c[i][j]=a[i][0]*b[0][j]+a[i][1]*b[1][j]+a[i][2]*b[2][j];
  }


  printf("\n\nTHE OUT PUT OF MATRIX MULTIPLECATION\n");
  printf("-------------------------------------------------\n\n");
  for(i=0;i<3;i++)
  {
   for(j=0;j<3;j++)
   printf("%d\t",c[i][j]);
   printf("\n\n\n");
  }

}

