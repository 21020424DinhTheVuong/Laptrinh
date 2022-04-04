#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    
    cin.ignore();
    
    int k=0;
    while(s[k]==' '){
        k++;
    }
    
    for(int i=k;i<s.length();i++){
        if(s[i]==' '&&s[i+1]==' '){
            s.erase(s.begin()+i);
            i--;
        }
    }
    cout<<s;
}
