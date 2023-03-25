#include<stdio.h>
int main(){
  //打印乘法口诀
  int i=0;
  for(i=1;i<=9;i++){//i表示行
    int j=1;
    for(j=1;j<=i;j++){//j表示列
      printf("%d*%d=%-2d ",i,j,i*j);//-2d表示左对齐
    }
    printf("\n");
  }
  return 0;
}
