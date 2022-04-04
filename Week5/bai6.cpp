#include<iostream>

using namespace std;

struct Complex{
	int x;
	int y;
/*	Complex( int _x, int _y){
		int x=_x;
		int y=_y;
	}
	*/
	
	
};

void add(Complex a, Complex b){
		if( a.x+b.x==0) {
			if(a.y+b.y==0) cout<<0;
			else if(a.y+b.y >0) cout<< a.y+b.y <<"i";
			else cout<< "-" << a.y+b.y << "i";
			
		}
		else {
			if( a.y+b.y ==0) cout<< a.x+b.x;
			else if(a.y+b.y >0) cout<< a.x+b.x << "+" << a.y +b.y<<"i";
			else cout<< a.x + b.x  << a.y+b.y<<"i";
 		}
	}
	
void subtract(Complex a, Complex b){
	if( a.x-b.x==0) {
			if(a.y-b.y==0) cout<<0;
			else if(a.y-b.y >0) cout<< a.y-b.y <<"i";
			else cout << a.y-b.y << "i";
		}
		else {
			if( a.y-b.y ==0) cout<< a.x-b.x;
			else if(a.y-b.y >0) cout<< a.x-b.x << "+" << a.y - b.y<<"i";
			else cout<< a.x - b.x  << a.y-b.y<<"i";
 		}
}

void multi(Complex a, Complex b){
	if(a.x*b.x - a.y*b.y==0){
		if(a.x*b.y + a.y*b.x==0) cout<<0;
		else  if(a.x*b.y + a.y*b.x>0)cout<<a.x*b.y+a.y*b.x<<"i";
		else cout<<a.x*b.y + a.y*b.x<<"i";
	}
	else{
		if(a.x*b.y+a.y*b.x==0) cout<<a.x*b.x - a.y*b.y;
		else if(a.x*b.y+a.y*b.x >0) cout<<a.x*b.x - a.y*b.y<<"+"<<a.x*b.y+a.y*b.x<<"i";
		else cout<<a.x*b.x - a.y*b.y<<a.x*b.y+a.y*b.x<<"i";
	}
}
int main(){
	Complex a,b;
	cin >> a.x>> a.y >> b.x>> b.y;
	
	add(a,b);
	cout<<endl;
	subtract(a,b);cout<<endl;
	multi(a,b);
}
