#include <stdio.h>
void main()
{
	int data_a, amari;
	printf("��������͂��Ă�������");
	scanf_s("%d", &data_a);
	amari = data_a % 2;
	if (amari == 0)
		printf("�����ł�");
	else
		printf("��ł�");
}
	