#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    const int MAX_N=1000;
    double arr[MAX_N];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        
    }
    for(int i=n-1;i>=0;i--){
        cout<<fixed<<setprecision(2)<<arr[i]<<" ";
    }
}
