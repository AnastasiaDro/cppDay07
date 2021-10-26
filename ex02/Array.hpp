//
// Created by Cesar Erebus on 10/24/21.
//

#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>

template <class T>
class Array
{
private:
	unsigned int	num;
	T				*data;
public:
	Array() : num(0), data(NULL) {}


	Array(unsigned int n) : num(n), data (new T[num]) {}


	~Array() { delete [] this->data;}


	Array(const Array &orig) : num(orig.num), data(new T[orig.num])
	{
		for (unsigned int i = 0; i < num; i++)
			this->data[i] = orig.data[i];
	}

	Array<T> &operator=(const Array &orig)
	{
		this->num = orig.num;
		if(this == &orig)
			return *this;
		if(data)
			delete[] data;
		this->data = new T[num];
		for (unsigned int i = 0; i < num; i++)
			this->data[i] = orig.data[i];
		return *this;
	}

	T	&operator[](int index) {
		unsigned int i;
		i = static_cast<unsigned int>(index);
		if(this->num != 0 && i < num)
			return data[i];
		else
			throw std::exception();
	}

	T const &operator[](int index) const {
		unsigned int i;
		i = static_cast<unsigned int>(index);
		if(this->num != 0 && i < num)
			return data[i];
		else
			throw std::exception();
	}

	unsigned int size() const { return num; }
};




//testing class
class mClass
{
private:
	int i;
public:
	mClass(void): i(42) {}
	mClass(int d) : i(d) {}
	mClass &operator=(mClass &a) {i = a.i; return *this; }
	bool operator==(mClass const & rhs) const { return (this->i == rhs.i); }
	bool operator!=(mClass const & rhs) const { return (this->i != rhs.i); }
	bool operator>(mClass const & rhs) const { return (this->i > rhs.i); }
	bool operator<(mClass const & rhs) const { return (this->i < rhs.i); }
	bool operator>=(mClass const & rhs) const { return (this->i >= rhs.i); }
	bool operator<=(mClass const & rhs) const { return (this->i <= rhs.i); }
	int geti() const { return i; }
};
std::ostream &operator<<(std::ostream &o, const mClass &a) { o << a.geti(); return o;}


#endif //DAY07_ARRAY_H
