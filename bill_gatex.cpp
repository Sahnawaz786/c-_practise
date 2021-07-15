#include<iostream>
using namespace std;
main()
{
	int k;
	cout<<"Welcome to the Traffic World"<<endl;
	cout<<"1.For those who have Ignore the traffics"<<endl;
	cout<<"Enter your choice"<<endl;
	cin>>k;
	switch(k){
		case 1:{
			int money,fine,time,date,number;
			cout<<"So,Welcome to the Traffic World"<<endl;
			cout<<endl;
			cout<<"Enter the Vehicle number:"<<endl;
			cin>>number;
			cout<<"Enter the time:"<<endl;
			cin>>time;
			cout<<"Enter the fine:"<<endl;
			cin>>fine;
			cout<<"Enter the date:"<<endl;
			cin>>date;
			cout<<"How much money you will charge including GST"<<endl;
			cin>>money;
			cout<<"Ok the data has been saved....."<<endl;\
			cout<<"The car number is "<<number<<endl;
			cout<<"The fine is "<<fine<<endl;
			cout<<"The date is "<<date<<endl;
			cout<<"The time is "<<time<<endl;
			cout<<"The money is "<<money<<endl;
			break;
		}
	}
	
}
