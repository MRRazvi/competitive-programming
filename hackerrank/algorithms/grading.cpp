// Grading Students
// https://www.hackerrank.com/challenges/grading/problem
vector<int> gradingStudents(vector<int> grades) {
    vector<int> ans;
    for (int i=0; i<grades.size(); i++) {
        if (grades[i] < 38) {
            ans.push_back(grades[i]);
        } else {
            int count = 0;
            int num = grades[i];
            while (num%5 != 0) {
                count++;
                num++;
            }
            if (count < 3) {
                ans.push_back(num);
            } else {
                ans.push_back(grades[i]);
            }
        }
    }
    return ans;
}