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
#include<limits.h>
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
int LessThanorEqualTO( int key, int data[], const int len )
{
    int low  = 0;
    int high = len-1;
    int mid;
    while( high >= low )
    {
        mid = low + ((high - low) / 2);

        /**/ if (data[mid] < key) low  = mid + 1;
        else if (data[mid] > key) high = mid - 1;
        else 
            return mid;
    }
    if(data[mid]<key)
        return mid;
    return mid-1; // KEY_NOT_FOUND
}
int GreaterThanorEqualTO( int key, int data[], const int len )
{
    int low  = 0;
    int high = len-1;
    int mid;
    while( high >= low )
    {
        mid = low + ((high - low) / 2);

        /**/ if (data[mid] < key) low  = mid + 1;
        else if (data[mid] > key) high = mid - 1;
        else 
            return mid;
    }
    if(data[mid]>key)
        return mid;
    return mid+1; // KEY_NOT_FOUND
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);






    int items[] = { 1, 3, 5, 7, 9, 11 };
    int LENGTH  = sizeof(items) / sizeof(items[0]);
    
    cout<<endl<<LessThanorEqualTO(12,items,LENGTH)<<endl;
    cout<<"hello";
    return 0;
}