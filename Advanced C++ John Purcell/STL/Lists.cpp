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
	it++;
	listOfNumbers.insert(it,20);
	std::cout<<"Element: "<<*it<<std::endl;


/*
	for (std::list<int>::iterator it=listOfNumbers.begin()++;it!=listOfNumbers.end();it++){
		std::cout<<*it<<std::endl;
	}
*/

		//in case you want to delete an element of a list, then the iterator will immediately point to the next element.

	for (std::list<int>::iterator Eraseit=listOfNumbers.begin()++;Eraseit!=listOfNumbers.end();){

		if (*Eraseit == 2){
			listOfNumbers.insert(Eraseit,23);
		}

		if (*Eraseit == 1){
			Eraseit = listOfNumbers.erase(Eraseit);	//The erase method, returns a pointer to the element that would have been next (aka the element that got pushed back to the position the element being erased was)
		}else{
			Eraseit++;
		}

	}

	//"loop" through all the elements of the list.
	for (std::list<int>::iterator it=listOfNumbers.begin()++;it!=listOfNumbers.end();it++){
		std::cout<<*it<<std::endl;
	}


}
