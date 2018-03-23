//
//  Complex numbers class.hpp
//  Advanced C++ John Purcell
//
//  Created by Stefanos Mitropoulos on 22/03/2018.
//  Copyright © 2018 Stefanos Mitropoulos. All rights reserved.
//

#ifndef Complex_numbers_class_hpp
#define Complex_numbers_class_hpp

#include <stdio.h>
#include <iostream>

class Complex{
private:
	double _real;
	double _imaginary;
public:
	Complex():_real(0),_imaginary(0){}		//default constructor.
	Complex(double real):_real(real){}		//one paramaeter constructor
	Complex(double real,double im):_real(real),_imaginary(im){}		//two parameters constructor
	double extracted();

	Complex(const Complex& other);

	///Operators ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	Complex& operator=(const Complex& other);
	friend std::ostream& operator<<(std::ostream& out,const Complex& other);
	friend Complex operator+(const Complex& a,const Complex& b);
	friend Complex operator+(const Complex& a,const double b);
	friend bool operator==(const Complex&a, const Complex& b);
	friend bool operator!=(const Complex&a, const Complex& b);
	friend Complex operator*(const Complex& a);
	///Operators ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	};


#endif /* Complex_numbers_class_hpp */
