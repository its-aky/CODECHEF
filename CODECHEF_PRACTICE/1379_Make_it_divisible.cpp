//https://www.codechef.com/practice/course/2to3stars/LP2TO301/problems/MAKEDIV3

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

        string s;
        int cnt=0;
        for (int i = 0; i < n-1; i++)
        {
            s.push_back('1');
            cnt++;
        }
        int temp[]={1,3,5,7,9};
        for (int i = 0; i < 5; i++)
        {
            if((temp[i]+cnt)%3==0 && (temp[i]+cnt)%9!=0 ){
                s.push_back((char)temp[i]+48);
                break;
            }
        }

        for (int i = 0; i < s.size(); i++)
        {
            cout<<s[i];
        }
        cout<<endl;
    }
}