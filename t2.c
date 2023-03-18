#include<stdio.h>
int main(){
//编写代码，演示多个字符从两端移动，向中间汇聚
	/*
	* welcome to myworld!
	* ###################
	* w#################!
	* we###############d!
	* wel#############ld!
	* .......
	* welcome to myworld!
	*/
	char arr1[] = "welcome to MyWorld!";
	char arr2[] = "###################";
	int left = 0;
	int right = strlen(arr1) - 1;
	while (left <= right) {
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		Sleep(1000);//休息一秒
	  system("cls");执行系统命令的一个函数，cls：清空屏幕
		left++;
		right--;
	}
return 0;
}
