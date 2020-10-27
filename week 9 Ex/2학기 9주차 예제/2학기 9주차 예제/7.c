#include <stdio.h>
int main(void)
{
	FILE* src_file, * dst_file;
	char filename[100];
	char buffer[1024];
	int r_count;
	printf("이미지 파일 이름: ");
	scanf_s("%s", filename, 100);
	fopen_s(&src_file, filename, "rb");
	fopen_s(&dst_file, "copy.jpg", "wb");

	if (src_file == NULL || dst_file == NULL)
	{
		fprintf(stderr, "파일 열기 오류\n");
		return 1;
	}
	while ((r_count = fread(buffer, 1, sizeof(buffer), src_file)) > 0)
	{
		int w_count = fwrite(buffer, 1, r_count, dst_file);
		if (w_count < 0)
		{
			fprintf(stderr, "파일 쓰기 오류\n");
			return 1;
		}
		if (w_count < r_count)
		{
			fprintf(stderr, "미디어 쓰기 오류\n");
			return 1;
		}
	}
	printf("copy.jpg로 이미지 파일이 복사됨\n");
	fclose(src_file);
	fclose(dst_file);
	return 0;
}