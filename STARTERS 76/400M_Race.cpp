#include <iostream>
using namespace std;

int main() 
{
        long long t;
        cin >> t;
        while(t--)
        {
                long long x,y,z;
                cin >> x >> y >> z;
                if(x<y && x<z)
                {
                        cout << "ALICE" << endl;
                }
                else if(y<x && y<z)
                {
                        cout << "BOB" << endl;
                }
                else
                {
                                cout << "CHARLIE" << endl;
                        }
        }
	return 0;
}