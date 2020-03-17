#include<iostream.h>
#include<conio.h>
#include<fstream.h>
void main()
{
clrscr();
ofstream fout;
fout.open("Country");
fout<<"India"<<endl;
fout<<"Sri Lanka"<<endl;
fout<<"USA"<<endl;
fout<<"Australia"<<endl;
fout.close();
fout.open("Capitals");
fout<<"New Delhi"<<endl;
fout<<"Colombo"<<endl;
fout<<"Washington DC"<<endl;
fout<<"Cranberra"<<endl;
fout.close();
char a[80];
ifstream fin;
fin.open("Country");
cout<<"Names of Countries: "<<endl;
while(fin.eof()==0)
{
fin.getline(a,80);
cout<<a<<endl;
}
fin.close();
fin.open("Capitals");
cout<<"Names of corresponding capitals are: "<<endl;
while(fin.eof()==0)
{
fin.getline(a,80);
cout<<a<<endl;
}
fin.close();
getch();
}