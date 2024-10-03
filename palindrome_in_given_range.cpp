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
     int a, b;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout<<"pal nums are: "<<endl;
    int cnt=0;
    for(int i=a;i<=b;i++){
        if(ispal(i)){
          cnt++;
        }
    }
    cout<<cnt;
    return 0;
}