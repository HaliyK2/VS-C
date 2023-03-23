#include<stdio.h>
int main(){
  //计算1！+2！+3！....阶乘和
  int n = 0;
  int ret = 1;
  int sum = 0;//阶乘和
  for(int n = 1;n <= 3;n++){//计算3的阶乘和
    ret = 1;
    for(int i=0;i<=n;i++){
      ret = ret * i;
    }
    sum = sum + ret;
    printf("sum = %d\n",sum);
    
    
    //优化后：
    for(int n=1;n<=3;n++){
      ret = ret * n;
      sum =  sum + ret;
    }
    printf("sum = %d\n",sum);
  }
  
