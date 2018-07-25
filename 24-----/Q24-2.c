#include<stdio.h>
#include<math.h>
#include<process.h>
void main()
{
	FILE *fp_output;
	FILE *fp_input;
	int i,kakudo,y;
	double x,xsin,xcos,ysin,ycos;
	if((fp_output=fopen("data01.dat","w"))==NULL){
		printf("NOT OPEN FILE ouput-file\n");
		exit(1);
	}
	for(i=0;i<=180;i+=15){
		x=(double)i/180*3.14159;
		xsin=sin(x);
		xcos=cos(x);
		fprintf(fp_output,"%3d    %.4lf    %.4lf\n",i,xsin,xcos);
	}
	fclose(fp_output);
	printf("\n角度を入力してください。（１５度単位）：");
	scanf("%d",&kakudo);
	
	if((fp_input=fopen("data01.dat","r"))==NULL){
		printf("NOT OPEN FILE");
		exit(1);
	}
	while(fscanf(fp_input,"%d %lf %lf",&y,&ysin,&ycos)!=EOF){
		if(y==kakudo)
    		printf("　%3d　　%.4lf　　%.4lf\n",y,ysin,ycos);
	}
	fclose(fp_input);
}
	
	
