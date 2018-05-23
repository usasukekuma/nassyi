#include<stdio.h>
void main()
{
	double joutei,katei,heigh,s,x;
		
		printf("台形の面積を求めます。整数で大きさを入力してください。(どれかに0を入力すると終了します)\n");
		printf("上底を入力してください：");
		scanf("%lf",&joutei);
		printf("下底を入力してください：");
	    scanf("%lfd",&katei);
		printf("高さを入力してください:");
	    scanf("%lf",&heigh);
		x=joutei*katei*heigh;
		while(x!=0){
			s=(joutei+katei)*heigh/2;
			printf("面積は%lfです。\n",s);
			printf("台形の面積を求めます。\n整数で大きさを入力してください。(どれかに0を入力すると終了します)\n");
			printf("上底を入力してください：");
			scanf("%lf",&joutei);
			printf("下底を入力してください：");
		    scanf("%lfd",&katei);
			printf("高さを入力してください:");
	    	scanf("%lf",&heigh);
			x=joutei*katei*heigh;
		}
					
		printf("終了します");
			
		
	}
			
	
