#include<iostream>
#include<string>

using namespace std;

int main(){
    string text;
    getline(cin,text);
    int n=text.size();
    for(int i=0;i<text.size()-3;i++){
        if(text.substr(i,4)=="Zues"){
            text.replace(i,4,"Zeus");
            
        }
        
    }
    cout<<text;
}
