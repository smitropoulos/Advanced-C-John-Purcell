//
//  main.cpp
//  Advanced C++ John Purcell
//
//  Created by Stefanos Mitropoulos on 19/03/2018.
//  Copyright © 2018 Stefanos Mitropoulos. All rights reserved.
//
#include <iostream>
#include "Custom_exceptions.hpp"

int main(int argc, const char * argv[]) {
	try{
	testCustomException inst1;
		inst1.sthGoesWrong();
	}
	catch(myCustomException &e){
		std::cout<<e.what()<<std::endl;
		}
	return 0;
}
