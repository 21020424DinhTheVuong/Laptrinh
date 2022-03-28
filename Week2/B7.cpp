#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int x;
    cin>>x;
    double sum=1, oldsum=0,mu_x=1,giaithua_x=1;
    
    int i=1;
    do{
        oldsum=sum;
        mu_x*=x;
        giaithua_x*=(double)i;
        sum+=mu_x/giaithua_x;
        i++;
    }while(sum-oldsum>0.001);
    cout<<fixed<<setprecision(4)<<sum;
    return 0;
}
