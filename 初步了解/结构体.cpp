#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//�ṹ��
//�ˣ���ȵȵȵȸ��Ӷ���
//���Ӷ��� --���������һ������

struct Book
{
	char name[20];//C���Գ������
    short price;//55

};


int main()
{
	//���ü��ṹ������ - ����һ�������͵Ľṹ�����
	struct Book b1 = {"C���Գ������",55};
	struct Book* pd = &b1;
	printf("��ɶ��%s\n", pd->name);
	printf("��Ǯ��%dԪ\n", pd->price);
	//->   �ṹ��ָ��->��Ա
	printf("������%s\n", b1.name);//  .  �ṹ�����.��Ա
	printf("ԭ�ۣ�%d Ԫ\n", b1.price);
	b1.price = 40;
	printf("��˦����%dԪ\n", b1.price);
	strcpy(b1.name, "����")
	//strcpy -- string copy -- ���ַ���������   Ϊ�⺯��    ��ͷ�ļ�<string.h>
	//name��һ������������������һ����ַ��������name��ֵ���и��ģ�ʹ��strcpy����


	return 0;
}