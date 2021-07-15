#include<iostream>
#include<string>
using namespace std;

class Details_human{
	public:
		string first_name;
		string last_name;
		string full_name;
		int age;
		private:
			char my_secrets_1[130];
			char my_secrets_2[130];
			public:
				void information()
				{
					Details_human alam;
					alam.first_name="Sahnawaz";
					alam.last_name=" alam";
					alam.full_name=alam.first_name+alam.last_name;
					alam.age=15;
					cout<<"My name is "<<alam.full_name<<endl;
					cout<<"My age is "<<alam.age;
					cout<<endl;
				}
				
				int my_dark_secrets()
				{
					Details_human secrets;
					cout<<"Enter your "<<1<<" Secret:"<<endl;
					cin>>secrets.my_secrets_1;
					cout<<secrets.my_secrets_1<<endl;
				    cout<<"We are going to keep this as a secrets"<<endl;
				}
};

main()
{
	
	Details_human info;
	info.information();
	info.my_dark_secrets();
	
	
	
}
