#include<iostream>
using namespace std;
int main(){
    cout<<"Hello World"<<endl;
    // int a=45;
    // int b=45;
    // string ba="alam";
    // string ab="sahnawaz alam ";
    // cout<<ab+ba<<endl;
    // cout<<"The Sum of a and b is "<<a+b<<endl;

    string fname,lname;

    cout<<"Enter your firstname:";
    cin>>fname;
    cin.ignore();
    cout<<"Enter the lastname:";
    cin>>lname;
    cout<<"Your Name is "<<fname+lname<<endl;
    return 0;
}