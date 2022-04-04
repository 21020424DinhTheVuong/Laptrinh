#include<iostream>
#include<algorithm>
using namespace std;
const int MAX=1000;

int main(){
    int n;
    cin>>n;
    
    int array[1000];
    for(int i=0;i<n;i++){
        cin>>array[i];
        
    }
    cout<<array[0]<<" ";
    for(int i=1;i<n;i++){
        if(array[i]!=array[i-1]){
            cout<<array[i]<<" ";
        }
    }
}
