#include <iostream>
#include<list>
#include<string>
using namespace std;
int parking_space = 50;
int bus = 10;
int taxi = 4;
int bike = 2;
int total_vehicle;
string name, vehicle;
int total_money, user_money;
bool vehicle_check = false;
bool is_space = true;

list <string> names_of_customer;
list <int> payment_by_customer;

string name_of_vehicles[] = {"bus", "taxi", "bike"};
int price_of_vehicles[] = {500, 300, 100};


//function to display customer_info and payment

void display_information(){
        cout<<"Customer Informations:-"<<endl;
        for (auto i:names_of_customer)
        {
            cout<<i<<endl;
        }
        cout<<endl;
        for(auto j:payment_by_customer){
              cout<<"Payment:-"<<j<<endl;
        }
        
}


//remaing information

void remaining_info()
{
    cout << "Left parking space is: " << parking_space << endl;
    cout << "Income collectd: " << total_money << endl;
    cout << "Total number of vehicle currently: " << total_vehicle << endl;
}

//function for checking space
void check_status()
{
    if (parking_space != 0)
    {
        is_space = true;
    }
    else
    {
        is_space = false;
        cout << "Parking space is full sorry!" << endl;
    }
}

//function to check vehicle type
void vehicle_checker(string vehicle)
{
    for (int i = 0; i < 3; i++)
    {
        if (vehicle == name_of_vehicles[i])
        {
            vehicle_check = true;
            break;
        }
        else
        {
            vehicle_check = false;
        }
    }
}

//to display the types of vehicles
void vehicles_types()
{
    cout << "The list of vehicle and prices are:" << endl;

    for (int i = 0; i < 3; i++)
    {
        cout << name_of_vehicles[i] << " Rate is: " << price_of_vehicles[i] << endl;
    }
}

//function to check the money

void check_money(int user_money)
{
    if (vehicle == "bus" && user_money == 500 && parking_space >= 10)
    {
        cout << "pls park your " << vehicle << " Carefully" << endl;
        total_money += user_money;
        parking_space -= bus;
        total_vehicle += 1;
    }
    else if (vehicle == "taxi" && user_money == 300 && parking_space >= 4)
    {
        cout << "pls park your " << vehicle << " Carefully" << endl;
        total_money += user_money;
        parking_space -= taxi;
        total_vehicle += 1;
    }
    else if (vehicle == "bike" && user_money == 100 && parking_space >= 2)
    {
        cout << "pls park your " << vehicle << " Carefully" << endl;
        total_money += user_money;
        parking_space -= bike;
        total_vehicle += 1;
    }
    else
    {
        cout << "Sorry something Went wrong" << endl;
    }
}

//to accept the money from the customer
void transfer_money()
{
    if (vehicle_check == true)
    {
        cout << "Pls transfer the money: ";
        cin >> user_money;
        check_money(user_money);
    }
}

void customer_data()
{
    cout << "Enter your Name: ";
    cin >> name;
    cout << "Enter the type of vehicle: ";
    cin >> vehicle;
    vehicle_checker(vehicle);
    transfer_money();
    names_of_customer.push_back(name);
    payment_by_customer.push_back(user_money);

}
int main()
{
    string password_to_exit;
    cout << "\t\t\t\tWelcome to Bijni_parking" << endl;

    while (parking_space != 0)
    {
        vehicles_types();
        check_status();
        customer_data();
        cout<<endl;
        remaining_info();
        cout<<endl<<endl;
    }
    display_information();
    cout<<endl;
    cout<<"Parking space is full"<<endl;
    cout << "pls enter the password to quit the software: ";
    cin >> password_to_exit;

    if (password_to_exit == "alam5827")
    {
        cout << "succesfully logged out" << endl;
    }

    return 0;
}