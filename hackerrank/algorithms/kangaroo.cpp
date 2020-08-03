// Kangaroo
// https://www.hackerrank.com/challenges/kangaroo/problem
string kangaroo(int x1, int v1, int x2, int v2) {
    int count = 10000;
    while (true) {
        if (x1 == x2) {
            return "YES";
        }

        x1 += v1;
        x2 += v2;

        count--;
        if (count == 0)
            break;
    }
    return "NO";
}