#include<iostream>
using namespace std;

struct alam
{
    int a,b;
    void setdata(int x,int y){
        a=x;
        b=y;
        cout<<"The Value of a is "<<a<<endl;
        cout<<"The Value of b is "<<b<<endl;
    }

    void inside(){
        cout<<"I am inside the inside function!"<<endl;
    }
};


int main(){
    cout<<"Hello World!"<<endl;
    alam p1;
    p1.setdata(3,4);
    p1.a=34;
    p1.setdata()
    return 0;
}