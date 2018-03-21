//
//  Sets.cpp
//  Advanced C++ John Purcell
//
//  Created by Stefanos Mitropoulos on 21/03/2018.
//  Copyright © 2018 Stefanos Mitropoulos. All rights reserved.
//

#include "Sets.hpp"
#include <iostream>
#include <set>

void sets(){

	class custom{
	private:
		int _id,_data;
	public:
		custom(){}
		custom(int id,int data):_id(id),_data(data){}

		void print ()const{
			std::cout<<_id<<": "<<_data<<std::flush;
		}

		bool operator< (const custom &other) const{
			return _id<other._id;
		}


	};


	std::set<custom> set1;

	set1.insert(custom(0,33));
	set1.insert(custom(23,11));


	for (std::set<custom>::iterator it=set1.begin() ; it!=set1.end() ; it++){
		it->print();
		std::cout<<std::endl;
	}




}
