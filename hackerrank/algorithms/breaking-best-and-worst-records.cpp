// Breaking the Records
// https://www.hackerrank.com/challenges/breaking-best-and-worst-records/problem
vector<int> breakingRecords(vector<int> scores) {
    int max = scores[0], min = scores[0];
    int maxCount = 0, minCount = 0;
    for (int i=1; i<scores.size(); i++) {
        if (scores[i] > max) {
            max = scores[i];
            maxCount++;
        }

        if (scores[i] < min) {
            min = scores[i];
            minCount++;
        }
    }
    vector<int> v;
    v.push_back(maxCount);
    v.push_back(minCount);
    return v;
}