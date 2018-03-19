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

	std::vector<int> vectorOfInts;		//A vector of ints.

		//Push back literally treats the vector as a stack; pushing it back increases its size by 1
	vectorOfInts.push_back(2);
	vectorOfInts.push_back(3);
	vectorOfInts.push_back(32);
	vectorOfInts.push_back(9);

		//Loop access for the vector
	for (int i =0;i<=vectorOfInts.size();i++){
			//Do something
	}

		//iterator method to traverse a vector.
	for (std::vector<int>::iterator iter = vectorOfInts.begin() ; iter != vectorOfInts.end(); iter++){
			//std::cout<<*iter<<std::endl;
	}


	//////////New video - Vectors////////////

	std::vector<double> numbers(0);

	std::cout<<"The size of the vector is: "<<numbers.size()<<std::endl;

	unsigned long capacity = numbers.capacity();
	std::cout<<"The capacity of the vector is: "<<capacity<<std::endl;

	for (int i=0;i<10000;i++){
		if (capacity!= numbers.capacity()){
			capacity = numbers.capacity();
			std::cout<<"i is : "<<i<<" The capacity of the vector is: "<<capacity<<std::endl;

		}
		numbers.push_back(i);
	}


	//////////New video - 2d Vectors//////////////

	
	std::vector< std::vector<int> > grid (3, std::vector<int>(3,2));

	for (int rows=0;rows<grid.size();rows++){
		for (int cols=0;cols<grid[rows].size();cols++){
			std::cout<< grid[rows][cols]<<std::flush;
		}
		std::cout<<std::endl;
	}

}
