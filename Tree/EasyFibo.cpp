#include <bits/stdc++.h>

using namespace std;

template<typename T>
void pretty_print(const T& c, long long int &combo,long long int &count,long long int &min)
{
    long long int sum=0;
    long long int n = c.size();
    for (long long int i = 0; i < n; ++i) {
        if ((combo >> i) & 1)
        sum+=c[i];
    }
    if(sum<min)
		{
		    count=1;
		    min=sum;
		}
		else if(sum==min)
		    count++;
}

template<typename T>
void combo(const T& c, long long int k)
{
    long long int count=0;
    long long int min=LONG_MAX;
    long long int n = c.size();
    long long int combo = (1 << k) - 1;       // k bit sets
    while (combo < 1<<n) {

        pretty_print(c, combo,count,min);

        long long int x = combo & -combo;
        long long int  y = combo + x;
        long long int z = (combo & ~y);
        combo = z / x;
        combo >>= 1;
        combo |= y;
    }
    cout<<count<<"\n";
}

int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n,k;
        cin>>n>>k;
        vector<long long int> arr;
        for(long long int i=0;i<n;i++)
        {
            long long int x;
            cin>>x;
            arr.push_back(x);
        }
        if(k<n)
        combo(arr, k);
        else 
        cout<<0<<"\n";
    }
    //vector<char> c1 = {'a', 'b', 'c', 'd', 'e', 'f', 'g'};
    //combo(c1, 4);
    return 0;
}
