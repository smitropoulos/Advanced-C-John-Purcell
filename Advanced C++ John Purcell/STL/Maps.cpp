	//
	//  Maps.cpp
	//  Advanced C++ John Purcell
	//
	//  Created by Stefanos Mitropoulos on 20/03/2018.
	//  Copyright © 2018 Stefanos Mitropoulos. All rights reserved.
	//

#include "Maps.hpp"
#include <iostream>
#include <map>
using namespace std;

void maps(){

	map<string, int> ages;	//maps are useful to 'declare a pair' of interconnected data.


	ages["Monica"] = 30;
	ages["Phoebe"]=22;
	ages["Chandler"]=27;

		//or

	ages.insert(pair<string,int>("John",100));
	ages.insert(make_pair("Mary", 23));	//with make_pair you dont need to know the types of the map


	if (ages.find("Monica") != ages.end() ){	//ages.find returns an iterator which points to the element if found, or the end of the map/list if not
		cout<< "Key found."<<endl;
	}
	else{
		cout<<"Key not in map"<<endl;
	}

	for (map<string,int>::iterator it=ages.begin(); it!=ages.end() ; it++){
		cout<<it->first<<": "<<it->second<<endl;
	}


		//Lets make a class and make maps of our new class as a the first key
	class person{
	private:
		std::string _name;
		int _age;
	public:
		person():_name(""),_age(0){}		//create the default constructor. This is ESSENTIAL as the map is going to be using this by default to allocate memmory for the map
		person(std::string name, int age):_name(name),_age(age){}


		void print() const{
			std::cout<< _name<< ": "<< _age<<std::flush;
		}

			//overloading the < operator. This will return a boolean of the comparison of the names of the objects (alphabetically) or if the names are the same, a comparison between their ages.
		bool operator< (const person &person2) const{	//CONST IS ESSENTIAL FOR THE BUILD. NOT DECLARING ANY OF THE CONST THROWS A SEMANTIC ISSUE

			if (_name == person2._name)
				return _age < person2._age;

			return _name < person2._name;
		}
	};

		//If there is a constructor defined, it overrides the default constructor, whichi is essential to the map!

	map<int,person> people;

	people[0] = person("Matt",23);
	people[1] = person("John",33);
	people[2] = person("Tiana",24);

		// This is now acceptable as there is a metric to compare the different person objects (overloaded < inside the class)


	map<person,int> people1;

	people1[person("Mike",40)]=40;
	people1[person("Peter",32)]=23;
	people1[person("Violetta",31)]=31;

	for(map<person,int>::iterator iter1=people1.begin();iter1!=people1.end();iter1++){
		std::cout<<iter1->second<<" "<<std::flush;
		iter1->first.print();
		std::cout<<std::endl;
	}

}
