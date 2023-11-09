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
        
        vector<int> ans;
        int mul=1;
        for (int i = 1; i <= n; i++)
        {
            if(i==(mul*4)-1){
                ans.push_back(i);
                swap(ans[i-1],ans[i-2]);
                mul++;
            }

            else
            {
                ans.push_back(i);
            }
        }


        for (int i = 0; i < n; i++)
        {
            cout<<ans[i]<<" ";
        }

        cout<<endl;

        



        
    }
}