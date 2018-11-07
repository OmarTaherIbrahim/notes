# Lazy propagation
__Lazy propagation__ is used to help us add values to the __Segment Tree__ in a certain _range_, and that is by __updating__ what you need to Updade, __when__ you need to. 
+ when we update a _single node_ we update only the need part of the tree with a O(![][https://latex.codecogs.com/gif.latex?Log_n]) complexity, But Updating a Range, this can dererioarate to O(n).
+ So by Updating only when we really need it can be beneficial in _reducing_ this complexity, We mark nodes for updation in the future and don't update each node in the range recursively.
#### How it Works

+ __Creation__ of the tree is similar to a normal __segment Tree__ plus _creating_ an __additional array__ that holds __update information__. Let's call this array lazy[].
+ __Updating__ a node  of the tree , we _update_ it and mark it's _children_ to be __updated__ in the future.
+ when we __query__ the tree we update each one we pass, and mark it's children to be __updated__ in the future.

#### Code
##### Fix function
```c++
void fix (int u, int s, int e) {
    seg[u] += lazy[u];
    if ( s != e){
        lazy[u*2] += lazy[u];
        lazy[u*2+1] += lazy[u];
    } 
    lazy[u] = 0;
}
```
##### Update function
```c++
void update (int u, int s, int e){
    fix (u, s, e);
    if (s > r || e < l)return;
    if (s >= l && e <= r){
        lazy[u] += val;
        return;
    }
    update (u*2, s, (s + e) / 2);
    update ( u*2+1, (s+e) /2 +1 , e);
    seg[u] = seg[u*2] + seg[u*2+1];
}
```

#### Query function
``` c++
int query ( int u, int s, int e){
    fix ( u, s, e);
    if ( s > r || e < l) return;
    if ( s >= l && e <= r) {
        return seg[u];
    }
    return query(u*2, s, (s+e) /2) + query(u*2+1, (s+e)/2 +1, e);
}
```