	//
	//  StackNQueue.cpp
	//  Advanced C++ John Purcell
	//
	//  Created by Stefanos Mitropoulos on 21/03/2018.
	//  Copyright © 2018 Stefanos Mitropoulos. All rights reserved.
	//

#include "StackNQueue.hpp"
#include <iostream>
#include <stack>
#include <queue>

void stackNqueue(){


	class Test{
	private:
		std::string _name="";
	public:
		Test();
		Test(std::string name):_name(name){}
		~Test(){
				//std::cout<<"Destructor called"<<std::endl;
		}

		void print() const{
			std::cout<<_name<<std::endl;
		}
	};


	std::stack<Test> testStack;

	testStack.push(Test("Mike"));
	testStack.push(Test("Peter"));
	testStack.push(Test("Sue"));

	Test &test1 = testStack.top();	//This will point to the top of the stack. The stack is a LIFO structure, meaning that sue in 									this case will be the top element of the stack.
									//Using a reference object, will ensure that the top of the stack object is not shallow-copied,but instead referenced. ++Performance. DANGER: If you pop that object and the try to use the reference, the code would result unexpected results at best. (the pop will destroy the object)

	test1.print();

	while (testStack.size()>0){		//Will print the stack elements in the reverse order they were inserted.
		testStack.top().print();
		testStack.pop();
	}


	std::queue<Test> testQueue;

	testQueue.push(Test("Mike"));
	testQueue.push(Test("Peter"));
	testQueue.push(Test("Sue"));


	while (testQueue.size()>0){		//Will print the stack elements in the reverse order they were inserted.
		testQueue.front().print();
		testQueue.pop();
	}



}
