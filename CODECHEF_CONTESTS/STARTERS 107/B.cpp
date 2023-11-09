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
        string a,b;
        cin>>a;
        cin>>b;

        ll chef_score=0,chefina_score=0;

        for (ll i = 0; i < n; i++)
        {
            

            if(a[i]=='R'){
                if(b[i]=='S'){
                    chef_score++;
                }
                if(b[i]=='P')
                {
                    chefina_score++;
                
                }
                
            }

            if(a[i]=='S'){
                if(b[i]=='R'){
                    chefina_score++;
                }
                if(b[i]=='P')
                {
                    chef_score++;
                
                }
                
            }

            if(a[i]=='P'){
                if(b[i]=='S'){
                    chefina_score++;
                }
                if(b[i]=='R')
                {
                    chef_score++;
                
                }
                
            }
              
            
        }

        if(chef_score<chefina_score){

            cout<<((chefina_score-chef_score)/2)+1<<endl;
        }
        else if(chef_score==chefina_score)
        {
            cout<<1<<endl;
            
        }
        
        else
        {
            cout<<0<<endl;
        }
        
        
    }
}