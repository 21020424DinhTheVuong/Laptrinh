#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    int alpha=0, number=0, special=0;
    for(int i=0;i<s.length();i++){
        if((s[i]>='A'&&s[i]<='Z')||(s[i]>='a'&& s[i]<='z')){
            alpha++;
        }else {
            if(s[i]>='0'&&s[i]<='9') number++;
            else special++;
        }
    }
    cout<<alpha<<" "<<number<<" "<<special;
}
