#include <stdio.h>

struct email {
	char title[100];
	char sender[100];
	char receiver[100];
	char content[100];
	char data[100];
	int pri;
};

int main(void)
{
	struct email e;

	strcpy(e.title, "�Ⱥ� ����");
	strcpy(e.sender, "chulsoo@hankuk.ac.kr");
	strcpy(e.receiver, "hsh@hankuk.ac.kr");
	strcpy(e.content, "�ȳ��Ͻʴϱ�? ���� ����������?");
	strcpy(e.data, "2010/9/1");
	e.pri = 1;

	printf("����: %s\n", e.title);
	printf("������: %s\n", e.sender);
	printf("�߽���: %s\n", e.receiver);
	printf("����: %s\n", e.content);
	printf("��¥: %s\n", e.data);
	printf("�켱����: %d\n", e.pri);

	return 0;
}