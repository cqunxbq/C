#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


int main()
{
	//�����ڼ�����ϴ洢ʱ���洢���Ƕ�����
	//a-97
	//A-65
	//Сд��ĸ��Ӧ��32ת��Ϊ��д��ĸ, ��д��ĸ��Ӧ��32ת��ΪСд��ĸ
	//ASCII����   ASCII��ֵ
	//
	//"hello msk.\n"
//������˫���ţ�Double Quote����������һ���ַ���Ϊ�ַ�������ֵ��String Literal�������߼���ַ�����
	char arr1[] = "msk";//�ַ������Էŵ�������  
	//"msk"-- 'm' 's' 'k' '\0'
	char arr2[] = { 'm', 's', 'k' };
	char arr3[] = { 'm', 's', 'k', '\0' };
	printf("%s\n", arr1);
	printf("%s\n", arr2);
	printf("%s\n", arr3);
	printf("%d\n", strlen(arr1));//strlen - string lenght �����ַ�������
	printf("%d\n", strlen(arr2));//���ֵ��ֱ�������'\0'�Ž���
	printf("%d\n", strlen(arr3));
	//ע���ַ����Ľ�����־��һ�� \0 ��ת���ַ����ڼ����ַ������ȵ�ʱ�� \0 �ǽ�����־���������ַ���
	//	���ݡ�


	//ת���ַ� ����
	//	\ ? ����д��������ʺ�ʱʹ�ã���ֹ���Ǳ�����������ĸ��
	//	\' ���ڱ�ʾ�ַ�����'
	//	\�� ���ڱ�ʾһ���ַ����ڲ���˫����
	printf("c:\\code\\test.c\\n\n");//printf("c:\code\test.c\n");
	/*	\\ ���ڱ�ʾһ����б�ܣ���ֹ��������Ϊһ��ת�����з���*
		\a �����ַ�������
		\b �˸��
		\f ��ֽ��
		\n ����
		\r �س�
		\t ˮƽ�Ʊ��
		\v ��ֱ�Ʊ�� */
	printf("%d\n", strlen("c:\code\32\test.c"));//ת�����һ���ַ�
	//  \32--32�Ǹ��˽�������
	//32��Ϊ�˽��ƴ�����Ǹ�ʮ�������֣���ΪASCII�룬��Ӧ���ַ�   32(�˽���)-->26��ʮ���ƣ�һ�����ҵļ�ͷ
	printf("\32\n");
	//	\ddd ddd��ʾ1~3���˽��Ƶ����֡� �磺 \130 X
	printf("\x61\n");
	//	\xdd dd��ʾ2��ʮ���������֡� �磺 \x30 0


	char input = '0';
	printf("���˴�ѧ\n");
	printf("��Ҫ�ú�ѧϰ��\n��Ĵ�(yes or no):\n");
	scanf("%c", &input);
	if (input == 'yes')
		printf("good\n");
	else
		printf("��\n");


	printf("�ϸ���ѧ\n");//whileѭ��
	int line = 0;
	while (line <= 200)
	{
		line++;
		printf("��Ҫ����Ŭ���ô��룺%d\n", line);
	}
	if (line > 200)
		printf("��offer\n");
	return 0;













	return 0;
}