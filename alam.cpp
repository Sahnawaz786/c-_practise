#include<iostream>
using namespace std;
main()
{
    int numbers[]={3,9,27};
    for(int i=0;i<=2;i++)
    {
        numbers[i]*=3;
        cout<<numbers[i]<<endl;
    }
    return 0;
}