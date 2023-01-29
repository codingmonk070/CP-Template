#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ld long double
#define edl '\n'
#define fl(i,k,n) for(ll i=k; i<n;i++)
#define rfl(i,k,n) for(ll i=n-1;i>=k;i--)
#define cpy(arr,arr1,n) fl(i,0,n){arr1[i]=arr[i];}
#define prnt(arr,n) fl(i,0,n){cout<<arr[i]<<' ';}
#define rprnt(arr,n) rfl(i,0,n){cout<<arr[i]<<' ';}
#define scn(arr,n) fl(i,0,n){cin>>arr[i];}
#define mx(arr) *max_element(arr.begin(),arr.end())
#define mn(arr) *min_element(arr.begin(),arr.end())
#define sm(v) accumulate(v.begin(),v.end(),0LL);
#define yes cout<<'Y'<<'E'<<'S'
#define no cout<<'N'<<'O'
#define all(v) v.begin(),v.end()
#define pairout(v,n) fl(i,0,n){cout<<v[i].first<<' '<<v[i].second<<endl;}
#define pairin(v,n) fl(i,0,n){cin>>v[i].first>>v[i].second;}
#define MP make_pair 
#define PB push_back
#define FL freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
 bool isPerfectSquare(long double x)
{ if (x >= 0) {
long long sr = sqrt(x);
return (sr * sr == x);
}
return false;
}
 
 
ll lcm(ll a,ll b)
{
ll ans= (a*b)/__gcd(a,b);
return ans;
}


bool isPrime(ll n)
{ if (n <= 1)
      return false;
if (n <= 3)
   return true;
if (n % 2 == 0 || n % 3 == 0)
return false;
for (ll i = 5; i * i <= n; i = i + 6)
if (n % i == 0 || n % (i + 2) == 0)
return false;
return true;
}


int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

ll t;
cin >> t;
while(t--)
{
    
}
return 0;
}
