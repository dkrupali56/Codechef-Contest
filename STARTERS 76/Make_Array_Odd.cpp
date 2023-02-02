#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define vi vector<int>
using namespace std;

void solve(){
    ll n,x;
    cin>>n>>x;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    ll c=0;
    for(int i=0;i<n;i++)
    {
        if (a[i]%2==0) c++;
    }
    if (x & 1)
    {
        if (c&1) cout<<(int)c/2+1<<endl;
        else cout<<(int)c/2<<endl;
    }
    else
    {
        if (c!=n) cout<<c<<endl;
        else cout<<-1<<endl;
    }
}
int main() {
	int t;
	cin>>t;
	while(t--){
	    solve();
	}
	return 0;
}