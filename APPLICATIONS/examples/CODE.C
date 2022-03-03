/* SIMPLE PROGRAM FOR ENCRIPTION OF THE MASSAGE */

#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{

	       char a[100],b[100];
	       int i,j,l=0,k;
clrscr();
	       printf("ENTER THE MASSAGE FOR DECRIP[TION\n");
	       printf("------------------------------------\n\n->");

	       gets(a);
	      l=strlen(a);
	   //   printf("%d\n",l);
	       for(i=0;a[l]>=0;l--)
	     {
	       if(a[l]==32)
		b[i++]=32;
	      else if(a[l]==65)
		b[i++]='g';
	      else if(a[l]==66)
		b[i++]='n';
	      else if(a[l]==67)
		b[i++]=99;
	      else if(a[l]==68)
		b[i++]=107;
	      else if(a[l]==69)
		b[i++]=116;
	      else if(a[l]==70)
		b[i++]=99;
	      else if(a[l]==71)
		b[i++]=109;
	      else if(a[l]==72)
		b[i++]=120;
	      else if(a[l]==73)
		b[i++]=104;
	      else if(a[l]==74)
		b[i++]=118;
	      else if(a[l]==75)
		b[i++]=106;
	      else if(a[l]==76)
		b[i++]=121;
	      else if(a[l]==77)
		b[i++]=111;
	      else if(a[l]==78)
		b[i++]=100;
	      else if(a[l]==79)
		b[i++]=122;
	      else if(a[l]==80)
		b[i++]=115;
	      else if(a[l]==81)
		b[i++]=114;
	      else if(a[l]==82)
		b[i++]=105;
	      else if(a[l]==83)
		b[i++]=97;
	      else if(a[l]==84)
		b[i++]=101;
	      else if(a[l]==85)
		b[i++]=113;
	      else if(a[l]==86)
		b[i++]=119;
	      else if(a[l]==87)
		b[i++]=108;
	      else if(a[l]==88)
		b[i++]=102;
	      else if(a[l]==89)
		b[i++]=112;
	      else if(a[l]==90)
		b[i++]=103;
	      }
	   for(i=0;i<=l;i++)
	    printf("%c",b[i]);
getch();
}