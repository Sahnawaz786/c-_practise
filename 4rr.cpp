#include<iostream>
#include<string>
using namespace std;
class rich{
	public:
	string name;
	void info()
	{
		cout<<"1.Sahnawaz Alam"<<endl;
		cout<<"2.Bill_gates"<<endl;
		cout<<"3.Jeff_Bezos"<<endl;
		cout<<"4.Warren_buffet"<<endl;
		cout<<"5.Mark_Zuckerberg"<<endl;
		cout<<"6.Larry_Page"<<endl;
		cout<<"7.Surgen_Brain"<<endl;
		cout<<"8.Mukesh_Ambani"<<endl;
		cout<<"9.Unknown.."<<endl;
		cout<<"10.Unknown"<<endl;
	}
};

main()
{
	int choice,choice1,choice3;
	cout<<"www.WorldRichestperson.com"<<endl;
    cout<<"1.Top 10 richest person in the World"<<endl;
    cout<<"2.For specific person details"<<endl;
    cout<<"Enter your Choice"<<endl;
    cin>>choice;
    switch(choice){
    	case 1:{
    		cout<<"Welcome to WorldRichestperson.com"<<endl;
    		cout<<"Here is the List of the richest person in the World"<<endl;
    		rich alam;
    		alam.info();
			break;
		}
	}
}
