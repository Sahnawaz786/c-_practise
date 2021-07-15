#include<iostream>
#include<string>
using namespace std;
class Person{   //abstract Class...
    private:
    string name;
    public:
    virtual void fun()=0;  //pure virtual function...
};
class Student:public Person{
    private:
    string myname;
    public:
    void fun(){
        cout<<"My name is Alam"<<endl;
    }
};
int main(){
    Student c1;
    c1.fun();
    cout<<"Hello World"<<endl;
    return 0;
}