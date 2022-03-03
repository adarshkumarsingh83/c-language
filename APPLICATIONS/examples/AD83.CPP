#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
	    char *a[5];
	    int i=0;

	    printf("ENTER THE FIVE NAME\n");
	    printf("----------------------------------\n");
	    for(i=0;i<5;i++)
	    gets(a[i]);

	    printf("\nOUT PUT\n");
	    printf("===================================\n");
	    for(i=4;i>=0;i--)
	    printf("\n%s",a[i]);

getch();
}