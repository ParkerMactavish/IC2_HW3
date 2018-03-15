#ifndef COMPLEX_H
#define COMPLEX_H

using namespace std;

class Complex
{
	public:
		Complex(double real, double imag);
		Complex add(Complex Outer);
		Complex multiply(Complex Outer);
		Complex divide(Complex Outer);
		Complex conjugate();
		void print();

	private:
		double real;
		double imag;
};

#endif