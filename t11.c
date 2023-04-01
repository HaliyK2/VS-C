#include<stdio.h>
int main()
{
  //将一个三位数反向输出，例如输入100，输出001 
  //可以将这个三位数，把每位数字当成三个char类型的字符，逆序输出
  char x,y,z;
  scanf("%c%c%c",&x,&y,&z);
  printf("%c%c%c",z,y,x);
 return 0;
}
