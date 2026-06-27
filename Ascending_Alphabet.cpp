#include <iostream>
using namespace std;

int main(){
    char row,col;
    for(row =97; row<=101; row = row+1){
        for(col =97; col<=101; col=col+1){
            cout<<col<<" ";
        }
        cout<<endl;
    }
    
}