#include<iostream>
#include<vector>

using namespace std;

int main(){
	int n;
	cin>>n;
	
	vector<int> a;
	for(int i=0;i<n;i++){
		int x;cin>>x;
		a.push_back(x);
	}
	
	int q;cin>>q;
	for(int i=0;i<q;i++){
		int y;cin>>y;
		for(int j=0;j<n;j++){
			if(y==a[j]){
				cout<<"YES-"<<j+1;
				break;
			}else {
				if(a[j]>y) {
					cout<<"NO-"<<j+1;
					break;
				}
				
			}
		}
		
	}
}
