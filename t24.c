#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
#define ll long long
int max(int a, int b) {
	return a > b ? a : b;
}
int main() {//修剪灌木
	int i, n;
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		printf("%d\n", max(i - 1, n - i) * 2);
	}
	return 0;
}
