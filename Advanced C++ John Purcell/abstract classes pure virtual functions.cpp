//
//  abstract classes pure virtual functions.cpp
//  Advanced C++ John Purcell
//
//  Created by Stefanos Mitropoulos on 25/03/2018.
//  Copyright © 2018 Stefanos Mitropoulos. All rights reserved.
//

#include "abstract classes pure virtual functions.hpp"
#include <iostream>

class Animal		//Abstract class containing virtual functions.
{
public:
	virtual void speak()=0;
	virtual void run()=0;
};

class Dog: public Animal	//Abstract class since not all virtual functions are implemented explicitly.
{
public:
	virtual void speak(){
		std::cout<<"This is dog."<<std::endl;
	}
};

class Labrador: public Dog	//Inherits the implementation of speak from dog, and implements run, so not abstract!
{
public:
	void run(){
		std::cout<<"Lab running."<<std::endl;
	}

};


void pure_virtual(){

	Labrador lab1;
	lab1.speak();
	lab1.run();

	//We can create an array/vector etc of pointers to the super class and have the address of subclasses in it
	Animal *animals[3];
	animals[0]=&lab1;
	animals[0]->run();	//remember the use of -> is for pointers.

	
}
