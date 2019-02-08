#include<stdio.h>
#include<conio.h>
#include<String.h>
#include<ctype.h>
void main()
{
  clrscr();
  FILE *fl;
  fl=fopen("Text01.txt","r");
  char a[10];
  char ch;
  int i=0;
  while(!feof(fl))
  {
  ch=fgetc(fl);
  if(isalpha(ch))
  {
  a[i]=ch;
  i++;
//  printf("%s\n",a[i]);
  }
  //else
  //{
  //break;
  //}
  //ch=fgetc(fl);
  else if(ch==' '||ch=='(')
  {
   a[i]='\0';
  if(strcmp(a,"void")==0)
  {
   printf("keyword found \n");
  }
   else
   {
   printf("not found \n");
   }
   i=0;
  }}
 getch();
}


