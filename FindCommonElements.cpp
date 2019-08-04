#include <iostream>
#include <sstream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <cctype>
#include <string>
#include <vector>
#include <list>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <algorithm>
#include <functional>
using namespace std; 
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
#define REP(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define FORD(i,a,b) for(int i=(a);i>=(b);i--)
#define VI vector<int>
#define VLL vector<LL>
#define VIP vector< pair <int,int> >
#define MI map<int,int>
inline bool EQ(double a, double b) { return fabs(a-b) < 1e-9; }
const int INF = 1<<29;
typedef long long ll;
inline int two(int n) { return 1 << n; }
inline int test(int n, int b) { return (n>>b)&1; }
inline void set_bit(int & n, int b) { n |= two(b); }
inline void unset_bit(int & n, int b) { n &= ~two(b); }
inline int last_bit(int n) { return n & (-n); }
inline int ones(int n) { int res = 0; while(n && ++res) n-=n&(-n); return res; }
template<class T> void chmax(T & a, const T & b) { a = max(a, b); }
template<class T> void chmin(T & a, const T & b) { a = min(a, b); }
/////////////////////////////////////////////////////////////////////


//finding using hashing
void FindCommonElementsHashing(VI small,VI big,int n)
{
    MI hash;
    REP(i,n)
        hash.insert(pair<int,int>(small[i],1));
    REP(i,big.size())
    {
        if(hash.find(big[i])!=hash.end())
            hash[big[i]]++;
    }
    MI::iterator itr;
    for(itr=hash.begin();itr!=hash.end();itr++)
    {
        if((itr->second)>1)
            cout<<itr->first<<' ';
    }
}
void FindHash(VI arr,VI brr)
{
    int sizeOfHash=min(arr.size(),brr.size());
    if(arr.size()<brr.size())
    {
        FindCommonElementsHashing(arr,brr,sizeOfHash);
    }
    else
    {
             FindCommonElementsHashing(brr,arr,sizeOfHash);
    }
}


int main()
{
    int n,m;
    cin>>n>>m;
    VI arr(n),brr(m);
    REP(i,n)
        cin>>arr[i];
    REP(i,m)
        cin>>brr[i];
    
    //Method 1 Hashing.
    FindHash(arr,brr);
    
    return 0;
}