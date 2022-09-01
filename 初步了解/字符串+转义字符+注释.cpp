#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


int main()
{
	//数据在计算机上存储时，存储的是二进制
	//a-97
	//A-65
	//小写字母对应减32转换为大写字母, 大写字母对应加32转换为小写字母
	//ASCII编码   ASCII码值
	//
	//"hello msk.\n"
//这种由双引号（Double Quote）引起来的一串字符称为字符串字面值（String Literal），或者简称字符串。
	char arr1[] = "msk";//字符串可以放到数组中  
	//"msk"-- 'm' 's' 'k' '\0'
	char arr2[] = { 'm', 's', 'k' };
	char arr3[] = { 'm', 's', 'k', '\0' };
	printf("%s\n", arr1);
	printf("%s\n", arr2);
	printf("%s\n", arr3);
	printf("%d\n", strlen(arr1));//strlen - string lenght 计算字符串长度
	printf("%d\n", strlen(arr2));//随机值，直到随机到'\0'才结束
	printf("%d\n", strlen(arr3));
	//注：字符串的结束标志是一个 \0 的转义字符。在计算字符串长度的时候 \0 是结束标志，不算作字符串
	//	内容。


	//转义字符 释义
	//	\ ? 在书写连续多个问号时使用，防止他们被解析成三字母词
	//	\' 用于表示字符常量'
	//	\“ 用于表示一个字符串内部的双引号
	printf("c:\\code\\test.c\\n\n");//printf("c:\code\test.c\n");
	/*	\\ 用于表示一个反斜杠，防止它被解释为一个转义序列符。*
		\a 警告字符，蜂鸣
		\b 退格符
		\f 进纸符
		\n 换行
		\r 回车
		\t 水平制表符
		\v 垂直制表符 */
	printf("%d\n", strlen("c:\code\32\test.c"));//转义符算一个字符
	//  \32--32是个八进制数字
	//32作为八进制代表的那个十进制数字，作为ASCII码，对应的字符   32(八进制)-->26（十进制）一个向右的箭头
	printf("\32\n");
	//	\ddd ddd表示1~3个八进制的数字。 如： \130 X
	printf("\x61\n");
	//	\xdd dd表示2个十六进制数字。 如： \x30 0


	char input = '0';
	printf("上了大学\n");
	printf("你要好好学习吗？\n你的答案(yes or no):\n");
	scanf("%c", &input);
	if (input == 'yes')
		printf("good\n");
	else
		printf("寄\n");


	printf("上个大学\n");//while循环
	int line = 0;
	while (line <= 200)
	{
		line++;
		printf("我要继续努力敲代码：%d\n", line);
	}
	if (line > 200)
		printf("好offer\n");
	return 0;













	return 0;
}