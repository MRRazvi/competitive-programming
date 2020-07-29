#include <iostream>
#include <vector>
#include <set>
#include <map>
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

using namespace std;
#define endl "\n";

#define FOR(i, a, b) for(int i = a; i < b; i ++)
#define FORS(i, a, b, c) for(int i = a; i < b; i += c)
#define FORN(i, a, b) for(int i = a; i <= b; i ++)
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

template <typename T> bool is_prime(T num);
unsigned int factorial(unsigned int n);
bool is_armstrong(int number);
template <typename T> double fast_power(T a, T b);
int fibonacci(unsigned int n);

int dp[100005][3][6];
int n, m, k;
int a[100005];
int rizimore(int temp, int s , int b);

/**
 * Mubashir Rasool Razvi <rizimore@gmail.com>
 *
 * @author rizimore
 */
void solution() {
    int t;
    cin >> t;
    while (t--) {
        cin >> n >> m >> k;
        for(int i=0; i<n; i++)
            cin >> a[i];
        for(int i=0; i<n; i++)
            for(int j=0; j<3; j++)
                for(int k=0; k<6; k++)
                    dp[i][j][k] = -1;
        printf("%d\n", rizimore(0, 0, 0));
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solution();
    return 0;
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

int rizimore(int temp, int s , int b) {
    if (b>k) return INT_MIN;
    if (temp+2*b == m+1) return 0;
    if (temp+2*b > m+1) return INT_MIN;
    int &res  = dp[temp][s][b];
    if (res != -1) return res;
    res = 0;
    if (temp-1 >= 0 && temp-2 >= 0) res = a[temp]+max({rizimore(temp-1, 1, b+1), rizimore(temp-2, 2, b+2), rizimore(temp+1, 0, b)});
    else if (temp - 1 >= 0) res = a[temp]+max({rizimore(temp-1, 1, b+1), rizimore(temp+1, 0, b)});
    else res = a[temp]+rizimore(temp+1, 0, b);
    return res;
}