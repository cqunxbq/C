#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//������Ϊ�⺯�����Զ��庯��
float Add(float x, float y)//�Զ��庯��
{
	float z = x + y;
	return z;
}
int main()
{
	float num1 = 0;
	float num2 = 0;
	float sum = 0;
	printf("��������������:\n");
	scanf("%f %f", &num1, &num2);
	sum = Add(num1, num2);
	printf("sum = %f\n", sum);


	//����Ķ��壺һ����ͬ����Ԫ�صļ���
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//����һ���������飬����10��Ԫ��
	int i = 0;
	while (i < 10)
	{
		printf("%d\n", arr[i]);
		i++;
	}
	//char ch[20]
	//float arr2[5]
	//printf("%d\n", arr[4]);
	printf("�������ͨ���±������ʵġ�\n");
	//�����ÿ��Ԫ�ض���һ���±꣬�±��Ǵ�0��ʼ
	//int arr[10] = { 0 };
	//�������10��Ԫ�أ��±�ķ�Χ��0-9
	return 0;
}
