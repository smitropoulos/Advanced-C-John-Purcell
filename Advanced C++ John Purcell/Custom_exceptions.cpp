//
//  Custom_exceptions.cpp
//  Advanced C++ John Purcell
//
//  Created by Stefanos Mitropoulos on 19/03/2018.
//  Copyright © 2018 Stefanos Mitropoulos. All rights reserved.
//

#include "Custom_exceptions.hpp"

const char* myCustomException::what() const throw(){
	return "Oh Shit";
}


void testCustomException::sthGoesWrong(){
	throw myCustomException();
}
