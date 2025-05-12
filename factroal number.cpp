#include <iostream>
using namespace std;
int main() {
    int usernum,fact=1;
    
    cout<<"Enter you number to get factrioal number: ";
    cin>>usernum;
    for(int i=1; i<=usernum; i++){
        fact*=i;
    }
    cout<<"your factrioal number: "<<fact<<endl;
    

    return 0;
}
