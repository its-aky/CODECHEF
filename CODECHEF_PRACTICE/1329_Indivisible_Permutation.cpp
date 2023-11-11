//https://www.codechef.com/practice/course/2to3stars/LP2TO301/problems/INDIPERM
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
        ll n;
        cin>>n;
        cout<<2<<" ";
        for (ll i = 2; i < n; i++)
        {
            cout<<i+1<<" ";
        }

        cout<<1<<endl;
        
    }
}