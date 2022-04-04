#include<iostream>
using namespace std;
const int MAX=1000;

int main(){
    int n;
    cin>>n;
    int array1[MAX];
    int array2[MAX];
    for(int i=0;i<n;i++){
        cin>>array1[i];
    }
    for(int i=0;i<n;i++){
        cin>>array2[i];
    }
    
    int dem=0;
    for(int i=0;i<n;i++){
        if(array1[i]==array2[i]) dem++;
    }
    if(dem==n) cout<<"YES";
    else cout<<"NO";
}
