#include <bits/stdc++.h>                   
#define int long long     
using namespace std;
const int mod=998244353;

int power(int a, int b, int p) {
    if(a==0)
    return 0;
    int res=1;
    a%=p;
    while(b>0) {
        if(b&1)
        res=(1ll*res*a)%p;
        b>>=1;
        a=(1ll*a*a)%p;
    }
    return res;
}

int32_t main() {
    int n, p;
    cin>>n>>p;
    assert(n>=1 && n<=300000 && p>=2 && p<=100000);
    int exp_sq=0, exp_sum=0, exp_prod=0, inv2=power(2, mod-2, mod);
    for(int i=0;i<n;i++) {
        int cur=power(power(p, i, mod), mod-2, mod);
        exp_sq=(exp_sq + (cur*cur))%mod;
        exp_prod=(exp_prod + (cur*exp_sum))%mod;
        exp_sum=(exp_sum + cur)%mod;
        int ans=((exp_sq + exp_prod)*inv2)%mod;
        cout<<ans<<" ";
    }
}