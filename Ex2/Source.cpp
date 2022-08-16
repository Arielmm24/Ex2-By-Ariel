#include <iostream>
#include "Polynomial.h"
#include "Rational.h"

double getCoefficient(const Polynomial& p, int n)
{
	return p.getCoeff(n);
}
void testPolynomial()
{
	cout << "----- start testPolynomial ---------" << endl;
	cout << "test0 :" << Polynomial::getMaxDegree() << endl;
	Polynomial p1;
	cout << "test1: " << p1;
	Polynomial p2(16);
	p2.setCoeff(2, 0.4);
	//cout << p2;
//	cout << "test2: " << p2 << "degree=" << p2.getDegree(false)<<endl;
//	double c[5] = { 0.1, 0.2, 0 ,11.5, 1.3};
//	Polynomial p3(c,4);
//	cout << "test3: " << p3;
//	p2.setCoeff(2, 0.0);
//	cout << "test4: " << p2;
//	p2 = (p1 + 2.5*p3 -0.9*p3)*p3; 
//	double v[4];
//	v[0] = getCoefficient(p2, 3);
//	v[1] = getCoefficient(p2, 0);
//	v[2] = getCoefficient(p2, -1);
//	v[3] = getCoefficient(p2, 10);
//	cout << "test6 :maxDegree = " << Polynomial::getMaxDegree() << endl;
//	cout << "______________"<< endl;
}

int main()
{
	testPolynomial();
	//testRational();

	Polynomial pp;
	Polynomial ppp(5);
	ppp.setCoeff(1, 4.5);

}
