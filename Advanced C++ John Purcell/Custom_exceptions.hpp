//
//  Custom_exceptions.hpp
//  Advanced C++ John Purcell
//
//  Created by Stefanos Mitropoulos on 19/03/2018.
//  Copyright © 2018 Stefanos Mitropoulos. All rights reserved.
//

#ifndef Custom_exceptions_hpp
#define Custom_exceptions_hpp

#include <stdio.h>
#include <iostream>
#include <exception>

class myCustomException: public std::exception{
public:
	virtual const char* what() const throw();

};

class testCustomException{
public:
	void sthGoesWrong();

};
#endif /* Custom_exceptions_hpp */

