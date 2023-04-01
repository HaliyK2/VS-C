#include<stdio.h>
int main()
{
  //计算两个双精度浮点数a和b的相除的余数，a,b都是双精度浮点数，这里余数(r)的定义为：a=k*b+r,其中K是整数，0<=r<b
    double a,b;
    int k;
    scanf("%lf %lf",&a,&b);
    k = a / b;
    double r=a-k*b;
    printf("%lf",r);
return 0;
}
