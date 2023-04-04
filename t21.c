#include<stdio.h>
int main(){
    //如果拥有10个“幸运”或20个“鼓励”的瓶盖就可以拿到大奖，拿到输出1，反之输出0
    int x,y;
    scanf("%d %d",&x,&y);
    if(x>=10 || y>=20)
    {
        printf("1");
    }
    else{
        printf("0");
    }
return 0;
}
