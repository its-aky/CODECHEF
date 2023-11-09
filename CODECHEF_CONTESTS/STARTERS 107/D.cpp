#include <bits/stdc++.h>
using namespace std;

int main() {

    //x and (n-x) mod with k is to be calculated 
    //two cases are possible :
    // if(n<k)  =>the maximum answer will be obtained will be when x=n/2 or at x=(n+1)/2
    // else     =>reduce n to n%k then check for n%k and (n%k)+k i.e calculate expression for max((n%k)/2 and (n%k)+1/2 ) and max((n%k+k)/2 and (n%k+k)+1/2 ) and max of these two max will be answer 
	long long t,n,k;
	for(cin>>t;t>0;t--){
	    cin>>n>>k;
        long long res = 0;
        if(n<k){
            long long n1 = n/2;
            long long n2 = (n+1)/2;
            long long fx1 = (n1%k)*((n-n1)%k);
            long long fx2 = (n2%k)*((n-n2)%k);
            if(fx1>fx2){
                cout<<n1<<endl;
            }
            else{
                cout<<n2<<endl;
            }
        }
        else{
            long long z = n%k;
            long long n1 = z;
            if(z == 0){
                n1 = k;
            }
            long long n2 = k+z;

            long long n11 = n1/2;
            long long n12 = (n1+1)/2;
            long long fx11 = (n11%k)*((n-n11)%k);
            long long fx12 = (n12%k)*((n-n12)%k);
            long long n21 = n2/2;
            long long n22 = (n2+1)/2;
            long long fx21 = (n21%k)*((n-n21)%k);
            long long fx22 = (n22%k)*((n-n22)%k);
            long long ma1 = max(fx11,fx12);
            long long ma2 = max(fx21,fx22);
            long long ma = max(ma1,ma2);
            if(ma == fx11){
                cout<<n11<<endl;
            }
            else if(ma == fx12){
                cout<<n12<<endl;
            }
            else if(ma == fx21){
                cout<<n21<<endl;
            }
            else{
                cout<<n22<<endl;
            }
        }
	}
	return 0;
}