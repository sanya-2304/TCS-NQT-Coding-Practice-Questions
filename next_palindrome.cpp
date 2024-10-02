#include<bits/stdc++.h>
using namespace std;
bool ispal(int num){
    int og=num;
    int revnum=0;
    while(num>0){
        int dig=num%10;
        revnum=revnum*10+dig;
        num/=10;
    }
    return og==revnum;
}
int main(){
    int num;
    cin>>num;
    int next=num+1;
    while(true){
        if(ispal(next)){
            cout<<"The next palindrome number after "<<num<<" is: " <<next; break;
        }
        next++;
    }
    return 0;
}