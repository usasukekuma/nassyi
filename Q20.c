#include<stdio.h>
#include<math.h>
void main()
{
	int i;
	double x,xsin,xcos;
	printf("度　　　sin　　　cos\n");
	for(i=0;i<=180;i+=15){
		x=(double)i/180*3.14159;
		xsin=sin(x);
		xcos=cos(x);
		printf("%3d　　%.4lf　　%.4lf\n",i,xsin,xcos);
	}
}
