#include<stdio.h>
//TCS NINJA QUESTIONS 
int main(){
	int k; //Definition , Declaration
	k=3; //Initialisation
	int x=1,2,3;
	printf("%d",x);
}

//output is COMPLIE ERROR 
//RESAON : Variables were not created for 2,3

int main(){
	int x;
	x=1,2,3;
	printf("%d",x);
}
//the diff bw above ex and this is ...here we already declared x as an int
//output is 1
//REASON : Comma(,) has the LEAST PRECEDENCE so it will evaluate = first and 1 is alloacted to x.(initialisation is done)
//Paranthesis() has the HIGHEST PRECEDENCE IN C

int main(){
	int x;
	x=printf("Var"),printf("He");
}
//output is VarHe

