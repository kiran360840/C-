#include<iostream>
using namespace std;
class intil{
	public:
		int first, second, sum, sub, mult, div, rem, sqr;
		string option;
};

class cal_fun: public intil{
	public:
		void cal(){
		cout<<"1. Add"<<endl;
		cout<<"2. Sub"<<endl;
		cout<<"3. Multiply"<<endl;
		cout<<"4. Divide"<<endl;
		cout<<"5. square"<<endl;

		cout<<"Enter your oprater: ";
		cin>>option;
		cout<<"Enter First number: ";
		cin>>first;
		cout<<"Enter your Second number: ";
		cin>>second;

		if(option == "1" || option =="add" || option == "Add"){
			sum = first + second;
			cout<<first<<" + "<<second<<" = "<<sum<<endl;
		}
		else if(option == "2" || option =="sub" || option == "Sub"){
			sub = first + second;
			cout<<first<<" - "<<second<<" = "<<sub<<endl;
		}
		else if(option == "3" || option =="Multiply" || option == "multiply"){
			mult = first * second;
			cout<<first<<" * "<<second<<" = "<<mult<<endl;
		}
		else if(option == "4" || option == "divide" || option == "Divide"){
			div = first / second;
			rem = first % second;
			cout<<first<<" / "<<second<<" = "<<div<<endl;
			cout<<first<<" % "<<second<<" = "<<rem<<endl;
		}
		else if(option == "5" || option == "Square" || option == "square"){
			cout<<"Enter your number to square it: ";
			cin>>first;
			sqr = first * first;
			cout<<"The square number of "<<first<<" = "<<sqr<<endl;
		}
		else{
		cout<<"Enter a correct choice."<<endl;
		}
	}
};

int main(){

intil lol;
cal_fun one;
one.cal();

return 0;
}
