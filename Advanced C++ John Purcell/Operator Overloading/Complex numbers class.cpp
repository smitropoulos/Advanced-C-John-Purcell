	//
	//  Complex numbers class.cpp
	//  Advanced C++ John Purcell
	//
	//  Created by Stefanos Mitropoulos on 22/03/2018.
	//  Copyright © 2018 Stefanos Mitropoulos. All rights reserved.
	//

#include "Complex numbers class.hpp"

std::ostream& operator<<(std::ostream& out,const Complex& other){
	out<<"("<<other._real<<" , "<<other._imaginary<<")"<<std::flush;
	return out;
}

Complex operator+(const Complex& a,const Complex& b){
	return Complex(a._real+b._real,a._imaginary+b._imaginary);
}

Complex::Complex(const Complex& other){
	_real=other._real;
	_imaginary=other._imaginary;
}

Complex& Complex::operator=(const Complex& other){
	_imaginary=other._imaginary;
	_real=other._real;
	return *this;
}


