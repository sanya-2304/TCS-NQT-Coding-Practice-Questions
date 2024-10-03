#include<iostream>
using namespace std;

int sum(int n){
    int summ=0;
    while(n!=0){
        int dig=n%10;
        n=n/10;
        summ+=dig;
    }
    return summ;
}
bool check(int num){
   int n=sum(num);
   int revn=0;
   int og=n;
   while(n!=0){
    int dig=n%10;
    revn=revn*10+dig;
    n/=10;
   }
   return og==revn;

}
int main(){
    int n;
    cin>>n;

    if(check(n)) cout<<"true";
    else cout<<"false";
    return 0;
}