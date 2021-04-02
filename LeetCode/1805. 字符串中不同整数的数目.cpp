/** 
1805. 字符串中不同整数的数目

给你一个字符串 word ，该字符串由数字和小写英文字母组成。

请你用空格替换每个不是数字的字符。例如，"a123bc34d8ef34" 将会变成 " 123  34 8  34" 。

注意，剩下的这些整数为（相邻彼此至少有一个空格隔开）："123"、"34"、"8" 和 "34" 。

返回对 word 完成替换后形成的 不同 整数的数目。

只有当两个整数的 不含前导零 的十进制表示不同， 才认为这两个整数也不同。
*/

#include<string>
#include<iostream>
#include<stdlib.h>
#include<set>
using namespace std;
class Solution {
public:
	int numDifferentIntegers(string word) {
		word += " ";
		string s = "";
		set<string> result;
		for (int i = 0; i < word.size(); i++) {
			if (word[i] < '0' || word[i] > '9') {
				if (!s.empty()) {
					while ('0' == s[0]) {
						s = s.substr(1, s.length() - 1);
					}
					result.insert(s);
					s.clear();
				}
			}
			else {
				s += word[i];
			}
		}
		return result.size();
	}
};
int main() {
	Solution so;
	cout << so.numDifferentIntegers("uu0717761265362523668772526716127260222200144937319826j717761265362523668772526716127260222200144937319826k717761265362523668772526716127260222200144937319826b7177612653625236687725267161272602222001449373198262hgb9utohfvfrxprqva3y5cdfdudf7zuh64mobfr6mhy17");
	system("pause");
}