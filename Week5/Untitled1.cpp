#include<iostream>
#include<string>

using namespace std;

struct student{
	int no;
	string name;
	int age;
	double mark;
};

int main(){
	student a;
	cin>>a.no;
	cin.ignore();
	getline(cin,a.name);
	
	cin>>a.age;
	cin>>a.mark;
	
	cout<<a.no<<" "<<a.name<<" "<<a.age<<" "<<a.mark;
}
