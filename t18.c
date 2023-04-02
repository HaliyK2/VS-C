#include<stdio.h>
int main()
{
  //判断一个正整数是否是两位数（即大于等于 10 且小于等于99），是返回1，不是返回0
    int a;
    scanf("%d",&a);
    if(a>=10 && a<=99){
        printf("1");
        
    }
    else{
        printf("0");
    }
return 0;
}
