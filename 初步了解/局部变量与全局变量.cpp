#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int num2 = 20;//全局变量，定义在（{}）外部
int a = 100;

int main()
{

	//两数相加
	int num3 = 0;
	int num4 = 0;
	int sum = 0;
	//C语言语法规定，变量要定义在当前代码的最前面
	//输入数据 - 使用输入函数scanf
	scanf("%d%d", &num3, &num4);//取地址符号&

	sum = num3 + num4;
	printf("sum = %d\n", sum);
	int num1 = 25;//局部变量，定义在（{}）内部

	int a = 10;
	//局部变量和全局变量名称不要相同，易产生bug
	//局部变量和全局变量名称相同时，局部变量优先
	return 0;
}
//作用域：
//局部变量的作用域是局部变量的所在的局部范围
//全局变量的作用域是！整个工程！ 不同文件之间通过声明extern来声明外部符号
//生命周期；
//局部变量生命周期；进入作用域生命周期开始，出作用域生命周期结束。
//全局变量生命周期；整个程序的生命周期