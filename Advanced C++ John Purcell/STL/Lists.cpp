//
//  Lists.cpp
//  Advanced C++ John Purcell
//
//  Created by Stefanos Mitropoulos on 19/03/2018.
//  Copyright © 2018 Stefanos Mitropoulos. All rights reserved.
//

#include "Lists.hpp"
#include <list>
#include <iostream>


void Lists(){

	std::list<int> listOfNumbers;

	//Populating the list.
	listOfNumbers.push_back(1);
	listOfNumbers.push_back(2);
	listOfNumbers.push_back(3);
	listOfNumbers.push_front(0);	//pushes to the front of the list.

	std::list<int>::iterator it;

	it = listOfNumbers.begin();
	std::cout<<*it<<std::endl;




	for (std::list<int>::iterator it=listOfNumbers.begin();it!=listOfNumbers.end();it++){
		std::cout<<*it<<std::endl;
	}

}
