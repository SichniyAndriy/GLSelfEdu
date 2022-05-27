#pragma once

#include <iostream>
#include <list>

using std::list;
using std::cerr;

template <typename T>
class Stack {

private:
	list<T> el;

public:

	void create(const size_t m_Num, const T m_Val = 0) { list<T> el(m_Num); }
	void push(const T& m_El)
	{
		if (el.size() < el.max_size())
			el.push_back(m_El);
		else
			cerr << "Stack full"; 
	}
	const T pop()
	{
		T tmp{0};
		if (0 < el.size()){
			tmp = el.back();
			el.pop_back();
		}
		else
			cerr << "Stack empty";
		return tmp;
	}
	const size_t capacity() { return el.size();}
	const size_t size()		{ return el.max_size();}
	void Resize(const size_t m_Num)	
	{ 
		if (m_Num > el.max_size())
			cerr << "Error size";
		else
			el.resize(m_Num);
	}
};