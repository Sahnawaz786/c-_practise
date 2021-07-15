#include<iostream>
using namespace std;
main()
{
	
	struct laam{
		int age;
		char name[30];
		float price;
		char collage[45];
	};
	
   laam salam;
   salam.age=45;
   cout<<salam.age<<endl;	
   laam kalam={15,"alam",43.4};
   cout<<kalam.age<<endl;
   cout<<kalam.name<<endl;
   cout<<kalam.price<<endl;
 
   laam *alam;
   alam=&salam;
   alam->price=43.232;
   cout<<salam.price<<endl;      
	
	
}
