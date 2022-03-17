#include"stdio.h"
#define l printf("++++++++++++++++++++++++++++++\n");

input(){
	int one,two,three;
	printf("Enter width side 1 of triangle : ");
	scanf("%d",&one);
	printf("Enter width side 2 of triangle : ");
	scanf("%d",&two);
	printf("Enter width side 3 of triangle : ");
	scanf("%d",&three);
	l
	cal(one,two,three);
	l
}

cal(int one, int two, int three){
	if((one + two > three) && (two + three > one) && (one + three > two)){
		printf("Side is Yes\n");
	}else{
		printf("Side is No\n");
	}
}

main(){
	l
	printf("  Program side of Triangle\n");
	l
	input();
	getch();
}
