#include<iostream>
using namespace std;

int main(){
    int total,totallegs;int dem=0;
    cin>>total>>totallegs;
    bool flag=false;
    for(int numchicken=0;numchicken<=totallegs/2;numchicken++){
        if(numchicken*2+(total-numchicken)*4==totallegs){
            flag=true;
            dem=numchicken;
        }
    } if(flag==true) cout<<"chicken = "<<dem<<", dog = "<<total-dem;
    else cout<<"invalid";
}
