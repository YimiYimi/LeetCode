/*
给定两个字符串 text1 和 text2，返回这两个字符串的最长 公共子序列 的长度。如果不存在 公共子序列 ，返回 0 。

一个字符串的 子序列 是指这样一个新的字符串：它是由原字符串在不改变字符的相对顺序的情况下删除某些字符（也可以不删除任何字符）后组成的新字符串。

例如，"ace" 是 "abcde" 的子序列，但 "aec" 不是 "abcde" 的子序列。
两个字符串的 公共子序列 是这两个字符串所共同拥有的子序列。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/longest-common-subsequence
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/
#include<algorithm>
#include<iostream>
#include<string>
#include<vector>
using namespace std;
class Solution {
public:
	int longestCommonSubsequence(string text1, string text2) {
		vector<vector<int> > D(text1.length() + 1, vector<int>(text2.length() + 1, 0));
		for (int i = 1; i < text1.length() + 1; i++) {
			for (int j = 1; j < text2.length() + 1; j++) {
				D[i][j] = (text1.at(i - 1) == text2.at(j - 1))
					? D[i - 1][j - 1] + 1
					: max(D[i - 1][j], D[i][j - 1]);
			}
		}
		return D[text1.length()][text2.length()];
	}
};
void main() {
	Solution so;
	cout << so.longestCommonSubsequence("abcde", "ace");
	system("pause");
}