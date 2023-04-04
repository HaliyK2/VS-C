#include<stdio.h>
int main()
{
    int x,y;
    char k;
    scanf("%d %d %c",&x,&y,&k);
    if(y==0 && k=='/'){
        printf("Divided by zero!");//除数为0
    }

    else if(k=='+'){
            printf("%d",x+y);
    }
    else if(k=='-'){
           printf("%d",x-y);
    }
    else if(k=='*'){
            printf("%d",x*y);
    }
    else if(k=='/'){
      printf("%d",x/y);
    }
    else{
        printf("Invalid operator!");//运算符不在加减乘除这四种里面
    }
return 0;
}
    
    
        
