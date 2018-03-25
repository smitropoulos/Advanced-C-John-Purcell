//
//  functors.cpp
//  Advanced C++ John Purcell
//
//  Created by Stefanos Mitropoulos on 25/03/2018.
//  Copyright © 2018 Stefanos Mitropoulos. All rights reserved.
//

#include "functors.hpp"
#include <iostream>

struct Test{
	virtual bool operator()(std::string &text)=0;
	virtual ~Test(){};
};

struct MatchText: Test{
	virtual bool operator()(std::string &text){
		return text=="lion";
	}
};

void check(std::string txt,Test& test){
	if (test(txt)){
		std::cout<<"Match!"<<std::endl;
	}
	else{
		std::cout<<"Meh"<<std::endl;
	}
}


void functors(){

	std::string value="lion";
	MatchText m;

	check("value", m);		

}
