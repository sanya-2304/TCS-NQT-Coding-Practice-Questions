#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int first=0;
    int second=1;
   int third=0;
    for(int i=2;i<=n;i++){
        third=first+second;
        first=second;
        second=third;
    }
    cout<<third;
    return 0;
}