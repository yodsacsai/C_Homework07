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
	output(wi,lo,hi); 
}

double cal(double wi, double lo, double hi){
	return ((wi * lo * 2) + (wi * hi * 2) + (lo * hi * 2)) / 250;
	
}

output(double wi, double lo, double hi){
	printf("Use color is : %.2lf\n",cal(wi,lo,hi));
	l
}

main(){
	double gallon;
	l
	printf("  Program color gallon\n");
	l
	input();
	
	
	getch();
}
