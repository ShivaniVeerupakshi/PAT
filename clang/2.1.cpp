#include<stdio.h>
int main(){
	printf("%d",12&3|5^2);
}

//12&3|5^2 = (12&3)|5^2 = 0|(5^2) = 0|7 = 7

int main(){
	printf("%d",13>>1&4|3);
}
//6&4|3 = 4|3 = 7

int main(){
	printf("%d",67^3^5&2&1);
}
//67^3^(5&2)&1 = 67^3^(0&1) = 67^3^(0) = 64

int main(){
	printf("%d",45^3&5|56>>1<<3);
}

//45^3&5|(56>>1)<<3 = 45^3&5|(28<<3) = 45^3&5|224 = 45^1|224 = 44|224 = 236
