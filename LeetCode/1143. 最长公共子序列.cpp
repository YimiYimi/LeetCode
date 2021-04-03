/*
给定两个字符串 text1 和 text2，返回这两个字符串的最长 公共子序列 的长度。如果不存在 公共子序列 ，返回 0 。

一个字符串的 子序列 是指这样一个新的字符串：它是由原字符串在不改变字符的相对顺序的情况下删除某些字符（也可以不删除任何字符）后组成的新字符串。

例如，"ace" 是 "abcde" 的子序列，但 "aec" 不是 "abcde" 的子序列。
两个字符串的 公共子序列 是这两个字符串所共同拥有的子序列。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/longest-common-subsequence
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/

#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
	int longestCommonSubsequence(string text1, string text2) {
		int n = 0, n0;
		for (int k = 0, q = 0; k < text1.length() && q < text2.length(); k++) {
			n0 = 0;
			for (int i = k, j = q; i < text1.length() && j < text2.length();) {
				if (text1.at(i) == text2.at(j)) {
					n0++;
					k = ++i;
					q = ++j;
				}
				else if (++j == text2.length())	i++;
			}
			n = n0 > n ? n0 : n;
		}
		return n;
	}
};
void main() {
	Solution so;
	cout << so.longestCommonSubsequence("abcde", "acefb");
	system("pause");
}