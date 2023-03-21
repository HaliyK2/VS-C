#include<stdio.h>
int main(){
/给定两个数，求出两个数的最大公约数(辗转相除法）
	int m = 0;
	int n = 0;
	scanf("%d %d", &m, &n);
	int r = 0;
	while (r = m % n) {
	   	n = m;
		  n = r;
	    }
	  printf("%d\n", n);
   return 0;
 }
