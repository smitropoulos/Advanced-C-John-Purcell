//
//  main.cpp
//  Advanced C++ John Purcell
//
//  Created by Stefanos Mitropoulos on 19/03/2018.
//  Copyright © 2018 Stefanos Mitropoulos. All rights reserved.
//
#include <iostream>
#include "Custom_exceptions.hpp"
#include "Operator Overloading/Complex numbers class.hpp"
int main(int argc, const char * argv[]) {

	Complex comp1(2,3.1);
	Complex comp2=comp1;
	Complex comp3;
	comp3=comp2;
	double g=3.1;
	std::cout<<comp1+comp3+comp2+g <<std::endl;

	return 0;
}
