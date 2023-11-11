//https://www.codechef.com/practice/course/2to3stars/LP2TO301/problems/ALTER
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
        ll a,b,p,q;
        cin>>a>>b>>p>>q;

        bool flag1=false,flag2=false;

        if(p==a){
            if (q==b)
            {
                cout<<"YES"<<endl;
                continue;
            }
            else if(2*b==q){
                cout<<"YES"<<endl;
                continue;
            }
            else
            {
                cout<<"NO"<<endl;
                continue;
            }
        }

        if(q==b){
            if (a==p)
            {
                cout<<"YES"<<endl;
                continue;
            }
            else if(2*a==p){
                cout<<"YES"<<endl;
                continue;
            }
            else
            {
                cout<<"NO"<<endl;
                continue;
            }
        }

        if (p%a==0)
        {
            int n=p/a;
            if((n-1)*b==q || n*b==q){
                flag1=true;
            }
        }

        if (q%b==0)
        {
            int n=q/b;
            if((n-1)*a==p || n*a==p){
                flag2=true;
            }
        }

        if(flag1 || flag2)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

        
        
        
    }
}