	//
	//  initializer_lists.cpp
	//  Advanced C++ John Purcell
	//
	//  Created by Stefanos Mitropoulos on 25/03/2018.
	//  Copyright © 2018 Stefanos Mitropoulos. All rights reserved.
	//

#include "initializer_lists.hpp"
#include <iostream>

class test{
public:
	test(std::initializer_list<std::string> t){
		for (auto txt:t){
			std::cout<<txt<<std::endl;
		}
	}

	void print(std::initializer_list<std::string> str){
		for (auto txt:str){
			std::cout<<txt<<std::endl;
		}
	}
};

void init_lists(){

	test t1{"peos","pizza"};

	t1.print({"Dog","cat","monkey"});	//Initialisation of 'array' inside the function call. hooray!
}
