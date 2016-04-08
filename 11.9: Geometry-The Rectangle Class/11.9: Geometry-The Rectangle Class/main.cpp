//
//  Rachel Roegiers
//  CS 172-1
//  HW05
//  11.9: Geometry-The Rectangle2D
//

#include <iostream>
#include "Rectangle2D.hpp"
using namespace std;

int main()
{
    Rectangle2D r1(2, 2, 5.5, 4.9);
    Rectangle2D r2(4, 5, 10.5, 3.2);
    Rectangle2D r3(3, 5, 2.3, 5.4);
    
    // area and perimeter of r1
    cout << "The area of rectangle 1 is " << r1.getArea()<< endl;
    cout << "The perimeter of rectangle 1 is " << r1.getPerimeter()<< endl;
    
    // check whether point 3,3 is in rectangle 1
    if (r1.contains(3,3))
        cout << "The point (3,3) is inside rectangle 1." << endl;
    else
        cout << "The point (3,3) is outside rectangle 1." << endl;
    
    // check whether r2 is contained inside r1
    if (r1.contains(r2))
        cout << "Rectangle 1 contains Rectangle 2!" << endl;
    else
        cout << "Rectangle 2 is outside of Rectangle 1" << endl;
    
    // check if r1 overlaps with r3
    if (r1.overlaps(r3))
        cout << "Rectangle 3 overlaps rectangle 1!" << endl;
    else
        cout << "Rectangle 3 does not overlap rectangle 1" << endl;
    
    return 0;
}