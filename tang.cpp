#include "sin_cos.hpp"
double FunctinSin(double, double);
double FuncCos(double, double);
double tang(double x){
	double k;
	if(x==0 || x==270){
		cout << "Goyutyun chuni";
	}else{
	k = FunctinSin(x,5)/FuncCos(x,17);
	}
	return k;
		
}
