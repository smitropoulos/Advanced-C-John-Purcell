//
//  Object Slicing and polymorphism.cpp
//  Advanced C++ John Purcell
//
//  Created by Stefanos Mitropoulos on 24/03/2018.
//  Copyright © 2018 Stefanos Mitropoulos. All rights reserved.
//

#include "Object Slicing and polymorphism.hpp"
#include <iostream>

class parent{
private: int one;
public:
	parent():one(0){}
	parent(int one):one(1){}
	parent (const parent& other):one(2){		//the object in the end will have the other.one value for one, which since we have a 												default constructor that inits one to 0, will be 0
		std::cout<<"Parent copy"<<std::endl;
		one=other.one;
	}
	virtual ~parent(){}

	virtual void print(){
		std::cout<<"parent"<<one<<std::endl;
		}
};

class child: public parent{
private: int two;
public:
	child():two(0){}			//We cannot initialise parent members using the sub-class constructor, hence we use the super-class 					constructors to do so. e.g. we cannot see parent::one here as it is a private member of the parent class.
	child(int two):two(1){}

	virtual void print(){
		std::cout<<"child"<<two<<std::endl;
	}
};

void sli(){
	child c1;
	c1.print();

	parent& p2=c1;
	p2.print();

			//This is known as object slicing - we disregard the child's private members and only initialise the parent ones.
	parent p3 = child();
	p3.print();
}
