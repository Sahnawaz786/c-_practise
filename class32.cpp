 #include<iostream>
 using namespace std;
 
 struct details{
 	private:
 	int bookid;
 	char book_name[50];
 	float price;
 	
 	public:
 	void input()
 	{
 	    cout<<"Welcome to Input_function"<<endl;
 	    cout<<"Enter the book_id"<<endl;
 	    cin>>bookid;
 	    cout<<"Enter the book_name"<<endl;
 	    cin>>book_name;
 	    cout<<"Enter the book_price"<<endl;
 	    cin>>price;
		if(bookid<0)
		  bookid=-bookid;
		  cout<<"The book_id = "<<bookid<<endl;	
		  cout<<"The book_name = "<<book_name<<endl;
		  cout<<"The book_price = "<<price<<endl;
	}
	
	void show()
	{
		cout<<"Welcome to the Show function"<<endl;
	}
 };

 main()
 {
 	
 	details alam;
 	alam.input();
 	
 	
 }
