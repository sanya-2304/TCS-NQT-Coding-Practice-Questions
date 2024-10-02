#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0) return false;
    }
    return true;
}
int main(){
    int num;
    cin>>num;
    int next=num+1;
    while(true){
        if(isPrime(next)){
            cout<<"The next prime number after "<<num<<" is: " <<next; break;
        }
        next++;
    }
    return 0;
}