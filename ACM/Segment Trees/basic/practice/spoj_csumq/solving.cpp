#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
#include <string>
#include <string.h>
#include <stack>
#include <queue>
#include <tuple>
#include <set>
#include <map>
#include <list>
#include <math.h>
#include <cmath>
typedef long long int ll;
const ll loo = 2e18;
const int ioo = 2e9;
const int md = 1e9+7;
const double eps = 1e-6;
const double PI = acos(-1);
using namespace std;
vector<int > seg, arry;
int n, q,l=0,r=2;

//write functions
void build (int u, int s, int e) {
    if( s == e){
        seg[u] = arry[s];
        return;
    }
    build ( u * 2, s, (s + e) / 2);
    build ( u * 2 + 1, (s + e) / 2 +1, e);
    seg[u] = seg[u*2] + seg[u*2+1]; 
}
int get ( int u, int s, int e) {
    if(s > r || e < l) return 0;
    if(s >= l && e <= r)
        return seg[u];
    
    return get(u * 2, s, (s + e) /2) + get(u * 2 + 1, (s + e) / 2 +1, e);
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("source.txt","r",stdin);
    #endif
    cin>>n;
    seg.resize (n*4 + 1);
    arry.resize (n + 1);
    for(int i = 1; i <= n; i++) {
        scanf("%d", &arry[i]);
    } 
    cin>>q;
    build (1, 1, n);
    for(int i = 0; i < q; i++) {
        scanf("%d%d", &l, &r);
        l++; r++;
        printf("%d\n", get(1, 1, n));
        
    }


    return 0;
}