#include <iostream>

#include <iostream>
#include<cmath>
#include"shape.h"
#include"polygon.h"
#include"circle.h"
#include"rectangle.h"
#include"triangle.h"


using namespace std;




Polygon::Polygon(int n):m_sides{n}{}

Rectangle::Rectangle(int l,int b):Polygon(4),m_length{l},m_breadth{b}{}

double Rectangle::area()
{

    return m_length*m_breadth;
}

double Rectangle::circumference()
{
    return 2*(m_length+m_breadth);
}


Triangle::Triangle(int x,int y,int z):Polygon(3),m_a{x},m_b{y},m_c{z}{}


double Triangle::area()
{
    int s=(m_a+m_b+m_c)/2;
    return sqrt(s*((s-m_a)*(s-m_b)*(s-m_c)));
}

double Triangle::circumference()
{

    return m_a+m_b+m_c;
}


Circle::Circle(double r):m_radius{r}{}

double Circle::area()
{

    return PI*m_radius*m_radius;
}

double Circle::circumference()
{
    return 2*PI*m_radius;
}
