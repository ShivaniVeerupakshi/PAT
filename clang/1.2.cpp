#include<stdio.h>
#include<stdbool.h>
//TCS NINJA (PRINTING DOUBLE AS INT==0)
int main(){
	int a=2;
	double b=5;
	printf("%d",b/a); // double/int = double
}
//CASTING : converting one type to another
//Implicit(WIDENING) casting : Smaller type is converted to the bigger type (which is happening above) --> int is becoming double above

//OUTPUT =0 bcas trying to print double as an int always gives 0 as o/p ,
	//BCAS datatype and result type must match if we give "%ld" u will get op as 2.5
	
//ANOTHER EXAMPLE 
int main(){
	double a=50.23;
	printf("%d",a); //this gives some garbage value as ouput
	printf("%d",(int)a); // gives op=0 bcas casting is being done by giving --- (int)
}

//Explicit(NARROWING) casting : Bigger type is converted to the smaller type (which is happening above) --> explicitly stating double to convert into int


