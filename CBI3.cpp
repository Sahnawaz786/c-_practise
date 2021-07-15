#include<iostream>
using namespace std;
main()
{
	int choice,choice2,choice3,choice4,pin,pin1=6611,Balance=0,slip;
	cout<<"Central Bank Of India"<<endl;
	cout<<"              Here the options:-                       "<<endl;
	while (true){
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
				if(choice3<Balance){
				if(choice3>=500 && choice3<=5000)
				{
				cout<<"Enter the PIN"<<endl;
				cin>>pin;
				if(pin==pin1)
				{
				if(choice3<=Balance)
				{
					cout<<"Pls wait While the transaction is Completed"<<endl;
					Balance=Balance-choice3;
					cout<<"The Remaining Balance = "<<Balance<<endl;
				}
			    }
				cout<<"Do you want the slip"<<endl;
				cout<<"1.Yes"<<endl;
				cout<<"2.No thnx"<<endl;
				cin>>slip;
				if(slip==1)
				{
					cout<<"Name:-Sahnawaz_alam"<<endl;
					cout<<"Amount taken ="<<choice3<<endl;
					cout<<"Reaming Balance ="<<Balance<<endl;
					cout<<"BANK::--CBI"<<endl<<endl;
					cout<<"Thanks for Using our Atm"<<endl<<"Pls VISIT AGAIN"<<endl;
				}
				else
				cout<<"Thanks for using Our ATM"<<endl<<"Team::-SBI"<<endl;
			}
			else
			cout<<"The PIN is Not Correct"<<endl;
				
			   } 
			   else if(choice3<500 || choice3>5000)
			   {
			   	cout<<"Max-Amount=5000 & Min-Amount=500"<<endl;
			   	cout<<"Quiting.pls restart it again"<<endl;
			   }
			   else
			   cout<<"You Dont have enough Money"<<endl;
				
			}
			if(choice2==2)
			{
				cout<<"Name:-Sahnawaz_alam"<<endl;
				cout<<"The Balance = "<<Balance<<endl;
				cout<<"BANK::--CBI"<<endl<<endl;
				cout<<"Thanks for Using our Atm"<<endl<<"Pls VISIT AGAIN"<<endl;
				
				cout<<"Do you want the slip"<<endl;
				cout<<"1.Yes"<<endl;
				cout<<"2.No thnx"<<endl;
				cin>>slip;
				if(slip==1)
				{
					cout<<"Name:-Sahnawaz_alam"<<endl;
					cout<<"BANK::--CBI"<<endl<<endl;
					cout<<"Thanks for Using our Atm"<<endl<<"Pls VISIT AGAIN"<<endl;
				}
				else
				cout<<"Thanks for using Our ATM"<<endl<<"Team::-SBI"<<endl;
			}
			if(choice2==3)
			{
				cout<<"Enter the amount"<<endl;
				cin>>choice3;
				cout<<"Enter the PIN"<<endl;
				cin>>pin;
				if(pin==pin1)
				{
				Balance=Balance+choice3;
				cout<<"The New Balance ="<<Balance;
				cout<<"Name:-Sahnawaz_alam"<<endl;
				cout<<"BANK::--CBI"<<endl<<endl;
				cout<<"Thanks for Using our Atm"<<endl<<"Pls VISIT AGAIN"<<endl;
			    }
			}
			if(choice2==4)
			{
				cout<<"Name:-Sahnawaz_alam"<<endl;
			    cout<<"Bank-Balance = "<<Balance<<endl;
			    cout<<"Address:-Gerukabari,P.o-Goraimari,Dist-Bongaigoan,Assam,Pin-783390"<<endl;
			    cout<<"BANK::--CBI"<<endl<<endl;
				cout<<"Thanks for Using our Atm"<<endl<<"Pls VISIT AGAIN"<<endl;
			}
			if(choice2==5)
			{
				cout<<"Pls Enter your Old pin"<<endl;
				cin>>pin;
				if(pin==pin1)
				{
					cout<<"Ok.Pls Enter your new PIN"<<endl;
					cin>>choice4;
					if(choice4)
					cout<<"Your New Pin:-"<<choice4<<endl;
					cout<<"Changing Your PIN"<<endl;
					pin1=0+choice4;
					cout<<"Succesfully changed....."<<endl;
				}
				cout<<endl;
				cout<<"Name:-Sahnawaz_alam"<<endl;
			    cout<<"Bank-Balance = "<<Balance<<endl;
			    cout<<"Address:-Gerukabari,P.o-Goraimari,Dist-Bongaigoan,Assam,Pin-783390"<<endl;
			    cout<<"BANK::--CBI"<<endl<<endl;
				cout<<"Thanks for Using our Atm"<<endl<<"Pls VISIT AGAIN"<<endl;
			}
			if(choice2==6)
		    {
		        cout<<"BANK::--CBI"<<endl<<endl;
				cout<<"Thanks for Using our Atm"<<endl<<"Pls VISIT AGAIN"<<endl;	
			}
			
			break;
		}
		case 2:{
		        cout<<"BANK::--CBI"<<endl<<endl;
				cout<<"Thanks for Using our Atm"<<endl<<"Pls VISIT AGAIN"<<endl;
			break;
		}
		default:
		cout<<"Pls Enter a Valid Option"<<endl;
		cout<<"BANK::--CBI"<<endl<<endl;
		cout<<"Thanks for Using our Atm"<<endl<<"Pls VISIT AGAIN"<<endl;
	}
	
	if(choice==2)
	break;
   }

   

}
