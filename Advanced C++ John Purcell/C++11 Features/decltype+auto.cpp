//
//  decltype.cpp
//  Advanced C++ John Purcell
//
//  Created by Stefanos Mitropoulos on 25/03/2018.
//  Copyright © 2018 Stefanos Mitropoulos. All rights reserved.
//

#include "decltype.hpp"
#include <typeinfo>
#include <iostream>
using namespace std;

template<class T,class S>
auto test(T value1,S value2) ->decltype(value1 +value2){
	return value1+value2;
}

int test1(){
	return 999;
}

auto test2()-> decltype(test1()){
	return test1();
}


void decltype1(){

	string value;
	cout<<typeid(value).name()<<endl;	//For custom class objects, including strings, name mangling is present.
	decltype(value) name = "bob";		//decltype(value) extracts the type of decltype. You can read the line then as string name="bob";

	cout<<typeid(name).name()<<endl;

	auto text ="peos";		//automatically returns the "correct" data type, in this case it retures a pointer to a string, if we need a string we should explicitly declare it
	cout<<text<<endl;

	cout<<test(5,2)<<endl;
	cout<<test2()<<endl;

}
