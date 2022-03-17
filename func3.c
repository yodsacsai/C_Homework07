#include"stdio.h"
#define l printf("++++++++++++++++++++++++++++++\n");

input(){
	double wi,lo,hi;
	printf("Enter width of room : ");
	scanf("%lf",&wi);
	printf("Enter long of room : ");
	scanf("%lf",&lo);
	printf("Enter high of room : ");
	scanf("%lf",&hi);
	l
	cal(wi, lo, hi);
}

cal(double wi, double lo, double hi){
	double gallon = ((wi * lo * 2) + (wi * hi * 2) + (lo * hi * 2)) / 250;
	output(gallon);
}

output(double gallon){
	printf("Use color is : %.2lf\n",gallon);
	l
}

main(){
	l
	printf("  Program color gallon\n");
	l
	input();
	
	getch();
}
