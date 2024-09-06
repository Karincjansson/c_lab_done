// c_lab.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <list>
#include "poly2.h"


int main()
{
	float a = 0, b = 0, c = 0, x = 0;
	//övning 3


	//imparameterar
	/*std::string name;
	std::cout << " What is your name?: ";
	std::getline(std::cin, name);*/

	//std::cout << "hello " << name << ", welcome!" << std::endl;

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

	std::string answer;



	std::cout << "Enter value for a ,b and c" << std::endl;
	while(std::cin >> a >> b >> c)
	{
		
		float root1, root2;
		Poly2 poly(a, b, c);

		float rootNr = poly.findRoots(root1,root2);

		if(rootNr==0)
		{
			std::cout << "there is no root" << std::endl;
		}
		if(rootNr==1)
		{
			std::cout << "there is 1 x" << std::endl;
			std::cout << "the value of x is: " << root1 << std::endl;
		}
		if(rootNr==2)
		{
			std::cout << "there is 2 x" << std::endl;
			std::cout << "the value of the first x is: " << root1 << std::endl;
			std::cout << "the value of the second x is: " << root2 << std::endl;
		}
		std::cout << "Enter value x" << std::endl;
		std::cin >> x;
		float y;
		y = poly.eval(x);
		std::cout << "the value of y if x is " << x << " is " << y << std::endl;

		std::cout << "Try Again. Enter value for a ,b and c" << std::endl;
	}

	

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
