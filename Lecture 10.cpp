#include<iostream>
using namespace std;

int main(){
	int i,j,k;
	i=0;
	j=1;
	k=8;
	
	cout<<i<<" "<<j<<" "<<k<<endl;
	j=i++;
	cout<<i<<" "<<j<<" "<<k<<endl;
	k= ++i;
	cout<<i<<" "<<j<<" "<<k<<endl;
	
	
	cout<<++i<<endl;
	cout<<i;
return 0;
	
} 
