#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//关键字 typedef
	//将unsigned int 重命名为u_int, 所以u_int也是一个类型名
typedef unsigned int u_int;
int main()
{
	//常见关键字
	//auto  break   case  char  const   continue  default  do   double else  enum   
	//extern float  for   goto  if   int   long  register    return   short  signed
	//	sizeof   static struct  switch  typedef   union  unsigned   void  volatile  while

	//register int a = 10;//建议把a定义为寄存器变量，处理速度更快
	//signed int 全称，通常简写为int ，有符号

	//unsigned int   无符号



	//关键字 typedef
	//将unsigned int 重命名为u_int, 所以u_int也是一个类型名
	typedef unsigned int u_int;

	{
		//观察num1和num2,这两个变量的类型是一样的
		unsigned int num1 = 0;
		u_int num2 = 0;



		//关键字static



		//	在C语言中：
		//	static是用来修饰变量和函数的
		//	1. 修饰局部变量 - 称为静态局部变量

//#include <stdio.h>
//		void test()
//		{
//			static int i = 0;
//			i++;
//			printf("%d ", i);
//		}
//		int main()
//		{
//			int i = 0;
//			for (i = 0; i < 10; i++)
//			{
//				test();
//			}
//			return 0;
//		}
		// static修饰局部变量改变了变量的生命周期
		//让静态局部变量出了作用域依然存在，到程序结束，生命周期才结束。
// 
// 
		//	2. 修饰全局变量 - 称为静态全局变量

		//一个全局变量被static修饰，使得这个全局变量只能在本源文件内使用，不能在其他源文件内使
		//	用。

		//	3. 修饰函数 - 称为静态函数

		//static int Add(int x, int y)    使其函数无法在外部文件中声明使用
		// {
		//	return c + y;
		//  }
		//int main()
		//{
		//	printf("%d\n", Add(2, 3));
		//	return 0;
		//}
		//一个函数被static修饰，使得这个函数只能在本源文件内使用，不能在其他源文件内使用。







		
		return 0;

	}
	
	return 0;
}