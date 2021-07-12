#include "sin_cos.hpp"

double FuncCos(double x,double n){
	while(x > 180 || x < 0){
	if(x > 180){x -=180;}
	else{x += 180;}
	}
	x=x*M_PI/180;
	double pat;
	for(int i = 1; i<n; i++){
		int g = 2*i;
		pat += pow(-1,i)*pow(x,g)/Factorial(g);
	}
	
	
	return pat;

}
