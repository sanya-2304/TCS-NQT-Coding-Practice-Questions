#include<bits/stdc++.h>
#include<limits.h>
using namespace std;

int main(){
     int n; // Number of items
    cout << "Enter the number of items: ";
    cin >> n;
    vector<vector<string>>shop(n, vector<string>(2));
    for(int i=0;i<n;i++){
        cout << "Enter item name: ";
        cin>>shop[i][0];
        cout << "Enter item price: ";
        cin >> shop[i][1]; 
    }
    int pricemax=INT_MIN;
    string mostExpensiveItem;
    for(int i=0;i<n;i++){
        int pricey=stoi(shop[i][1]);
        if(pricey>pricemax){
            pricemax=pricey;
             mostExpensiveItem = shop[i][0];
        }
    }
     cout << "Most Expensive Item: " << mostExpensiveItem << endl;
    cout << "Price: $" << pricemax << endl;
}