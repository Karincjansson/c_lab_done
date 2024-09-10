#ifndef POLY2_H
#define POLY2_H
class Poly2
{
    float a, b, c;

public:

    /*
     * Constructor
     */
    Poly2(float a, float b, float c);

    /*
     * Evaluate y(x)
     */
    float eval(float x);

    void findRoot(float root1,float root2, int rootCount);
   
    /*
     * Find roots, i.e. x when y(x) = 0
     */
    float findRoots(float& root1,float& root2);

    /*
     * Destructor:
     * not needed since no dynamic memory has been allocated,
     */
};

#endif
