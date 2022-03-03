#include<stdio.h>
#include<conio.h>
char reverse(char*);     /*or char *reverse(char[]);  */

void main()
{

clrscr();

int i;
char a[50];
char *p;

		 printf("\n ENTER THE STRING\n");
		 gets(a);

   p=reverse(a);                   /* function call */

   for(i=0;*(i+p)!='\0';i++)
   printf("%c",*(p+i));

  /*
	  FOR PRINTING  WITH THE HELP OF POINTER

   for(i=0;*(i+p)!='\0';i++)
   printf("%c",*(p+i));

	 OR

   printf("%s",p);
	  OR

  while(*p!='\0')
  {
  printf("%c",*p);
  p++;
  }

  */
getch();

}
/*========================================================*/
char *reverse(char a[])
{
static char s[50];
int i,l=0,j,k=0;

for(i=0;;)

}




















