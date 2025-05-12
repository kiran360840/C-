#include<iostream>
#include<vector>
int main(){
	using namespace std;
	int a;
	cout<<"Enter your age:-"<<endl;
	cin>>a;
	if(a>=18){
	cout<<"YOU ARE SELECTED FOT VOTE";	
	}
	else if(a<=0){
	cout<<"YOU ARE NOT BORN IN THIS WORLD";
	}
	else{
		cout<<"YOU ARE NOT SELECTED FOT VOTE";
	}
	return 0;
}