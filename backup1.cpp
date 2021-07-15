#include<iostream>
#include<string.h>
using namespace std;

    //Same here
    class udhar{
    public:
    struct details{
        int customerId=0;
        int customerUdhar=0;
        string Customername;
    }
    int customerId[10];
    int customerUdhar[10];
    string duedate;
    int counter;
    int counter2;
    public:
    
    udhar(){    //defining the constructor   
        counter=0;
        counter2=0;
    }

    void setId(){
        cout<<"Enter the Id of the customer: ";
        cin>>customerId[counter];
        cout<<endl;
    }
    void setudhar();
    int adder();
    int adder2();
};

void udhar ::setudhar(){
  cout<<"Enter the Amount :";
  cin>>customerUdhar[counter2];
}

int udhar:: adder(){
     counter++;
     return 0;
}

int udhar:: adder2(){
    counter2++;
    return 0;
}

int main(){
    int i=0,m=0,id;
    string name[10]; 
    int choice;
    udhar PID;
    while(true){
    cout<<"Welcome to the KhataBook App"<<endl;
    cout<<"\t1.To Add People"<<endl;
    cout<<"\t2.To send Remainder"<<endl;
    cout<<"\t3.To show People Udhar"<<endl;
    cout<<"\t4.To EXIT"<<endl;
    cout<<"Pls Enter any of the Following"<<endl;
    cin>>choice;
    switch (choice)
    {
    case 1:{
       cout<<"How many People you want to Register"<<endl;
       cin>>m;
       for(int k=1;k<=m;k++){
        cout<<"Enter the  Name of the Customer: ";
        cin>>name[i];
        cout<<"Enter the ID of the person: ";
        cin>>PID.customerId[i];
        cout<<"Enter the Udhar taken: ";
        cin>>PID.customerUdhar[i];
        i++;
        }
        break;
    }
    case 2:{
        cout<<"Enter the Id of the Customer: ";
        cin>>id;
        for(int i=0;i<=9;i++){
        if(id==PID.customerId[i])
        {
            cout<<"The Task is on the Way "<<endl;
            cout<<"The Customer ID is "<<PID.customerId[i];
            cout<<"The Udhar"
        
        }
        }
        break;
    }

    default:
    cout<<"Something Went Wrong..."<<endl;
    break;
    }
    if(choice==191)
    break;
    }
    return 0;
}