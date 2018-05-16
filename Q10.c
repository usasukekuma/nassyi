#include<stdio.h>
void main()
{
	int shinchou,goukei=0,ninzuu=0,average;
		while(shinchou!=0){
			printf("身長を入力してください(0を入力すると終了します):");
			scanf("%d",&shinchou);
			goukei=goukei+shinchou;
			++ninzuu;
		}
	average=goukei/(ninzuu-1);
	printf("平均は%dです。",average);
}
