#include <stdio.h>

int main(){
	int var = 21;
	printf("%d\n",var);  /*here %d is the format specifier*/
	float pif = 3.141592653589793238f; /*append f at end must*/
	double pid = 3.141592653589793238124567; /* double is capable of 14 digit precision , float is of only 6 digit precision*/
	printf("%f\n",pif);
	printf("%.20lf\n",pid);
	
	
}
