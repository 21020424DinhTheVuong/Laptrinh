#include<iostream>
#include<string>
#include<vector>

using namespace std;

struct sinhvien{
	int mssv;
	string name;
	int age;
};

int main(){
	sinhvien a[5];
	for(int i=0;i<5;i++){
		
		
		cin>>a[i].mssv;
		fflush(stdin);
		getline(cin,a[i].name);
		fflush(stdin);
		cin>>a[i].age;
	}
	cout<<a[1].mssv<<" "<<a[1].name<<" "<<a[1].age;
	
}
