#include <iostream>
using namespace std;

int main(){
    int n,last,pre,curr;
    cout<<"Enter a number: ";
    cin>>n;
    last = 0;
    pre = 1;
    cout<<last<<" "<<pre<<" ";
    
    for(int i=0; i<=n; i=i+1){
        curr = last+pre;
        last = pre;
        pre = curr;
        cout<<curr<<" ";
     }
    }
    