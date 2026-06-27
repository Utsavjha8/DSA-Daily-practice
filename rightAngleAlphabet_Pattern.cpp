#include <iostream>
using namespace std;

int main(){
    for(char row='a'; row<='e'; row=row+1){
       for(int col='a'; col<=row; col=col+1){
           cout<<row<<" ";
       }
       cout<<endl;
    }
    
}