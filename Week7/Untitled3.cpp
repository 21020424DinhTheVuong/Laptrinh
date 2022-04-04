#include<iostream>
#include<vector>
using namespace std;



int main(){
	int n;
	cin>>n;
	
	vector<int> num;
	
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		num.push_back(x);
	}
	int b;
	cin>>b;
	
	int a1,b1;
	cin>>a1>>b1;
	
	//num.erase(num.begin()+b-1);
	
	num.erase(num.begin()+a1-1, num.begin() +b1-1);
	for(int i=0;i<num.size();i++){
		cout<<num[i]<<" ";
	}
}
