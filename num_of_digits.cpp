#include<iostream>
using namespace std;
int num_o_dig(int n){
    int total=0;
    while(n>0){
        int dig=n%10;
        total++;
        n=n/10;
    }
    return total;
}
int main(){
    int num;
    cin>>num;
    int ans=num_o_dig(num);
    cout<<ans;
    return 0;
}