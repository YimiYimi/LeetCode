/*
��дһ�������������ַ��������е������ǰ׺��

��������ڹ���ǰ׺�����ؿ��ַ��� ""��
*/
#include<set>
#include<iostream>
#include<string>
#include<vector>
using namespace std;
class Solution {
public:
	string longestCommonPrefix(vector<string>& strs) {
		string r;
		char c;
		if (strs.empty())	return r;
		for (int j = 0; j < strs[0].length(); j++) {
			c = strs[0].at(j);
			for (int i = 1; i < strs.size(); i++) {
				if (j >= strs[i].length() || strs[0].at(j) != strs[i].at(j)) {
					return r;
				}
			}
			r += c;
		}
		return r;
	}
};
void main() {
	Solution so;
	vector<string> strs = { "ab", "a" };
	cout << so.longestCommonPrefix(strs);

	set<string> s = { "ab", "a" };
	for (set<string>::iterator i = s.begin(); i != s.end(); i++)	cout << i->back << endl;
	system("pause");
}