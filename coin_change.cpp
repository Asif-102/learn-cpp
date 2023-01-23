/**
* author: asif_102
* created: 2023-01-24 00:03:37
**/
#include <bits/stdc++.h>
using namespace std;

vector<int> coins = {1,3,4};

int coin_change(int n){
    if(n == 0) return 0;

    int ans = INT_MAX;
    for(int i = 0; i < coins.size(); i++){
        if(n >= coins[i]){
            ans = min(ans, 1 + coin_change(n - coins[i]));
        }
    }
    return ans;
}

int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int n;
    cin >> n;
    cout << coin_change(n);
    return 0;
}
