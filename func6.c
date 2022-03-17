#include"stdio.h"
#define l printf("+++++++++++++++++++++++++++++\n");

input(){
	double sale,price;
	char id[20];
	printf("Enter enployee id is : ");
	scanf("%s",&id);
	printf("Enter sale is : ");
	scanf("%lf",&sale);
	printf("Enter price is : ");
	scanf("%lf",&price);
	l
	cal(sale, price);
	
}

cal(double sale, double price){
	double profit,com;
	profit = sale - price;
	com = sale * 3 / 100;
	output(profit,com);
}

output(double profit, double com){
	printf("Profit is : %.2lf\n",profit);
	printf("Commission is : %.2lf\n",com);
	l
}

main(){
	l
	printf("Program Profit and Commission\n");
	l
	input();	
	
	getch();
}
