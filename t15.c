#include<stdio.h>
#include<math.h>
int main(){//方法一
  int n;
  scanf("%d",&n);
  int k = pow(2,n);//表示计算2的n次方
  printf("%d",k);
  return 0;
}


#include<stdio.h>//方法二
int main(){
  int n,i;
  long long int t = 1;
  scanf("%d",&n);
  for(i=1;i<=n;i++){
    t*=2;
  }
  printf("%IId",t);
  return 0;
}

