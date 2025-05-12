#include<iostream>

using namespace std;

void vote(){
	
	int a;
	char yes='y';
	
	while(yes=='y'||yes=='Y'){
		
	cout<<"Enter your age: \n";
	cin>>a;
		
	if(a>=18){
		cout<<"Your age is eligable for vote. \n";
	}
	
	else if(a==0){
		cout<<"You are not born in this world. \n";
	}
	
	else{
		cout<<"Your are too hasty for voting. \ncome in in 18 years old. \n";
	}
	
	cout<<"Enter(y/n): \n";
	cin>>yes;
	
	}
	
}
int main(){
	
	vote();
	
	return 0;
}