	//
	//  Complex numbers class.cpp
	//  Advanced C++ John Purcell
	//
	//  Created by Stefanos Mitropoulos on 22/03/2018.
	//  Copyright © 2018 Stefanos Mitropoulos. All rights reserved.
	//

#include "Complex numbers class.hpp"

///Operators/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*

 When declaring a function as a member of a class then the compile will try to use:	b.operator +(c);

However, this would have some strange results. Let's imagine b is a complex number and our Complex class has operator + as a member function. What happens with the following?

b + 1.0; // This calls b.operator+(1.0). OK

1.0 + b // The compiler will try to call (1.0).operator+(b) which doesn't exist. Error!
*/

std::ostream& operator<<(std::ostream& out,const Complex& other){
	out<<"("<<other._real<<" , "<<other._imaginary<<")"<<std::flush;
	return out;
}

Complex operator+(const Complex& a,const Complex& b){
	return Complex(a._real+b._real,a._imaginary+b._imaginary);
}

Complex operator+(const Complex& a,const double b){
	return Complex(a._real+b,a._imaginary);
}

bool operator==(const Complex&a, const Complex& b){
	return (a._real==b._real && a._imaginary==b._imaginary);
}

bool operator!=(const Complex&a, const Complex& b){
	return !(a==b);
}

Complex operator*(const Complex& a){
	return Complex(a._real,-a._imaginary);
}


Complex& Complex::operator=(const Complex& other){
	_imaginary=other._imaginary;
	_real=other._real;
	return *this;
}

///\Operators/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


Complex::Complex(const Complex& other){
	_real=other._real;
	_imaginary=other._imaginary;
}



