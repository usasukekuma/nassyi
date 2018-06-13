#include<stdio.h>
void main(){
	int tate,yoko,answer,qq[9][9];
	printf("* * *  * * *九九表* * * * * * * *\n");
	for(tate=1;tate<10;tate++)
		for(yoko=1;yoko<10;yoko++){
			answer=yoko*tate;
			qq[tate-1][yoko-1]=answer;
	}
	for(tate=0;tate<9;tate++){
		printf("\n");
		for(yoko=0;yoko<9;yoko++)
			printf(" %2d ",qq[tate][yoko]);
	}
}
