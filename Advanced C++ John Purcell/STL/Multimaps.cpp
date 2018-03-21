
	//
	//  Multimaps.cpp
	//  Advanced C++ John Purcell
	//
	//  Created by Stefanos Mitropoulos on 21/03/2018.
	//  Copyright © 2018 Stefanos Mitropoulos. All rights reserved.
	//

#include "Multimaps.hpp"
#include <iostream>
#include <map>

void multimaps(){

	std::multimap<int,std::string> lookup;

	lookup.insert(std::make_pair(30,"Gas"));
	lookup.insert(std::make_pair(30,"Maria"));
	lookup.insert(std::make_pair(20,"Moby"));
	lookup.insert(std::make_pair(10,"Tobby"));

	for(std::multimap<int,std::string>::iterator it=lookup.find(20);it!=lookup.end();it++){	//this way, the iterator will go through all the remaining keys until the end of the list and thus print whatever is after the value of lookup.find(XX).
		std::cout<<it->first<<": "<<it->second<<std::endl;
	}
	std::cout<<std::endl;

	//In order to find a range of values one needs to get an iterator pointing to the last element of interest.C++ 98 way
	//The equal_range(X) method returns a pair of iterators; an iterator where the value X was first found and another one pointing to where the last one was found.
	std::pair<std::multimap<int,std::string>::iterator,std::multimap<int,std::string>::iterator> its = lookup.equal_range(30);

	for(std::multimap<int,std::string>::iterator it=its.first;it!=its.second;it++){
		std::cout<<it->first<<": "<<it->second<<std::endl;
	}

	//In C++11 there is another perfect viable way to reduce the vast declaration of the pair! Use auto.

	auto its1=lookup.equal_range(30);	//Less writing, hooray.
	for(std::multimap<int,std::string>::iterator it=its1.first;it!=its1.second;it++){
		std::cout<<it->first<<": "<<it->second<<std::endl;
	}


}


