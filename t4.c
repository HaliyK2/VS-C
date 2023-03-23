#include<stdio.h>
int main(){

//方法一
    int n = 0;
    scanf("%d",&n);
    int ret = 1;
    for(int i=1;i<=n;i++){
        ret = ret * i;
  }
  printf("%d",ret);  
  return 0;
}
