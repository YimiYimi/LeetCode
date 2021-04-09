/*
����һ�������� n �����������еĵ� n �

��������С���һ���������У������� 1 ��ʼ�������е�ÿһ��Ƕ�ǰһ���������

����Խ����������ɵݹ鹫ʽ����������ַ������У�

countAndSay(1) = "1"
countAndSay(n) �Ƕ� countAndSay(n-1) ��������Ȼ��ת������һ�������ַ�����
ǰ�������£�

1.     1
2.     11
3.     21
4.     1211
5.     111221
��һ�������� 1
����ǰһ�������� 1 �� �� һ �� 1 �������� "11"
����ǰһ�������� 11 �� �� �� �� 1 �� ������ "21"
����ǰһ�������� 21 �� �� һ �� 2 + һ �� 1 �� ������ "1211"
����ǰһ�������� 1211 �� �� һ �� 1 + һ �� 2 + �� �� 1 �� ������ "111221"
Ҫ ���� һ�������ַ���������Ҫ���ַ����ָ�Ϊ ��С �������飬ÿ���鶼����������� ��ͬ�ַ� ��ɡ�Ȼ�����ÿ���飬�������ַ���������Ȼ�������ַ����γ�һ�������顣Ҫ������ת��Ϊ�����ַ������Ƚ�ÿ���е��ַ������������滻���ٽ���������������������

��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/count-and-say
����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע��������
*/

#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
	string countAndSay(int n) {
		string r = "1";
		if (1 == n)	return r;
		for (int i = 1; i < n; i++) {
			string result = "";
			for (int j = 0; j < r.length();) {
				int num = 0;
				char now = r[j];
				while (j < r.length() && now == r[j]) {
					num++;
					j++;
				}
				result = result + to_string(num) + now;
			}
			r = result;
		}
		return r;
	}
};
int main() {
	Solution so;
	cout << so.countAndSay(30);
	system("pause");
}