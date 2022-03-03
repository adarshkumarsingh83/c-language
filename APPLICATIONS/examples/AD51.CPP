#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
	  int a[3][3],i,j;
	  printf("ENTER THE NUMBER\n");
	  printf("-----------------------\n");

	  for(i=0;i<=2;i++)
	  {
	   for(j=0;j<=2;j++)
	  scanf("%d",&a[i][j]);
	  }

      printf("\nOUTPUT OF MATRIX\n");
      printf("---------------------------\n\n");
	  for(i=0;i<=2;i++)
	  {
	   for(j=0;j<=2;j++)
	   printf("%d\t",a[i][j]);
	  printf("\n\n\n");
	  }
	 printf("\n---LEFT DIGNAL---\n");
	printf("\n------------------------------------\n");

    {
      for(i=0,j=2;i<=2;i++,j--)
      printf("%d\t",a[i][j]);
    }


       printf("\n\n---RIGHT DIGONAL---\n");
      printf("---------------------------\n\n");
    {
      for(i=0;i<3;i++)
     {
      for(j=0;j<3;j++)
     {
      if(a[i]==a[j])
      printf("%d\t",a[i][j]);
     else
       printf("-\t");
     }
      printf("\n\n\n");
    }
   }

getch();
}