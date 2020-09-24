#ifndef __CIRCLE_H
#define __CIRCLE_H

#include "shape.h"

class Circle : public IShape {
  double m_radius;

public:
  const double PI = 3.14;
  Circle(double);
  double area();
  double circumference();
};

#endif

