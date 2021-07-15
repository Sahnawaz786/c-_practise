#include<iostream>
using namespace std;
main()
{
	
	int i,n,sum=0,avg,numbers[20];
	cout<<"Enter how many numbers?"<<endl;
	cin>>n;
	cout<<"Enter the numbers"<<endl;
	for(i=0;i<n;i++)
	{
		
		cin>>numbers[i];
		
	}
	
	for(i=0;i<n;i++)
	{
		      
		sum=sum+numbers[i];
	}
	
	cout<<"Sum ="<<sum<<endl;
	cout<<"Avg ="<<sum/n<<endl;
	cout<<numbers[3];
	
}
