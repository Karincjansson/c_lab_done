#include <iostream>
#include "poly2.h"
#include <cmath>

Poly2::Poly2(float a, float b, float c)
{
    this->a = a;
    this->b = b;
    this->c = c;
}

float Poly2::eval(float x)
{

   
    float y = pow(a,2)*pow(x,2)+(b*x)+c;
  
    return y;    
   
}

float Poly2::findRoots(float& root1, float& root2)
{

   
    int nrOfRoots;
    float d = pow(b, 2) - a * c * 4;

    if(d<0)
    {
       
        nrOfRoots = 0;
    }
    if(d==0)
    {
        float root1 = ((-b) + sqrt(d)) / (2 * a);
   
        nrOfRoots = 1;
    }
    if(d>0)
    {
        float root1 = ((-b) + sqrt(d)) / (2 * a);
        float root2 = ((-b) - sqrt(d)) / (2 * a);

        nrOfRoots = 2;
    }


    return nrOfRoots;

}