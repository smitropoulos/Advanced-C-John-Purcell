//
//  lambda_expressions.cpp
//  Advanced C++ John Purcell
//
//  Created by Stefanos Mitropoulos on 25/03/2018.
//  Copyright © 2018 Stefanos Mitropoulos. All rights reserved.
//

#include "lambda_expressions.hpp"
#include <iostream>


void test(void (*pFunc)() ){
	pFunc();
}

void testGreet(void (*greet)(std::string)){
	greet("BoB");
}

void lambdas(){

	//[](){std::cout<<"Pizza"<<std::endl;}();	//this works too
	auto func=[](){std::cout<<"Pizza"<<std::endl;};

	test(func);

	test([](){std::cout<<"Pizza"<<std::endl;});

	auto pGreet = [](std::string name){std::cout<<"Hello "<<name<<std::endl;};
	testGreet(pGreet);
}
