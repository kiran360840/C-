#include<iostream>
#include<windows.h>
#include<conio.h>

using namespace std;
class promotion{
	public:
		virtual void prom(int, int, int) = 0;
};

class employ:public promotion{
	
	private:
		string id, name, department;
		int salary, age, post;
		
	public:
		employ(string id, string name, string department, int salary, int age, int post){
			this->id = id; 
			this->name = name;
			this->salary = salary;
			this->department = department;
			this->post = post;
			setage(age, salary);
		}
		
		void setage(int age, int salary){
			if(age>60){
				cout<<"You are retired!"<<endl;
				this->age = age;
				this->salary /= 2;
			}
			else if(age < 0){
				this->age = 0;
			}
			else{
				this->age = age;
			}
		}
		
		int getage() {return age;}
		int getsalary() {return salary;}
		string getid() {return id;}
		string getname() {return name;}
		string getdepartment() {return department;}
		int getpost() {return post;}
		
		void prom(int age, int salary, int post) override{
			if(age>35 && salary>45000 && post>1 && post<4){
				post--;
				cout<<"You are promoted to post "<<post<<"!!\n";
			}
			else{
				cout<<"Your requrement is not fullfilled to get pormotion!!\n";
			}
		}
		
		void info(){
			cout<<"____________________Employ Info____________________"<<endl;
			cout<<"Employ Id: "<<id<<endl;
			cout<<"Employ Name: "<<name<<endl;
			cout<<"Employ Department: "<<department<<endl;
			cout<<"Employ Salary: "<<salary<<endl;
			cout<<"Employ Age: "<<age<<endl;
			cout<<"Employ Post: "<<post<<endl;
			cout<<"___________________________________________________"<<endl;
		}
};

void classwork(){
	string id, name, department;
	int salary, age, post;
	
	cout<<"Enter Employ Id: ";
	cin>>id;
	
	cout<<"Enter Employ Name: ";
	getline(cin>>ws, name);
	
	cout<<"Enter Employ Age: ";
	cin>>age;
	
	cout<<"Enter Employ Department: ";
	getline(cin>>ws, department);
	
	cout<<"Enter Employ Salary: ";
	cin>>salary;
	
	cout<<"Enter your post Based on:"<<endl<<"1. Captian of department."<<endl<<"2. Lieutenant of department."<<endl<<"3. Employee of department."<<endl<<"4. Security of department."<<endl;
	cin>>post;
	
	employ one(id, name, department, salary, age, post);
	
	cout<<"\nPlease Check Your Input And Press Any Key To Continue!!"<<endl;
	getch();
	system("cls");
	
	one.info();
	one.prom(age, salary, post);
	
}

int main(){
	
	classwork();
	
	return 0;
}
