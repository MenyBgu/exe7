/*MenyBuganim_302490610     BaruchRothkoff_311603252*/
#include<iostream>
using namespace std;

#ifndef Vector_H
#define Vector_H

class Vector{
	int*first;
	int*second;
public:
	Vector() :first(new int(0)), second(new int(0)){}
	Vector(int first, int second) :first(new int(first)), second(new int(second)){}
	Vector(const Vector&copy) :first(new int(*copy.first)), second(new int(*copy.second)){}
	~Vector();
	void setFirst(int first){ *(this->first) = first; }		//getters & setters.
	int getFirst(){ return *first; }
	void setSecond(int second){ *(this->second) = second; }
	int getSecond(){ return *second; }
	void print();
	const Vector operator=(const Vector&v);
	Vector& operator++();
	Vector& operator--();
	bool operator==(const Vector&v);
	bool operator<(const Vector&v);
	bool operator>(const Vector&v);
	int& operator[](int index); //try with and without &
	Vector operator+(const Vector&v)const;		//this three return new object.
	Vector operator*(const Vector&v)const;
	Vector operator-(const Vector&v)const;

	friend ostream &operator<<(ostream &os, const Vector&v){
		os << "< " << *v.first << " , " << *v.second << " >" << endl;
		return os;
	}

	friend istream &operator>>(istream &in, Vector&v){
		in >> *v.first >> *v.second;
		return in;
	}
};
#endif // !Vector_H
