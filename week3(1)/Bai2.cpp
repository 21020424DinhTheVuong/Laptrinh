#include<iostream>
#include<iomanip>
#include<algorithm>
using namespace std;
const int MAX=1000;

int main(){
    int n;
    cin>>n;
    double point[MAX];
    for(int i=0;i<n;i++){
        cin>>point[i];
    }
    
    sort(point,point+n,greater<double>());
    for(int i=0;i<n;i++){
        cout<<fixed<<setprecision(2)<<point[i]<<" ";
    }
}
