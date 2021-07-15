#include<iostream>
#include<string.h>
using namespace std;
int main(){
    int marks[2][5]={
        {10,11,12,13,14},
        {16,17,18,19,20}
    };
    cout<<marks[0][3]*marks[1][0]<<endl;
    cout<<marks[0][0]<<endl;
    //arrays about words....
    //code to input 2-dimensional array of char...
    char names[2][20]={
        {"Sajjad Alam"},
        {"Sahanwaz Alam"}
    };
    cout<<names[0]<<endl;

    //arrays of string
    string title[2][9]={
        {"Alam","Kalam","Salam","malam","salam2"},
        {"khan","Roy","Mondol","alam","MynameisKhan"}
    };

    cout<<title[1][4]<<endl;
    cout<<title[0][3]<<endl;
    return 0;
}