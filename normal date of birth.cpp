#include<iostream>
using namespace std;
int main(){
    int birth_yrs, birth_mont, birth_day;
    int tdy_yrs, tdy_mont, tdy_day;
    int cal_yrs, cal_mont, cal_day; 
    int choice;
    
    cout<<"Enter your date of birth yyyy/mm/dd: ";
    cin>>birth_yrs>>birth_mont>>birth_day;
    
    cout<<"Enter today date yyyy/mm/dd: ";
    cin>>tdy_yrs>>tdy_mont>>tdy_day;
    
    cal_yrs = tdy_yrs - birth_yrs; 
    cal_mont = tdy_mont - birth_mont;
    cal_day = tdy_day - cal_day;
    
    if(cal_day >= 30){
        for(int i=1; cal_day-30 >= 0; i++){
            cal_day = 30 - cal_day;
            cal_mont++;
            if(cal_day < 30){
                break;
            }
        }
    }
    if(cal_mont >= 12){
        for(int i=1; cal_mont-12 >= 0; i++){
            cal_mont = 12 - cal_mont;
            cal_yrs++;
            if(cal_mont < 12){
                break;
            }
        }
    }
    
    cout<<cal_yrs<<"Years  "<<cal_mont<<"Month  "<<cal_day<<"Days  "<<endl;
    
    return 0;
}
