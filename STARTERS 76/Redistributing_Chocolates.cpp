#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y,z,sum=0;
	    cin>>x>>y>>z;
	    sum += (x+y+z);
	    if(sum > 5) cout<<"YES";
	    else cout<<"NO";
	    cout<<endl;
	    
	    
	}
	return 0;
}