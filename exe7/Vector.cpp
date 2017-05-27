/*MenyBuganim_302490610     BaruchRothkoff_311603252*/
#include<iostream>
#include <math.h>
#include "Vector.h"
#include <assert.h>
using namespace std;

/*Vector::Vector(){
	cout << "DEFUALT CONSTRA" << endl;
	first = new int();
	assert(first != '\0'&&"Heap error");
	first = NULL;
	second = new int();
	assert(second != '\0'&&"Heap error");
	second = NULL;
}*/

/*Vector::Vector(int first, int second){
	cout << "HERE REGULAR PARAMETERS." << endl;
	this->first = new int();
	assert(first != '\0'&&"Heap error");
	this->second = new int();
	assert(second != '\0'&&"Heap error");
	*(this->first) = first;
	*(this->second) = second;
}*/



Vector::~Vector(){			//release dynamic memory.
	delete first, second;
}

void Vector::print(){			//print.
	cout << "< " << *first << " , " << *second << " >" << endl;
}

const Vector Vector::operator=(const Vector&v){
	*first = *v.first;
	*second = *v.second;
	return *this;
}

Vector& Vector::operator++(){			//take the value and add one. this why the (*first) is inside brackets.
	(*first)++;
	(*second)++;
	return *this;
}

Vector& Vector::operator--(){				//take the value and add one. this why the (*first) is inside brackets.
	(*first)--;
	(*second)--;
	return *this;
}

bool Vector::operator<(const Vector&v){
	return sqrt(pow(*first,2) + pow(*second,2)) < sqrt(pow(*v.first,2) + pow(*v.second,2));
}

bool Vector::operator>(const Vector&v){
	return sqrt(pow(*first, 2) + pow(*second, 2)) > sqrt(pow(*v.first, 2) + pow(*v.second, 2));
}

bool Vector::operator==(const Vector&v){
	return (*first == *v.first) && (*second == *v.second);
}

int& Vector::operator[](int index){		//function of index. check posibilites.
	switch (index){
	case 0:
		return *first;
	case 1:
		return *second;
	default:
		cout << "wrong index." << endl;
		int x=0;
		return x;
	}
}

Vector Vector::operator+(const Vector&v)const{				//this three return new object.
	return Vector(*first + *v.first, *second + *v.second);
}

Vector Vector::operator-(const Vector&v)const{
	return Vector(*first - *v.first, *second - *v.second);
}

Vector Vector::operator*(const Vector&v)const{
	return Vector(*first * *v.first, *second * *v.second);
}


