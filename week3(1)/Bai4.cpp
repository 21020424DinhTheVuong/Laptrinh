#include<iostream>
#include<iomanip>
#include<algorithm>
using namespace std;

const int MAX=1000;

int main(){
    int n;
    cin>>n;
    double array[MAX];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    
    double x;cin>>x;
    
    array[n]=x;
    sort(array,array+n+1);
    for(int i=0;i<=n;i++){
        cout<<fixed<<setprecision(2)<<array[i]<<" ";
    }
}
