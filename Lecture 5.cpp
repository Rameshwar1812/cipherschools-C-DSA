#include<iostream>
using namespace std;
int main(){
	int a,b;
	int c,d;
	
	cout<<"input 2 integers a and b"<<endl;
	
	cin>>a;
	cin>>b;
	cin>>c;
	cin>>d;
	
	cout<<(a>b)&&(c>d);
	cout<<(a<b)||(c>d);
	cout<<(a>b)<<(c>d);
	
return 0;
}
