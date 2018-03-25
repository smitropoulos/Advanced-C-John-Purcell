
	//
//  enhanced for.cpp
//  Advanced C++ John Purcell
//
//  Created by Stefanos Mitropoulos on 25/03/2018.
//  Copyright © 2018 Stefanos Mitropoulos. All rights reserved.
//

#include "enhanced for.hpp"
#include <vector>
#include <iostream>
using namespace std;


void enhanced_for(){
auto texts={"one","two","three"};

for (auto text: texts){
	cout<<text<<endl;
	}
	vector<int> numbers;
	numbers.push_back(2);
	numbers.push_back(22);
	numbers.push_back(12);
	numbers.push_back(52);

	for (auto number:numbers){
		cout<<number<<endl;
	}

	string hello = "hello";

	for (auto c:hello){
		cout<<c<<endl;
	}

}
