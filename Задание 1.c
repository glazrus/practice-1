#include <stdio.h>
#include <locale.h>
void main()
{
	setlocale(LC_ALL, "RUS");
	puts("������� Enter ��� �����������");
	getchar();
	puts("����������� ���������");
	return 0;
}