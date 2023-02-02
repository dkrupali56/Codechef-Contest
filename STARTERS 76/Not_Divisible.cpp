#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        if(i%2==0)
            cout<<"0 ";
        else
            cout<<"1 ";
    }
    cout<<endl;
            
    return;
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	    solve();
	return 0;
}