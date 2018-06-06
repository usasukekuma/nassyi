#include<stdio.h>
void main()
{
	int absent[5]={3,2,5,6,8},total=0,i,x;
	double ratio[5],totalratio;
	printf("クラス　Ａ　　Ｂ　　Ｃ　　Ｄ　　Ｅ　　　合計\n");
	printf("人　数　");
	for(i=0;i<5;i++){
		total+=absent[i];
		printf("　　 %d",absent[i]);
	}
	printf("　　%d\n",total);
	printf("　%　");
	for(x=0;x<5;x++){
		ratio[x]=(double)absent[x]/total*100;
		printf("%.2lf　",ratio[x]);
		totalratio+=ratio[x];
	}
	printf("%.lf%",totalratio);
	
}
