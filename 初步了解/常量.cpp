#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

enum Sex//enumö�ٳ�������
	//����һһ�оٵĳ���
{
	MALE,
	FEMALE,
	SECRET  //����ö�ٳ���
};
//�����е�MALE,FEMALE,SECRET��ö�ٳ���

int main()
{
	//�����ǲ��ɸı��

	//���泣����ʾ
	3.14;//���泣��
	1000;//���泣��

	//const- ������ ���εĳ�����
	const float pai = 3.14; //�����pai��const���εĳ�����
	//���������г����ԣ������ʻ��Ǳ���
	//pai = 5.14;ʧ�ܣ�pai��const����Ϊ�������ǲ���ֱ���޸ĵģ�


	//#define�ı�ʶ������ ��ʾ
#define MAX 100

	int arr[MAX] = { 0 };//�ɹ����У�˵��MAXΪ������
	printf("max = %d\n", MAX);

	//ö�ٳ���  ��ʾ
	//ö��һһ�о�
	//ö�ٳ���ͨ������ֵ��
	printf("%d\n", MALE);
	printf("%d\n", FEMALE);
	printf("%d\n", SECRET);
	//ע��ö�ٳ�����Ĭ���Ǵ�0��ʼ���������µ���1��
	enum Sex sex = FEMALE;

	return 0;
}