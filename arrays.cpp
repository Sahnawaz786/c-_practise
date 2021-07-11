#include<iostream>
#include<string>
using namespace std;
int main(){
    cout<<"Hello World!"<<endl;

    string names[3]={"Sahnawaz","Bill_gates","Sabbaj"};

    for (int i = 0; i < 3; i++)
    {
        cout<<"Your Name is: "<<names[i]<<endl;
        if(names[i]=="Sahnawaz"){
            cout<<"You have a very Good brain"<<endl;
        }
        else{
            cout<<"Na not enough to compete with alam bhai"<<endl;
        }
    }
    

    return 0;
}