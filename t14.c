#include<stdio.h>
int main()
{
  //等差数列是一个很有趣的数列，它的任何相邻两项的差相等。
//现在给出一个等差数列的前两项 a1,a2的值，求第n项是多少
  int a1,a2,n;
  scanf("%d %d %d",&a1,&a2,&n);
  int d = a2 - a1;
  int An = a1 + (n-1) * d;
  printf("%d",An);
  return 0;
}
