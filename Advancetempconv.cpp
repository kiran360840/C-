#include<iostream>

using namespace std;

void temp(){
	
	int b,c,f,k;
	char yes='y',a;
	
	while(yes=='y'||yes=='Y'){		
	
	cout<<"Enter your temp: \n";
	cin>>b;
	
	cout<<"c = celsius to fahrenheit. \n";
	cout<<"f = fahrenheit to kelvin. \n";
	cout<<"k = kelvin to celsius. \n";
	cout<<"\n";
	
	cout<<"Choise c, f, k: \n";
	cin>>a;
	
	switch(a){
		
		case 'c':
			c=(b*9/5)+32;
			cout<<"YOUR CELSIUS into FARANHITE: "<<c<<"\n";
		break;
			
		case 'f':
			f=(b-32)*5/9+273.15;
			cout<<"YOUR FARANHITE into KELVIN: "<<f<<"\n";
		break;
		
		case 'k':
			k = b - 273.15;
			cout<<"YOUR kELVIN into CELSIUS: "<<k<<"\n";
		break;
		
		default:
			cout<<"ENTER A CORRECT CHOISE."<<"\n";
	}
	
	cout<<"Enter(y/n): \n";
	cin>>yes;
}
	
}

int main(){
	
	temp();
	
	return 0;
}