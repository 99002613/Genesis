#ifndef POINT_H_INCLUDED
#define POINT_H_INCLUDED
class Point{

            int  m_x,m_y;
        public :
            Point();
            Point(int,int);
            Point(const Point & );
            void distanceFromOrigin();
            void isOrigin();
            void isOnYAxis();
            void isONXAxis();
            void display();
            void Quadrant();
};


#endif // POINT_H_INCLUDED
