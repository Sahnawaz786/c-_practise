#include<iostream>
#include<string.h>
using namespace std;
int choice2=0,choice3=0,choice4=0,views=0;  //global variables
class Like{    //parent/base class
    public:
    struct details_of_creator{   //making a structure to have information in sequence
    string name;
    int age;
    int likes;
    int dislikes;
    long int Bank_AC;
    string address;
    int pincode;
    int earning;
    int Bank_Balance;
    };
    details_of_creator c1;
   Like(){ //constructor
       c1.age=0;
       c1.Bank_AC=0;
       c1.likes=0;
       c1.dislikes=0;
   }

   void Welcome_Message(); //declaring a function;
   
};
class Information_of_creator:public Like{    //derived/child class
       public:
        details_of_creator c2;
       void Infomation_taker(){
       cout<<"Enter Your name"<<endl;
       cin>>c2.name;
       cout<<"Enter Your age"<<endl;
       cin>>c2.age;
       cout<<"Enter you address"<<endl;
       cin>>c2.address;
       cout<<"Enter you PINCODE"<<endl;
   }

    int Bank_Work(){
         cout<<"Enter your Bank_AC"<<endl;
         cin>>c2.Bank_AC;
         cout<<"Enter your Bank_Balance"<<endl;
         cin>>c2.Bank_Balance;
         return 0;
    }
    Like hitesh;
    void choice(){
        cout<<"Channel Found....."<<endl;
        cout<<"What do you want to see?"<<endl;
        cout<<"1.All"<<endl;
        cout<<"2.Playlists"<<endl;
        cout<<"3.For Videos"<<endl;
        cout<<"4.Quit"<<endl;
        cout<<"Enter your choice: ";
        cin>>choice2;
        switch(choice2){
            case 1:{
                 cout<<"Golang Struct Explained!!"<<endl;
                 cout<<"Python 3 crash Course"<<endl;
                 cout<<"C++ Let's talk about it"<<endl;
                 cout<<"Which Video to play?"<<endl;
                 cin>>choice3;
                 if(choice3==1 || choice3==2 || choice3==3)
                 {
                     cout<<"Opening the video"<<endl;
                     views++;
                     cout<<"The video has "<<c1.likes<<" likes"<<endl;
                     cout<<"1.To like"<<endl;
                     cout<<"2.To dislike"<<endl;
                     cin>>choice4;
                     if(choice4==1){
                         c1.likes++;
                    }
                    else
                    c1.dislikes++;
                 }
                 cout<<"The video has "<<c1.likes<<" likes"<<endl<<"And "<<c1.dislikes<<" Dislikes"<<endl;

                break;
            }
            case 2:{
                cout<<"Enter the playlist"<<endl;
                cout<<"1.Python 3 playlist"<<endl;
                cout<<"2.Django Playlist"<<endl;
                cout<<"3.React Playlist"<<endl;
                break;
            }
            case 3:{
                cout<<"Technical Errors"<<endl;
            }
            case 4:{
                cout<<"Tnx for Using YouTube.Com"<<endl;
                break;
            }
        }
    }
};

void Like:: Welcome_Message(){
    details_of_creator c3;
    string name;
    cout<<"Welcome to YouTube.Com"<<endl;
    cout<<"What channels You want to see:"<<endl;
    getline(cin,name);
    cout<<name<<endl;
    if(name=="codewithharry" || name=="Hitesh Choudary")
    {
         Information_of_creator ch1;
         ch1.choice();
    }
    else
    {
        cout<<"Channel Not Found"<<endl;
        Welcome_Message();
    }
      
};  //making it outside the class with Scope :: operator

int main()
{
    Like youtube;
    youtube.Welcome_Message();   
    
} 