#include<stdio.h>
int main(){
            //在一组有序数组查找某个数的下标
  int arr[] = {1,2,3,4,5,6,7,8,9,10};
  int k=0;//要寻找的元素
  scanf("%d",&k);
  int sz = sizeof(arr)/sizeof(arr[0]);
  int left=0;
  int right=sz-1;
  while(left<=right){
    int mid = (left+right)/2;
    if(arr[mid]<k){
      left=mid+1;
    }
    else if(arr[mid]>k){
      right=mid-1;
    }
    else{
      printf("找到了，下标是：%d\n",mid);
      break;
    }
  }
  if(left>right){
    printf("找不到！");
  }
  return 0;
}
  
           
           
      
  
