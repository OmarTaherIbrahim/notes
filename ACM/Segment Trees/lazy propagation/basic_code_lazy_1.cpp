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
vector <int > seg, arry,lazy;
int n,q,m,x,y,z,l,r,val;

//write functions
void build ( int u, int s, int e) {
    if( s == e ){
        seg[u]=arry[e];
        return;
    }
    build ( u * 2, s, (s + e) / 2);
    build ( u * 2 + 1, (s + e) / 2 + 1, e);
    seg[u] = seg[u*2] + seg[u*2+1];
}
void fix ( int u, int s, int e ) {
    seg[u] += lazy[u];
    if(s != e) {
        seg[u * 2] += lazy[u];
        seg[u * 2 + 1] += lazy[u];
    }
    lazy[u]=0;
}
void update ( int u, int s, int e) {
    if( s > r || e < l) return;
    fix ( u, s, e);
    if( s == e) {
        seg[u] = val;
        return;
    }
    update ( u * 2, s, (s + e) / 2);
    update ( u * 2 + 1, (s + e) /2 + 1, e);
    seg[u] = seg[u*2] + seg[u*2+1];
}
void add ( int u, int s, int e) {
    
}


int main(){
    #ifndef ONLINE_JUDGE
    freopen("source.txt","r",stdin);
    #endif
    cin>>n>>m;
    seg.resize(n * 4 + 1);
    arry.resize(n + 1 );
    lazy.resize(n * 4 + 1);
    for(int i = 1; i <= n; i++) {
        scanf("%d", &arry[i] );
    }
    build(1,1,n);



    return 0;
}