//
// Created by avinash on 4/8/19.
// Brute Force Approach for SUM OF SUB-ARRAY
//
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

void SumOfSubArray(vector<int> arr,int k)
{
    int max=0,flag=0;
    REP(i,arr.size())
    {
        int sum=0;
        FOR(j,i,arr.size())
        {
            sum+=arr[j];
            // DEBUG(sum);
            if(sum==k){
                cout<<i+1<<" "<<j+1<<'\n';
                flag=1;
                break;
            }
        }
        if(flag==1)
            break;
    }
    if(flag==0)
        cout<<-1<<'\n';
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int> arr(n);
        REP(i,n)
            cin>>arr[i];
        SumOfSubArray(arr,k);
    }
    return 0;
}
