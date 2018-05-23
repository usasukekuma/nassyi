#include<stdio.h>
void main()
{
	int x;
	printf("J:国語  M:数学 E:英語 C:化学 S:社会\n");
	printf("好きな科目の英頭文字を入力:");
	x = getchar();
	switch (x) {
		case 'J':printf("国語 Japanse");
			break;
		case 'M':printf("数学 Mathematics");
			break;
		case 'E':printf("英語 English");
			break;
		case 'C':printf("化学 Chemistry");
			break;
		case 'S':printf("社会 Society");
			break;


	}

}
