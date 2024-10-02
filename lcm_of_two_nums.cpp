#include <iostream>
using namespace std;
int gcd(int a, int b){
    if(b==0) return a;
    return gcd(b, a%b);
}
int lcm(int a, int b){
    return (a*b)/gcd(a,b);
}
int main(){
    int num1, num2;
    cout << "Enter two integers: ";
    cin >> num1 >> num2;
    int gcdd=gcd(num1, num2);
    cout<<"gcd is: "<<gcdd<<endl;
    int lcmm=lcm(num1, num2);
    cout<<"lcm is: "<<lcmm;
    return 0;       
}