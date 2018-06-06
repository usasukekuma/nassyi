#include <stdio.h>
void main()
{
	int sort[10],work,i,j;
	for(i=0;i<7;i++){
		printf("データを入力しましょう。%d番目",i);
		scanf("%d",&sort[i]);
	}
		for(i=0;i<6;i++)
			for(j=i+1;j<7;j++)
				if(sort[i]<sort[i]){
					work=sort[i];
					sort[i]=sort[j];
					sort[j]=work;
				}
			printf("\nソート後：");
			for(i=0;i<7;i++)
				printf("3%d",sort[i]);
				printf("\n");
	}
