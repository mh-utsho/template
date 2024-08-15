#include <iostream>
#include <bits/stdc++.h>
using namespace std;


//Speed
#define Code ios_base::sync_with_stdio(false); 
#define By cin.tie(NULL);
#define Utsho cout.tie(NULL);

//Aliases
using ll= long long;
//Constants
const ll INF= LONG_LONG_MAX;
const ll mod=1e9+7;
const ll AR=2e5+10;

//TypeDEf
typedef vector<ll> vll;
typedef vector<string> vs;
typedef map<ll,ll> mpll;

// Macros
#define F                   first
#define S                   second
#define pb                  push_back
#define endl                "\n"
#define MP                  make_pair
#define sz(x)               (int)size(x)
#define MID(left, right)   ((left) + ((right) - (left)) / 2)
// const int dx[] = {0,1,1, 1, 0,-1,-1,-1}; // const int dx[] = {0,1,0,-1};
// const int dy[] = {1,1,0,-1,-1,-1, 0, 1}; // const int dy[] = {1,0,-1,0};
//-----------
#define all(x)              x.begin(), x.end()
#define rall(x)             x.rbegin(),x.rend()
#define forn(i, s, e)       for (ll i = (s); i < (e); i++)
#define loop(e)             for (ll i = 1 ; i <= (e); i++)
#define DBG(a)              cerr<< "Line "<<__LINE__ <<" : "<< #a <<" = "<<(a)<<endl
//------------
#define print(x)            for(auto el:x) cout<<el<<" ";NL
#define yes                 cout<<"YES"<<endl
#define no                  cout<<"NO"<<endl
#define NL                  cout<<"\n"

// overloading
template<typename T> // cin >> vector<T>
istream& operator>>(istream &istream, vector<T> &v){for (auto &it : v)cin >> it;return istream;}


//_______________________________________________________________________
// string DtoB(ll n) {if(n==0)return "0";string s="";while(n>0){s+=(n%2==0?"0":"1");n/=2;}reverse(all(s));return s;}
// ll power(ll a,ll b){ll an=1;while(b){if(b&1) an*=a;a*=a;b>>=1;}return an;}
// bool isPrime(ll n){if(n<=1)return false;if(n<=3)return true;if(n%2==0||n%3==0)return false;for(int i=5;i*i<=n;i=i+6)if(n%i==0||n%(i+2)==0)return false;return true;}
// bool isPowerOfTwo(int n){if(n==0)return false;return (ceil(log2(n)) == floor(log2(n)));}
// bool isPerfectSquare(ll x){if (x >= 0) {ll sr = sqrt(x);return (sr * sr == x);}return false;}
// vll psum(const vll &a){vll v(sz(a)+1);for(ll i=0;i<sz(a);++i)v[i+1]=v[i]+a[i];return v;}
//_______________________________________________________________________

//----------------Code----------------------------------
void solve(){
   ll a,b,k=0,m,n,ans=0;
   string s,t; 
    
}
 
//----------------main---------------------------------
int main(){
    Code By Utsho
    int T=1;
    cin>>T;
    while(T--) 
    solve();
    return 0;
}
