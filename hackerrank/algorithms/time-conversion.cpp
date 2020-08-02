// Time Conversion
// https://www.hackerrank.com/challenges/time-conversion/problem
string timeConversion(string s) {
    string check = s.substr(s.size()-2, s.size());
    s = s.substr(0, s.size()-2);
    int step = 0;
    string answer;
    for (int i=0; i<s.size(); i++) {
        if (step == 0) {
            if (check == "PM") {
                int num = stoi(s.substr(0, 2));
                if (s.substr(0, 2) == "12")
                    answer += to_string(num);
                else
                    answer += to_string(num+12);
            } else {
                if (s.substr(0, 2) == "12")
                    answer += "00";
                else
                    answer += s.substr(0, 2);
            }
            i += 1;
            step++;
        } else {
            answer += s[i];
        }
    }
    return answer;
}