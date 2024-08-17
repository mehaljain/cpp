#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string longestPalindrome(string s) {
        string ans;
        string output;
        solve(s, output, 0, ans);
        return ans;
    }

private:
    void solve( string &s, string &output, int index, string &ans) {
        if (index >= s.size()) {
            if (isPalindrome(output) && output.size() > ans.size()) {
                ans = output;
            }
            return;
        }

        output.push_back(s[index]);
        solve(s, output, index + 1, ans);
        output.pop_back(); 

        solve(s, output, index + 1, ans);
    }

    bool isPalindrome( string &str) {
        int left = 0;
        int right = str.size() - 1;
        
        while (left < right) {
            if (str[left] != str[right]) {
                return false;
            }
            ++left;
            --right;
        }
        
        return true;
    }
};

int main() {
    Solution solution;
    string s1 = "babad";
    cout << "Longest Palindromic Substring in \"" << s1 << "\": " << solution.longestPalindrome(s1) << endl;

    string s2 = "cbbd";
    cout << "Longest Palindromic Substring in \"" << s2 << "\": " << solution.longestPalindrome(s2) << endl;

    return 0;
}
