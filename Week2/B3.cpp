#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int lower,upper;
    cin>>lower>>upper;
    for(int i=sqrt(lower);i<=sqrt(upper);i++){
    	if(i*i>=lower)
        cout<<i*i<<" ";
    }
}
