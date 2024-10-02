#include<iostream>
using namespace std;

int main(){
    int num; cout<<"enter decimal num: ";
    cin>>num;
 if(num==0) {cout<<"the binary output is: 0"<<endl; return 0;}
    cout<<"the binary output is: ";
    int ans=0; int place=1;
    while(num>0){
        int digit=num%2;
        ans+=digit*place;
        place=place*10;
        num=num/2;;
    }
    cout<<ans;
    return 0;
}