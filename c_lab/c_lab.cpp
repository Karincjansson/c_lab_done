// c_lab.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <list>
#include "poly2.h"
#include <fstream>


int main()
{
	//std::cout << "Hello world" << std::endl;

	//övning 3


	//imparameterar
	/*std::string name;
	std::cout << " What is your name?: ";
	std::getline(std::cin, name);

	std::cout << "hello " << name << ", welcome!" << std::endl;*/

	// övning 4: Kalkylator


	/*double sum = 0.0;
	double number = 0.0;
	std::cout << "choose a number, if you press a character that is not a number the program vill return the sum : ";

	while (std::cin>>number)
	{
		sum += number;
	}
	std::cout << "the sum is : " << sum << std::endl;*/

	//övning 8

	//float root1, root2;
	//int rootCount;
	//float a, b, c, x;
	////1
	//std::cout << "one root: " << std::endl;
	//a = 1;
	//b = 2;
	//c = 1;
	//Poly2 poly(a, b, c);
	//poly.findRoot(root1,root2,rootCount);
	//
	//std::cout << std::endl;
	//a = 2; b = 3; c = 9;
	////2
	//Poly2 poly1(a, b, c);
	//std::cout << "no root: " << std::endl;
 //   poly1.findRoot(root1, root2, rootCount);

	//std::cout<<std::endl;
	//std::cout << "2 roots: " << std::endl;
	////3
	//a = 1; b = -5; c = 6; x = 8;
	//Poly2 poly2(a, b, c);
	//poly2.findRoot(root1, root2, rootCount);
	//std::cout << std::endl;

	//std::cout << "evalmethod with x=8: " << std::endl;
	//poly2.eval(x);

	//övning 9

	//float a = 1, b = -7, c = 10;  // För polynomet x^2 - 7x + 10 = 0
	//Poly2 poly(a, b, c);  // Skapa objektet

	//float root1, root2;
	//int rootCount = poly.findRoots(root1, root2);  // Hitta rötterna

	//// Skriv ut resultat beroende på antalet rötter
	//if (rootCount == 0)
	//{
	//	std::cout << "There are no real roots." << std::endl;
	//}
	//else if (rootCount == 1)
	//{
	//	std::cout << "There is 1 real root: " << root1 << std::endl;
	//}
	//else if (rootCount == 2)
	//{
	//	std::cout << "There are 2 real roots: " << root1 << " and " << root2 << std::endl;
	//}
	//else
	//{
	//	std::cout << "Oops, something went wrong." << std::endl;
	//}



//övning 10


	/*float a, b, c, x;

	std::cout << "Enter value for a ,b and c" << std::endl;
	while(std::cin >>a>>b>>c)
	{
		float root1, root2;

		Poly2 poly(a, b, c);

		int rootCount= poly.findRoots(root1, root2);

		if(rootCount==0)
		{
			std::cout << "there is no root" << std::endl;
		}
		else if(rootCount==1)
		{
			std::cout << "there is 1 x" << std::endl;
			std::cout << "the value of x = " << root1 << std::endl;
		}
		else if (rootCount==2)
		{
			std::cout << "there is 2 x" << std::endl;
			std::cout << "the value of the first x = " << root1 << std::endl;
			std::cout << "the value of the second x = " << root2 << std::endl;
		}
		else
		{
			std::cout << "oops something went wrong" << std::endl;
		}
	}*/
	//övning 11

	std::ifstream file("coeffs.txt");
	std::ofstream outFile("roots.txt");
	if (!file.is_open()) {
		std::cerr << "Error opening input file." << std::endl;
		return 1;
	}

	float a, b, c;
	while (file >> a >> b >> c)
	{
		Poly2 poly(a, b, c);
		float root1, root2;
		int rootCount;
	    poly.findRoot(root1, root2,rootCount);

		if (rootCount == 0) {
			outFile << "No real roots for polynomial: " << a << "x^2 + " << b << "x + " << c << std::endl;
		}
		else if (rootCount == 1) {
			outFile << "One real root: " << root1 << std::endl;
			outFile << "Value of polynomial at root: " << poly.eval(root1) << std::endl;
		}
		else if (rootCount == 2) {
			outFile << "Two real roots: " << root1 << " and " << root2 << std::endl;
			outFile << "Value of polynomial at root1: " << poly.eval(root1) << std::endl;
			outFile << "Value of polynomial at root2: " << poly.eval(root2) << std::endl;
		}

	}



	return 0;
}

