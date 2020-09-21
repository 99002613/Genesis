#ifndef COLOR_H_INCLUDED
#define COLOR_H_INCLUDED

enum  Color_t {red,
               green,
               blue
              };

class Color {

    int m_r,m_g,m_b;
  public:
    //enum  Color_t {red,blue,green,orange,black};
    Color();
    Color(int,int,int);
    Color(int);
    Color(Color_t);
    void invert();
    void display();


};






#endif // COLOR_H_INCLUDED
