/*
����һ������ x ����� x ��һ���������������� true �����򣬷��� false ��

��������ָ���򣨴������ң��͵��򣨴������󣩶�����һ�������������磬121 �ǻ��ģ��� 123 ���ǡ�

��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/palindrome-number
����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע��������
*/

//����һ���ַ�����
//#include<iostream>
//#include<string>
//using namespace std;
//class Solution {
//public:
//	bool isPalindrome(int x) {
//		string s = to_string(x);
//		for (int i = 0, j = s.length() - 1; i < j; i++, j--) {
//			if (s[i] != s[j])	return false;
//		}
//		return true;
//	}
//};
//void main() {
//	Solution so;
//	cout << so.isPalindrome(123454321);
//	system("pause");
//}

//�����������ַ�ת��
#include<iostream>
using namespace std;
class Solution {
public:
	bool isPalindrome(int x) {
		long reverse = 0;	//ע�ⷴת����ܴ���INT_MAX
		int origin = x;
		while (origin > 0) {
			reverse = reverse * 10 + origin % 10;
			origin /= 10;
		}
		return 0 == reverse - x;
	}
};
void main() {
	Solution so;
	cout << so.isPalindrome(110);
	system("pause");
}
