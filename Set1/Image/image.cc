#include "image.h"
#include <iostream>
using namespace std;
Image::Image():m_x(0),m_y(0),m_width(0),m_height(0){



}

Image::Image(int x,int y,int w,int h):
    m_x(x),m_y(y),m_width(w),m_height(h) {


}

Image::Image(const Image & ref):
    m_x(ref.m_x),m_y(ref.m_y),m_width(ref.m_width),m_height(ref.m_height)

    {

    }





int Image:: move(int x,int y) {
    m_x=x;
    m_y=y;
    return m_x;

}

void Image:: Scale(int x,int y) {
    m_x+=x;
    m_y+=y;
}

void Image:: resize(int x,int y) {
    m_x+=x;
    m_y+=y;
}

void Image::display() {

    cout<<m_x<<","<<m_y;

}




