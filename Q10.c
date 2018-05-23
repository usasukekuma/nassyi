#include<stdio.h>
void main()
{
	int joutei,katei,heigh,s;
		while(joutei,katei,heigh!=0){
			printf("台形の面積を求めます。整数で大きさを入力してください。(どれかに0を入力すると終了します)\n");
            printf("上底を入力してください：");
			scanf("%d\n",&joutei);
            printf("下底を入力してください：");
            scanf("%d\n",&katei);
            printf("高さを入力してください:");
            scanf("%d\n",&heigh);

			s=(joutei+katei)*heigh/2;
		}
	
	printf("面積は%dです。",s);
}
