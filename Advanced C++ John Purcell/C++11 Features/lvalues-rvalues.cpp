//
//  lvalues-rvalues.cpp
//  Advanced C++ John Purcell
//
//  Created by Stefanos Mitropoulos on 27/03/2018.
//  Copyright © 2018 Stefanos Mitropoulos. All rights reserved.
//

#include "lvalues-rvalues.hpp"
#include <iostream>

using namespace std;

class test{
public:
	int i{};
	test(){}
	test(int i){
		i=i;
	}
	void print(){
		cout<< this->i<<endl;;
	}
};

test getTest(){
	return test(2);
}

void checkValue(const test& ){
	cout<<"Lvalue function"<<endl;
}
void checkValue(test&& ){
	cout<<"Rvalue function"<<endl;
}

void rlvalues(){
	
	test&& rtest1 = getTest();

	rtest1.print();

	test test1;

	checkValue(getTest());
}
