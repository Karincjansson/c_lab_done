// c_lab.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <list>
#include "poly2.h"


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

	float root1, root2;
	int rootCount;
	float a, b, c, x;

	a = 1;
	b = 2;
	c = 1;
	Poly2 poly(a, b, c);
	poly.findRoot(root1,root2,rootCount);
	std::cout << std::endl;
	a = 2; b = 3; c = 9;

	Poly2 poly1(a, b, c);
    poly1.findRoot(root1, root2, rootCount);
	std::cout<<std::endl;

	a = 1; b = -5; c = 6;
	Poly2 poly2(a, b, c);
	poly2.findRoot(root1, root2, rootCount);
	std::cout << std::endl;
//övning 9
	/*std::string answer;

	float a, b, c, x;
	
	std::cout << "Enter value for a ,b and c" << std::endl;
	while(std::cin >>a>>b>>c)
	{
		float root1, root2; 
		int rootCount;
		Poly2 poly(a, b, c);
		poly.findRoot(root1, root2, rootCount);
		if(rootCount=0)
		{
			std::cout << "there is no root" << std::endl;
		}
		else if(rootCount=1)
		{
			std::cout << "there is 1 x" << std::endl;
			std::cout << "the value of x is: " << root1 << std::endl;
		}
		else if (rootCount=2)
		{
			std::cout << "there is 2 x" << std::endl;
			std::cout << "the value of the first x is: " << root1 << std::endl;
			std::cout << "the value of the second x is: " << root2 << std::endl;
		}
		else 
		{
			std::cout << "oops something went wrong" << std::endl;
		}
	}*/


	/*while(std::cin >> a >> b >> c)
	{
		
		float root1, root2;
		Poly2 poly(a, b, c);

		float rootNr = poly.findRoots(root1,root2);

		if(rootNr==0)
		{
			std::cout << "there is no root" << std::endl;
		}
		else if(rootNr==1)
		{
			std::cout << "there is 1 x" << std::endl;
			std::cout << "the value of x is: " << root1 << std::endl;
		}
		else if(rootNr==2)
		{
			std::cout << "there is 2 x" << std::endl;
			std::cout << "the value of the first x is: " << root1 << std::endl;
			std::cout << "the value of the second x is: " << root2 << std::endl;
		}
		std::cout << "Enter value x" << std::endl;
		std::cin >> x;
		float y;
		y = poly.eval(x);
		std::cout << "the value of y, if x is " << x << ", is " << y << std::endl;
		std::cout << "\n";
		std::cout << "_____________________________________________________\n";
		std::cout << "\n";
		std::cout << "Try Again. Enter value for a ,b and c" << std::endl;
	}*/

	

	return 0;
}

