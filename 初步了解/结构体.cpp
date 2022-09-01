#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//结构体
//人，书等等等等复杂对象
//复杂对象 --创造出来的一种类型

struct Book
{
	char name[20];//C语言程序设计
    short price;//55

};


int main()
{
	//利用及结构体类型 - 创建一个该类型的结构体变量
	struct Book b1 = {"C语言程序设计",55};
	struct Book* pd = &b1;
	printf("叫啥：%s\n", pd->name);
	printf("多钱；%d元\n", pd->price);
	//->   结构体指针->成员
	printf("书名：%s\n", b1.name);//  .  结构体变量.成员
	printf("原价：%d 元\n", b1.price);
	b1.price = 40;
	printf("大甩卖：%d元\n", b1.price);
	strcpy(b1.name, "哈哈")
	//strcpy -- string copy -- （字符串拷贝）   为库函数    引头文件<string.h>
	//name是一个数组名，本质上是一个地址，对数组name中值进行更改，使用strcpy函数


	return 0;
}