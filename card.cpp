#include<iostream>
using namespace std;
main(){
    char name[40],xname[40];
    for(int i=0;i<=3;i++){
        cin>>name[i];
    }
    cout<<"Xname one"<<endl;
    for(int j=0;j<=3;j++){
        cin>>xname[j];
    }
    for(int x=0;x<=3;x++){
        if(name[x]==xname[x])
        {
            cout<<x<<"Matched"<<endl;
        }
        else
        {
            cout<<"OOOOOPS"<<endl;
        }
    }
    cout<<name<<endl;
    cout<<xname<<endl;
    if(name==xname){
        cout<<"Aadhar Card Password Verified"<<endl;
    }
    else{
        cout<<"Something went wrong"<<endl;
    }
    return 0;
}