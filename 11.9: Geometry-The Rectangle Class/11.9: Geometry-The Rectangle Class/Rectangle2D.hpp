
#ifndef Rectangle2D_hpp
#define Rectangle2D_hpp

class Rectangle2D {
private:
    double x;
    double y;
    double width;
    double height;
    
public:
    Rectangle2D(); // default constructor
    Rectangle2D(double, double, double, double);
    //getter functions
    double getX()const;
    double getY()const;
    double getWidth()const;
    double getHeigth()const;
    // setter functions
    void setX(double const);
    void setY(double const);
    void setWidth(double const);
    void setHeight(double const);
    //calculates area and perimeter
    double getArea()const;
    double getPerimeter()const;
    // contains and overlap functions
    bool contains(double, double)const;
    bool contains(const Rectangle2D &r);
    bool overlaps(const Rectangle2D &r);
};

#include <stdio.h>

#endif /* Rectangle2D_hpp */
