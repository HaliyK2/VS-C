#include<stdio.h>
int main()
{
   //一只大象口渴了，要喝 20升水才能解渴，但现在只有一个深 h厘米，底面半径为r 厘米的小圆桶 （h和 r 都是整数）。
  //问大象至少要喝多少桶水才会解渴（圆周率取3.14）
  int h,r;
  scanf("%d %d",&h,&r);
  int v = 20000 / (3.14 * r * r * h) + 1;//向上取整，大象才能喝饱
  printf("%d",v);
  return 0;
}