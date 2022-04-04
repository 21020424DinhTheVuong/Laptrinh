#include<iostream>
using namespace std;

const int MAX=1000;

int main(){
    int n;
    cin>>n;
    int array[MAX];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    int dem=0;
    for(int i=0;i<n/2;i++){
        if(array[i]!=array[n-i-1]){
            cout<<"Asymmetric array.";
            return 0;
        }
    }cout<<"Symmetric array.";
}
