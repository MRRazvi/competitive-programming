// Mini-Max Sum
// https://www.hackerrank.com/challenges/mini-max-sum/problem
void miniMaxSum(vector<int> arr) {
    vector<long long int> minmax;
    for (int i=0; i<arr.size(); i++) {
        long long int sum = 0;
        for (int j=0; j<arr.size(); j++) {
            if (i != j) {
                sum += arr[j];
            }
        }
        minmax.push_back(sum);
    }
    sort(minmax.begin(), minmax.end());
    cout << minmax[0] << " " << minmax[minmax.size()-1] << endl;
}