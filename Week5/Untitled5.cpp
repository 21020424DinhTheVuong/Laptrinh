#include<iostream>
#include<string>
#include<iomanip>

using namespace std;

struct Mark{
	int no;
	string name;
	double chemistry, math, physic;
};

int main(){
	Mark a[5];
	for(int i=0;i<5;i++){
		cin>>a[i].no;
		cin.ignore();
		getline(cin,a[i].name);
		cin.ignore();
		cin>>a[i].chemistry>>a[i].math>>a[i].physic;
	}
	
	double b[5];
	for(int i=0;i<5;i++){
		b[i]=(a[i].chemistry+ a[i].math + a[i].physic)/3;
		cout<<"Sinh vien thu "<<i+1<<" co diem tb la "<<fixed<<setprecision(2)<<b[i]<<endl;
	}
}
