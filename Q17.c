#include<stdio.h>
double kansu_bmi(double height, double weight); 
void main()
{
	double height,weight,answer;
	printf("身長を入力しましょう");
	scanf("%lf",&height);
	printf("\n体重を入力しましょう:");
	scanf("%lf",&weight);
	answer=kansu_bmi(height,weight);
	printf("BMIは%lfです\n",answer);
	if(answer<20)
		printf("痩せている");
	else if(20<=answer&&answer<24)
		printf("普通");
	else if(24<=answer&&answer<26.4)
		printf("太り気味");
	else if(26.4<=answer)
		printf("太り過ぎ");
}

/*BMI計算*/
double kansu_bmi(double height, double weight)
{
	double bmi;
	height=height/100;
	bmi=weight/(height*height);
	return bmi ;
}

