#include<stdio.h>
//������ȡһ�����س����ı�
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
