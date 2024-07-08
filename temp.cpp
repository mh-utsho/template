#include <iostream>
#include <bits/stdc++.h>

using namespace std;


//Speed
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Utsho cout.tie(NULL);

//Aliases
using ll= long long;
using lld= long double;
using ull= unsigned long long;

//Constants
const lld pi= 3.141592653589793238;
const ll INF= LONG_LONG_MAX;
const ll mod=1e9+7;

//TypeDEf
typedef pair<ll, ll> pll;
typedef vector<ll> vll;
typedef vector<pll> vpll;
typedef vector<string> vs;
typedef unordered_map<ll,ll> umll;
typedef map<ll,ll> mll;

// Macros
#define F                   first
#define S                   second
#define pb                  push_back
#define endl                "\n"
#define mp                  make_pair
// const int dx[] = {0,1,1, 1, 0,-1,-1,-1};
// const int dy[] = {1,1,0,-1,-1,-1, 0, 1};
//-----------
#define all(x)              x.begin(), x.end()
#define rall(x)             x.rbegin(),x.rend()
#define forn(i, s, e)       for (ll i = (s); i < (e); i++)
#define loop(e)             for (ll i = 1 ; i <= (e); i++)
#define in(x)               for(auto &el:x) cin>>el
#define out(x)              for(auto &el:x) cout<<el<<" "
#define DBG(a)              cerr<< "Line "<<__LINE__ <<" : "<< #a <<" = "<<(a)<<endl
//------------
#define print(x)            for(auto el:x) cout<<el<<" "
#define yes                 cout<<"YES"<<endl
#define no                  cout<<"NO"<<endl
#define NL                  cout<<"\n"
#define p(x)                cout<<x<<endl
#define sq_check(x) (((ll)(sqrt((x))))*((ll)(sqrt((x))))==(x))
 


// Operator overloads
template<typename T1, typename T2> // cin >> pair<T1, T2>
istream& operator>>(istream &istream, pair<T1, T2> &p) { return (istream >> p.first >> p.second); }
template<typename T> // cin >> vector<T>
istream& operator>>(istream &istream, vector<T> &v){for (auto &it : v)cin >> it;return istream;}
template<typename T1, typename T2> // cout << pair<T1, T2>
ostream& operator<<(ostream &ostream, const pair<T1, T2> &p) { return (ostream << p.first << " " << p.second); }
template<typename T> // cout << vector<T>
ostream& operator<<(ostream &ostream, const vector<T> &c) { for (auto &it : c) cout << it << " "; return ostream; }

// Mathematical functions
ll gcd(ll a, ll b){if (b == 0)return a;return gcd(b, a % b);} //__gcd 
ll lcm(ll a, ll b){return (a/gcd(a,b)*b);}
ll moduloMultiplication(ll a,ll b,ll mod){ll res = 0;a %= mod;while (b){if (b & 1)res = (res + a) % mod;b >>= 1;}return res;}
ll powermod(ll x, ll y, ll p){ll res = 1;x = x % p;if (x == 0) return 0;while (y > 0){if (y & 1)res = (res*x) % p;y = y>>1;x = (x*x) % p;}return res;}

//Sorting
bool sorta(const pair<int,int> &a,const pair<int,int> &b){return (a.second < b.second);}
bool sortd(const pair<int,int> &a,const pair<int,int> &b){return (a.second > b.second);}

//Bits
string decToBinary(int n){string s="";int i = 0;while (n > 0) {s =to_string(n % 2)+s;n = n / 2;i++;}return s;}
ll binaryToDecimal(string n){string num = n;ll dec_value = 0;int base = 1;int len = num.length();for(int i = len - 1; i >= 0; i--){if (num[i] == '1')dec_value += base;base = base * 2;}return dec_value;}

//Check
bool isPrime(ll n){if(n<=1)return false;if(n<=3)return true;if(n%2==0||n%3==0)return false;for(int i=5;i*i<=n;i=i+6)if(n%i==0||n%(i+2)==0)return false;return true;}
bool isPowerOfTwo(int n){if(n==0)return false;return (ceil(log2(n)) == floor(log2(n)));}
bool isPerfectSquare(ll x){if (x >= 0) {ll sr = sqrt(x);return (sr * sr == x);}return false;}

//Code

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
