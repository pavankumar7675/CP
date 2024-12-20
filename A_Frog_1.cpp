#include<bits/stdc++.h>
using namespace std;
// #include<ext/pb_ds/assoc_container.hpp>
// #include<ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
#define int long long
#define pii pair<long long, long long>
#define vi vector<long long>
#define vvi vector<vector<long long>>
#define pb push_back
#define endl "\n"
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define nope cout<<"-1\n"
#define ff first
#define ss second
#define all(v) v.begin(), v.end()
#define umap unordered_map
#define uset unordered_set
#define f(i,n) for(i=0;i<n;i++)
#define r(i,n) for(i=n-1;i>=0;i--)
#define fs(i,a,n) for(i=a;i<n;i++)
#define fe(i,n) for(int i=0;i<=n;i++)
#define fse(i,a,n) for(int i=a;i<=n;i++)
#define rse(i,a,n) for(int i=a;i>=n;i--)
#define M 1000000007
int inf = INT_MAX;
inline int in(){int x;cin>>x;return x;}
template<class T> void look(T &x) { cout << x << ' ' << endl; }
template<class T>void inp(vector<T>&a){for(auto &x:a)cin>>x;}
template<class T>void inpo(vector<T>&a){for(int i=1;i<a.size();++i)cin>>a[i];}
template <class T>void prefixSum(vector<T>& p, const vector<T>& a) { p[0] = a[0]; for (int i = 1; i < p.size(); ++i) { p[i] = p[i-1] + a[i]; }}
bool is_prime(int n){if(n<=1)return false;if(n<=3)return true;if(n%2==0||n%3==0)return false;for(int i=5;i*i<=n;i=i+6)if(n%i==0||n%(i+2)==0)return false;return true;}
template<class T> void look(vector<T>&a){for(auto &x:a)cout<<x<<' ';cout<<endl;}
template<class T> void look(set<T>&a){for(auto &x:a)cout<<x<<' ';cout<<endl;}
template<class T> void look(unordered_set<T>&a){for(auto &x:a)cout<<x<<' ';cout<<endl;}
template<class T> void look(multiset<T>&a){for(auto &x:a)cout<<x<<' ';cout<<endl;}
template<class T> void look(map<T,T>&a){for(auto &x:a)cout<<x.ff<<' '<<x.ss<<endl;cout<<endl;}
template<class T> void look(unordered_map<T,T>&a){for(auto &x:a)cout<<x.ff<<' '<<x.ss<<endl;cout<<endl;}
string decToBinary(int n){string s="";while(n>0){s=to_string(n%2)+s;n=n/2;}return s;}
int binaryToDec(const string& binary) { int decimal = 0; for (char bit : binary) { decimal = (decimal << 1) | (bit - '0'); } return decimal; }
int max(vector<int>&a){return *max_element(all(a));}
int min(vector<int>&a){return *min_element(all(a));}
int acc(vector<int>&a){return accumulate(all(a),0ll);}
int lcm(int a, int b){return (a * b) / __gcd(a, b);}
int psum(vi &p, int l, int r){if(l > r || l < 0 || r < 0 || l >= p.size() || r >= p.size())return 0;if(l == 0)return p[r];return p[r] - p[l - 1];}
int binpow(int a, int b){int ans = 1;a %= M;while(b){if(b & 1)ans = ((ans % M) * (a % M)) % M;a = ((a % M) * (a % M)) % M;b >>= 1;}return ans;}
int add(int a, int b){a %= M;b %= M;return (a + b) % M;}
int sub(int a, int b){a %= M;b %= M;return (a - b + M) % M;}
int mul(int a, int b){a %= M;b %= M;return (a * b) % M;}
// template<class T> using ordered_set = tree<T, null_type, less<T>, rb_tree_tag,tree_order_statistics_node_update>; // find_by_order, order_of_key
const auto start_time = std::chrono::high_resolution_clock::now();
void time_taken(){auto end_time = std::chrono::high_resolution_clock::now();std::chrono::duration<double> diff = end_time-start_time;cerr<<"Time Taken : "<<diff.count()<<"\n";}
/*************************************************************************************************/
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x << " = "; _print(x); cerr << endl
#define dbg(x...) cerr << #x << " = "; _print(x); cerr << endl
#else
#define debug(x)
#define dbg(x...)
#endif

template <typename T> void _print(T a) { cerr << a; }
template <class T, class V> void _print(pair<T, V> p) { cerr << "{"; _print(p.first); cerr << ", "; _print(p.second); cerr << "}"; }
template <class T> void _print(vector<T> v) { cerr << "[ "; for (T i : v) _print(i), cerr << " "; cerr << "]"; }
template <class T> void _print(set<T> v) { cerr << "[ "; for (T i : v) _print(i), cerr << " "; cerr << "]"; }
template <class T> void _print(multiset<T> v) { cerr << "[ "; for (T i : v) _print(i), cerr << " "; cerr << "]"; }
template <class T, class V> void _print(map<T, V> v) { cerr << "[ "; for (auto i : v) _print(i), cerr << " "; cerr << "]"; }
template <class T, class V> void _print(unordered_map<T, V> v) { cerr << "[ "; for (auto i : v) _print(i), cerr << " "; cerr << "]"; }
/*************************************************************************************************/
void solve()
{
    int n,i,j,k;
    cin >> n;
    vi dp(n,-1),h(n);
    inp(h);
    dp[n-1] = 0;
    dp[n-2] = abs(h[n-2] - h[n-1]);
    for(i=n-3;i>=0;i--)
        dp[i] = min((dp[i+1] + abs(h[i+1]-h[i])),(dp[i+2] + abs(h[i+2]-h[i])));
    cout << dp[0];
}

/*************************************************************************************************/

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    // cin>>t;
    while(t--)
        solve();
    // time_taken();
}

// FUNCTIONS

// SIEVE'S
 
// const int N = 1e6; 
// vector<bool> isPrime(N + 1, true); 
// void sieve() 
// {
//     isPrime[0] = isPrime[1] = false; 
//     for (int i = 2; i * i <= N; i++) 
//     { 
//         if (isPrime[i]) 
//         { 
//             for (int j = i * i; j <= N; j += i) 
//             {
//                 isPrime[j] = false;
//             }
//         }
//     }
// }

// FACTORIAL AND NCR

// vi fact(2e5 + 5, 1);

// void comp()
// {
//     fact[1] = 1;
//     fact[0] = 1;
//     fse(i, 2, N)
//         fact[i] = mul(i, fact[i - 1]);
// }

// int ncr(int n, int r) 
// {
//     if(n < r) return 0;
//     int num = fact[n];
//     int den = mul(fact[n - r], fact[r]);
//     return mdiv(num, den);
// }

// int npr(int n, int r) 
// {
//     if (n < r) return 0; 
//     return (fact[n] * mod_inverse(fact[n - r], M)) % M; 
// }

// DFS
 
// vi visited(2e5 + 5, false);
 
// void dfs(vector<int> adj[], int curr)
// {
//     if(visited[curr])
//         return;
//     visited[curr] = true;
//     cout << curr << " ";

//     for(auto &child : adj[curr])
//         dfs(adj, child);
// }
 
// vector<int> adj[n + 1];
// f(i, m)
// {
//     int a, b; cin>>a>>b;
//     adj[a].pb(b);
//     adj[b].pb(a);
// }
