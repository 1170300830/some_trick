#include<stdio.h>
//完整读取一个含回车的文本
int main()
{
   FILE *f;
   f=fopen("a.txt","r");
   char ch;
   ch=fgetc(f);
   while(ch!=EOF)
   {
      fprintf(stderr, "%c",ch);
      ch=fgetc(f);
   }
  return 0;
}
