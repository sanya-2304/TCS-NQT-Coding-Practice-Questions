#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
bool isPrime(int num){
    if(num<=1) return false;
    for(int i=2;i<=sqrt(num);i++){
        if(num%i==0) return false;
    }
    return true;
}
int main(){
    int a;
    cout<<"enter a: ";
    cin>>a;
    int b;
    cout<<"enter b: ";
    cin>>b;
    vector<int>arr;
    for(int i=a;i<=b;i++){
        if(isPrime(i)){
            arr.push_back(i);
        }
    }
    for(int i=0;i<arr.size();i++){
        cout<<arr[i];
        if(i<arr.size()-1){
            cout<<",";
        }
    }
    return 0;
}