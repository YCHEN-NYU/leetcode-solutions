#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring (string s) {
        vector<int> dict(256, -1);
        int maxLen = 0, start = -1;
        for (int i = 0; i < s.length(); ++i) {
            if(dict[s[i]] > start)
                start = dict[s[i]];
            dict[s[i]] = i;
            maxLen = (maxLen > (i - start))? maxLen : (i - start);
        }
        return maxLen;
    }
};

int main () {
    vector<string> str  {"", "a", "aa", "aba", "adeed3", "1232233444567"};
    // string str = "";
    Solution test;
    for (int i = 0; i < str.size(); ++i) {
        cout << test.lengthOfLongestSubstring(str[i]) << endl;
    }
    return 0;

}