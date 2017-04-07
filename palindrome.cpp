// palindrome
#include <iostream>
#include <string>
using namespace std;

bool checkPalindrome(string & s)
{
	bool flag = true;
	for(auto it = s.begin(); it != s.end(); ++it)
	{
		if(*it != *(s.end() - distance(s.begin(), it) -1))
		{
			flag = false;
			break;
		}
	}
	return flag;
}

int main() {
	string s1 = "abasdfacdcba", s2 = "ieiwow";
	cout << boolalpha << checkPalindrome(s1) << endl;
	cout << boolalpha << checkPalindrome(s2) << endl;
}

/* pretty good Java code
public class Solution {
private int lo, maxLen;

public String longestPalindrome(String s) {
	int len = s.length();
	if (len < 2)
		return s;
	
    for (int i = 0; i < len-1; i++) {
     	extendPalindrome(s, i, i);  //assume odd length, try to extend Palindrome as possible
     	extendPalindrome(s, i, i+1); //assume even length.
    }
    return s.substring(lo, lo + maxLen);
}

private void extendPalindrome(String s, int j, int k) {
	while (j >= 0 && k < s.length() && s.charAt(j) == s.charAt(k)) {
		j--;
		k++;
	}
	if (maxLen < k - j - 1) {
		lo = j + 1;
		maxLen = k - j - 1;
	}
}}
*/