#include<iostream>
int main(){
	using namespace std;
	
	int a;
	
	cout<<"Enter your marks:"<<std::endl;
	cin>>a;
	
	if(a>100){
		cout<<"GRADE:-A+";
	}
	else if(a>=90){
		cout<<"GRADE:-A";
	}
	else if(a>=80){
		cout<<"GRADE:-B+";
	}
	else if(a>=70){
		cout<<"GRADE:-B";
	}
	else if(a>=60){
		cout<<"GRADE:-C+";	
	}
	else if(a>=50){
		cout<<"GRADE:-C";	
	}
	else if(a>=40){
		cout<<"GRADE:-D";
	}
	else{
		cout<<"YOU ARE FAIL IN THIS EXAM"<<std::endl<<"TRY AGAIN NEXT TIME";
	}
	
	return 0;
	
}