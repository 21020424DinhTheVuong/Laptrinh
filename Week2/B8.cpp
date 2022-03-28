#include<iostream>
using namespace std;
int main(){
    long long int n;
    cin>>n;
    if(n<0) n=n*-1;
    int dem=0;
    do{
        n/=10;
        dem++;
    }while(n!=0);
     cout<<dem;
    return 0;
}
