#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
int main()
{
    //Observational problem

    //Remove the number when same is found i.e 11 or 00 is found 
    //this procedure is implemented using stack

    //if at last the size of stack is less than equal to 1 , answer is YES
    //else answer is NO

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        string s;
        cin >> s;
        stack<char> st;
        for (ll i = 0; i < n; i++)
        {
            if(st.empty())st.push(s[i]);
            else
            {
                if(st.top()==s[i])st.pop();
                else st.push(s[i]);
            }
            
        }

        if(st.size()<=1)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
    }

       
}