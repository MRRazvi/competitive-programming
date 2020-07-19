#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    if (s.length() < 26) {
        cout << "NO" << endl;
        return 0;
    }
    set<int> st;
    for (int i=65; i<91; i++)
        st.insert(i);

    transform(s.begin(), s.end(), s.begin(), ::toupper);
    for (int i=0; i<n; i++) {
        st.erase(int(s[i]));
    }

    if (st.empty())
        cout << "YES";
    else
        cout << "NO";
    cout << endl;
    return 0;
}