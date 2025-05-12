#include<iostream>
#include<string.h>

using namespace std;
using std::string;

//this is calss.
//class - describe the structure.
//class is also known as structure or you can say that structure is class of non object owrented programing language.
//data member - data members is a variable of class.

class username{
	public:
	string first;
	string last;
	int age;
	string addresh;
	
	void fullname(){
		cout<<"\n--------------------------------------------\n";
		cout<<"\n";
		cout<<"Your full name is: "<<first<<" "<<last<<endl;
		cout<<"Your age is: "<<age<<endl;
		cout<<"Your Address is: "<<addresh<<endl;
		cout<<"\n--------------------------------------------\n";
		
	}
	
};

int main(){
	
	string namef, namel, addresh1;
	int age1;
	
	cout<<"Enter a first name: ";
	cin>>namef;
	
	cout<<"Enter a last name: ";
	cin>>namel;
	
	cout<<"Enter your age: ";
	cin>>age1;
	
	cout<<"Enter your address: ";
	cin>>addresh1;
	
	//this whole thing is in bracket is object (username name; name.first=namef; name.last=namel; name.fullname();).
	//object - object is a same as variable of class that help to modify and store miltiple values and multiply data eg:
	//username name; username is class and name is object of that class.
	//insance - another name of object.
	//instantiating - creating an object from class.
	//methods - methods are also known as function.
	//function and methods are like same.
	
	username name;
	
	name.first = namef;
	name.last = namel;
	name.age = age1;
	name.addresh = addresh1;
	name.fullname();
	
	return 0;
}