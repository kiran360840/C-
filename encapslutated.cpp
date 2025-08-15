#include<iostream>
#include<windows.h>
using namespace std;

class enc{
  private:
  string fname, lname;
  int age;
  string address;
  
  public:
	enc(string fname, string lname, int age, string address){
		this->fname = fname;
		this->lname = lname;
		setage(age);
		this->address = address;
	}
	
	void setage(int age){
		if(age>=0){
			this->age = age;
		}
		else{
			this->age = 0;
		}
	}
	string getfname() {return fname;}
  
	string getlname() {return lname;}
  
	int getage() {return age;}
  
	string getaddress() {return address;}
  
	void dis(){
      cout<<"=====================info=====================\n";
      cout<<"Your Full Name: "<<fname<<" "<<lname<<endl;
      cout<<"Your Age: "<<age<<endl;
      cout<<"Your Address: "<<address<<endl;
      cout<<"==============================================\n";
  }
  
};
int main(){
    string fname, lname, address;
    int age;
    
    cout<<"Enter Your First Name: ";
    cin>>fname;
    
    cout<<"Enter Your Last Name: ";
    cin>>lname;
    
    cout<<"Enter Your Age: ";
    cin>>age;
    
    cout<<"Enter Your Address: ";
    cin>>address;
    
    cout<<"Please Wait for 5sec...";
    sleep(5);
    system("cls");
    
    enc one = enc(fname, lname, age, address);
    one.dis();
    
    return 0;
}