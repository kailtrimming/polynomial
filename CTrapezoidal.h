#ifndef TRAPEZOIDAL_H
#define TRAPEZOIDAL_H

#include <iostream>
#include <cmath>
#include <cstring>

#include "CIntegral.h"

using namespace std;

class Trapezoidal {
protected:
	Polynomial* poly;

public:
    
	/// @name CONSTRUCTORS and DESTRUCTOR 
	/// @{
    Trapezoidal();
	Trapezoidal(Polynomial* p);
    ~Trapezoidal();
	/// @}

    void SetPolynomial(Polynomial* p);
	
	virtual double GetIntegral(double inf, double sup, int intervals = 100)=0;

	/// @name DEBUG and SERIALIZATION 
	/// @{
	void ErrorMessage(const char *string); 
	void WarningMessage(const char *string);
	void Dump();
	/// @}

    
};

#endif