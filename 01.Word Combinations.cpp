//The author of this beautiful code is Tamjid Ul Haque .

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std ;
using namespace __gnu_pbds;

template<typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
// order_of_key(k) : no. of elements < k
// *find_by_order(i) : value at index i (0-based)

template<typename T>
using ordered_multiset = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

template<typename Key, typename Value>
using ordered_map = tree<Key, Value, less<Key>, rb_tree_tag, tree_order_statistics_node_update>;

#define Bismillah() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define Alhamdulillah return 0 ; 
#define Input  freopen("input.txt", "r", stdin);
#define Output freopen("output.txt", "w", stdout);


typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef vector<bool> vb;
typedef vector<string> vs;
typedef vector<double> vd;
typedef vector<long long> vll;
typedef vector<vector<int>> vvi;
typedef vector<vll> vvll;
typedef vector<pair<int, int>> vpi;
typedef vector<vpi> vvpi;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<pll> vpll;

#define pb push_back 
#define eb emplace_back
#define ppb pop_back
#define infinity LLONG_MAX
#define aura LLONG_MIN
#define F first
#define S second
#define sesh '\n'
#define gap ' '

#define lin(k) ll k ; cin >> k ;
#define sin(s) string s ; cin >> s ;
#define llvec(v,n) vector<long long > v(n) ;
#define llvecin(v,n) for(int i = 0 ; i < n ; i++) cin >> v[i] ;

#define testloop int test; cin >> test; while (test--)
#define tamjid(g) for(int i = 0 ; i < g ; ++i)
#define loop(i,start,end) for(int i = start ; i < end ; ++i)

#define len(x) int((x).size())
#define all(n) n.begin(), n.end()
#define rall(n) n.rbegin(), n.rend()
#define nsort(v) sort(v.begin(),v.end());
#define rsort(v) sort(v.rbegin(),v.rend());
#define flip(v) reverse(v.begin(),v.end());


#define show(z) cout << z << endl 
#define printtwo(a,b) cout << a << " " << b << endl 
#define display(vec) for(auto value:vec) cout << value << " " 
#define printpair(vec) for(auto value:vec) cout << value.first << " " << value.second << endl 

#define RemoveLeadingZeros(s) (s.erase(0, s.find_first_not_of('0')))
#define eraser(s) s.erase(remove(s.begin(), s.end(), 'TheCharIwannaRemove'), s.end())
#define countsetbits(x) __builtin_popcount(x)
#define countsetbitsll(x) __builtin_popcountll(x)
#define tamjid_shuffle(vec) shuffle(vec.begin(), vec.end(), mt19937(chrono::steady_clock::now().time_since_epoch().count())) ;

#define make_unique(x) sort((x).begin(), (x).end()); (x).erase(unique((x).begin(), (x).end()), (x).end())

#define isOdd(n) ((n) & 1) 
#define isEven(n) (((n) & 1) == 0)
bool powerof2(long long x) {
    return (x > 0) && ((x & (x - 1)) == 0);
}


 
/*
string decToBinary(ll n){
    string s = string(61,'0') ;
    for(ll i = 0 ; i < 61 ; i++){
        ll mask = (1LL << i) ;
        if(mask&n) s[i] = '1' ;
    }
    flip(s) ; RemoveLeadingZeros(s) ;
    return s ; 
}

bool isPerfectSquare(ll n){
    ll root = sqrt(n) ;
    if(root*1LL*root==n) return true ;
    return false ;
}

bool isPrimeNumber(ll n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (ll i = 5; i * i <= n; i += 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    return true;
}

const ll mod = 998244353 ;
const ll limit = 2e5 + 3 ;
vector<ll> factorial ;
vector<ll> inv_fact ;

ll binExpo(ll x , ll n , ll MOD){
    ll res = 1 ; x %= MOD ;
    while(n>0){
        if(n&1){
            res *= x ; res %= MOD ;
        }
        x *= x ; x %= MOD ; n >>= 1 ;
    }
    return res ;
}

ll ModularMultiplicativeInverse(ll x,ll MOD){
    return binExpo(x,MOD-2,MOD) ;
}

vector<ll> CalculateFactorial(ll limit , ll MOD){
    vector<ll> factorial ; factorial.push_back(1) ;
    for(ll i = 1 ; i <= limit ; i++){
        ll curr = (factorial.back() * i) % MOD ;
        factorial.push_back(curr) ; 
    }
    return factorial ;
}

vector<ll> CalculateInverseFactorial(ll limit, ll MOD, const vector<ll>& factorial){
    vector<ll> inv_fact(limit+1);
    
    inv_fact[limit] = binExpo(factorial[limit], MOD-2, MOD);
    
    for(ll i = limit; i >= 1; i--){
        inv_fact[i-1] = (inv_fact[i] * i) % MOD;
    }
    
    return inv_fact;
}


ll nCr(ll n , ll r , ll MOD){
    if(r > n) return 0;
    if(r == 0 || r == n) return 1;
    return factorial[n] * inv_fact[r] % MOD * inv_fact[n-r] % MOD;
}

ll nPr(ll n , ll r , ll MOD){
    if(r > n) return 0;
    return factorial[n] * inv_fact[n-r] % MOD;
}


*/

#define yes cout << "YES" << endl  
#define no cout << "NO" << endl

const long double PI = acos(-1.0) ;

#define Sum(a)     ( accumulate ((a).begin(), (a).end(), 0ll))
#define Boro(vec) *(max_element(vec.begin(),vec.end()))
#define Chuto(vec) *(min_element(vec.begin(),vec.end())) 
#define minidx(a)    ( min_element((a).begin(), (a).end()) - (a).begin())
#define maxidx(a)    ( max_element((a).begin(), (a).end()) - (a).begin())
#define lowb(a, x) ( lower_bound((a).begin(), (a).end(), (x)) - (a).begin())
#define uppb(a, x) ( upper_bound((a).begin(), (a).end(), (x)) - (a).begin())

struct Node{
    Node *links[26] ;
    bool flag = false ;

    bool present(char ch){
        return (links[ch-'a'] != NULL) ;
    }

    void create(char ch, Node* node){
        links[ch-'a'] = node ;
    }

    Node* move(char ch){
        return (links[ch-'a']) ;
    }

    void complete(){
        flag = true ;
    }

    bool isEnd(){
        return flag ;
    }
};

class Trie{
public:
    Node* root ;
    
    Trie() {
        root = new Node() ;
    }
    
    void insert(string word) {
        Node* temp = root ;
        for(int i = 0 ; i < word.size() ; i++){
            if(!temp->present(word[i])){
                temp->create(word[i],new Node()) ;
            }
            temp = temp->move(word[i]) ;
        }
        temp->complete() ;
    }
    
    bool search(string word) {
        Node* temp = root ;
        for(int i = 0 ; i < word.size() ; i++){
            if(!temp->present(word[i])){
                return false ;
            }
            temp = temp->move(word[i]) ;
        }
        return temp->isEnd() ;
    }
    
    bool startsWith(string word) {
        Node* temp = root ;
        for(int i = 0 ; i < word.size() ; i++){
            if(!temp->present(word[i])){
                return false ;
            }
            temp = temp->move(word[i]) ;
        }
        return true ;
    }
};

const ll mod = 1e9+7 ;

void IcpcDhakaRegionalist2025(){
    string s ; cin >> s ; 
    ll n = s.size() ; s = "?" + s ;
    Trie memory ; ll k ; cin >> k ; 

    while(k-->0){
        string temp ; cin >> temp ;
        if(len(temp) > n) continue ;
        memory.insert(temp) ;
    }

    vector<ll> no_of_ways(n+1,0) ; no_of_ways[0] = 1 ;

    for(int start = 1 ; start <= n ; start++){
        if(no_of_ways[start-1] == 0) continue ;
        Node* current = memory.root ;
        for(int end = start ; end <= n ; end++){
            char alphabet = s[end] ;
            if(!current->present(alphabet)) break ;
            current = current->move(alphabet) ;
            if(current->isEnd()){
                no_of_ways[end] += no_of_ways[start-1] ;
                no_of_ways[end] %= mod ;
            }
        }
    }

    cout << no_of_ways[n] << endl ;
}

int main(){
    Bismillah() ;

    /*testloop*/ IcpcDhakaRegionalist2025() ;

    Alhamdulillah ;
}