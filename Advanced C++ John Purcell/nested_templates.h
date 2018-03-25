	//
	//  nested_templates.h
	//  Advanced C++ John Purcell
	//
	//  Created by Stefanos Mitropoulos on 25/03/2018.
	//  Copyright © 2018 Stefanos Mitropoulos. All rights reserved.
	//

#ifndef nested_templates_h
#define nested_templates_h
#include <iostream>
using namespace std;

template <class T>
class ring {
private:
	int _pos;
	int _size;
	T* _values;
public:
	class iterator;
public:
	ring(int size):_size(size),_values(nullptr),_pos(0){
		_values = new T[_size];
	}
	~ring(){
		delete [] _values;
	}

	int size(){
		return _size;
	}

	iterator begin(){
		return iterator(0,*this);
	}

	iterator end(){
		return iterator(_size,*this);
	}

	void add (T value){
		_values[_pos] = value;
		_pos++;
		if(_pos==_size){		//restart the position.
			_pos=0;
		}
	}

	T& get(int pos){
		return _values[pos];
	}
};

template <class T>
class ring<T>::iterator{
private:
	int _pos;
	ring &_ring;
public:

	iterator(int pos, ring& aRing):_ring(aRing),_pos(pos){

	}


		//prefix
	iterator& operator++(){
		++_pos;
		return *this;
	}

		//postfix
	/*
	 * This differs from what's in at least the original
	 * version of the tutorial video. Really we should
	 * return a version of the iterator as it was
	 * before it was modified, for consistency with
	 * the usual behaviour of the postfix operator.
	 */
	iterator operator++(int a){
		iterator old = *this;
		++(*this);
		return old;
	}



	T& operator*(){
		return _ring.get(_pos);
	}

	bool operator!=(const iterator& other){
		return _pos!=other._pos;
	}
};

/*

 ring<string> textring(3);

 textring.add("one");
 textring.add("two");
 textring.add("three");
 //textring.add("four");


 //C++98 style
 for (ring<string>::iterator it=textring.begin();it!=textring.end();it++){		//auto is applicable here too.
 cout<< *it<<endl;
 }

 for (auto value:textring){
 cout<<value<<endl;
 }

*/

#endif /* nested_templates_h */
