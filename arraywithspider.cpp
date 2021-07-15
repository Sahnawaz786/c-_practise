#include<iostream>
using namespace std;
main()
{
	
	struct comics{
		char name[20];
	    float money;
	    int id;
	    int GST;
	};
	
	comics alam={"Spider-man",140.23,121,100123};
	comics kalam;
	comics *st;
	st=&kalam;
	kalam.money=887.43;
	st->id=123;
	cout<<kalam.id<<endl;
	
	
}
