#include <stdio.h>

void main() {
	char innerText[256] = "asdf";

	FILE* fp; // ���ϰ� ����� ��ġ�� �����ϴ� �ڷ���
	fopen_s(&fp, "A.txt", 'w');
	//fputs("Hello, File!\n", fp);
	fprintf(fp, "%s\n", "asdaaf"); // ������ ���� ������ �̷��� �����
	//fscanf_s(fp, "%s", innerText, sizeof(innerText)); // char ���¸� & �Ⱥٿ��� ��!!
	fclose(fp);

	//printf("%s", innerText);
}