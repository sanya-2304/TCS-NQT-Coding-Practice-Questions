// given an array nums and integer sum, return total number of subarrays whose sum equal to sum. give code in c++

#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> subarr(vector<int>&arr, int sum){
vector<vector<int>>ans;
for(int i=0;i<arr.size();i++){
    int currsum=0; vector<int>subsum;
    for(int j=i;j<arr.size();j++){
        currsum+=arr[j];
        subsum.push_back(arr[j]);
    if(currsum==sum) ans.push_back(subsum);
}
}
return ans;
}
int main(){
    int n;
    cout<<"enter n: ";
    cin>>n;
    vector<int>arr(n);
    cout<<"enter elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum;
    cout<<"enter sum val: ";
    cin>>sum;
    cout<<"subarr with sum are: ";
    vector<vector<int>> ans=subarr(arr, sum);
   for(auto& i: ans){
    cout<<"{";
    for(int num: i){
        cout<<num<<" ";
    }
    cout<<"}\n";
   }

    return 0;
}