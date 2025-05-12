#include<iostream>

using namespace std;

void cal(){
	
	float a,b,c,e,f;
	int d;
	char yes='y';
	
	cout<<"Enter 1, 2, 3, 4, 5: \n";
	cout<<"1. Add \n";
	cout<<"2. Sub \n";
	cout<<"3. multiply \n";
	cout<<"4. divide \n";
	cout<<"5. square \n";
	
	cout<<"\n";
	
	while(yes=='y'||yes=='Y'){
	
	cout<<"\n";
	
	cout<<"Choise 1, 2, 3, 4, 5: \n";
	cin>>d;
	
	if(d==1||d==2||d==3||d==4){
	
	cout<<"Enter first number: \n";
	cin>>a;
	
	cout<<"Enter second number: \n";
	cin>>b;
	
	switch(d){
		case 1:
		c=a+b;
		cout<< a << " + " << b << " = " << c <<"\n";
		break;
		
		case 2:
		c=a-b;
		cout<< a << " - " << b << " = " << c <<"\n";
		break;
		
		case 3:
		c=a*b;
		cout<< a << " * " << b << " = " << c <<"\n";
		break;
		
		case 4:
		c=a/b;
		cout<< a << " / " << b << " = " << c <<"\n";
		break;
		
	}
	
}
else if(d==5){
	
	cout<<"Enter a number to get square number:";
	cin>>f;
	f *= f;
	cout<<"The square number is :"<< f <<"\n";
	
}
else{
	cout<<"Enter correct choise. \n";	
}

	cout<<"Enter(y/n):";
	cin>>yes;

	}

}

int main(){
	
	cal();
	
	return 0;
}