//
//  Vectors.cpp
//  Advanced C++ John Purcell
//
//  Created by Stefanos Mitropoulos on 19/03/2018.
//  Copyright © 2018 Stefanos Mitropoulos. All rights reserved.
//

#include "Vectors.hpp"
#include <iostream>
#include <vector>

void Vectors(){

	std::vector<int> vectorOfInts;

	vectorOfInts.push_back(2);
	vectorOfInts.push_back(3);
	vectorOfInts.push_back(32);
	vectorOfInts.push_back(9);


	for (std::vector<int>::iterator iter = vectorOfInts.begin() ; iter != vectorOfInts.end(); iter++){
		std::cout<<iter<<std::endl;
	}
	std::cout<<vectorOfInts[0]<<std::endl;


}
