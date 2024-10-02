#include<iostream>
using namespace std;
int ans(int n){
    if(n==0) return 0;
    return n*n+ans(n-1);
}
int main(){
    int num;
    cin>>num;
    int ansi=ans(num);
    cout<<ansi;
    return 0;
}