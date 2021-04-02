/*
给你一个整数 x ，如果 x 是一个回文整数，返回 true ；否则，返回 false 。

回文数是指正序（从左向右）和倒序（从右向左）读都是一样的整数。例如，121 是回文，而 123 不是。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/palindrome-number
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/

//方法一：字符串法
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

//方法二：数字反转法
#include<iostream>
using namespace std;
class Solution {
public:
	bool isPalindrome(int x) {
		long reverse = 0;	//注意反转后可能大于INT_MAX
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
