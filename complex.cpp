#include "complex.hpp" 

#include<cmath>

mycomplex::mycomplex()
{
	m_real = 0;
	m_imag = 0;
}

mycomplex::mycomplex(float r, float i)
{
	m_real = r;
	m_imag = i;
}

mycomplex::mycomplex(const mycomplex & obj)
{
	m_real = obj.getReal();
	m_imag = obj.getImag();
}

mycomplex::mycomplex(mycomplex &&)
{
	//empty body
}

mycomplex  mycomplex::operator=(const mycomplex & obj )	
{
	this->setReal(obj.getReal());
	this->setImag(obj.getImag());
	return *this;
}

std::ostream & operator<<(std::ostream & out,const mycomplex & obj)
{
	out << "(" << obj.getReal() << "," << obj.getImag() << ")";
	return out;
}

mycomplex mycomplex::operator+(const mycomplex & obj)
{
	mycomplex temp;
	temp.setReal(obj.getReal() + this->getReal());
	temp.setImag(obj.getImag() + this->getImag());
	return temp;
}

mycomplex mycomplex::operator-(const mycomplex & obj)
{
	mycomplex temp;
	temp.setReal(obj.getReal() - this->getReal());
	temp.setImag(obj.getImag() - this->getReal());
	return temp;
}

mycomplex mycomplex::operator*(const mycomplex & obj)
{
	mycomplex temp;
	temp.setReal(obj.getReal() * this->getReal());
	temp.setImag(obj.getImag() * this->getImag());
	return temp;
}

mycomplex mycomplex::operator*(int p)
{
	this->setReal( p * getReal());
	this->setImag( p * getImag());
	return *this;
}

mycomplex mycomplex::operator/(const mycomplex & obj)
{
	//empty body
}

float mycomplex::abs()	
{
	float res = 0, x = 0;
	x = this->getReal()*this->getReal() + this->getImag()*this->getImag();
	res = sqrt(x);
	return res;
}

float mycomplex::arg()
{
	float res = 0;
	res  = atan(getImag()/getReal());
	return res;
}

void mycomplex::setReal(float r){
	m_real = r;
}

void mycomplex::setImag(float i)
{
	m_imag = i;
}

float mycomplex::getReal() const
{
	return m_real;
}

float mycomplex::getImag() const
{
	return m_imag;
}


