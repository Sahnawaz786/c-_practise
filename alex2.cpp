#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
char ch;
cout<<"Enter any character"<<endl;
cin>>ch;

if(ch>='a'&&ch<='z')
{
cout<<"You have Entered a lower_case alphabet"<<endl;
ch=ch-32;
cout<<"The uppercase alphabet is = "<<ch<<endl;
}
else
{
cout<<"You have entered a uppercase alphabet"<<endl;
ch=ch+32;
cout<<"The lower case alphabet is"<<ch;
}
getch();
return 0;
}
