
#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=n*(n+1)/2;
    cout<<ans;
    return 0;
}