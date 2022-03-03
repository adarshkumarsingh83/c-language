#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
	 char a[20];
	 int i,c=0;
step:

     printf("ENTER THE TEXT\n");
 printf("--------------------------------\n");
     gets(a);

  for(i=0;a[i]!='\0';i++,c++)
  {
     if(a[i]>='0'&&a[i]<='9')
    {
     printf("\nSTRING CONTAIN NUMBER\n\n");
     c=0;
      goto step;
    }

   }
      printf("\nOUTPUT\n");
 printf("-----------------------------------------\n");

    printf("%s\n",a);
    printf("\nTOTAL NUMBER OF ALPHABET IN TEXT \t");
    printf("%d",c);

getch();
}