//
//  Templates.hpp
//  Advanced C++ John Purcell
//
//  Created by Stefanos Mitropoulos on 24/03/2018.
//  Copyright © 2018 Stefanos Mitropoulos. All rights reserved.
//

#ifndef Templates_hpp
#define Templates_hpp

#include <stdio.h>
#include <iostream>

template <class T>
class Test{
private:
	T obj;

public:
	Test(T obj){
		this->obj=obj;
	}
	void print(){
		std::cout<<obj<<std::endl;
	}
};


template<class T>
void print(T sth){
	std::cout<<sth<<std::endl;
}


///Even tho there is no arguement, this will work and construct an object of class T initialised to the default values.
///e.g. 	show<int>();	works
template<class T>
void show(){
	std::cout<<T()<<std::endl;
}



#endif /* Templates_hpp */
