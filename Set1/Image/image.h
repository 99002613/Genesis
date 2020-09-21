#ifndef IMAGE_H_INCLUDED
#define IMAGE_H_INCLUDED
class Image{

       int  m_x,m_y,m_width,m_height;
   public :
            Image();
            Image(int,int,int,int);
           Image(const Image &ref);
            void Scale(int,int);
            void resize(int,int);
            void display();
            int move(int,int);

};



#endif // IMAGE_H_INCLUDED
