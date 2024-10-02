#include<iostream>
using namespace std;
int gcd(int a, int b){
    while(b!=0){
        int temp=b;
        b=a%b;
        a=temp;
    }
    return a;
}
int main(){
    int num1, num2;
    cout << "Enter two integers: ";
    cin>>num1>>num2;
    int ans=gcd(num1, num2);
    cout<<"gcd is: "<<ans;
    return 0;
}