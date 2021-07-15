#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include<map>
#include<time.h>
using namespace std;
string selectedtanker;  //global variable...
string owner;
long int totalkm;
class tanker_management{
    public:
    //array of tips & bhara...  //by map class
    map<long int,string> tips{{12000,"Tura"},{4000,"Barpeta"},
    {2000,"Rail"},{30000,"Silchar"},{5000,"Goalpara"},{2000,"Bijni"}};
    
    
    // array to have random function on tip amount...

    long int tip_chooser[6]={12000,4000,2000,300000,5000,2000};

    //array of contractor & Vehicles...  //by map class
    map<string,string>contactor{{"AS-12C-0959","Dilwara"},
    {"AS-12D-1795","Raghu"},{"AS-23D-2121","Akbar"},{"AS-11C-7681","Mukesh"},
    {"As-12E_0987","Dilip"},{"As-18W-1234","Dilip"}};

    //array to have vehicle number to perform random function int it...

    string contactor_tankers[6]={"AS-12C-0959","AS-12D-1795","AS-23D-2121","AS-11C-7681",
    "As-12E_0987","As-18W-1234"};
    
    //array of kms of the vehicle...  //by map class
    map<string,long int>kms{{"AS-12C-0959",0},{"AS-12D-1795",0},{"AS-23D-2121",0},
    {"AS-11C-7681",0},{"As-12E-0987",0},{"As-18W-1234",0}};

    //kms per tips...
    map<string,long int>kmspertips{{"Tura",100},{"Barpeta",80},
    {"Rail",20},{"Silchar",400},{"Goalpara",175},{"Bijni",30}};

    //making pointer to select value of array...
    map<string,long int>::iterator p;
    map<long int,string>::iterator pk;
    map<string,long int>::iterator pkk;
    map<string,string>::iterator pkkk;

    int random_selector(){
       srand (time(NULL));
       int select=rand()%6;
       return select;
    }
    
   int tanker_selector(){
       int k=random_selector();
       selectedtanker=contactor_tankers[k];
       pkkk=contactor.find(selectedtanker);
       owner=pkkk->second;
       cout<<"TANKER NO:-"<<selectedtanker<<endl;
       cout<<"TANKER OWNER:-"<<owner<<endl;
       return 0;
    }
    void check_km(){
       int wq;
       p=kms.find(selectedtanker);
       if(p->second<=500){
           //giving the tips..
           int kk=random_selector();
           long int man=tip_chooser[kk];
           pk=tips.find(man);
           pkk=kmspertips.find(pk->second);
           totalkm=p->second+pkk->second;
           //cout<<pk->second<<endl;
           cout<<"TIP GIVEN:-"<<pk->second<<endl;
           cout<<"KM PER TIP:-"<<pkk->second<<" km"<<endl;
           cout<<"TOTAL BHARA:-"<<"RS:- "<<man<<endl;
           cout<<"TOTAL KM COVER BY "<<selectedtanker<<" IS "<<totalkm<<" kms"<<endl;
       }
       else
       {
           tanker_selector();
           check_km();
       }
    }
};
int main(){
    cout<<"\t\t\t\tAutomation of Tanker"<<endl;
    tanker_management t1;
    t1.tanker_selector();
    t1.check_km();
    return 0;
}