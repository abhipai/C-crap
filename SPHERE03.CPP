#include<iostream.h>
#include<conio.h>
class sphere
{
float r;
float v;
float a;
public:
void getdata();
void area();
void volume();
};
void sphere::getdata()
{
cout<<"enter the radius of the sphere: ";
cin>>r;
}
void sphere::area()
{
a=4*3.14*r*r;
cout<<"the surface area of the sphere is: "<<a;
}
void sphere::volume()
{
v=a*r/3;
cout<<"the volume of the sphere is: "<<v;
}
void main()
{
clrscr();
sphere S1;
S1.getdata();
S1.area();
S1.volume();
getch();
}