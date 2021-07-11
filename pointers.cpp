#include<iostream>
using namespace std;
int main(){
    cout<<"Pointers"<<endl;
    int array[5]={1,2,3,4,5};
    int *ptr;
    for (int i = 0; i < 5; i++)
    {
        ptr=&array[i];
        cout<<ptr<<endl;
    }

    cout<<endl<<endl;

    cout<<array<<endl;
    
    return 0;
}