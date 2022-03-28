#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    float s=0;
    float p=(float)(a+b+c)/2;
    if(a-b<c && a+b>c && a>0 && b>0 && c>0){
        s=sqrt(p*(p-a)*(p-b)*(p-c));
        cout<<fixed<<setprecision(2)<<s;
    }else cout <<"invalid";
}
