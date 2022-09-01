#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

enum Sex//enum枚举常量必须
	//可以一一列举的常量
{
	MALE,
	FEMALE,
	SECRET  //三个枚举常量
};
//括号中的MALE,FEMALE,SECRET是枚举常量

int main()
{
	//常量是不可改变的

	//字面常量演示
	3.14;//字面常量
	1000;//字面常量

	//const- 常属性 修饰的常变量
	const float pai = 3.14; //这里的pai是const修饰的常变量
	//常变量具有常属性，但本质还是变量
	//pai = 5.14;失败，pai被const修饰为常变量是不能直接修改的！


	//#define的标识符常量 演示
#define MAX 100

	int arr[MAX] = { 0 };//成功运行，说明MAX为常量。
	printf("max = %d\n", MAX);

	//枚举常量  演示
	//枚举一一列举
	//枚举常量通常是有值的
	printf("%d\n", MALE);
	printf("%d\n", FEMALE);
	printf("%d\n", SECRET);
	//注：枚举常量的默认是从0开始，依次向下递增1的
	enum Sex sex = FEMALE;

	return 0;
}