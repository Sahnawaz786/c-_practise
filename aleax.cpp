#include<iostream>
#include <iomanip>
#include <cstring>
using namespace std;
class name_of_the_person{
    public:
    int jump,wall,finished_line;
    string names[10]={};
    name_of_the_person(){
        jump=0;
        wall=0;
        finished_line=0;
    }

    int height_tester(int height,string name){
        if(height>=5.0 && height<=7.0){
            cout<<"Your height is Ok.."<<endl;
            for(int i=0;i<=0;i++){
                names[i]=name;
            }
            cout<<"Lets check your Weight"<<endl;
        }
        else
        {
            cout<<"You are too short/long.."<<endl;
        }
        return 0;
    }
    int weight_tester(int weight){
        if(weight>=45 && weight<=80){
            cout<<"Your weight is Perfect"<<endl;
            cout<<"pls Join the game "<<names[0]<<endl;
        }
        else{
            cout<<"Your weight is too less/more.."<<endl;
            cout<<"Sorry But you Can't participate"<<endl;
        }
        return 0;
    }

    void maker(){
    float height,weight;
    string name;
    name_of_the_person p1;
    cout<<"Welcome to the Sports"<<endl;
    cout<<"\t\tChecking your Physical Health"<<endl;
    cout<<"Enter your name"<<endl;
    cin>>name;
    cout<<"Enter your height"<<endl;
    cin>>height;
    p1.height_tester(height,name);
    cout<<"Enter the weight"<<endl;
    cin>>weight;
    p1.weight_tester(weight);
    }
};
int jump_the_wall(float,float);
int main(){
    name_of_the_person c1;
    c1.maker();
    
    return 0;
}
int jump_the_wall(float weight,float height){
    cout<<"Welcome to the Jump game.."<<endl;
    if(weight>=100 && height<=5.0){

    }
    return 0;
}