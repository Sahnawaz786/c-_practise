#include<iostream>
using namespace std;

class User{
    public:
    int a=0;
    void seta(int x){
         a=x;
         cout<<"The Value of a is "<<a<<endl;
    }
};

class Messer:public User{
    public:
      void excessUser(){
          cout<<a<<endl;
      }
};

int main(){
    cout<<"Hello World1"<<endl;
    User sahnawaz;
    Messer alam;
    sahnawaz.seta(1000);
    alam.excessUser();
    return 0;
}