#include<iostream>
#include<string.h>
using namespace std;

class details{
	public:
		int age;
		string name;
	public:
		details(int iage)
		{
			cout<<"Constructor with age as input"<<endl;
			age=iage;
			name="Sony";
		}
		
		details(string iname)
		{
			cout<<"Constructors with name as input"<<endl;
			age=14;
			name=iname;
		}
		
		void display()
		{
			cout<<name<<endl<<age<<endl;
		}
};

main()
{
	 
	 
	 details sandy(13);
	 sandy.display();
	 cout<<endl;
	 
	 details mandy("Sabaz");
	 mandy.display();    
	 return 0; 
}
