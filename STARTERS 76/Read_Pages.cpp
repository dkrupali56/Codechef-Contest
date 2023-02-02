#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n,x,y;
	cin >> t;
	while(t--)
	{
	    cin >> n>>x>>y;
	    string res=(x*y>=n)?"Yes":"No";
	    cout << res <<endl;
	        
	}
	return 0;
}