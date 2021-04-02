﻿/**
给你一个 32 位的有符号整数 x ，返回将 x 中的数字部分反转后的结果。

如果反转后整数超过 32 位的有符号整数的范围 [−231,  231 − 1] ，就返回 0。

假设环境不允许存储 64 位整数（有符号或无符号）。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/reverse-integer
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/
#include<iostream>
using namespace std;
class Solution {
public:
	int reverse(int x) {
		long n = 0;
		while (x) {
			n = n * 10 + x % 10;
			x /= 10;
		}
		if (n < INT_MIN || INT_MAX < n)	return 0;
		return n;
	}
};
int main() {
	Solution so;
	cout << so.reverse(-1234567891);
	system("pause");
}
