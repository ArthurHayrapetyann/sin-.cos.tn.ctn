#include "sin_cos.hpp"

double FunctinSin(double x, double k){
	while(x > 90 || x < -90){
	if(x > 90){
		x -= 180;
	}
	else {
		x += 180;
	}
	}
	x = x*M_PI/180;
	double result = 0;
	for(int i=0; i<=k; i++){
		int n=2*i+1;
		result += (pow(-1,i) * pow(x,n)) / Factorial(n);
	}
	return result;
}




