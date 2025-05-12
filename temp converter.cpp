#include<iostream>
#include<string>
int main(){
	using namespace std;
	float a,result;
	char x;
	cout<<"ENTER YOUR TEMP:-"<<std::endl;
	cin>>a;
	
	cout<<"ENTER YOUR CONVERTER C , F , K :-"<<std::endl;
	cin>>a; 
	
	switch(x){
		case'c':
		result = a;
		cout<<"CELSIUS: "<<result;	
	}
	return 0;
}