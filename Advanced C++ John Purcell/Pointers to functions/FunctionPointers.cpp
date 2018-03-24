	//
	//  FunctionPointers.cpp
	//  Advanced C++ John Purcell
	//
	//  Created by Stefanos Mitropoulos on 24/03/2018.
	//  Copyright © 2018 Stefanos Mitropoulos. All rights reserved.
	//

#include "FunctionPointers.hpp"
#include <iostream>
#include <vector>

void Test(int a){
	std::cout<<"Hello "<< a <<std::endl;
}


bool match(const std::string& str){
	return (str.size()==3);		//returns 1 if the size of str = 3
}

int customCountIF(std::vector<std::string> &vec, bool (*match)(const std::string& test)){
	int tally=0;
	for (int i=0; i<vec.size();i++){
		if(match(vec[i])) {
			tally++;
		}
	}
	return tally;
}


void functionPointers(){

	/*
	 void (*pTest)();
	 pTest=&Test;
	 (*pTest)();

	 but no need for all this. Acutally the name of a function is indeed a pointer to that function. So in the same way we are "dereferencin" a function pointer using brackets, like function(); the same way here all we need to do is:
	 */
	void (*ptest)(int) = Test;		//declare a pointer to a fcuntion and make it equal to another pointer to a function (duh)
	ptest(99);					//Just use the brackets to "dereference" the function pointer



	std::vector<std::string> vectorOfNumbers;
	vectorOfNumbers.push_back("Four");
	vectorOfNumbers.push_back("Two");
	vectorOfNumbers.push_back("One");

	std::cout<< customCountIF(vectorOfNumbers, match)<<std::endl;
}
