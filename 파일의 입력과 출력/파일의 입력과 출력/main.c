#include <stdio.h>

void main() {
	char innerText[256] = "asdf";

	FILE* fp; // 파일과 연결된 위치를 저장하는 자료형
	fopen_s(&fp, "A.txt", 'w');
	//fputs("Hello, File!\n", fp);
	fprintf(fp, "%s\n", "asdaaf"); // 변수를 넣을 때에는 이렇게 사용함
	//fscanf_s(fp, "%s", innerText, sizeof(innerText)); // char 형태만 & 안붙여도 됨!!
	fclose(fp);

	//printf("%s", innerText);
}