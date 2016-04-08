#include <iostream>
#include <cstdlib>
#include "Rectangle2D.hpp"
using namespace std;

// no-arg constructor
Rectangle2D::Rectangle2D()
{
    x = 0;
    y = 0;
    width = 1;
    height = 1;
}
// creates a rectangle with specified values
Rectangle2D::Rectangle2D(double X, double Y, double w, double h)
{
    x = X;
    y = Y;
    width = w;
    height = h;
}
// getter functions
double Rectangle2D:: getX()const
{
    return x;
}
double Rectangle2D::getY()const
{
    return y;
}
double Rectangle2D::getWidth()const
{
    return width;
}
double Rectangle2D::getHeigth()const
{
    return height;
}
// setter functions
void Rectangle2D::setX(const double X)
{
    x = X;
}
void Rectangle2D::setY(const double Y)
{
    y = Y;
}
void Rectangle2D::setWidth(const double W)
{
    width = W;
}
void Rectangle2D::setHeight(const double H)
{
    height = H;
}
// function to calcualte the area
double Rectangle2D::getArea()const
{
    return (width*height);
}
// function to calcualter the perimeter
double Rectangle2D::getPerimeter()const
{
    return 2*(width+height);
}
// function checking whether the point is inside the rectangle
bool Rectangle2D::contains(double X, double Y)const
{
    double ptX = X;
    double ptY = Y;
    // the distance between the point and the center have to be less that 1/2 to be in the rectangle
    if (ptX < (this-> x + (0.5 * this->width)) && ptX < (this-> x - (0.5 * this->width)) && ptY < (this->y +(0.5 * this->height)) && ptY < (this->y - (0.5 * this->height)))
        return true;
    else
        return false;
}
// function checking if two rectangles overlap
bool Rectangle2D::overlaps(const Rectangle2D &r)
{
    double r1w = this -> width;
    double r1h = this -> height;
    double r2w = r.width;
    double r2h = r.height;
    // check with if statements
    if(r2w <= 0 || r2h <= 0 || r1w <= 0 || r1h <= 0)
        return false;
    double r1x = this -> x;
    double r1y = this -> y;
    double r2x = r.x;
    double r2y = r.y;
    r2w = r2w + r2x;
    r2h = r2h +r2y;
    r1w = r1w + r1x;
    r1h = r1h + r1y;
    // if statement to check overlap
    if ((r2w < r2x || r2w > r1x) && (r2h < r2y || r2h > r1y) && (r1w < r1x || r1w > r2x) && (r1h < r1y || r1h > r2y))
        return true;
    else
        return false;
    
}
// function checking if the rectangle is inside a rectangle
bool Rectangle2D::contains(const Rectangle2D &r)
{
    // if r2 is less the all elements of r1, then then they rectangle lies inside
    if (this-> x -(this->width/2) > r.x - (r.width/2) && this-> x +(this-> width/2) > r.x + (r.width/2) && this-> y -(this->height/2) > r.y -(r.height/2) && this -> y +(this->height/2) >r.y +(r.height/2))
        return true;
    else
        return false;
}














