#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <unordered_map>
#include <deque>
#include <string>
#include <cmath>
#include <bitset>
#include <numeric>
#include <limits>
#include <algorithm>
#include <random>
#include <ctime>
#include <queue>
#include <cassert>
#include <cstdint>
#include <cstdlib>
#include <ctime>
#include <stack>
#include <climits>

using namespace std;
#define endl "\n";

#define FOR(i, a, b) for(int i = a; i < b; i ++)
#define FORS(i, a, b, c) for(int i = a; i < b; i += c)
#define FORN(i, a, b) for(lli i = a; i <= b; i ++)
#define FORD(i, a, b) for(int i = a-1; i >= b; i --)
#define FORE(i, b) for(auto &i:b)
#define REP(i, b) FOR(i, 0, b)
#define REPN(i, b) FORN(i, 0, b)
#define SQ(i) (i*i)
#define ALL(a) a.begin(), a.end()
#define ALLA(a,n) a, a+n
#define SORT(a) sort(ALL(a))
#define SORTA(a, n) sort(ALLA(a, n))
#define REV(a) reverse(ALL(a))
#define REVA(a, n) reverse(ALLA(a, n))
#define MAX(a, b) a = max(a, b)
#define MIN(a, b) a = min(a, b)
#define IN(a, b) (a.find(b) != a.end())
#define BACK(a) a.back(); a.RB()
#define QBACK(a) a.top(); a.pop()
#define PRINT(a) FORE(i, a) cout << i << " "; cout << endl

#define PB  push_back
#define RB  pop_back
#define RF  pop_front
#define INS insert
#define F   first
#define S   second
#define UM  unordered_map
#define US  unordered_set
#define PQ  priority_queue

typedef long long ll;
typedef long long int lli;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<double> vd;
typedef vector<ll> vll;
typedef pair<int,int> pi;
typedef pair<double,double> pd;
typedef pair<ll,ll> pll;
typedef queue<int> qi;
typedef queue<double> qd;
typedef queue<ll> qll;
typedef vector<vi> mi;
typedef vector<vd> md;
typedef vector<vll> mll;
typedef vector<pi> vpi;
typedef vector<pd> vpd;
typedef vector<pll> vpll;

const ll limit = 5001, mod = 1000'000'007;
ll f1[limit], f2[limit], f3[limit][limit];

template <typename T> bool is_prime(T num);
unsigned int factorial(unsigned int n);
bool is_armstrong(int number);
template <typename T> double fast_power(T a, T b);
int fibonacci(unsigned int n);
lli rizimore(vector<lli> lines[], lli num, int colour);

/**
 * Mubashir Rasool Razvi <rizimore@gmail.com>
 *
 * @author rizimore
 */
void solution() {
    lli t;
    cin >> t;
    while (t--){
        lli n, c, k;
        cin >> n >> c >> k;
        unordered_map<lli, int> colour[c+1];
        vector<lli> l[c+1];
        for (int i=1; i<=n; i++) {
            lli input1, input2, input3;
            cin >> input1 >> input2 >> input3;
            colour[input3][input1]++;
        }
        lli v[c+1] = {0};
        for (lli i=1; i<=c; i++) cin >> v[i];
        for (lli i=1; i<=c; i++) {
            vector<lli> lines;
            for(auto it : colour[i]) lines.push_back(it.second);
            sort(lines.begin(), lines.end());
            l[i] = lines;
        }
        lli dp[k+1][c+1], memo[k+1][c+1];
        for (lli i=0; i<=k; i++){
            for (lli j=0; j<=c; j++){
                dp[i][j] = LLONG_MAX;
                if(j==0) dp[i][j]=0;
                memo[i][j] = -1;
            }
        }
        for (lli i=0; i<=k; i++) {
            for (lli j=1; j<=c; j++) {
                lli maximum = i/v[j];
                for (lli kk=0; kk<=maximum; kk++) {
                    lli val = kk*v[j];
                    if (memo[kk][j]==-1) memo[kk][j] = rizimore(l, kk, j);
                    dp[i][j] = min(dp[i][j], dp[i-val][j-1] + memo[kk][j]);
                }
            }
        }
        cout << dp[k][c] << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solution();
    return 0;
}

ll bin(ll n, ll r) {
    return ((f1[n] * f2[r]) % mod * f2[n-r]) % mod;
}

template <typename T>
bool is_prime(T num) {
    bool result = true;
    if (num <= 1) {
        return 0;
    } else if (num == 2) {
        return 1;
    } else if ((num & 1) == 0) {
        return 0;
    }
    if (num >= 3) {
        for (T i = 3; (i * i) < (num); i = (i + 2)) {
            if ((num % i) == 0) {
                result = false;
                break;
            }
        }
    }
    return (result);
}

unsigned int factorial(unsigned int n) {
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}

int number_of_digits(int num) {
    int total_digits = 0;
    while (num > 0) {
        num = num / 10;
        ++total_digits;
    }
    return total_digits;
}

bool is_armstrong(int number) {
    if (number < 0) {
        return false;
    }
    int sum = 0;
    int temp = number;
    int total_digits = number_of_digits(number);
    while (temp > 0) {
        int rem = temp % 10;
        sum = sum + std::pow(rem, total_digits);
        temp = temp / 10;
    }
    return number == sum;
}

template <typename T>
double fast_power(T a, T b) {
    if (b < 0)
        return 1.0 / fast_power(a, -b);
    if (b == 0)
        return 1;
    T bottom = fast_power(a, b >> 1);
    double result;
    if ((b & 1) == 0)
        result = bottom * bottom;
    else
        result = bottom * bottom * a;
    return result;
}

int fibonacci(unsigned int n) {
    if (n <= 1)
        return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

lli rizimore(vector<lli> lines[], lli num, int colour) {
    vector<lli> l = lines[colour];
    lli size = l.size();
    for(lli i=0; i<size && num>0; i++){
        lli minimum = min(l[i], num);
        l[i] = l[i] - minimum;
        num -= minimum;
    }
    if(num>0) return 0;
    size = l.size();
    lli sum1=0, sum2=0, sum3=0, t[size+1];
    for (lli i=0; i<size; i++) sum1 += l[i];
    for (lli i=0; i<size; i++) {
        t[i] = l[i] * (sum1-l[i]);
        sum2 += t[i];
    }
    sum2 /= 2;
    for (lli i=0; i<size; i++)
        sum3 += l[i] * (sum2-t[i]);
    sum3 /= 3;
    return sum3;
}