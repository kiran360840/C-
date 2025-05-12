#include<iostream>
#include<string>

using namespace std;

void bank(){
	
	int with,depo,withdraw,deposite,choies;
	char yes;
	string email;
	string pass;
	double bal;
	
	bal=50000.0;
	yes='y';
	
	while(yes=='y'||yes=='Y'){
	
	cout<<"Enter your Email to access your bank account: \n";
	cin>>email;
	
	cout<<"Enter your Password to access your bank account: \n";
	cin>>pass;
		
		if(pass=="19078" && email=="kiran@gmail.com"){
			cout<<"Enter 1, 2, 3 or 4. \n";
			cout<<"1. Check balance. \n";
			cout<<"2. Withdraw amount. \n";
			cout<<"3. Deposite amount. \n";
			cout<<"4. Exit. \n";
			
			cout<<"Enter any number: \n";
			cin>>choies;
			
			switch(choies){
				case 1:
					cout<<"your current balance is: "<<bal<<endl;
					break;
					
				case 2:
					cout<<"Enter amount to withdraw: \n";
					cin>>withdraw;
					if(withdraw==0){
						cout<<"This is not allow."<<endl;
					}
					else if(withdraw>=bal){
						cout<<"You dont have more money than "<<bal<<"."<<endl;
					}
					else{
					
					with = bal - withdraw;
					bal = bal - withdraw;
					cout<<"You withdraw "<<withdraw<<" amount \nyour current balance is: "<<bal<<endl;
					}
					break;
					
				case 3:
					cout<<"Enter amount to deposite: \n";
					cin>>deposite;
					depo = bal + deposite;
					bal = bal + deposite;
					cout<<"You deposite "<<deposite<<" amount \nyour current balance is: "<<bal<<"\n";
					break;
					
				case 4:
					cout<<"Exit. \n";
					break;
				
				default:
					cout<<"Enter 1, 2, 3 or 4. \n";
			}
			
		}
		
		else if(!(email=="kiranbaskota@gmail.com")){
			cout<<"Your email is incorrect.\nPlease check and try again." <<endl;
		}
		
		else if(!(pass=="19078")){
			cout<<"Your Password is incorrect.\nPlease check and try again." <<endl;	
		}
		
		else {
            cout << "Your Email and Password are incorrect.\nPlease check and try again." << endl;
        }
		
		cout<<"Enter(y/n): \n";
		cin>>yes;
}

}		

int main(){
	
	bank();
	
	return 0;
}