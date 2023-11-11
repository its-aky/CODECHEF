//https://www.codechef.com/practice/course/2to3stars/LP2TO301/problems/MINPIZZAS
#include <bits/stdc++.h>
#include <numeric>
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
        ll n,k;
        cin>>n>>k;
        ll least=lcm(n,k);//inbuilt function for finding lcm optimally 
        //Only available in c++17 and above versions
        cout<<least/k<<endl;
    }
}