#include<iostream>
#include<array>         
using namespace std;
int main(){
    array <int,4>alam {1,2,3,4};
    cout<<alam.at(1)<<endl;
    cout<<alam.front()<<endl;
    cout<<alam.empty()<<endl;
    return 0;
}