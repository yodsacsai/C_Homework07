#include"stdio.h"

funA(){
	printf("AAA\n");
	funB(10, 15.5); //cal
}

funB(int x , double y){
	printf("%.2lf\n", x+y);
}

int funC(){
	printf("CCC\n");
	return 55 + 3 % 2 - 2;
}

double funD(double x, float y){
	float z = x+y;
	return z;
}

main(){
	double mod;
	funA();
	printf("Value : %d \n", funC());
	mod = funD(5.5, 2) * funC();
	printf("Mod is %.2lf\n", mod);
	getch();
}
