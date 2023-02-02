#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int> ans(n,0);
    int i=0,j=n-1;
    if(n%2==1){
        cout<<"-1"<<endl;
        return;
    }
        ans[0] = 2;
        ans[n-1] = 1;
        i++;
        j--;
        while(i<j){
            if(i%2==1){
                ans[i++] = -1;
                ans[j--] = 1;
            }
            else{
                ans[i++] = 1;
                ans[j--] = -1;
            }
        }
        
    
    for(i=0;i<n;i++){
        cout<<ans[i]<<" ";
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