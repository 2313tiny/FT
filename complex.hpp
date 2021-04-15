
#ifndef COMPLEX_HPP
#define COMPLEX_HPP
 
#include<iostream>
#include<cassert>
#define YELLOW "\033[01;033m"
#define GREEN "\033[01;032m"
#define RESET "\033[01;0m"


class mycomplex{
private:
	float m_real;
	float m_imag;
public:
	mycomplex(); //default
	mycomplex(float, float); //ctor
	mycomplex(const mycomplex &); //copy
	mycomplex(mycomplex &&); //move
	mycomplex operator=(const mycomplex & ); //assignment	
	~mycomplex(){} //dtor

	friend std::ostream & operator<<(std::ostream & out,
					 const mycomplex & obj);
	
	mycomplex operator+(const mycomplex &);
	mycomplex operator-(const mycomplex &);
	
	mycomplex operator*(const mycomplex &);
	mycomplex operator*(int p);

	mycomplex operator/(const mycomplex &);
	
	float abs();	
	float arg();

	void setReal(float r);
	void setImag(float i);
	float getReal() const;
	float getImag() const;
}; 
 
#endif //COMPLEX_HPP
