#ifndef COMPLEX_H
#define COMPLEX_H

using namespace std;

class Complex
{
	public:
		Complex(double real, double imag);//constructor
		Complex add(Complex Outer);//add function
		Complex multiply(Complex Outer);//multiply function
		Complex divide(Complex Outer);//divide function
		Complex conjugate();//conjugate function
		void print();//print function

	private:
		double real;//this->real
		double imag;//this->imag
};

#endif