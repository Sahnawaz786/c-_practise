#include <iostream>
#include <string.h>
#include <string>
using namespace std;

class parent
{
public:
    //making some variables

    int age;
    string name;

    void behavior()
    {
        cout << "Parents behaviour is quite gentel" << endl;
    }

    void setageandname()
    {
        cout << "Enter your age:" << endl;
        cin >> age;
        //   cin.ignore();
        cout << "Enter your name:" << endl;
        cin.ignore();
        getline(cin, name);
    }

    void showinformation()
    {
        cout << "Welcome!!" << endl;
        cout << "Your age is " << age << endl;
        cout << "Your name is " << name << endl;
    }
};

class children : public parent
{

public:
    void helloworld()
    {
        cout << "Hello World" << endl;
    }

    void seting(string aname, int aage)
    {
        name = aname;
        age = aage;
        cout << "The age is " << age << endl;
        cout << "The name is " << name << endl;
    }
};

int main()
{
    // cout<<"Hello World"<<endl;
    parent alam;
    // alam.setageandname();
    // alam.showinformation();

    children kalam;

    kalam.seting("sahnawaz alam", 16);
    return 0;
}