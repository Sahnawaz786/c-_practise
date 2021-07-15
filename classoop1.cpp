#include<iostream>
#include<string>
using namespace std;

class Human_Details{
	public:
	string name;
	int age;
	char sex;
	private:
		string secrets;
		string aim;
		int years_to_achieve;
		public:
			void details()
			{
				cout<<"Enter your name"<<endl;
				cin>>name;
				cout<<"Enter your secrets"<<endl;
				cin>>secrets;
				cout<<"Your name is "<<name<<endl;
				cout<<"Your secrets is "<<secrets<<endl;
			}
};

main()
{
	
	Human_Details infor;
	infor.details();
	infor.aim="Rich";
	cout<<infor.aim;
	
	
}
