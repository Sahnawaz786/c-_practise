#include<iostream>
using namespace std;
main()
{
	char name[50];
	int i,n;
	cout<<"What is the size of your name:"<<endl;
	cin>>n;
	cout<<"Enter the name:"<<endl;
	for(i=0;i<=n;i++)
	{
		cin>>name[i];
	}
	
	cout<<"The Cap-Form of the name is:"<<endl;
	for(i=0;i<=n;i++)
	{
		name[i]=name[i]-32;
	}
	cout<<name<<endl;
	return 0;
}
