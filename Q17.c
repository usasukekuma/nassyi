#include<stdio.h>
double kansu_bmi(double height, double weight);
double kansu_if(double bmi_kekka); 
void main()
{
	double height,weight,answer;
	printf("身長を入力しましょう");
	scanf("%f",&height);
	printf("\n体重を入力しましょう:");
	scanf("%f",&weight);
	answer=kansu_bmi(height,weight);
	printf("BMIは%fです",answer);
    kansu_if(answer);
}

/*BMI計算*/
double kansu_bmi(double height, double weight)
{
	double bmi;
	height=height/100;
	bmi=weight/(height*height);
	return bmi ;
}

/*BMI判断*/
double kansu_if(double bmi_kekka)
{
	if(bmi_kekka<20)
		printf("痩せている");
	else if(20<=bmi_kekka<24)
		printf("普通");
	else if(24<=bmi_kekka<26.4)
		printf("太り気味");
	else if(26.4<bmi_kekka)
		printf("太り過ぎ");
	return;
}
