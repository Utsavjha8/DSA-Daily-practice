#include <iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter an Integer: ";
    cin>>num;
    
    int ans = 0,rem;
    while(num != 0){
        rem = num%10;
        num = num/10;
        ans = ans * 10 + rem;
    }
    cout<<ans;

    return 0;
}