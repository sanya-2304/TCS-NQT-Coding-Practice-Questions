#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"enter num: ";
    cin>>num;
    int decimal=0;
    int base=1;
    while(num!=0){
        int dig=num%10;
        decimal+=dig*base;
        base=base*2;
        num=num/10;
    }
    cout<<"decimal is: "<<decimal;
    return 0;
}