	//
	//  Overloading Operators.cpp
	//  Advanced C++ John Purcell
	//
	//  Created by Stefanos Mitropoulos on 22/03/2018.
	//  Copyright © 2018 Stefanos Mitropoulos. All rights reserved.
	//

#include "Overloading Operators.hpp"
#include <iostream>
#include <string>

class Test{

private:
	std::string _name;
	int _id;

public:
	Test():_id(0),_name(""){}
	Test(std::string name,int id):_name(name),_id(id){}
	~Test(){
			//std::cout<<"Destructor called"<<std::endl;
	}
	Test(const Test& other){
		*this=other;
	}

	void print() const{
		std::cout<<_id<<": "<<_name<<std::endl;
	}
	friend std::ostream& operator<<(std::ostream &os, const Test& object) {
		os << object._id << ": " << object._name;
		return os;
	}
	Test& operator= (const  Test& other){
		std::cout<<"Assignment Running."<<std::flush;
		_id = other._id;
		_name = other._name;
		return *this;
	}
};

void overloading(){

	Test test1("Tau",2),test2;
	std::cout<<test1;
		///In case you don't assign initial values to an object at declaration like above, but instead try

	Test test4=test1;	//this will use the copy constructor and not the = operator!

		// to solve this we need to also declare a copy constructor inside the class. Also, in C++ there is what is known as the rule of three; when you declare an = operator overlad, or a copy constructor, you should also implement the other one and a destructor.
}
