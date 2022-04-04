#include<iostream>

using namespace std;

struct Distance{
	int inch;
	int feet;
};

int main(){
	Distance d1,d2,sum;
	cin>>d1.inch>>d1.feet>>d2.inch>>d2.feet;
	
	sum.inch=d1.inch+d2.inch;
	sum.feet=d1.feet+d2.feet;
	
	while(sum.inch>12){
		sum.inch-=12;
		sum.feet+=1;
	}
	cout<<sum.inch<<" "<< sum.feet;
}
