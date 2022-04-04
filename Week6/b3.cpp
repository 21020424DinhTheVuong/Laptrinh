#include<iostream>
#include<map>

using namespace std;

int main(){
	int n;
	cin>>n;
	int a[n];
	
	map<int, int> mp;
	
	for(int i=0;i<n;i++){
		cin>>a[i];
		mp[a[i]]++;
	}
	
	for(map<int, int>::iterator it = mp.begin(); it!=mp.end();it++){
		if(it->second!=1){
			cout<<it->first<<" "<< it->second<<endl;
		}
	}
}
