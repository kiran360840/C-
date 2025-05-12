#include<iostream>

using namespace std;

void si(){
	
int p,t,r,si;

char yes='y';

while(yes=='y'||yes=='Y'){

	cout<<"This is simple intrest program.";
	
	cout<<"\n";
	
	cout<<"Enter principle: \n";
	cin>>p;
	
	cout<<"Enter time: \n";
	cin>>t;
	
	cout<<"Enter rate of intrest: \n";
	cin>>r;
	
	si=p*t*r/100;
	
	cout<<"\n";
	
	cout<<"Simple intrest: "<<si<<" \n";
	
	cout<<"\n";
	
	cout<<"Enter(y/n): \n";
	cin>>yes;
	
	}
}

int main(){
	
	si();
	
	return 0;
	
}