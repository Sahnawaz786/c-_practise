#include<iostream>
using namespace std;
main()
{
    int numbers[]={3,9,27};
    int alam=23;
    int *pointer;
    pointer=&alam;
    *pointer=01+1;
    cout<<alam<<endl;
    return 0;
}