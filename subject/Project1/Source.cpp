#include<stdio.h>
void main()
{
	int x;
	printf("J:����  M:���w E:�p�� C:���w S:�Љ�\n");
	printf("�D���ȉȖڂ̉p�����������:");
	x = getchar();
	switch (x) {
		case 'J':printf("���� Japanse");
			break;
		case 'M':printf("���w Mathematics");
			break;
		case 'E':printf("�p�� English");
			break;
		case 'C':printf("���w Chemistry");
			break;
		case 'S':printf("�Љ� Society");
			break;


	}

}