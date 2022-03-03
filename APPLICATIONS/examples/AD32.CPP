#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
	double a[10],g=0;
	int	i;

	printf("ENTER THE TEN NUMBER \n");
     printf("-------------------------------------\n");
	for(i=0;i<10;i++)
	scanf("%d",&a[i]);
/*( comparision between first and next and swaping  )*/
	    g=a[0];
	for(i=0;i<10;i++)
       {
	 if(a[i]>=g)
	    g=a[i];
	}


       printf("\n\nBIGGEST NUMBER\n");
       printf("---------------------------\n");
       printf("%d",g);

getch();
}