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
	printf(" 1. 추가\n");
	printf(" 2. 출력\n");
	printf(" 3. 검색\n");
	printf(" 4. 종료\n");
	printf("==================\n\n");
}

BOOK get_record()
{
	BOOK data;

	getchar();
	printf("도서의 이름: ");
	gets_s(data.name, 30);
	printf("저자: ");
	gets_s(data.author, 30);
	printf("출판사: ");
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
	printf("도서의 이름: %s\n", data.name);
	printf("저자: %s\n", data.author);
	printf("출판사: %s\n\n", data.publisher);
}

void print_all_record(FILE* fp)
{
	BOOK data;
	fseek(fp, 0, SEEK_SET);

	while (!feof(fp))
	{
		fread(&data, sizeof(data), 1, fp);
		if (feof(fp)) break; // 마지막 책이 두 번 출력되는 오류 수정하기 위한 조건
		print_record(data);
	}

}

void search_record(FILE* fp)
{
	char name[30];
	BOOK data;

	fseek(fp, 0, SEEK_SET);
	getchar();
	printf("탐색하고자 하는 도서의 이름: ");
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
		printf("존재하지 않는 도서입니다.\n\n");
}

int main(void)
{
	FILE* fp;
	int num;

	fopen_s(&fp, "book.dat", "a+");

	if (fp == NULL)
	{
		fprintf(stderr, "입력을 위한 파일을 열 수 없습니다.\n");
		return 1;
	}

	while (1)
	{
		menu();
		printf("정수 값을 입력하시오: ");
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