//
//  Basic_exceptions.cpp
//  Advanced C++ John Purcell
//
//  Created by Stefanos Mitropoulos on 19/03/2018.
//  Copyright © 2018 Stefanos Mitropoulos. All rights reserved.
//

#include "Basic_exceptions.hpp"

canGoWrong::canGoWrong()
	{
	char* memInit = new char[99999999999999999];
	delete[] memInit;
	}

