#include "Complex.h"
#include <iostream>

using namespace std;

Complex::Complex(double real=0, double imag=0)
{
	this->real=real;
	this->imag=imag;
}

Complex Complex::add(Complex Outer)
{
	Complex Result;
	Result.real=this->real+Outer.real;
	Result.imag=this->imag+Outer.imag;
	return Result;
}

Complex Complex::multiply(Complex Outer)
{
	Complex Result;
	Result.real=this->real*Outer.real-this->imag*Outer.imag;
	Result.imag=this->imag*Outer.real+this->real*Outer.imag;
	return Result;
}

Complex Complex::divide(Complex Outer)
{
	Complex Result;
	Result.real=(this->real*Outer.real+this->imag*Outer.imag)/(Outer.real*Outer.real+Outer.imag*Outer.imag);
	Result.imag=(-this->real*Outer.imag+this->imag*Outer.real)/(Outer.real*Outer.real+Outer.imag*Outer.imag);
	return Result;
}

Complex Complex::conjugate()
{
	Complex Result(this->real, -this->imag);
	return Result;
}

void Complex::print()
{
	cout<<real<<(imag>=0?"+":"")<<imag<<"i"<<endl;
}

