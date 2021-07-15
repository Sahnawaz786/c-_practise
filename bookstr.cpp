#include<iostream>
using namespace std;
main()
{
	
	struct laam{                                                                                                            
		int book_model;
		float money;
		char book_name[40];
	};
	
//	laam.sahnawaz_alam={111,214.32,"Think and Grow rich"};
 
 laam alam={121,134.44,"Think and Grow Rich"};
 cout<<alam.book_name<<endl; 
 
 laam kalam={112,876.43,"Bill_gates"};
 
 cout<<kalam.book_name<<endl<<kalam.book_model<<endl<<alam.money<<endl;
	
	
}
