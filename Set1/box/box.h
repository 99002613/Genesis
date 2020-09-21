#ifndef BOX_H_INCLUDED
#define BOX_H_INCLUDED


class Box{
   private:
       int m_length;
       int m_breadth;
       int m_height;

   public:
    Box();
    Box(int,int,int);
    Box(int);
    Box(const Box &);
    int length();
    int breadth();
    int height();
    double volume();
    void display();

};
#endif // BOX_H_INCLUDED
