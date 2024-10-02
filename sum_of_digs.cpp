#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"enter num: ";
    cin>>num;
    int sum=0;
    cout<<"sum is: ";
    while(num>0){
        int dig=num%10;
        sum+=dig;
        num=num/10;
    }
    cout<<sum;
    return 0;
}