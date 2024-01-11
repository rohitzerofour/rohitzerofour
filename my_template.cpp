#include "bits/stdc++.h"
using namespace std;
#define endl "\n"
#define ll long long
#define pii pair<int, int>
#define pll pair<long long, long long>
#define vi vector<int>
#define vll vector<long long>
#define vpii vector<pii>
#define vpll vector<pll>
#define pb push_back
#define eb emplace_back
#define gcd(a,b) __gcd(a,b)
#define all(x) (x).begin(), (x).end()
#define ff first
#define ss second
#define input(arr, n) for(ll i = 0; i<n; i++) cin >> arr[i];
#define sz(a) ((int)((a).size()))
#define REP(i, x, y) for(ll i = x; i<y; i++)

template <class T> void output(T *arr, ll start, ll end){ 
  for(ll i = start; i<end; i++){cout << arr[i] << " ";}cout << endl;}

template<class T> istream& operator>>(istream &in, vector<T>& arr){
  for(size_t i = 0; i < arr.size(); i++) {in >> arr[i];} return in;}

template<class T> ostream& operator<<(ostream &out, const vector<T>& arr){
  for(size_t i = 0; i < arr.size(); i++) {out << arr[i] << " ";} out << endl; return out;}

void setIO(string s) {
  freopen((s + ".in").c_str(), "r", stdin);
  freopen((s + ".out").c_str(), "w", stdout);
}

const int MOD = 1e9 + 7;

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;

template<int MOD, int RT> struct mint {
  static const int mod = MOD;
  static constexpr mint rt() { return RT; } // primitive root for FFT
  int v; explicit operator int() const { return v; } // explicit -> don't silently convert to int
  mint():v(0) {}
  mint(ll _v) { v = int((-MOD < _v && _v < MOD) ? _v : _v % MOD);
    if (v < 0) v += MOD; }
  bool operator==(const mint& o) const {
    return v == o.v; }
  friend bool operator!=(const mint& a, const mint& b) { 
    return !(a == b); }
  friend bool operator<(const mint& a, const mint& b) { 
    return a.v < b.v; }
  // friend void re(mint& a) { ll x; re(x); a = mint(x); }
  // friend string ts(mint a) { return ts(a.v); }
   
  mint& operator+=(const mint& o) { 
    if ((v += o.v) >= MOD) v -= MOD; 
    return *this; }
  mint& operator-=(const mint& o) { 
    if ((v -= o.v) < 0) v += MOD; 
    return *this; }
  mint& operator*=(const mint& o) { 
    v = int((ll)v*o.v%MOD); return *this; }
  mint& operator/=(const mint& o) { return (*this) *= inv(o); }
  friend mint pow(mint a, ll p) {
    mint ans = 1; assert(p >= 0);
    for (; p; p /= 2, a *= a) if (p&1) ans *= a;
    return ans; }
  friend mint inv(const mint& a) { assert(a.v != 0); 
    return pow(a,MOD-2); }
    
  mint operator-() const { return mint(-v); }
  mint& operator++() { return *this += 1; }
  mint& operator--() { return *this -= 1; }
  friend mint operator+(mint a, const mint& b) { return a += b; }
  friend mint operator-(mint a, const mint& b) { return a -= b; }
  friend mint operator*(mint a, const mint& b) { return a *= b; }
  friend mint operator/(mint a, const mint& b) { return a /= b; }
};

using mi = mint<MOD,5>; // 5 is primitive root for both common mods
using vmi = vector<mi>;
using pmi = pair<mi,mi>;
using vpmi = vector<pmi>;

vector<vmi> scmb; // small combinations
void genComb(int SZ) {
  scmb.assign(SZ,vmi(SZ)); scmb[0][0] = 1;
  for(ll i = 1; i<SZ; i++){
    for(ll j = 0; j<i+1; j++){
      scmb[i][j] = scmb[i-1][j]+(j?scmb[i-1][j-1]:0);
    }
  }
}

void _print() {cout << "]\n";}
template <typename T, typename... V> void _print(T t, V... v)
{cout << to_string(t); if (sizeof...(v)) cout << ", "; _print(v...);}
#define debug(x...) cout << "[" << #x << "] = ["; _print(x)

//PRIME NO.
#define prime_size (ll)1e5
ll prime[prime_size];
void p(){
    for(ll i = 0; i<prime_size; i++) prime[i] = 1;
    prime[0] = 0, prime[1] = 0;
    for(ll i = 2; i*i<prime_size; i++){
        if(prime[i] == 1){
            for(ll j = i * i; j<prime_size; j+=i){
                prime[j] = 0;
            }
        }
    }
}

//FACTORIAL calculation
#define fact_size (ll)1e5
ll fact[fact_size];
void f(){
    fact[0] = 1;
    fact[1] = 1;
    for(ll i = 2; i<fact_size; i++){
        fact[i] = (fact[i-1] * i) % MOD;
    }
}

//POWER Fuction
ll power(ll x, ll n){
    ll ans = 1;
    while(n > 0){
        if(n & 1){
            ans = (ans * x) % MOD;
        }
        x = (x * x) % MOD;
        n >>= 1;
    }
    return ans;
}
//MULTIPLICATIVE INVERSE calculation
ll inv(ll n){
    return (power(n, MOD - 2) % MOD);
}

void solve(){
  
}  
 
int main(){
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
  cout << fixed << setprecision(25);
  cerr << fixed << setprecision(10);
  auto start = std::chrono::high_resolution_clock::now();

  int t = 1;
  cin >> t;
  while (t--) {
    solve();
  }
  auto stop = std::chrono::high_resolution_clock::now(); 
  auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(stop - start);
}