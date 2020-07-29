#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cctype>

using namespace std;

// Complete the makeAnagram function below.
int makeAnagram(string a, string b) {
    int result = 0;
    for (char i = 'a'; i <= 'z'; i++) {
        int first_count = count(a.begin(), a.end(), i);
        int second_count = count(b.begin(), b.end(), i);
        if (first_count > second_count)
            result += first_count - second_count;
        else if (second_count > first_count)
            result += second_count - first_count;
    }
    return result;
}

int main()
{
    string a;
    getline(cin, a);

    string b;
    getline(cin, b);

    int res = makeAnagram(a, b);

    cout << res << endl;

    return 0;
}
