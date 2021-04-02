/** 
1805. �ַ����в�ͬ��������Ŀ

����һ���ַ��� word �����ַ��������ֺ�СдӢ����ĸ��ɡ�

�����ÿո��滻ÿ���������ֵ��ַ������磬"a123bc34d8ef34" ������ " 123  34 8  34" ��

ע�⣬ʣ�µ���Щ����Ϊ�����ڱ˴�������һ���ո��������"123"��"34"��"8" �� "34" ��

���ض� word ����滻���γɵ� ��ͬ ��������Ŀ��

ֻ�е����������� ����ǰ���� ��ʮ���Ʊ�ʾ��ͬ�� ����Ϊ����������Ҳ��ͬ��
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