#include<stdio.h>
int main(){
  char n;
  int x;
  scanf("%c",&n);//输入单个字符用%c
  x=n;//需要先将字符转换为整形，这样可以得到它的 ASCII 值
  if(x%2 != 0){//整除的数余数为0，否则不为0,取余（%） 
    printf("YES");//是奇数
  }
  else{
    printf("NO");
  }
  return 0;
}
