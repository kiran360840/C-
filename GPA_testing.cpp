#include<iostream>
using namespace std;
int main()
{
    float a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z;
    
    cout<<"ENTER YOUR EVERY SUBJECT MARKS"<<endl;
    
    cout<<"Enter your FES marks:-"<<std::endl;
    cin>>a;
    b=a/50*100;
    
    cout<<"Enter your ENGLISH marks:-"<<std::endl;
    cin>>c;
    d=c/75*100;
    
    cout<<"Enter your NEPALI marks:-"<<std::endl;
    cin>>e;
    f=e/75*100;
    
    cout<<"Enter your MATHS marks:-"<<std::endl;
    cin>>g;
    h=g/75*100;
    
    cout<<"Enter your SCIENCE marks:-"<<std::endl;
    cin>>i;
    j=i/75*100;
    
    cout<<"Enter your OPT marks:-"<<std::endl;
    cin>>k;
    l=k/75*100;
    
    cout<<"Enter your FCA marks:-"<<std::endl;
    cin>>m;
    n=m/50*100;
    
    cout<<"Enter your C marks:-"<<std::endl;
    cin>>o;
    p=o/50*100;
    
    cout<<"Enter your WE marks:-"<<std::endl;
    cin>>p;
    q=p/50*100;
    
    r=a+b+c+d+e+f+g+h+i;
    cout<<"TOTAL MARKS OF ALL SUBJECT:"<<r<<endl;
    
    w=b+d+f+h+j+l+n+p+q;
    z=w/575*100;
    cout<<"PERCENTAGE OF YOUR ALL SUBJECT:"<<z<<endl;
    
    cout<<"ENTER YOUR PERCANTAGE:"<<endl;
    cin>>x;
    
    y=(l/100)*4;
    cout<<"YOUR GPA:"<<endl<<y<<endl;
    
    if(y>=4){
    	cout<<"Grade: A+ \n Gpa: "<< y <<endl;
	}
	else if(y>=3.6){
		cout<<"Grade: A \n Gpa: "<< y <<endl;
	}
	else if(y>=3.2){
		cout<<"Grade: B+ \nGpa: "<< y <<endl;
	}
	else if(y>=2.8){
		cout<<"Grade: B \n Gpa: "<< y <<endl;
	}
	else if(y>=2.4){
		cout<<"Grade: C+ \n Gpa: "<< y <<endl;
	}
	else if(y>=2.0){
		cout<<"Grade: C \n Gpa: "<< y <<endl;
	}
	else if(y>=1.6){
		cout<<"Grade: D \n Gpa: "<< y <<endl;
	}
	else{
		cout<<"You are fail in this exam try to pass next time \n Gpa: "<< y <<endl;
	}
    return 0;
}