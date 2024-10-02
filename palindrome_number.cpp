#include<iostream>
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
     int a;
    cout << "Enter a: ";
    cin >> a;
    if(ispal(a)) cout<<a<<" is pal"<<endl;
    else cout<<a<<" is not pal"<<endl; 
    return 0;
}