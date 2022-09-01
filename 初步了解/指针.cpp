#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


//地址-->空间  
//如何产生地址：
//32位                                64位
//32根地址线/数据线                   类推
//正电和负电
// 1     0
//若最小地址位对应空间一个比特位
//2^32/8/1024/1024/1024
//=0.5Gb
//空间太小所以通常一个地址对应一
//个空间大小位一个字节


int main()
{
	double b = 3.14;
	int a = 10; //在内存中创建一个地址来存储变量
	//&a;
	//p = &a;
	//int p = &a;
	double* d = &b;
	int* p = &a;//创建一个地址来存储相应变量的地址
	//有一种变量是用来存放地址的-指针变量
	*p = 20; //可以直接修改变量的值
	*d = 4.52;
	//* - 解引用操作符/间接访问操作符
	//指针变量的大小取决于地址的大小
    //32位平台下地址是32个bit位（即4个字节）
    //64位平台下地址是64个bit位（即8个字节）
	printf("%d\n", sizeof(p));
	//p为指针变量，用来存储地址，   类型为int*
	printf("%p\n", p);
	printf("%p\n", &a);//%p打印地址
	printf("%d\n", a);
	printf("%lf\n", *d);

	printf("%d\n", sizeof(char*));
	printf("%d\n", sizeof(short*));
	printf("%d\n", sizeof(int*));
	printf("%d\n", sizeof(double*));
	//所有实际数据类型，不管是整型、浮点型、字符型，还是其他的数据类型，对应指针的值的类型都是一样的，
	//都是一个代表内存地址的长的十六进制数。具体是几个字节与计算机寻址位数，也就是内存地址长度有关，
	//通常32位机器是4字节，64位机器是8字节。









	return 0;
}