/*
Perfect Number Kya Hota Hai?
Perfect number ek aisa positive integer hota hai jo apne proper divisors (apne aap ko chhod kar) ke sum ke barabar hota hai.
Example ke Saath Samjhate Hain
6:
Iske divisors hain: 1, 2, 3
Inka sum hai: 
1+2+3=6
Yahan, sum (6) aur number (6) barabar hain, isliye 6 ek perfect number hai.
28
1+2+4+7+14=28
Yahan bhi, sum (28) aur number (28) barabar hain, isliye 28 bhi ek perfect number hai.
*/

#include<iostream>
using namespace std;
bool isPerfect(int num){
    int sum=0;
    for(int i=1;i<=num/2;i++){
        if(num%i==0){
             sum+=i;
        }
    }
   
    return sum==num;
}
int main(){
    int number;

    cout << "Ek positive integer daaliye: ";
    cin >> number;
    if (isPerfect(number)) {
        cout << number << " ek perfect number hai." << endl;
    } else {
        cout << number << " ek perfect number nahi hai." << endl;
    }
    return 0;
}