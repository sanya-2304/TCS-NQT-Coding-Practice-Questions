#include<iostream>
using namespace std;

void decitohexa(int n){
    if(n==0){
        cout<<"decitohexa is:0";
        return ;
    }
    char hexdig[100];
    int i=0;
    while(n!=0){
        int rem=n%16;
        if(rem<10){
            hexdig[i]=rem+'0';
        }else{
              hexdig[i]=rem-10+'A';
        }
        i++;
        n/=16;
    }
    cout<<"hexa are:";
    for(int j=i-1;j>=0;j--){
        cout<<hexdig[j];
    }

}
int main(){
    int n;
    cout<<"enter n:";
    cin>>n;

    decitohexa(n);
    return 0;
}