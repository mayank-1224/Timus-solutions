#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>  
 
using namespace std;
/*
   template_author: Mayank Patel
   edited: 10.03.2022
*/
 
typedef long long ll;
typedef long double ld;
typedef pair<int,int> p32;
typedef pair<ll,ll> p64;
typedef pair<double,double> pdd;
typedef vector<ll> v64;
typedef vector<int> v32;
typedef vector<vector<int> > vv32;
typedef vector<vector<ll> > vv64;
typedef vector<vector<p64> > vvp64;
typedef vector<p64> vp64;
typedef vector<p32> vp32;
ll MOD = 998244353;
double eps = 1e-12;
#define forn(i,e) for(ll i = 0; i < e; i++)
#define forsn(i,s,e) for(ll i = s; i < e; i++)
#define rforn(i,s) for(ll i = s - 1; i >= 0; i--)
#define rforsn(i,s,e) for(ll i = s; i >= e; i--)
#define ln "\n"
#define dbg(x) cout<<#x<<" = "<<x<<ln
#define inarr(arr) ll n; cin>>n;ll arr[n];for(ll i=0;i<n;i++) cin>>arr[i];
#define invector(v,n) forn(i,n){int temp;cin>>temp;v.pb(temp);}
#define prntarr(arr,n) for(ll i=0;i<n;i++) cout<<arr[i]<<endl;
#define mp make_pair
#define pb push_back
#define fi first
#define sc second
#define pii 3.14159265358979323846
#define bmod 1000000007
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())
#define gl(str) std::getline(std::cin >> std::ws, str) //read string with spaces
#define tcase  "Case #" << it << ": "
const int inf = 1e9 + 10;
const ll INF = 1e18 + 10;

//ll gcd(ll a,ll b){if(!a||!b)return a|b;unsigned s=__builtin_ctzll(a|b);a>>=__builtin_ctzll(a);do{b>>=__builtin_ctzll(b);if(a>b)swap(a,b);b-=a;}while(b);return a<<s;}
//ll gcd(ll a,ll b){while(b){a%=b;swap(a,b);}return a;}
//ll lcm(ll a,ll b){return a/gcd(a,b)*b;}//enable gcd too
//int findGCD(int arr[],int n){int r=arr[0];forsn(i,1,n){r=gcd(arr[i],r);if(r==1){return 1;}}return r;}
//string factorial(ll n){const int MAX=1000;if(n>MAX){return "";}ll c;ll s = 0;if(n==0)return "1";for(c=1;c<=n;c++){s=s+log(c);}string r=to_string(round(exp(s)));return r;}
/*int gcd(int a,int b,int& x,int& y){if(b==0){x=1;y=0;return a;}int x1,y1;int d=gcd(b,a%b,x1,y1);x=y1;y=x1-y1*(a/b);return d;}
bool ax_plus_by(int a,int b,int c,int &x0,int &y0,int &g){g=gcd(abs(a),abs(b),x0,y0);if(c%g){return false;}x0*=c/g;y0*=c/g;if(a<0)x0=-x0;if(b<0)y0=-y0;return true;}*/
//ll power(ll x,ll y,ll p){ll r=1;x=x%p;while(y>0){if(y&1)r=(r*x)%p;y=y>>1;x=(x*x)%p;}return r;}
//ll binpow(ll a,ll b){ll r=1;while(b>0){if(b&1)r=r*a;a*=a;b>>=1;}return r;}
//ll isPowerof2(ll x){return(x && !(x & x-1));}
//bool isPrime(ll n){if(n<=1)return false;if(n<=3)return true;if(n%2==0||n%3==0)return false;for(ll i=5;i*i<=n;i=i+6)if(n%i==0||n%(i+2)==0)return false;return true;}
//ll nCrModp(ll n,ll r,ll p){if(r>n-r)r=n-r;ll C[r+1];memset(C,0,sizeof(C));C[0]=1;for(ll i=1;i<=n;i++){for(ll j=min(i,r);j>0;j--)C[j]=(C[j]+C[j-1])%p;}return C[r];}
//bool isSubSequence(string str1, string str2){int m=str1.length(),n=str2.length(),j=0;for(int i=0;i<n && j<m;i++)if(str1[j]==str2[i])j++;return(j==m);}
//v64 pr;void sieve(ll N,ll primes[]){for(ll i=2;i<N;i++){if(primes[i]==0){pr.pb(i);for(ll j=i*i;j<N;j+=i){primes[j]=1;}}primes[i]^=1;}}
//
//<< fixed << setprecision(x) <<

void solve(int it)
{
    vector<ld>ans;
    unsigned long long n;
    while(scanf("%llu", &n) != EOF)
        ans.pb((double)sqrt(n));
    for(ll i = ans.size() - 1; i >= 0; i--)
        cout << fixed << setprecision(4) << ans[i] << ln;
}
int main()
{
    fast_cin();
    solve(0);
    return 0;
}
