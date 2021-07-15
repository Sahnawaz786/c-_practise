#include<iostream>
using namespace std;
main()
{
	
	int age,fixed=100;
	cout<<"Welcome to the age Detecter"<<endl;
	cin>>age;
	if(age>100)
	{
		cout<<"You are the oldest person alive on earth"<<endl;
		cout<<"You have already passed the age of 100"<<endl;
		
	}
	
	else if(age<1)
	{
		cout<<"You are not born yet"<<endl;
	}
	
	
	
	else if(age>=5 || age<=99)
	{
		cout<<"You Current age is ="<<age<<endl;
		fixed-=age;
		cout<<"You will be 100 yrs old after "<<fixed<<" years"<<endl;
	}
	
	else
	{
		cout<<"Invalid age"<<endl;
	}
	
	return 0;
	
	
	
}
