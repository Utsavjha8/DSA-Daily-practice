#include <iostream>
using namespace std;

int main()
{
    int year;
    cout<<"Enter a year: ";
    cin>>year;
    
    if(year%400==0){
        cout<<"It is leap year";
    }
    else if(year%4==0 && year%100!=0){
        cout<<"It is lear year";
    }
    else{
        cout<<"It is not leap year";
    }

    return 0;
}