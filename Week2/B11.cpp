#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
const int MAX=1000;
int main(){
    int n;
    cin>>n;
    double arr[MAX];
    double sum=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    sum/=n;
    double product=0;
    for(int i=0;i<n;i++){
        product+=(sum-arr[i])*(sum-arr[i]);
    }
    cout<<fixed<<setprecision(2)<<product/n;
    
}

