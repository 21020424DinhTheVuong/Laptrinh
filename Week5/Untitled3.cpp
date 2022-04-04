#include<iostream>
#include<string>
#include<vector>

using namespace std;

struct sinhvien{
	int no;
	string name;
	int age;
	string address;
	double mark;
};

int main(){
	sinhvien a[15];
	for(int i=0;i<15;i++){
		
		
		cin>>a[i].no;
		fflush(stdin);
		getline(cin,a[i].name);
		fflush(stdin);
		cin>>a[i].age;
		getline(cin,a[i].address);
		fflush(stdin);
		cin>>a[i].mark;
	}
	for(int i=0;i<15;i++){
		cout<<a[i].no<<" "<<a[i].name<<" "<<a[i].address<<" "<<a[i].mark;
		cout<<endl;
	}
	
}
