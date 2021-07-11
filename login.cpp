#include <iostream>
#include <string>
using namespace std;
string email_id;
string password;
void user_verification(string fname, string lname)
{
    cout << "Enter your email: ";
    cin >> email_id;
    cout << "Enter your password: ";
    cin >> password;
}

int main()
{
    cout << "\t\t\t\tWelcome to Google.com" << endl;
    user_verification(email_id, password); //calling the function

    while (email_id == "shanawajalam20@gmail.com" && password == "alam5827")
    {
        cout<<"Succesfully loged In!"<<endl;
        break;
    }
    
    while (email_id != "shanawajalam20@gmail.com" && password != "alam5827")
    {
        cout << "Wrong email or password!" << endl;
        user_verification(email_id, password);
        if (email_id == "shanawajalam20@gmail.com" && password == "alam5827")
        {
            cout << "Login Succesfully!" << endl;
            break;
        }
    }

    
    
    return 0;
}