#include<iostream>

using namespace std;

struct infor{
	string name;
	int num;
	int balance;
};

void balanceLess200(infor a[], int n){
	for(int i=0;i<n;i++){
		if(a[i].balance < 200) cout<< a[i].name<<endl;
	}
}

void addBalance(infor a[], int n){
	for(int i=0;i<n;i++){
		if(a[i].balance > 1000) {
			a[i].balance+=100;
			cout<<a[i].balance<<endl;
	}
}
}
int main(){
	int n;
	cin>>n;
	cin.ignore();
	infor a[n];
	
	for(int i=0;i<n;i++){
		getline(cin,a[i].name);
		cin>>a[i].num;
		cin>>a[i].balance;
		cin.ignore();
	}
	
	cout<<endl<<endl;
	balanceLess200(a,n);
	
	
	addBalance(a,n);
}
