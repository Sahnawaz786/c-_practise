#include<iostream>
using namespace std;
int main(){
    char name[40];
    int number;
    char Fn[40];
    int check=0;
    cout<<"Enter your name:- ";
    cin>>name;
    cout<<"Enter Your Father name:- ";
    cin>>Fn;
    cout<<"Enter your date/of/birth :-";
    cin>>number;
    char password[3];
    cout<<"PassWord:-"<<endl;
    cin>>password;
    for(int i=0;i<=3;i++)
    {
        if(name[i]==password[i])
        check++;
        else
        check--;
        
    }
    if(check==4)
    {
        cout<<"Opening Files"<<endl;
    }
    else
    {
        cout<<"Wrong password"<<endl;
    }
    
    return 0;
}