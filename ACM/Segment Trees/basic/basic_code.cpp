#include<iostream>
#include<vector>
using namespace std;
const int N = 100000 + 10;
int n, q, l, r, v[N], seg[4 * N];

//Build Segment Tree from array v
void build(int u, int s, int e) {
	if (s == e) { 					//Reached a leaf
		seg[u] = v[s];
		return;
	}
	build(u * 2, s, (s + e) / 2);			//Call left child
	build(u * 2 + 1, (s + e) / 2 + 1, e);	//Call right child
	seg[u] = seg[u * 2] + seg[u * 2 + 1];	//Current node sum is left + right
}

//Range sum Get
int get(int u, int s, int e) {
	if (s > r || e < l)			//Node out of range
		return 0;
	if (s >= l && e <= r)		//Node completely inside range
		return seg[u];
	return get(u * 2, s, (s + e) / 2) + get(u * 2 + 1, (s + e) / 2 + 1, e);		//Intersection with range
}

//Single element Update
void update(int u, int s, int e, int val) {
	if (s > r || e < l)			//Node out of range
		return;
	if (s == e) {				//Node to be updated
		seg[u] = val;
		return;
	}
	update(u * 2, s, (s + e) / 2, val);				//Call left
	update(u * 2 + 1, (s + e) / 2 + 1, e, val);		//Call right
	seg[u] = seg[u * 2] + seg[u * 2 + 1];			//Update node to new value
}

int main() {
	cin >> n;
	for (int i = 1; i <= n; ++i)
		scanf("%d", &v[i]);

	build(1, 1, n); 		//Build initial segment tree

	cin >> q;
	/*
	Queries of type:
	0 l r: sum of elements between l and r (inclusive)
	1 x y: change value of element at position x to y
	*/
	
	for (int d, a, b, i = 0; i < q; ++i) {
		scanf("%d%d%d", &d, &a, &b);
		if (!d) {
			l = a;
			r = b;
			printf("%d\n", get(1, 1, n));
		} else {
			l = r = a;
			update(1, 1, n, b);
		}
	}
	return 0;
}
