#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//函数分为库函数和自定义函数
float Add(float x, float y)//自定义函数
{
	float z = x + y;
	return z;
}
int main()
{
	float num1 = 0;
	float num2 = 0;
	float sum = 0;
	printf("输入两个操作数:\n");
	scanf("%f %f", &num1, &num2);
	sum = Add(num1, num2);
	printf("sum = %f\n", sum);


	//数组的定义：一组相同类型元素的集合
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//定义一个整形数组，最多放10个元素
	int i = 0;
	while (i < 10)
	{
		printf("%d\n", arr[i]);
		i++;
	}
	//char ch[20]
	//float arr2[5]
	//printf("%d\n", arr[4]);
	printf("数组可以通过下标来访问的。\n");
	//数组的每个元素都有一个下标，下标是从0开始
	//int arr[10] = { 0 };
	//如果数组10个元素，下标的范围是0-9
	return 0;
}
