#include<iostream>
#include<fstream>
#include<list>
using namespace std;
int main(){
    cout<<"Hello World"<<endl;
    cout<<"My name is Sahnawaz Alam"<<endl;

    ofstream alam("alam.txt");

    alam<<"My name is sahnawaz alam"<<endl;

    alam<<"My name is Alam Bhai"<<endl;

    alam.close();

    list <string> data;

    data.push_front("Sahnawaz");
    data.push_front("Alexa");

    for(auto i:data){
        cout<<i<<endl;
    }

    
    return 0;
}