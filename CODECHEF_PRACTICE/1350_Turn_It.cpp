//https://www.codechef.com/practice/course/2to3stars/LP2TO301/problems/NFS
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
        ll u,v,a,s;
        cin>>u>>v>>a>>s;

        double v_dash=sqrt(pow(u,2)-2*a*s);

        if(v_dash>v){
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
        
    }
}