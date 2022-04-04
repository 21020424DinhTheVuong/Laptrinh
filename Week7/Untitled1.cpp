#include<iostream>
#include<cmath>

using namespace std;

void update(int *a, int *b){
	if(*a > *b){
		*a=*a + *b;
		*b=*a - *b - *b;
	}
	else {
		*a=*a + *b;
		*b=*b+*b-*a;
	}
	
}

int main(){
	int a,b;
	cin>>a>>b;
	int *p1=&a, *p2=&b;
	update(p1, p2);
	cout<<a<<" "<<b;
}
