/*Given a string s, find the longest palindromic substring in s. You may assume that the maximum length of s is 1000.

Example:

Input: "babad"

Output: "bab"

Note: "aba" is also a valid answer.
Example:

Input: "cbbd"

Output: "bb"
*/

#include <iostream>
#include <string> 
using namespace std;

int main() {
	string s = "abcdefgh";
	cout << "Normal order: " << endl;
	for(auto it = s.begin(); it != s.end(); ++it)
	{
		cout << * it << " | ";
	} cout << endl;

	cout << "Reversal order: " << endl;
	for(auto it = s.rbegin(); it != s.rend(); ++it)
	{
		cout << * it << " | ";
	} cout << endl;
	
	return 0;
}


class Solution {
public:
    std::string longestPalindrome(std::string s) {
        if (s.size() < 2)
            return s;
        int len = s.size(), max_left = 0, max_len = 1, left, right;
        for (int start = 0; start < len && len - start > max_len / 2;) {
            left = right = start;
            while (right < len - 1 && s[right + 1] == s[right])
                ++right;
            start = right + 1;
            while (right < len - 1 && left > 0 && s[right + 1] == s[left - 1]) {
                ++right;
                --left;
            }
            if (max_len < right - left + 1) {
                max_left = left;
                max_len = right - left + 1;
            }
        }
        return s.substr(max_left, max_len);
    }
};


//==================================
// pretty good Java code
public class Solution 
{
    private int lo, maxLen;

    public String longestPalindrome(String s) 
    {
        int len = s.length();
        if (len < 2)
            return s;
        
        for (int i = 0; i < len-1; i++) 
        {
            extendPalindrome(s, i, i);  //assume odd length, try to extend Palindrome as possible
            extendPalindrome(s, i, i+1); //assume even length.
        }
        return s.substring(lo, lo + maxLen);
    }

    private void extendPalindrome(String s, int j, int k) 
    {
        while (j >= 0 && k < s.length() && s.charAt(j) == s.charAt(k)) 
        {
            j--;
            k++;
        }

        if (maxLen < k - j - 1) {
            lo = j + 1;
            maxLen = k - j - 1;
        }
    }
}


s1 = "abcba";
//==================================



public String longestPalindrome(String s) {
    String sub = "";
    if(s.length()==1||s==null)
    {
        return s;
    }
    if(s.length()==2){
        if(s.charAt(0)==s.charAt(1))
        {
            return s;
        }

        else 
        {
            return s.substring(1);
        }
    }
    for(int i=2;i<s.length();i++)
    {          
        if(s.charAt(i)==s.charAt(i-2))
        {
            int j, k;
            for(j=i-2, k=i;j>=0&&k<s.length();j--, k++)
            {
                if(s.charAt(j)!=s.charAt(k))
                {
                    break;
                }
            }
            
            if(sub.length()<s.substring(j+1, k-1).length()){
                if(k-1==s.length()-1)
                {
                    sub=s.substring(j+1);
                }
                else 
                {
                    sub=s.substring(j+1, k-1);
                }
                    
            }               
        }               
        
    }
    for(int i=1;i<s.length();i++){
        if(s.charAt(i)==s.charAt(i-1)){
            int j, k;
            for(j=i-1, k=i;j>=0&&k<s.length();j--, k++){
                if(s.charAt(j)!=s.charAt(k)){
                    break;
                }
            }
            if(sub.length()<s.substring(j+1, k-1).length()){
                if(k-1==s.length()-1){
                    sub=s.substring(j+1);
                }else {
                    sub=s.substring(j+1, k-1);
                }
            }
        }
        
    }
    return sub;
}