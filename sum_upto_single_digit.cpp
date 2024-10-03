#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    
   while(n>9){
int sum=0;
    while(n!=0){
          int dig = n % 10; // Get the last digit
            sum += dig;       // Add it to the sum
            n /= 10;  
    }
    n=sum;
   }
    cout<<n;
    return 0;
}