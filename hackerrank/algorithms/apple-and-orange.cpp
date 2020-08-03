// Apple and Orange
// https://www.hackerrank.com/challenges/apple-and-orange/problem
void countApplesAndOranges(int s, int t, int a, int b, vector<int> apples, vector<int> oranges) {
    int left = 0, right = 0;
    for (auto num: apples) {
        if (a+num >= s && a+num <= t)
            left++;
    }
    for (auto num: oranges) {
        if (b+num >= s && b+num <= t)
            right++;
    }
    cout << left << endl;
    cout << right << endl;
}