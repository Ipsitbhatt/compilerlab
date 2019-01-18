#include<stdio.h>
#include<conio.h>
void main()
{
int i;
char a[]="This is BDA";
FILE *fp;
fp = fopen("ABC.txt","w");
for(i=0;a[i]!='\0';i++)
{
   fputc(a[i],fp);
   fclose(fp);
}
getch();
}
