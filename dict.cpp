// 
// dict(256, -1)
#include <iostream>
#include <vector>
#include <map>
using namespace std;


class Solution {
public:
    int lengthOfLongestSubstring(string s) 
    {
        vector<int> dict(256, -1);
        int maxLen = 0, start = -1;
        for(int i = 0; i != s.size(); ++i)
        {
            if(dict[s[i]] > start)
                start = dict[s[i]]; // here's the tricky line
            dict[s[i]] = i;
            maxLen = maxLen > (i - start) ? maxLen : (i - start);
        }
        return maxLen;
    }
};

int main() {
	string s = "abcabcbb";
	Solution test;
	cout << "maxLen = " << test.lengthOfLongestSubstring(s) << endl;

	return 0;
}


// int lengthOfLongestSubstring(string s) 
// {
//   vector<int> dict(256, -1);
//   int maxLen = 0, start = -1;

//   for (int i = 0; i != s.length(); i++) 
//   {
//     if (dict[s[i]] > start)
//         start = dict[s[i]];
//     dict[s[i]] = i;
//     maxLen = max(maxLen, i - start);
//   }
//   return maxLen;
// }


// class Solution {
// public:
//     int lengthOfLongestSubstring(string s) {
        
//         map<char, int> charMap;
//         int start = -1;
//         int maxLen = 0;
        
//         for (int i = 0; i < s.size(); i++) {
//             if (charMap.count(s[i]) != 0) {
//                 start = max(start, charMap[s[i]]);
//             }
//             charMap[s[i]] = i;
//             maxLen = max(maxLen, i-start);
//         }
        
//         return maxLen;
//     }
// };