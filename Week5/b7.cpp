#include<iostream>
#include<string>

using namespace std;

struct infor{
	int no;
	string name;
	int age;
	string address;
};

void printage(infor a[], int n){
	for (int i=0;i<n;i++){
		if(a[i].age==14) cout<<a[i].name<<endl;
	}
}

void printno(infor a[], int n){
	for(int i=0;i<n;i++){
		if(a[i].no %2==0) cout<<a[i].name<<endl;
	}
}

void print(infor a[], int x){

			
		cout<<a[x].no<<" "<<a[x].name<<" "<<a[x].age<<" "<<a[x].address;
		
	
}
	

int main(){
	
	infor a[3];
	for(int i=0;i<3;i++){
		cin>>a[i].no;
		cin.ignore();
		getline(cin,a[i].name);
		
		cin>>a[i].age;
		cin.ignore();

		getline(cin,a[i].address);
	}
	
	printage(a,3);
	printno(a,3);
	
	int x;
	cin>>x;
	print(a,x-1);
}
