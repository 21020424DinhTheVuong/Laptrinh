#include<iostream>

using namespace std;

struct employee{
	string name;
	int salary;
	int hour;
};

void input(employee a[], int n){
	for(int i=0;i<n;i++){
		getline(cin,a[i].name);
		cin>>a[i].salary;
		cin>>a[i].hour;
		cin.ignore();
	}
}

void IncreaseSalary(employee a[], int n){
	for(int i=0;i<n;i++){
		if(a[i].hour >= 12) a[i].salary+=150;
		else if(a[i].hour >= 10) a[i].salary+=100;
		else if(a[i].hour >= 8) a[i].salary+=50;
	}
}

void print(employee a[], int n){
	for(int i=0;i<n;i++){
		cout<< a[i].name<<": "<<a[i].salary<<endl;
	}
}

int main(){
	employee a[3];
	
	input(a,3);
	
	IncreaseSalary(a,3);
	
	print(a,3);
}
