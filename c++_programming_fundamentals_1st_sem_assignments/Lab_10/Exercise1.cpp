#include <iostream>
using namespace std;
float calculatearea(float length , float width, char b)
{
    float rect_area = length*width;
    return rect_area;
}
float calculatearea(float radius, char s)
{
    float cir_area = 3.12*radius*radius;
    return cir_area;
}
float calculatearea(float base , float height,int a)
{
    float tri_area = 0.5*base*height;
    return tri_area;
}
float calculatearea(float s_length , bool what )
{
    float sqr_area = s_length*s_length;
    return sqr_area;
}
int main(){
    system("cls");
    int length , width , radius , base , height , s_length;
    cout<<"Input length and width of a rectangle: ";
    cin>>length>>width;
    cout<<"Input radius of a circle: ";
    cin>>radius;
    cout<<"Input base and height of a triangle: ";
    cin>>base>>height; 
    cout<<"Input length of a side of square: ";
    cin>>s_length;   
    cout<<"Area of Rectangle = "<<calculatearea(length,width,'d')<<endl;
    cout<<"Area of Circle = "<<calculatearea(radius,'s')<<endl;
    cout<<"Area of Triangle = "<<calculatearea(base,height,1)<<endl;
    cout<<"Area of Square = "<<calculatearea(s_length,true)<<endl;

}