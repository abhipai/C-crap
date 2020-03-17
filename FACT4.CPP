//fact calc
#include<iostream.h>
#include<conio.h>
class factorial
{
private:
int n;
public:
void getdata();
void display();
};
void factorial::getdata()
{
cout<<"enter the number: ";
cin>>n;
}
void factorial::display()
{
for(int i=1,f=1; i<=n; i++ )
{
f=f*i;
}
cout<<"the factorial of the number "<<n<<"="<<f;
}
void main()
{
clrscr();
factorial F1;
F1.getdata();
F1.display();
getch();
}
