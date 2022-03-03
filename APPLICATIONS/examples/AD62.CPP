/*---(THE MATRIX PROGRAM
 USING FUNCTIONS AND PASSING ARGUMENTS
  [3X3 ARRAY PASSING AS ARGUMENT ] )---*/
/*=======================================================================*/

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void matrix1(int a[3][3]);
void matrix2(int b[3][3]);
void mul(int a[3][3],int b[3][3]);
void right(int a[3][3],int b[3][3]);
void left(int a[3][3],int b[3][3]);
void sum1(int a[3][3]);
void sum2(int b[3][3]);
void main ()
{
step:
clrscr();
	  char o,l,r,s,x,m,p,t,z;
	  int a[3][3],b[3][3],c[3][3],i,j,k,q,u;
	 do
	 {
	 clrscr();


	  printf("ENTER YOUR CHOICE");
	  printf("\n==============================\n") ;
	  printf("*  MULTIPLICATION  m\n");
	  printf("*  SUM  s\n");
	  printf("*  RIGHT DIGNOAL  r\n");
	  printf("*  LIFT DIGONAL  l\n");
	  printf("*  FIRST MATRIX  x\n");
	  printf("*  SECOUND MATRIX  p\n");
	  printf("*  BOTH MATRIX  t\n-> ");
	  fflush(stdin);     /*  <--(CLEARING BUFFER AND TAKING INPUT)*/
	  scanf("%c",&o);

	  printf("\n\nENTER THE NUMBER IN FIRST MATRIX\n");

	  printf("=======================================\n\n");
	  for(i=0;i<3;i++)
	  {
	  for(j=0;j<3;j++)
	  scanf("%d",&a[i][j]);
	  }


	  printf("\n\nENTER THE NUMBER IN SECOUND MATRIX\n");
	  printf("=======================================\n\n");
	  for(i=0;i<3;i++)
	  {
	  for(j=0;j<3;j++)
	  scanf("%d",&b[i][j]);
	  }

	  printf("\nOUT PUT");
	  printf("\n================\n\n");


 switch(o)
 {
       case 'x':
       {
       matrix1(a);
       }
       break;


       case 'p':
       {
       matrix2(b);
       }
       break;

       case 'm':
       {
       mul(a,b);
       }
       break;


       case 't':
       {
       matrix1(a);
       matrix2(b);
       }
       break;


       case 's':
       {
       sum1(a);
       sum2(b);
       }
       break;

       case 'r':
       {
       right(a,b);
       }
       break;

       case 'l':
       {
       left(a,b);
       }
       break;


       default:
	 printf("\nINVALID CHIOCE\n\n");
	 printf("* MAIN MENU\t 1\n* EXIT\t\t 2 \n-> ");
	 scanf("%d",&u);

	 if(u!=1)
	 exit (0);
	 else
	 clrscr();
	 goto step;

     }
   getch();
   printf("\n\n\tDO U WANT TO GO MAIN MENU(Y||N)");
   z=getch();
   }
   while (z=='y'||z=='Y');
}
/*---------------------------------------------------------------------*/
 /*==FOR FIRST MATRIX==*/

      void matrix1(int a[3][3])
      {
      int i=0,j=0;

      printf("\nFIRST MATRIX\n");
      printf("-----------------\n");
      for(i=0;i<3;i++)
      {
      for(j=0;j<3;j++)
      printf("%d\t",a[i][j]);
      printf("\n\n\n");
      }
      }
/*-------------------------------------------------------------------------*/
/*==FOR SECOUND MATRIX==*/

      void matrix2(int b[3][3])
      {
      int i=0,j=0;

      printf("\nSECOUND MATRIX\n");
      printf("-----------------\n");
      for(i=0;i<3;i++)
      {
      for(j=0;j<3;j++)
      printf("%d\t",b[i][j]);
      printf("\n\n\n");
      }
      }
/*------------------------------------------------------------------------*/
/*==FOR MATRIX MULTIPLICATION==*/
      void mul(int a[3][3],int b[3][3])
      {
      int i=0,j=0,c[3][3];

      for(i=0;i<3;i++)
      {
      for(j=0;j<3;j++)
      c[i][j]=a[i][0]*b[0][j]+a[i][1]*b[1][j]+a[i][2]*b[2][j];
      }


      printf("\nMATRIX MULTIPLICATION\n");
      printf("-----------------\n");
      for(i=0;i<3;i++)
      {
      for(j=0;j<3;j++)
      printf("%d\t",c[i][j]);
      printf("\n\n\n");
      }
      }
/*---------------------------------------------------------------------------*/
/*==FOR RIGHT DIAGNOAL==*/

      void right(int a[3][3],int b[3][3])

  {
       int i,j;

       printf("\n\n---RIGHT DIGONAL OF FIRST MATRIX---\n");
      printf("---------------------------\n\n");

      for(i=0;i<3;i++)
     {
      for(j=0;j<3;j++)
     {
      if(a[i]==a[j])
      printf("%d\t",a[i][j]);
     }
    }

       printf("\n\n---RIGHT DIGONAL OF SECOUND MATRIX---\n");
      printf("---------------------------\n\n");

      for(i=0;i<3;i++)
     {
      for(j=0;j<3;j++)
     {
      if(b[i]==b[j])
      printf("%d\t",b[i][j]);
     }
    }
  }

/*---------------------------------------------------------------------------*/
/*==FOR LEFT DIAGNOAL==*/

      void left(int a[3][3],int b[3][3])
   {   int i,j;

	printf("\n---LEFT DIGNAL OF FIRST MATRIX ---\n");
	printf("\n------------------------------------\n");

    {
      for(i=0,j=2;i<=2;i++,j--)
      printf("%d\t",a[i][j]);
    }
	printf("\n---LEFT DIGNAL OF SECOUND MATRIX ---\n");
	printf("\n------------------------------------\n");

    {
      for(i=0,j=2;i<=2;i++,j--)
      printf("%d\t",b[i][j]);
    }

   }
/*---------------------------------------------------------------------------*/
 /*SUM OF THE FIRST MATRIX*/

      void sum1(int a[3][3])
   {   int i,j,sum=0;


     printf("\nSUM OF THE ROWS OF FIRST MATRIX\n");
     printf("\n--------------------------\n");

      for(i=0;i<3;i++)
     {
      for(j=0,sum=0;j<3;j++)
       sum=sum+a[i][j];
      printf("%d\n",sum);
     }
  }
/*----------------------------------------------------------------------*/

   /*SUM OF THE SECOUND MATRIX*/

      void sum2(int b[3][3])
   {   int i,j,sum=0;


     printf("\nSUM OF THE ROWS OF SECOUND MATRIX\n");
     printf("\n--------------------------\n");

      for(i=0;i<3;i++)
     {
      for(j=0,sum=0;j<3;j++)
       sum=sum+b[i][j];
      printf("%d\n",sum);
     }
  }
/*------------------------------------------------------------------------*/
