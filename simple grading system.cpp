#include<iostream>
using namespace std;
void grading(){
	int a;
	char yes='y';
	while(yes=='y'||yes=='Y'){
	
	cout<<"Enter your marks:";
	cin>>a;
	
	if(a>=90){
		cout<<"Your grade is A+. \n";
	}
	
	else if(a>=80){
	cout<<"Your grade is A. \n";	
	}
	
	else if(a>=70){
		cout<<"Your grade is B+. \n";
	}
	
	else if(a>=60){
		cout<<"Your grade is B. \n";
	}
	
	else if(a>=50){
		cout<<"Your grade is C+. \n";
	}
	
	else if(a>=40){
		cout<<"Your grade is C. \n";
	}
	
	else if(a>=35){
		cout<<"Your grade is D. \n";
	}
	
	else{
		cout<<"Your are fail in this exam. \n";
	}
	
	cout<<"Enter(y/n):";
	cin>>yes;
	
	}
}

int main(){
	
	grading();
	
	return 0;
	
}