#include <iostream>
using namespace std;

int Add(int a, int b){
    int sum = a + b;
    return sum;
}

int main(){
int num1,num2;
cin>>num1>>num2;

cout<<Add(num1,num2);
}