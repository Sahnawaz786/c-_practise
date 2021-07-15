#include<iostream>
#include<conio.h>
using namespace std;
int alam(int [],int);
main()
{
	int numbers[]={1,2,3,4,5};
	int length=5;
	alam(numbers,length);
	cout<<*(numbers+4)<<endl;
	
}

int alam(int numbers[],int length){
	for(int counter=0;counter<length;counter++){
		cout<<numbers[counter]<<endl;
	}
}
