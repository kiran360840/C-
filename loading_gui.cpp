#include<iostream>
#include<windows.h>
using namespace std;
int main(){
  system("color 0A");
	int bar = 176, progress =  219;
	cout<<"\n\n\n\n\t\t\t\tLoading...\n";
	cout<<"\n\t\t      [";
		for(int i=0; i<30; i++){
		cout<<(char)bar;
	}
	cout<<"]";
	cout<<"\r\t\t      [";
	for(int i=0; i<30; i++){
		cout<<(char)progress;
		Sleep(100);
	}
	cout<<"]";
	cout<<"\n\n\t\t      ";
  system("pause");
  return 0;
}
