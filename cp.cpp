#include <iostream>
#include <vector>
#include <map>
#include <cmath>

typedef long long int ull;
using namespace std;

int main()
{
    ull t ,i ,j ;
    cin >> t;
    while(t--)
    {
        ull n ;
        map<ull, ull> freq;
        map<ull, ull> freq1;
        map<ull, ull> ::iterator itr ;
        cin >> n ;
        ull a[n] ;
        for(i=0;i<n;i++)
        {
            cin >> a[i];
        }
        ull opsize = pow(2, n);
        for (ull counter = 1; counter < opsize; counter++)
        {
            ull k=1000000009,h=0;
            for ( j = 0; j < n; j++)
            {
                if (counter & (1<<j))
                {
                    freq1[a[j]] = freq1[a[j]] + 1 ;
                    freq1[a[j]] = freq1[a[j]]%1000000007;
                }

            }
            // cout << endl ;
            // for(itr = freq1.begin() ;itr!=freq1.end();++itr)
            // {
            //   cout << itr->first << " " << itr->second <<endl;
            // }
            // cout << endl ;
            k=1000000009;
            h=0;
            for(itr = freq1.begin() ;itr!=freq1.end();++itr)
            {

                if(itr->second > h)
                {
                    h = itr->second ;
                    k = itr->first;
                }
                //cout << itr->first <<" "<<itr->second<<endl;
            }
            //cout << k << " "<<h <<endl;
            freq[k] = freq[k] + 1 ;
            freq1.clear();
        }
        for(i=0;i<n;i++)
        {
            itr = freq.find(a[i]) ;
            cout << (itr->second) << " "  ;
            freq[a[i]]  = 0 ;
        }
        cout << endl ;
    }
    return 0 ;
}