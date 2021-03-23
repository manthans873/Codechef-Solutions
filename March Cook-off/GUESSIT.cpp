#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <cmath>
#include <cstring>
#include <set>
#include <cstdlib>
#include <iomanip>
#include <stdio.h>
#include <map>
#include <stack>

using std::cout;  
using std::cin;
using std::string;
using std::vector;
using std::unordered_map;
using std::max;
using std::min;

typedef long long ll;
const ll IMAX = 1000000000000000000;
const ll IMIN = -100000000000000000;

// prob link: https://www.codechef.com/COOK127B/problems/GUESSIT
int inp(int num){
    int val;
    cout<<num<<std::endl;   // Don't use "\n" for flushing (use endl for flushing)
    cin>>val;
    return val;
}

void solve(){
    for(int i=1;i<=1000;++i){
        if(inp(i*i) == 1){
            return;
        }
    }
}

int main(){
    std::ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t = 1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
