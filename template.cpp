#include <bits/stdc++.h>
using namespace std;
#define int   long long

#define inf 1e18
#define endl '\n'
#define pb push_back
#define yes "YES"
#define no "NO"
#define ff front().first
#define fs front().second
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define intd long double
#define maxval(x) *max_element(x.begin(),x.end())
//------------vector------------------
#define vi vector<int>
#define vp vector<pair<int,int>>
#define vpi vector<pair<int,int>> 
#define vvi vector<vector<int>>
#define vvc vector<vector<char>>
#define vb vector<bool>
#define vc vector<char>
//------------vector------------------


#define len(x) x.size()
#define rep(i,st,en) for(int i= st; i < en ; i++)
#define rrep(i,st,en) for(int i= st; i >= en ; i--)
#define dout(x,number) cout << fixed << setprecision(x) << number << endl     //output in decimal  
#define out(x) cout << x << '\n' //output
#define upmax(ans,mx) ans = max(ans,mx) 
#define upmin(ans,mx) ans = min(ans,mx) 
//------------binary_search---------------

#define lowerBound(x,y) lower_bound(all(x),y) 
#define upperBound(x,y) upper_bound(all(x),y) 

int mod(int a, int m) {
    return ((a % m) + m) % m;
}

template<typename T>
vector<T> get_prefix(const vector<T>& a) {
    int n = (int)a.size() - 1; for (int i = 1; i <= n; i++) {pref[i] = pref[i - 1] + a[i];}return pref;
}


string multiply(string a, string b) {
    if (a == "0" || b == "0") return "0";    vector<int> res(a.size() + b.size(), 0);
    for (int i = a.size() - 1; i >= 0; i--) {for (int j = b.size() - 1; j >= 0; j--) {int p = (a[i] - '0') * (b[j] - '0');
            int sum = p + res[i + j + 1];res[i + j + 1] = sum % 10;res[i + j] += sum / 10;}}
    string s = "";for (int x : res) if (!(s.empty() && x == 0)) s += (x + '0');return s;
}


string add(string a, string b) {
    string res = "";    int i = a.size() - 1, j = b.size() - 1, carry = 0;
    while (i >= 0 || j >= 0 || carry) {        int sum = carry + (i >= 0 ? a[i--] - '0' : 0) + (j >= 0 ? b[j--] - '0' : 0);        res += (sum % 10 + '0');        carry = sum / 10;}
    reverse(res.begin(), res.end());return res;
}

string sub(string a, string b) {
    string res = "";    int i = a.size() - 1, j = b.size() - 1, borrow = 0;
    while (i >= 0) {        int val1 = a[i--] - '0';        int val2 = (j >= 0 ? b[j--] - '0' : 0);
        int diff = val1 - val2 - borrow;if (diff < 0) {diff += 10;borrow = 1;} else borrow = 0;res += (diff + '0');
    }while (res.size() > 1 && res.back() == '0') res.pop_back(); reverse(res.begin(), res.end());return res;
}


template<typename T>
vector<T> get_suffix(const vector<T>& a) {
    int n = (int)a.size() - 1;vector<T> suff(n + 2, 0);for (int i = n; i >= 1; i--) {        suff[i] = suff[i + 1] + a[i];    }    return suff;}


int power(int a, int b) {int res = 1;while (b > 0) {if (b & 1) res *= a;a *= a;b >>= 1;}return res;}
int lcm(int a, int b){return (a*b)/__gcd(a,b) ;}
int gcd(int a, int b) { return __gcd(a,b) ; }

template<typename T> void read(vector<T>& v){for(auto &x:v) cin>>x;}
template<typename T> void pread(vector<T>& v){for(auto &x:v) cin>>x.first >> x.second;}
template<typename T> void print(const vector<T>& v){for(auto &x:v) cout<<x<<" "; cout<<"\n";}
void dbg(){cerr<<"\n";}
template<typename T, typename... Args>
void dbg(T x, Args... args){cerr<<x<<" "; dbg(args...);}
#define debug(...) cerr<<"["#__VA_ARGS__"]: ", dbg(__VA_ARGS__);






void solve() {



    
}






bool MULTI = 0; 
int32_t main() {
ios::sync_with_stdio(0);
cin.tie(0) ;

int t = 1;
//int c = 1; 
if(MULTI) cin >> t;
while(t--){
	solve();
}
}


