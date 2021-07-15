#include<iostream>
using namespace std;
main()
{
	int choice,choice2,choice3,choice4,pin,Balance=10000,slip;
	cout<<"Central Bank Of India"<<endl;
	cout<<"              Here the options:-                       "<<endl;
	cout<<"1.For Main-Menu"<<endl;
	cout<<"2.Exit"<<endl;
	cout<<"Enter the choice:"<<endl;
	cin>>choice;
	switch(choice){
		case 1:{
			cout<<"Welcome to the Central Bank Of India"<<endl;
			cout<<"Here are the options:-"<<endl;
			cout<<"1.To Withdraw Money"<<endl;
			cout<<"2.To check balance"<<endl;
			cout<<"3.To Deposit Money"<<endl;
			cout<<"4.Mini statement"<<endl;
			cout<<"5.change PIN"<<endl;
			cout<<"6.Exit"<<endl;
			cout<<"Pls Enter your Choice"<<endl;
			cin>>choice2;
			if(choice2==1)
			{
				cout<<"Max-Amount=5000 & Min-Amount=500"<<endl;
				cout<<"Enter the Amount"<<endl;
				cin>>choice3;
				if(choice3>=500 && choice3<=5000)
				{
				cout<<"Enter the PIN"<<endl;
				cin>>pin;
				if(pin==6611)
				{
				if(choice3<=Balance)
				{
					cout<<"Pls wait While the transaction is Completed"<<endl;
					Balance=Balance-choice3;
					cout<<"The Remaining Balance = "<<Balance;
				}
				cout<<"Do you want the slip"<<endl;
				cout<<"1.Yes"<<endl;
				cout<<"2.No thnx"<<endl;
				cin>>slip;
				if(slip==1)
				{
					cout<<"Name:-Sahnawaz_alam"<<endl;
					cout<<"Amount taken ="<<choice3;
					cout<<"Reaming Balance ="<<Balance;
					cout<<"BANK::--CBI"<<endl;
					cout<<"Thanks for Using our Atm"<<endl<<"Pls VISIT AGAIN"<<endl;
				}
				else
				cout<<"Thanks for using Our ATM"<<endl<<"Team::-SBI"<<endl;
			}
			else
			cout<<"The PIN is Not Correct"<<endl;
				
			   } 
			   else
			   cout<<"You Dont have enough Money"<<endl;
				
			}
			break;
		}
	}
	

	

}
