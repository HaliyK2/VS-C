#include<stdio.h>
int main(){
  //输出10个数中的最大值
  int arr[] = {1,2,3,4,5,6,7,8,9,10};
  //int arr[] = {-1,-2,-3,-4,-5,-6,-7,-8,-9,-10};
   int max = arr[0];//求最大值
  int sz = sizeof(arr)/sizeof(arr[0]);
  for(int i=0;i<sz;i++){
    if(arr[i]>max){
       max = arr[i];
    }
  }
  printf("max = %d\n",max);
  return 0;
}
