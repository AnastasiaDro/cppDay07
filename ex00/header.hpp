//
// Created by Cesar Erebus on 10/24/21.
//

#ifndef HEADER_H
#define HEADER_H


template <typename T>
void swap (T &arg1, T &arg2)
{
	T arg = arg1;
	arg1 = arg2;
	arg2 = arg;
}

template <typename T>
T &min(T &arg1, T &arg2)
{
	if (arg1 < arg2)
		return arg1;
	return arg2;
}

template <typename T>
T &max(T &arg1, T &arg2)
{
	if (arg1 > arg2)
		return arg1;
	return arg2;
}

//class mClass
//{
//private:
//	int i;
//public:
//	mClass(void): i(0) {}
//	mClass(int d) : i(d) {}
//	mClass &operator=(mClass &a) {i = a.i; return *this; }
//	bool operator==(mClass const & rhs) const { return (this->i == rhs.i); }
//	bool operator!=(mClass const & rhs) const { return (this->i != rhs.i); }
//	bool operator>(mClass const & rhs) const { return (this->i > rhs.i); }
//	bool operator<(mClass const & rhs) const { return (this->i < rhs.i); }
//	bool operator>=(mClass const & rhs) const { return (this->i >= rhs.i); }
//	bool operator<=(mClass const & rhs) const { return (this->i <= rhs.i); }
//	int geti() const { return i; }
//};
//std::ostream &operator<<(std::ostream &o, const mClass &a) { o << a.geti(); return o;}



#endif //FUNCS_H
