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
vector<int> seg, arry, lazy;
int n,val,l,r,m;

//write functions
void fix (int u, int s, int e) {
    seg[u] += lazy[u];
    if(s != e){
        lazy[u*2] += lazy[u];
        lazy[u*2+1] += lazy[u];
    }
    lazy[u]=0;
}
void build (int u, int s, int e){
   
    if(s == e ) {
        seg[u]=arry[s];
        printf("seg[%d](%d)=arr[%d](%d)\n", u, seg[u], s, arry[s]);
        return ;
    }
    build ( u*2, s, (s + e) / 2);
    build ( u*2 +1, (s + e) /2 +1, e);
    seg[u] = max( seg[u*2], seg[u*2+1]); 
}
int get (int u, int s, int e) {
    fix(u,s,e);
    if(s > r || e < l){
        return -1;
    }
    if(s>= l && e <= r){
        return seg[u];
    }
    int x=get( u*2, s, (s + e)/2);
    int y=get(u*2+1, (s + e)/2 +1, e);
    return max( x, y );
}
void update (int u, int s, int e) {
    fix (u, s, e);
    if(s > r || e < l){
        return ;
    }
    if(s == e){
        seg[u]=val;
        return ;
    }
    update (u * 2, s, (s + e) / 2);
    update (u * 2 + 1,(s + e) /2 +1, e);
    seg[u] =  max (seg[u*2], seg[u*2+1]);
}
void addinrange(int u, int s, int e) {
    fix(u,s,e);
    if(s > r || e < l)
        return;
    if(s >= l && e <=r){
       lazy[u]+=val;
       return;
    }
    addinrange(u * 2, s, (s + e) / 2);
    addinrange(u *2 +1, (s + e) /2 +1, e);
    seg[u] = max(seg[u*2] + lazy[u*2], seg[u*2+1] + lazy[u*2+1]);
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("source.txt","r",stdin);
    #endif
    cin>>n>>m;
    arry.resize(n+1);
    seg.resize(n*4+1,0);
    lazy.resize(n*4+1, 0);
    for(int i = 1; i <= n; i++) {
        scanf("%d", &arry[i]);
        cout<<arry[i]<<",";
    }
    cout<<endl;
    build(1,1,n);
    for(int i = 0; i < m; i++) {
        char q;
        int x,y,z;
        scanf(" %c%d%d", &q, &x, &y);
        if(q == 'Q') {
            l=x; 
            r=y;
            printf("dfas%d\n", get( 1, 1, n));
        }else if(q == 'U'){
            l = r = x;
            val = y;
            update(1, 1, n);
        }else{
            scanf("%d",&z);
            l = x;
            r = y;
            val = z;
            addinrange(1, 1, n);
        }
        
    }

    return 0;
}