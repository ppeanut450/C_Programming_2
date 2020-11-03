#include <stdio.h>
#include <string.h>

typedef struct book {
	char name[30];
	char author[30];
	char publisher[30];
} BOOK;

void menu()
{
	printf("==================\n");
	printf(" 1. �߰�\n");
	printf(" 2. ���\n");
	printf(" 3. �˻�\n");
	printf(" 4. ����\n");
	printf("==================\n\n");
}

BOOK get_record()
{
	BOOK data;

	getchar();
	printf("������ �̸�: ");
	gets_s(data.name, 30);
	printf("����: ");
	gets_s(data.author, 30);
	printf("���ǻ�: ");
	gets_s(data.publisher, 30);
	printf("\n");
	return data;
}

void add_record(FILE* fp)
{
	BOOK data;
	data = get_record();
	fseek(fp, 0, SEEK_END);
	fwrite(&data, sizeof(data), 1, fp);
}

void print_record(BOOK data)
{
	printf("������ �̸�: %s\n", data.name);
	printf("����: %s\n", data.author);
	printf("���ǻ�: %s\n\n", data.publisher);
}

void print_all_record(FILE* fp)
{
	BOOK data;
	fseek(fp, 0, SEEK_SET);

	while (!feof(fp))
	{
		fread(&data, sizeof(data), 1, fp);
		if (feof(fp)) break; // ������ å�� �� �� ��µǴ� ���� �����ϱ� ���� ����
		print_record(data);
	}

}

void search_record(FILE* fp)
{
	char name[30];
	BOOK data;

	fseek(fp, 0, SEEK_SET);
	getchar();
	printf("Ž���ϰ��� �ϴ� ������ �̸�: ");
	gets_s(name, 30);
	while (!feof(fp))
	{
		fread(&data, sizeof(data), 1, fp);
		if (strcmp(data.name, name) == 0)
		{
			print_record(data);
			break;
		}
	}
	if (strcmp(data.name, name) != 0)
		printf("�������� �ʴ� �����Դϴ�.\n\n");
}

int main(void)
{
	FILE* fp;
	int num;

	fopen_s(&fp, "book.dat", "a+");

	if (fp == NULL)
	{
		fprintf(stderr, "�Է��� ���� ������ �� �� �����ϴ�.\n");
		return 1;
	}

	while (1)
	{
		menu();
		printf("���� ���� �Է��Ͻÿ�: ");
		scanf_s("%d", &num);
		switch (num)
		{
		case 1:
			add_record(fp);
			break;
		case 2:
			print_all_record(fp);
			break;
		case 3:
			search_record(fp);
			break;
		case 4:
			return 0;
		}
	}
	fclose(fp);
	return 0;
}