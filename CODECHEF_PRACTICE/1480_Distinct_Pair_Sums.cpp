//https://www.codechef.com/practice/course/2to3stars/LP2TO301/problems/MANYSUMS
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        ll l,r;
        cin>>l>>r;
        ll ans=2*1LL*(r-l)+1;
        cout<<ans<<endl;
    }
}