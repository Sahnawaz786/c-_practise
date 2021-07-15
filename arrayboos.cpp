#include<iostream>
using namespace std;
void show(int [],int);
main()
{
  int numbers[]={1,2,3,4,5};
  int length=5 ;	
  cout<<"Welcome to the C++ programing"<<endl;
  show(numbers,length);
  cout<<numbers[4];
}

void show(int numbers[],int length){
	for(int counter=0;counter<length;counter++){
	cout<<numbers[counter]<<endl;
}
}
