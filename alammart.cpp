#include<iostream>
#include<list>
#include<fstream>
using namespace std;
int main(){

    ofstream users("users.txt");

    int opt1,opt2,opt3=2,items_selected=0;
    string user_name;

    string items[]={"1.For Chips","2.For Horlicks","3.For Harpic"};

    int prices[]={20,398,80};

    //creating a list for storing the users name

    list <string> customers;

    // cout<<"\t\t\t\tHello World"<<endl<<endl;
    cout<<"\t\t\t\tWelcome to AlamMart.com"<<endl<<endl;
    cout<<"Pls Enter your username"<<endl;
    cin>>user_name;
    customers.push_back(user_name);
    users<<"My Customers"<<endl<<endl;
    users<<user_name<<endl;

    cout<<"Pls have a choice"<<endl;
    cout<<"1.For shopping"<<endl;
    cout<<"2.Quit Application"<<endl;

    cout<<"Pls Enter a Choice:";
    cin>>opt1;

    switch (opt1)
    {
    case 1:
        {
            cout<<"Pls select the category:"<<endl;
            cout<<"1.Food Items"<<endl<<"2.Non-food items"<<endl;
            cin>>opt2;
            if(opt2==1){
                cout<<"Here are the items:"<<endl;
                for (int i = 0; i <= 2; i++)
                {
                    cout<<items[i]<<" price is "<<prices[i]<<endl;
                }
                cout<<"Pls press 0 to quit"<<endl;
                while(opt3!=0){
                    cout<<"Pls select the items:";
                    cin>>opt3;
                    if(opt3>=1 && opt3<=3){
                        cout<<"Items selected succesfully!"<<endl;
                        items_selected++;
                    }
                    else{
                        while (opt3<=0 && opt3>3)  //loop for wrong selected items
                        {
                            cout<<"Pls select a valid items!"<<endl;
                            
                        }
                        
                        
                    }
                }
     
            }
            break;

        }
    
    default:
        break;
    }
    return 0;
}