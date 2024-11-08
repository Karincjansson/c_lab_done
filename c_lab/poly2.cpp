#include <iostream>
#include "poly2.h"
#include <cmath>

Poly2::Poly2(float a, float b, float c)
{
	this->a = a;
	this->b = b;
	this->c = c;
}
//övning 8
float Poly2::eval(float x)
{


	float y = pow(a, 2) * pow(x, 2) + (b * x) + c;

	return y;

}
//övning 8
void Poly2::findRoot(float& root1, float& root2, int& rootCount)
{
	float d = pow(b, 2) - (4 * a * c);

	if (d < 0)
	{

		rootCount = 0;
		std::cout << "there is no root" << std::endl;
	}
	if (d == 0)
	{
		root1 = (-b) / (2 * a);
		std::cout << "there is 1 root = " << root1 << std::endl;
		rootCount = 1;

	}
	if (d > 0)
	{
		float root1 = (-b + sqrt(d)) / (2 * a);
		float root2 = (-b - sqrt(d)) / (2 * a);
		std::cout << "there is 2 roots " << std::endl;
		std::cout << "root1 = " << root1 << std::endl;
		std::cout << "root2 = " << root2 << std::endl;
		rootCount = 2;
	}
}
//övning 9
float Poly2::findRoots(float& root1, float& root2)
{

	float d = pow(b, 2) - (4 * a * c);

	if (d < 0)
	{

		return 0;
	}
	if (d == 0)
	{
		root1 = ((-b) + sqrt(d)) / (2 * a);

		return 1;
	}
	if (d > 0)
	{
		float root1 = ((-b) + sqrt(d)) / (2 * a);
		float root2 = ((-b) - sqrt(d)) / (2 * a);

		return 2;
	}




}