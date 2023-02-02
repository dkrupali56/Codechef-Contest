#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    int a = count(s.begin(),s.end(),'1');
	    int b = count(s.begin(),s.end(),'0');
        cout<<min(1+b,a)<<endl;
	}
	return 0;
}