#include<iostream>
using namespace std;

class bank_enc{
	private:
		string name, pass, email, choice;
		int bal, with_bal, dep_bal;
		
	public:
		bank(int bal, string name, string account_num, string pass,int with_bal,int dep_bal,string choice){
			this->bal = bal;
			this->name = name;
			setpass(pass, account_num);
			set_val(with_bal, dep_bal);
			this->choice = choice;
		}
		
		int getbal(){
			return bal;
		}
		string getname(){
			return name;
		}
		string getaccount_num(){
			return account_num;
		}
		string getpass(){
			return pass;
		}		
};

class bank: public bank_enc{
	public:
//		void setpass(string pass, int account_num){
//			if(pass == "kiran$@#001" && email == "kiran8@gmail.com"){
//				this->email == email;
//				this->pass == pass;
//			}
//			else{
//				this->email == "NULL";
//				this->pass == "NULL";
//			}
//		}
		void choice(string choice){
			cout<<"Enter Any Choice: "<<endl;
			cout<<"1. Check Info."<<endl;
			cout<<"2. Withdraw Amount."<<endl;
			cout<<"3. Deposite Amount."<<endl;
			cout<<"4. Exit."<<endl;
		}
		void set_val(int, int);

};
	void bank::set_val(with_bal, dep_bal){
		
	}

class bank_disp: public bank{
	public:
		void info_disp(){
			cout<<"================================================Bank_Info================================================\n";
			cout<<"\t\t\t\t\tBank Account Name: "<<name<<endl;
			cout<<"\t\t\t\t\tBank Account Emali: "<<email<<endl;
			cout<<"\t\t\t\t\tBank Balance: "<<bal<<endl;
			cout<<"=========================================================================================================\n";	
		}
};

int main(){
	bank fst = bank(500, "Kiran", "001", "kiran@#$981201");
	
	return 0;
}