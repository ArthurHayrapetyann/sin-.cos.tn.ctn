#include "sin_cos.hpp"
double FunctinSin(double, double);
double FuncCos(double, double); 
double tang(double);
int main(){	
        double x;       
        cout << "insert x" << endl;
	string type ="";
        cin >> x;
	cout << "sin or cos or tn or ctn" << endl;
	cin >> type;
	if (type == "sin"){
        	cout << FunctinSin(x,5);
	}
	else if(type == "cos"){
		cout << FuncCos(x,17);
	}
	else if(type == "tn"){
		cout << tang(x) << endl;
	}
	else if(type == "ctn"){
		cout << 1/tang(x) << endl;
	}
	else{
		cout << "No operator found";
	}
	return 0;
}

