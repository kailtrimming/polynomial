#include "CTrapezoidal.h"

Trapezoidal::Trapezoidal() {
}

Trapezoidal::Trapezoidal(Polynomial* p):Integral(p) {	
}

Trapezoidal::Trapezoidal(const Trapezoidal& p){
	
	cout<< "Trapezoidal - copy constructor" << endl;
	if (p.poly != NULL) {
		poly = new Polynomial;
		*poly = *(p.poly);
	}
	else 
}

