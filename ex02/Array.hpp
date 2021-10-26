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
	unsigned int num;
	T *data;
public:
	Array()
	{
		num = 0;
		data = NULL;
	}

	Array(unsigned int n)
	{
		num = n;
		data = new T[num];
	}

	~Array()
	{
		delete this->data;
	}

	Array(Array &orig)
	{
		*this = orig;
	}

	unsigned int size();


	Array &operator=(const Array &orig)
	{
		if(this == &orig)
			return *this;
		delete this->data;
		this->num = orig.num;
		this->data = new T[num];
		for (int i = 0; i < num; i++)
			this->data[i] = orig.data[i];
		return *this;
	}

	T& operator[](int index)
	{
		if(this->num != 0 && index < num)
			return data[index];
		else
			throw std::exception();
	}

};

template<class T>
unsigned int Array<T>::size() {
		return num;
}

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
