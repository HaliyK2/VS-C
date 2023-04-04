#include<stdio.h>
int main()
{
  //给出一名学生的语文、数学、英语成绩，判断他是否恰好有一门课不及格（成绩小于60分）。若该学生恰好有一门成绩不及格输出 1，否则输出0(要考虑等于的情况）
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a>=60 && b>=60 && c>=60){
        printf("0");
    }
    else{ 
          if(a>=60 && b>=60 && c<60){
            printf("1");
        }
        else if(a>=60 && b<60 && c>=60){
            printf("1");
        }
        else if(a<60 && b>=60 && c>=60){
            printf("1");
        }
        else{
            printf("0");
        }
    }
    
return 0;
}
