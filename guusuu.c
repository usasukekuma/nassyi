#include <stdio.h>
void main()
{
	int data_a, amari;
	printf("整数を入力してください");
	scanf_s("%d", &data_a);
	amari = data_a % 2;
	if (amari == 0)
		printf("偶数です");
	else
		printf("奇数です");
}
	