#include<stdio.h>
long long int f(long long int n,long long int a,long long int b)      //n代表总题数,a代表星期一到星期五做的题的数量,b代表星期六和星期天做题的数量
{
    int flag;
    long long int sum=0;          //flag用来记录最后是在1-5停的,还是在6-7停的
    while(n!=0)
    {
        n-=5*a;                 //先算1-5
        if(n<0)
        {
            flag=1;
            break;
        }
        sum+=5;
        n-=2*b;                  //再算6-7
        if(n<0)
        {
            flag=2;
            break;
        }
        sum+=2;
    }
    if(flag==1)               //如果是在1-5停的话
    {
        n+=5*a;                //加回来,然后算是在第几天的
        while(n>a)
        {
            n-=a;
            sum++;
        }
        sum++;                //不满一天就加回去
    }
    else if(flag==2)
    {
        n+=2*b;
        while(n>b)
        {
            n-=b;
            sum++;
        }
        sum++;
    }
    return sum;
}
int main()
{
    long long int a,b,n;
    scanf("%lld%lld%lld",&a,&b,&n);
    printf("%lld",f(n,a,b));
    return 0;
}
