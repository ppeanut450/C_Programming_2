#include <stdio.h>
int main(void)
{
	FILE* src_file, * dst_file;
	char filename[100];
	char buffer[1024];
	int r_count;
	printf("�̹��� ���� �̸�: ");
	scanf_s("%s", filename, 100);
	fopen_s(&src_file, filename, "rb");
	fopen_s(&dst_file, "copy.jpg", "wb");

	if (src_file == NULL || dst_file == NULL)
	{
		fprintf(stderr, "���� ���� ����\n");
		return 1;
	}
	while ((r_count = fread(buffer, 1, sizeof(buffer), src_file)) > 0)
	{
		int w_count = fwrite(buffer, 1, r_count, dst_file);
		if (w_count < 0)
		{
			fprintf(stderr, "���� ���� ����\n");
			return 1;
		}
		if (w_count < r_count)
		{
			fprintf(stderr, "�̵�� ���� ����\n");
			return 1;
		}
	}
	printf("copy.jpg�� �̹��� ������ �����\n");
	fclose(src_file);
	fclose(dst_file);
	return 0;
}