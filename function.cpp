    #include<iostream>
    using namespace std;
    void calculater(){
	
	float a,b,result;
    char x;
    cout<<"ENTER YOUR FIRST NUMBER:-"<<std::endl;
    cin>>a;
    cout<<"ENTER YOUR OPRATERS NUMBER:-"<<std::endl;
    cin>>x;
    cout<<"ENTER YOUR SECOND NUMBER:-"<<std::endl;
    cin>>b;
    switch(x){
        case'+':
        result=a+b;
        cout<<"Sum of "<< a <<" and "<< b <<" = "<<result<<endl;
        break;
        case'-':
        result=a-b;
        cout<<"Diffrence of "<< a <<" and "<< b <<" = "<<result<<endl;
        break;
        case'*':
        result=a*b;
        cout<<"Multiplication of "<< a <<" and "<< b <<" = "<<result<<endl;
        break;
        case'/':
        result=a/b;
        cout<<"Divide of "<< a <<" and "<< b <<" = "<<result<<endl;
        break;
        default:
        cout<<"This is not valid"<<endl;
        break;
    }
}
void vote(){
	int a;
	cout<<"Enter your age:"<<endl;
	cin>>a;
	if(a>=18){
		cout<<"your are selected for vote"<<endl;
	}
	else if(a<=0){
		cout<<"lol"<<endl;
	}
	else{
		cout<<"go to the home kid"<<endl;
	}
}
int main(){
	calculater();
	vote();
	return 0;
}